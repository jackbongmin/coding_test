
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


int main()
{
    //fastio();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int m, n;
    cin >> m >> n;

    int sum = 0;         
    int min_prime = -1;   

    for (int i = m; i <= n; i++)
    {
        if (i < 2) continue;

        bool isPrime = true; 

        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                isPrime = false; 
                break;      
            }
        }

        if (isPrime)
        {
            sum += i; 

            if (min_prime == -1)
            {
                min_prime = i; 
            }
        }
    }

    if (min_prime == -1)
    {
        cout << -1 << "\n";
    }
    else
    {
        cout << sum << "\n" << min_prime << "\n";
    }

    return 0;

}

