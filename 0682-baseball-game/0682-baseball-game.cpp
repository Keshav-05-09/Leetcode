class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int sum=0;
        for(string i:operations){
            if(i=="C"){
                st.pop();
            }
             else if(i=="D"){
                
                st.push(2*st.top());
            }
             else if(i=="+"){
                int n = st.top();
                st.pop();
                int m = st.top();
                st.pop();
                st.push(m);
                st.push(n);
                st.push(m+n);
            }
            else{
                st.push(stoi(i));
            }
        }
        while(st.size()>0){
            sum+=st.top();
            st.pop();
        }
        return sum;
    }
};