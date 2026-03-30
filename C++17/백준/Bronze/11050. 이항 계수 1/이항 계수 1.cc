
//#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <deque>
#include <string>
#include <vector>
#include <cstring>
#include <set>
#include <cctype>
#include <unordered_map>


using namespace std;


int factorial(int n) 
{
    int result = 1;
    for (int i = 1; i <= n; ++i) 
    {
        result *= i;
    }
    return result;
}

int main() 
{
    //fastio();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int N, K;
    cin >> N >> K;

    int answer = factorial(N) / (factorial(K) * factorial(N - K));

    cout << answer << "\n";

    return 0;
    
}


    // N! / (K! * (N-K)!)