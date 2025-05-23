class Solution {
public:
    int countDigits(int num) {
        if(num<=0)return false;
        int count=0,temp=num;
        while(num){
            int rem=num%10;
            if(temp%rem==0&&rem!=0){
                count++;
            }
            num/=10;
        }
        return count;
    }
};