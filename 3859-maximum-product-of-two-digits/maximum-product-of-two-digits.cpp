class Solution {
public:
    int maxProduct(int n) {
        int maxProd=0;
        string str=to_string(n);
        for(int i=0; i<str.size(); i++){
            for(int j=i+1;j<=str.size();j++){
                int val1=str[i]-'0';
                int val2=str[j]-'0';
                int prod=val1*val2;
                if(prod>maxProd)maxProd=prod;
            }
        }
        return maxProd;
    }
};