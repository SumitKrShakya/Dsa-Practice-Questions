#include<bits/stdc++.h>
using namespace std;

class GfG{
    public: stack<int> sort(stack<int> s)
    {
     //add code here.
     if(s.size()==1){
        return s;
     }
     int temp=s.top();
     s.pop();
     s=sort(s);
     insert(s,temp);
     return s;
    }
    public:void insert(stack<int> s,int temp)
    {
        if(s.size()==0 || s.top()<=temp)
        {
            s.push(temp);
            return;
        }
        int val=s.top();
        s.pop();
        insert(s,temp);
        s.push(val);
        return;
    }
};