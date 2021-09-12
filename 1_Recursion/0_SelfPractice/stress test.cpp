#include <bits/stdc++.h>

using namespace std;

#define int long long

int a, b, c, d, size_arr, element; //  All input variables.
vector<int> arr;

int random_numbers(int x, int y) {
    return x + (rand() % y);
}

void arr_generator() {
    for (int i = 0; i < size_arr; i++) {
        arr.push_back(random_numbers(1, 99));
    }
}

void testcase_generator() {
    int p = 10000;
    a = random_numbers(1, p);
    b = random_numbers(1, p);
    c = random_numbers(1, p);
    d = random_numbers(1, p);
    arr.clear();
    size_arr = random_numbers(1, 40);
    arr_generator();

    //inputs                |   |
    // of           (random number range)
    //Code
}

int brute_code(int a, int b, int c, int d) {
    int ans;
    // Paste brute_code here.
    // Change input of this function according to input of your programme.
    // Remove all cin and cout statements.
    // Save final answer in ans.


    return ans;
}
int optimised_code(int a, int b, int c, int d)
{
    int ans;
    // Paste optimised_code here.
    // Change input of this function according to input of your programme.
    // Remove all cin and cout statements.
    // Save final answer in ans.


    return ans;
}

void solve() {
    while (true) {
        testcase_generator();
        int ans_brute = brute_code(a, b, c, d);
        int ans_optimised = optimised_code(a, b, c, d);
        if (ans_brute != ans_optimised) {
            cout << "Brute Answer = " << ans_brute << "     Optimised Answer = " << ans_optimised << endl;
        }
    }
}

int32_t main() {
    srand(time(0));
    solve();

    return 0;
}