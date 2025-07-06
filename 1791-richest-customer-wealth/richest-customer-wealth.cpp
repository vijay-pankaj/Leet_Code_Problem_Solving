class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxMoney=0;
        int i=0;
        while(i<accounts.size()){
            int currentmoney=0;
            int j=0;
            while(j<accounts[i].size()){
                currentmoney += accounts[i][j];
                if(currentmoney>maxMoney)maxMoney=currentmoney;
                j++;
            }
            i++;
        }
        return maxMoney;
    }
};