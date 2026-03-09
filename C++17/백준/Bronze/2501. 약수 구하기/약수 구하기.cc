
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


    int N, K;
    cin >> N >> K;

    int count = 0;

    for (int i = 1; i <= N; ++i) 
    {

        if (N % i == 0) 
        {
            count++; 
            if (count == K) 
            {
                cout << i << "\n";
                return 0; 
            }
        }
    }

    cout << 0 << "\n";

    return 0;
    
}

