#include <bits/stdc++.h>

using namespace std;

int calculator(string s) {
    int n = s.length();
    if (n == 1) {
        if(s[0]=='0'){
            return 1;
        }
        return 0;
    }
    else if (s[0] == '0' || s[n - 1] == '0') {
        (s[0] == '0' && s[n - 1] == '0') ? n++ : n;
        return (((n - 1) * n) / 2);
    }
    n-=2;
    int incDueToOdd = 0;
    if(n%2!=0){
        n--;
        incDueToOdd = (n/2)+1;
    }
    n/=2;
    return (n * (n+1)) + incDueToOdd;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,case_=0;
    cin >> t;
    while (case_!=t) {
        case_++;
        int n, global = 0,checker = 0;
        string s;
        cin >> n >> s;
        
        string str;
        for (int i = 0; i < n; i++) {
            str = str + s[i];
            if (s[i] == '1') {
                if(checker!=0){
                    str = '1'+str;
                }
                global = global + calculator(str);
                checker = 1;
                str.clear();
            }
        }
        if (str.length() != 0) {
            global = global + calculator(str);
            str.clear();
        }
        cout <<"Case #"<<case_<<": "<< global << endl;
    }
    return 0;
}