#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <cmath>
#include <ctime>
#include <functional>
#include <sstream>
#include <fstream>
#include <valarray>
#include <complex>
#include <queue>
#include <cassert>
#include <bitset>
 
#include <unordered_map>
#include <bits/stdc++.h>
 
using namespace std;
 
#ifdef LOCAL
#define debug_flag 1
#else
#define debug_flag 0
#endif
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL); 
template <class T1, class T2 >
std::ostream& operator << (std::ostream& os, const pair<T1, T2> &p)
{
	os << "[" << p.first << ", " << p.second << "]";
	return os;
}
 
template <class T >
std::ostream& operator << (std::ostream& os, const std::vector<T>& v)
{
	os << "[";
	bool first = true;
	for (typename std::vector<T>::const_iterator it = v.begin(); it != v.end(); ++it)
	{
		if (!first)
			os << ", ";
		first = false;
		os << *it;
	}
	os << "]";
	return os;
}
 
template <class T >
std::ostream& operator << (std::ostream& os, const std::vector<vector<T>>& v)
{
 
	os << "[" << endl;
	bool first = true;
	for (typename std::vector<vector<T>>::const_iterator it = v.begin(); it != v.end(); ++it)
	{
		os << *it << endl;
	}
	os << "]" << endl;
	return os;
}
 
typedef long long int int64;
 
const int N = (int)4e5 + 100;
const int LOGN = 20;
const int INF = (int)1e9;
const int mod = (int)1e9 + 7;
 
const int PLUS = 0;
const int MUL = 1;
const int NUMBER = 2;
typedef long long int ll;
// ll modd = 998244353;
int mod_add(int a, int b)
{
	a += b;
	if (a >= mod)
		a -= mod;
	return a;
}
 
int mod_sub(int a, int b)
{
	a -= b;
	if (a < 0)
		a += mod;
	return a;
}
 
int mod_mul(int a, int b)
{
	return (int64)a * b % mod;
}

pair<int, pair<int, int>> extendedEuclidGCD(int a, int b)
{
    // pair <gcd,pair<x,y>>
    // Ax + bY = gcd(a,b) retuns the gcd and x and y.
    if (b == 0)
    {
        pair<int, pair<int, int>> temp;
        temp.first = a;
        temp.second.first = 1;
        temp.second.second = 0;
        return temp;
    }
    pair<int, pair<int, int>> smallAns = extendedEuclidGCD(b, a % b);
    pair<int, pair<int, int>> ans;
    ans.first = smallAns.first;
    ans.second.first = smallAns.second.second;
    ans.second.second = smallAns.second.first - ((a / b) * smallAns.second.second);
    return ans;
}

int multiplicativeModuloInverse(int a, int m)
{
    // for (A.B)modM = 1 returning B.
    pair<int, pair<int, int>> ans = extendedEuclidGCD(a, m);
    return ans.second.first;
}

bool isPrime(int n)
{
    // returns if the number is prime or not
    if (n <= 0)
        return false;
    if (n <= 3)
        return true;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}

vector<bool> sieveOfEratosthenes(int n)
{
    // returns the array from 0 to N including N,
    // containing true if the index representing the number is prime and false if not.
    if (n < 0)
        return {};
    if (n == 0)
        return {false};

    vector<bool> arr(n + 1, true);
    arr[0] = false;
    arr[1] = true;
    for (int i = 2; i <= n; i++)
    {
        if (arr[i] == false)
            continue;
        for (int j = 2 * i; j <= n; j += i)
            arr[j] = false;
    }
    return arr;
}

vector<int> listOfPrimes(int n)
{
    // returns the list of prime number from 0 to n including n;
    if (n < 0)
        return {};
    if (n == 0)
        return {false};

    vector<bool> arr(n + 1, true);
    vector<int> ans(1, 1);
    arr[0] = false;
    arr[1] = true;
    for (int i = 2; i <= n; i++)
    {
        if (arr[i] == false)
            continue;
        ans.push_back(i);
        for (int j = 2 * i; j <= n; j += i)
            arr[j] = false;
    }
    return ans;
}

int modularExponentiation(ll number, ll power, ll c)
{
    // fast pow(a,b) in O(log(n)) and high number 2^10000 and mod c
    if (power == 0)
        return 1;

    int a = ((number % c) * (number % c)) % c;
    return power % 2 ? (modularExponentiation(a, power / 2, c)) % c
                     : ((number % c) * (modularExponentiation(a, (power - 1) / 2, c)) % c) % c;
}
int fastExponentiation(int a, int b)
{
    // fast pow(a,b) in O(log(n)) in range of int.
    if (b == 0)
        return 1;
    return (b % 2 == 0) ? fastExponentiation(a * a, b / 2) : a * fastExponentiation(a * a, b / 2);
}
void fibnocciMaxtrixMultiply(int A[2][2], int B[2][2])
{
    A[0][0] = A[0][0] * B[0][0] + A[0][1] * B[1][0];
    A[0][1] = A[0][0] * B[0][1] + A[0][1] * B[1][1];
    A[1][0] = A[1][0] * B[0][0] + A[1][1] * B[1][0];
    A[1][1] = A[1][0] * B[0][1] + A[1][1] * B[1][1];
}
void fibnocciMatrixExponentiation(int A[2][2], int n)
{
    if (n == 0 || n == 1)
        return;
    fibnocciMatrixExponentiation(A, n / 2);
    fibnocciMaxtrixMultiply(A, A);
    if (n % 2 != 0)
    {
        int M[2][2] = {{1, 1}, {1, 0}};
        fibnocciMaxtrixMultiply(A, M);
    }
}
int fibnocciNthTerm(int n)
{
    // gets fibnocci nth term in log(n) time.
    if (n == 0)
    {
        return 0;
    }
    int A[2][2] = {{1, 1}, {1, 0}};
    fibnocciMatrixExponentiation(A, n - 1);
    return A[0][0];
}
int fiboSum(int m, int n)
{
    // fibosum is the sum of all terms between
    // nth and mth fibnocci series.
    // Sum till nth fibnocci term is (n+2)th Fibnocci term - 1.
    int sum1 = fibnocciNthTerm(n + 1) - 1;
    int sum2 = fibnocciNthTerm(m + 2) - 1;
    return sum2 - sum1;
}

ll factorial(int n)
{
    // product of small numbers such till 16 or 20
    int prod = 1;
    for (int i = 2; i <= n; i++)
        prod *= i;
    return prod;
}

vector<int> boringFactorial(int n)
{
    // factorial of large number in form of a vector
    vector<int> arr = {1};
    int carry = 0;
    for (int i = 2; i <= n; i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            arr[j] = arr[j] * i + carry;
            carry = arr[j] / 10;
            arr[j] %= 10;
        }
        while (carry > 0)
        {
            arr.push_back(carry % 10);
            carry /= 10;
        }
    }
    reverse(arr.begin(), arr.end());
    return arr;
}




void solve()
{   
    int n;
    string s;
    cin>>n>>s;
    int ones=0;
    for(auto ele:s){
        if(ele=='0'){
            cout<<ele;
        }else{
            ones++;
        }
    }
    while(ones){
        cout<<"1";
        ones--;
    }
    cout<<endl;
}

int main()
{
    fio;
    ll T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}