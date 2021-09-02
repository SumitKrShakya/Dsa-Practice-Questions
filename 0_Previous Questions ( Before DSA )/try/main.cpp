#include <bits/stdc++.h>

using namespace std;

#define int long long

int a,b,c,d,size_arr,element;   //  All input variables.
vector <int> arr;
int random_numbers(int x,int y){
    return x + (rand()% y);
}

int arr_generator(int size_arr){
    for(int i=0;i<size_arr;i++){
        element = random_numbers(1,10000);
        arr.pushback(element);
    }

}

void testcase_generator(){
    a        = random_numbers(1,100000);
    b        = random_numbers(1,100000);
    c        = random_numbers(1,100000);
    d        = random_numbers(1,100000);
    size_arr = random_numbers(1,100000);
    int arr[size_arr];
    arr_generator(size_arr);

//inputs                |   |
// of           (random number range)
//Code
}

int brute_code(int a,int b,int c,int d){
    int ans;
    // Paste brute_code here.
    // Change input of this function according to input of your programme.
    // Remove all cin and cout statements.
    // Save final answer in ans.
    return ans;
}
int optimised_code(int a,int b,int c,int d){
    int ans;
    // Paste optimised_code here.
    // Change input of this function according to input of your programme.
    // Remove all cin and cout statements.
    // Save final answer in ans.
    return ans;
}

void solve(){
    while(true){
        testcase_generator();
        int ans_brute = brute_code(a,b,c,d);
        int ans_optimised = optimised_code(a,b,c,d);
        if(ans_brute!=ans_optimised){
            cout << "Brute Answer = " << ans_brute << "     Optimised Answer = " << ans_optimised << endl;
        }
    }
}

int32_t main(){

     solve();

    return 0;
}
