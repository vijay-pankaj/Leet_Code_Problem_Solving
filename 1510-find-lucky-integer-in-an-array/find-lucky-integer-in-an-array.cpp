class Solution {
public:
    // int countEle(vector<int>&arr,int n){
    //     int count=0;
    //     for(int i=0; i<arr.size(); i++){
    //         if(arr[i]==n)count++;
    //     }
    //     return count;
    // }
    int findLucky(vector<int>& arr) {
        vector<int>freq(501,0);
           for (int num : arr) {
            freq[num]++;
        }
        for(int i=500; i>=1; i--){
            if(freq[i]==i)return i;
        }
        return -1;
        // int maxLucky=-1;
        // for(int i=0; i<arr.size(); i++){
        //     if(countEle(arr,arr[i])==arr[i]) maxLucky = max(maxLucky, arr[i]);
        // }
        // return maxLucky ;
    }
};

