
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

using namespace std;

long long gcd(long long a, long long b) 
{
    if (b == 0) 
    {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    //fastio();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    long long a, b;
    cin >> a >> b;

    long long result = (a * b) / gcd(a, b);

    cout << result << "\n";
    return 0;
    
}

