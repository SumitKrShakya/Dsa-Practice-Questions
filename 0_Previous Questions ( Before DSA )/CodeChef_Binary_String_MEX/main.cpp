#include <bits/stdc++.h>

using namespace std;
int flag;
string decimal_to_binary(int num){
    string st;
    int r;
    while(num!=0){
        r=num%2;
        num/=2;
        if(r==0){
            st='0'+st;
        }else if(r==1){
            st='1'+st;
        }
    }return st;
}

//int binary_to_decimal(string st){
//    int d=0,b=0,s=1;
//   for(int i=st.length()-1;i>=0;i--){
//        b=st[i]=='0'?0:1;
//        d+=s*b;
//        s*=2;
//    }return d;
//}


int binary_to_decimal(string n)
{
    string num = n;
    int dec_value = 0;

    // Initializing base value to 1, i.e 2^0
    int base = 1;

    int len = num.length();
    for (int i = len - 1; i >= 0; i--) {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }

    return dec_value;
}


void subs(string input, string output,int arr[]){
        if(input.length()==0){
            //int num;
            //bitset<32> b(num);
            int num=binary_to_decimal(output);

            if(flag==1){
                arr[num]=num;
            }flag=1;
            return;
        }
        subs(input.substr(1), output,arr);
        subs(input.substr(1), output+ input[0],arr);
}
int main()
{
    int t;
    cin>>t;
    while(t!=0){
        flag=0;
        string s;
        cin>>s;
        int n=binary_to_decimal(s),i=0;
        int arr[n+1];
        std::fill_n(arr, n+1, -1);
        //int arr[n+1]=-1;
        subs(s,"",arr);
        if(arr[0]==-1){
            cout<<"0";
        }
        else{
            for(i=0;i<n+1;i++){
                if(arr[i]==-1){
                    cout<<decimal_to_binary(i);
                    break;
                }
            }
        }
        t--;
    }

    return 0;
}
