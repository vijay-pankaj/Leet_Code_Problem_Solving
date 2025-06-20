class Solution {
public:
    bool isPerfectSquare(int num) {
    //     for(long i=1;i<=num; i++){
    //         if(i*i==num){
    //         return true;
    //     }
    // }
    //     return false;
   long i=1;
    while(i<=num){
        if(i*i==num)return true;
     i++;   
    }
    return false;
    }
};