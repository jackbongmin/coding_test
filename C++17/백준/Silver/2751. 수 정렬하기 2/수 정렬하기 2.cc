
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


int arr[1000001];

int main() 
{
    //fastio();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int n;
    cin >> n;

    for(int i = 0; i < n; ++i)
    {
        cin >> arr[i];
	}

	sort(arr, arr + n);

    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << "\n";
    }

    return 0;
    
}


