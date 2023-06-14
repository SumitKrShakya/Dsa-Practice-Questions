#include <bits/stdc++.h>
using namespace std;

// !Largest Element in an Array
class Solution {
public:
  int largest(vector<int>& arr, int n) {
    int ans = INT_MIN;
    for (auto x : arr) {
      ans = max(ans, x);
    }
    return ans;
  }
};

// !Second Largest Element in an Array …
class Solution {
public:
  // Function returns the second
  // largest elements
  int print2largest(int arr[], int n) {
    // int max1=INT_MIN,max2=-1;
    // for(int i=0;i<n;i++){
    //     max1=max(max1,arr[i]);
    // }
    // for(int i=0;i<n;i++){
    //     if(arr[i]!=max1){
    //         max2=max(max2,arr[i]);
    //     }
    // }
    int max1 = -1, max2 = -1;
    for (int i = 0;i < n;i++) {
      if (arr[i] > max1) {
        max2 = max1;
        max1 = arr[i];
      }
      else if (arr[i] > max2 && arr[i] < max1) {
        max2 = arr[i];
      }
    }
    return max2;
  }
};


// 	!Check if the array is sorted
class Solution {
  public:
    bool arraySortedOrNot(int arr[], int n) {
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]) return false;
        }
        return true;
    }
};

// !Remove duplicates from Sorted array
class Solution{
public:
    int remove_duplicate(int a[],int n){
        int k=1;
        for(int i=1;i<n;i++){
            if(a[i]!=a[i-1]){
                a[k]=a[i];
                k++;
            }
        }
        return k;
    }
};



