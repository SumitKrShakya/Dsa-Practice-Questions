#include<bits/stdc++.h>
using namespace std;

public Stack<Integer> sort(Stack<Integer> s)
{
 //add code here.
 if(s.size()==1)
 {
     return s;
 }
 int temp=s.peek();
 s.pop();
 s=sort(s);
 insert(s,temp);
 return s;
}
public static void insert(Stack<Integer> s,int temp)
{
    if(s.size()==0 || s.peek()<=temp)
    {
        s.push(temp);
        return;
    }
    int val=s.peek();
    s.pop();
    insert(s,temp);
    s.push(val);
    return;
}
}