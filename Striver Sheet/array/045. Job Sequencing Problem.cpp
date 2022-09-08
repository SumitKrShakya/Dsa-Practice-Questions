//{ Driver Code Starts
// Program to find the maximum profit job sequence from a given array 
// of jobs with deadlines and profits 
#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 


// } Driver Code Ends
/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/

class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        vector<int>ans(n,-1);
        int a = 0;
        int p = 0;
        vector<pair<int,pair<int,int>>>vec;
        
        for(int i=0;i<n;i++){
            int profit = arr[i].profit;
            int id = arr[i].id;
            int dead = arr[i].dead;
            vec.push_back({profit, {id, dead}});
        }
        sort(vec.begin(),vec.end());
        for(int k=n-1;k>=0;k--){
            auto x = vec[k];
            int profit = x.first;
            int id  = x.second.first;
            int dead = x.second.second;
            int i = dead-1;
            while(i>=0 && ans[i]!=-1){
                i--;
            }
            if(i==-1)continue;
            ans[i] = id;
            p += profit;
            a++;
        }
        return {a,p};
    } 
};

//{ Driver Code Starts.
// Driver program to test methods 
int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}



// } Driver Code Ends
