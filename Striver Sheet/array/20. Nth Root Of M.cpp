#include<bits/stdc++.h>
using namespace std;

int NthRoot(int n, int m)
	{
	    double e=2.718281828459045;
	    double A=log(m);
	    double B=(double)A/(double)n;
	    double y=pow(e,B);
	    int ans=round(y);
	    float d=(float)ans-(float)y;
	    //cout << setprecision(20) << y<<endl;
	    //cout << setprecision(20)<<d<<endl;
	    if(d==0.0)
	      return ans;
	    else
	      return -1;
	}