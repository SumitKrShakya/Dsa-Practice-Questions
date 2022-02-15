// class Solution {
// public:
//     int addDigits(int num) {
//         int sum;
//         while(num/10!=0){
//             sum=0;
//             while(num!=0){
//                 sum+=num%10;
//                 num/=10;
//             }
//             num=sum;   
//         }
//         return num;
//     }
// };
class Solution {
public:
    int addDigits(int num) {
        if (num ==0){
            return 0;
        }else if(num%9==0){
            return 9;
        }else{
            return num%9;
        }
    }
};