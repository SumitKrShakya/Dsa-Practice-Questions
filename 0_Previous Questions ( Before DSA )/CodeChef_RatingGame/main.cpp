#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,f,x=0,y=0;
    cin>>a>>b>>c>>d>>e>>f;
    a>d?x++:y++;
    b>e?x++:y++;
    c>f?x++:y++;
    cout<<x<<" "<<y;
    return 0;
}
