class Solution {
public:
    int compareVersion(string version1, string version2) {
        int i = 0, j = 0;
        int n1 = version1.size(), n2 = version2.size();

        while (i < n1 || j < n2) {
            long num1 = 0, num2 = 0;

            while (i < n1 && version1[i] != '.') {
                num1 = num1 * 10 + (version1[i] - '0');
                i++;
            }
            while (j < n2 && version2[j] != '.') {
                num2 = num2 * 10 + (version2[j] - '0');
                j++;
            }

            if (num1 < num2)
                return -1;
            if (num1 > num2)
                return 1;

            i++;
            j++;
        }
        return 0;
    }
};

// class Solution {
// public:
//    int valueafterPoint(string v){
//     int i=0;
//     string str2="";
//      while(v[i]!='.')i++;;
//      while(i<v.size()){
//         str2+=v[i];
//         i++;
//      }
//      return stoi(str2);
//     }
//     bool isVersionValid(string v){
//         int i=0;
//         while(v[i]!='.')i++;
//         while(i<v.size()){
//             if(v[i]!=0)return true;
//             i++;
//         }
//         return false;
//     }
//     int compareVersion(string version1, string version2) {
//         int val1=0, val2=0;
//         //for version1;
//         if(isVersionValid(version1)){
//            val1= valueafterPoint(version1);
//         }
//         if(isVersionValid(version2)){
//             val2=valueafterPoint(version2);
//         }
//         if(val1<val2)return -1;
//         else if(val1>val2)return 1;
//         else return 0;

//     }
// };