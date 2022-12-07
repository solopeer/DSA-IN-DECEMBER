<<<<<<< HEAD
class Solution {
public:
    string decodeString(string s) {
        if(s.size() == 0) return s;
        stack<int> st;

        for(int i=0;i<s.size();i++){
            if(s[i]!=']') {st.push(s[i]);continue;}
            string str;
            while(!st.empty()&&st.top()!='['){
                char ch = st.top();
                str.push_back(ch);
                st.pop();
            }
            st.pop();
            int num = 0;
            int c = 0;//number of digits
            while(!st.empty()&&st.top()>='0'&&st.top()<='9'){
                num = num + (st.top()-'0')*pow(10,c);
                c++;
                st.pop();
            }
            reverse(str.begin(),str.end());
            string str1;
            for(int j=0;j<num;j++){
                str1 = str1 + str;
            }

            for(int j=0;j<str1.size();j++){
                st.push(str1[j]);
            }
        }
        string result;
        while(!st.empty()){
            result.push_back(st.top());
            st.pop();
        }
        reverse(result.begin(),result.end());
        return result;
    }
=======
class Solution {
public:
    string decodeString(string s) {
        if(s.size() == 0) return s;
        stack<int> st;

        for(int i=0;i<s.size();i++){
            if(s[i]!=']') {st.push(s[i]);continue;}
            string str;
            while(!st.empty()&&st.top()!='['){
                char ch = st.top();
                str.push_back(ch);
                st.pop();
            }
            st.pop();
            int num = 0;
            int c = 0;//number of digits
            while(!st.empty()&&st.top()>='0'&&st.top()<='9'){
                num = num + (st.top()-'0')*pow(10,c);
                c++;
                st.pop();
            }
            reverse(str.begin(),str.end());
            string str1;
            for(int j=0;j<num;j++){
                str1 = str1 + str;
            }

            for(int j=0;j<str1.size();j++){
                st.push(str1[j]);
            }
        }
        string result;
        while(!st.empty()){
            result.push_back(st.top());
            st.pop();
        }
        reverse(result.begin(),result.end());
        return result;
    }
>>>>>>> c054e307eb20f7e40fb1f50c51b52e1b52906c35
};