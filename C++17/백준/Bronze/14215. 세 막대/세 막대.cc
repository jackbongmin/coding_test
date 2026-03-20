
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


    int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];

    sort(arr, arr + 3);

    if (arr[2] < arr[0] + arr[1]) 
    {
        cout << arr[0] + arr[1] + arr[2] << "\n";
    }
    else 
    {
        cout << (arr[0] + arr[1]) + (arr[0] + arr[1] - 1) << "\n";
    }

    return 0;
    
}

