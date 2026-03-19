
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


    while (true) 
    {
        int arr[3];
        cin >> arr[0] >> arr[1] >> arr[2];

        if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0) 
        {
            break;
        }

        sort(arr, arr + 3);

        if (arr[2] >= arr[0] + arr[1]) 
        {
            cout << "Invalid\n";
        }
        else if (arr[0] == arr[1] && arr[1] == arr[2]) 
        {
            cout << "Equilateral\n";
        }
        else if (arr[0] == arr[1] || arr[1] == arr[2] || arr[0] == arr[2]) 
        {
            cout << "Isosceles\n";
        }
        else 
        {
            cout << "Scalene\n";
        }
    }

    return 0;
    
}

