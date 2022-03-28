#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    for(long long k = 0; k < t; k++){
        cout<<"Case #"<<k+1<<": ";
        string s;
        cin>>s;
        long long sum=0;
        for(auto ele : s){
            sum += (int)ele - 48;
        }

        long long temp=0;
        for(long long i = 0; i <= 9; i++){
            if(( sum + i) % 9 == 0){
                temp=i;
                break;
            }
        }

        int flag=0;
        string ch = to_string(temp);
        char ch1 = ch[0];
        string f="",l="";
        int ttt=0;
        for(long long i = 0; i <= s.length(); i++){
            if((int)s[i] - 48 > temp && flag==0){
                if(ch1=='0'&& ttt==0){

                }else{
                    s.insert(i,ch);
                    flag=1;
                }
                
            }
            ttt++;
        }
        if(flag==0){
            s.push_back(ch1);
        }
        
        cout<<s<<endl;
    }
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define TC(t) while (t--)
// #define loop(x, n) for(int x = 0; x < n; ++ x)
// #define reverseloop(x, n) for(int x = n-1; x >= 0; x--)

// int main(){
//     ll t;
//     cin>>t;
//     loop(x,t){
//         ll n ;
//         cin>>n;
//         ll find =0;
//         ll temp_sum = 0;
//         string ans ="";
//         string temp = to_string(n);
//         for(ll i =0;i<temp.length();i++){
//             temp_sum+=temp[i]-'0';
//         }
//         find = temp_sum%9;
//         if(find ==0) find =9;
//         find = 9-find;
//         ll temp2 = (temp[0]-'0');
//         int flag=0;
//         ll prev_l = temp.length();
//         for(ll i =0;i<temp.length();i++){
//             temp2 = temp[i]-'0';
//             if(temp2>find and i==0 and find!=0){
//                 ans = to_string(find)+temp;
//                 flag=1;
//                 break;
//             }
//             if(temp2>find and i!=0){
//                 temp.insert(i,to_string(find));
//                 ans = temp;
//                 flag=1;
//                 break;
//             }
//         }
//         if(flag!=1){
//             ans=temp+to_string(find);
//         }

//         cout<<"Case #"<<x+1<<": "<<ans<<endl;
        
//     }
//     return 0;
// }