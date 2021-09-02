#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll maxi=0;
ll counti=0,p=0;
void subs1(string input, string output,list<string>& l1){
    if(input.length()==0){
        l1.push_back(output);
        return;
    }
    subs1(input.substr(1), output,l1);
    subs1(input.substr(1), output+ input[0],l1);
}
 void solve(string s1,string s2){
     list<string> l1;
     list<string>l2;
     subs1(s1,"",l1);
     for(int i=0;i<l1.size();i++){
         ll k=0,c=0;
         list<std::string>::iterator it = l1.begin();
         advance(it, i);
         for(int j=0;j<s2.length();j++){
             auto st=(*it);
             if(st[k]==s2[j]){
                 k++;
                 c++;
             }
         }
         c>maxi?maxi=c:maxi;
     }
     cout<<maxi<<endl;
 }
 bool isSubSequence(char str1[], char str2[], int m, int n)
{
    int j = 0; // For index of str1 (or subsequence

    // Traverse str2 and str1, and
    // compare current character
    // of str2 with first unmatched char
    // of str1, if matched
    // then move ahead in str1
    for (int i = 0; i < n && j < m; i++)
        if (str1[j] == str2[i])
            j++;

    // If all characters of str1 were found in str2
    return (j == m);
}
int main(){
    string s1;
    cin>>s1;
    string s2;
    cin>>s2;
    solve(s1,s2);
    return 0;
}
