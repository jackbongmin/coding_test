
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


    int arr[5];

    for (int i = 0; i < 5; ++i)
    {
        cin >> arr[i];
    }

    int n = 0;
    for (int i = 0; i < 5; ++i)
    {
        n += arr[i] * arr[i];
    }

    int result = n % 10;
    cout << result << "\n";
    

    return 0;

}

