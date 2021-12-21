#include <bits/stdc++.h>

using namespace std;

// void printSubsequence(string input, string output)
// {
//     if (input.empty()) {
//         cout << output << endl;
//         return;
//     }

//     printSubsequence(input.substr(1), output);
//     printSubsequence(input.substr(1), output + input[0]);
// }

void printSubsequence(char *in, char *out, int i, int j)
{
    if (in[i] == '\0')
    {
        out[j] = '\0';
        cout << out << endl;
        return;
    }
    out[j] = in[i];
    printSubsequence(in, out, i + 1, j + 1);
    // cout<<1<<endl;
    printSubsequence(in, out, i + 1, j);
    // cout<<2<<endl;

}

int main()
{
    char s[]="abc";
    int n = strlen(s);
    char k[n]; 
    printSubsequence(s, k, 0, 0);

    // string s = "abcdefghijklmnopqrs";
    // printSubsequence(s,"");

    // cout<<" \n\n\n\n"<<s.substr(1);

    return 0;
}
