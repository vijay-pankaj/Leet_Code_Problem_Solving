class Solution {
public:
    string countAndSay(int n) {
        if(n==1)return "1";
        string result="1";
        for(int i=2; i<=n; i++){
            string currstr="";
            int count=1;
            for(int j=1; j<result.size();j++){
                if(result[j]==result[j-1]){
                    count++;
                }
                else{
                    currstr+=to_string(count)+result[j-1];
                    count=1;
                } 
            }
              currstr += to_string(count) + result[result.size()-1];
            result = currstr;
        }
        return result;
    }
};
