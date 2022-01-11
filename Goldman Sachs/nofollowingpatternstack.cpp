class Solution{   
public:
    string printMinNumberForPattern(string S){
        stack<int>s;
        string ans;
        int num =1;
        for(auto it:S){
            if(it=='D'){
                s.push(num);
                num++;
            }
            else{
                s.push(num);
                num++;
                while(!s.empty()){
                    ans+=to_string(s.top());
                    s.pop();
                }
            }
        }
        s.push(num);
         while(!s.empty()){
                    ans+=to_string(s.top());
                    s.pop();
    }
    return ans;
    }
};
