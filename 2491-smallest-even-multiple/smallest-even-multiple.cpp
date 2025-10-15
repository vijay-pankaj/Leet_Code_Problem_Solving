class Solution {
public:
    int smallestEvenMultiple(int n) {
         int smallesmul=n % 2 == 0? n:n*2;
         return smallesmul;
       
    }
};
