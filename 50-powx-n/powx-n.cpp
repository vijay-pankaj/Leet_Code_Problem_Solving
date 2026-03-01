
class Solution {
public:
    double myPow(double x, int n) {
        double result=1.0;
        long long power=n;
        if(n<0){
            x=1/x;
            power=-power;
        }
         while (power > 0) {
        if (power % 2 == 1) {
            result *= x;
        }
        x *= x;
        power /= 2;
    }
        return result;

    }
};


// class Solution {
// public:
//     double myPow(double x, int n) {
//         // return pow(x,n);
//        double power=1;
//     if(n<0){
//         while(n){
//             power*=x;
//             n++;
//         }
//         return 1/power;
//     }
//     while(n){
//         power*=x;
//         n--;
//     }
//     return power;


//     }
// };