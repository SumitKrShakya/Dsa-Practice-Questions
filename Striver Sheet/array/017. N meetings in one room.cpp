#include<bits/stdc++.h>
using namespace std;

int maxMeetings(int start[], int end[], int n)
   {
       // Your code here
       multimap<int,int> me;
       for(int i=0;i<n;++i)
           me.insert({end[i],start[i]});
       int las = 0,cnt=0; 
       for(auto el : me)
           if(el.second > las)
           {
               cnt++;
               las = el.first;
           }
       return cnt;
   }