class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(auto &k:tokens){



            if(k=="+"){
            
                int f=(int)st.top();
                st.pop();
                int s=(int)st.top();
                st.pop();
                st.push(s+f);
             
            }

            else if(k=="-"){
                   int f=(int)st.top();
                st.pop();
                int s=(int)st.top();
                st.pop();
                st.push(s-f);
             
            }

            else if(k=="/"){
                int f=(int)st.top();
                st.pop();
                int s=(int)st.top();
                st.pop();
                st.push(s/f);

            }

            else if(k=="*"){
                  int f=(int)st.top();
                  st.pop();
                int s=(int)st.top();
                st.pop();
                st.push(s*f);
            }

            else{

                int qw=stoi(k);
                st.push(qw);
            }
        }


        return st.top();
    }
};