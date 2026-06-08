class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size() - 1;

        int area = 0;

        while (i < j) {
            int width = j - i;
            int currArea = min(height[i], height[j]) * width;

            area = max(area, currArea);

            if (height[i] < height[j]) {
                i++;
            } else {
                j--;
            }
        }

        return area;
    }
};