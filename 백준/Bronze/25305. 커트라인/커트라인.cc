#define _CRT_SECURE_NO_WARNINGS

//#define _CRT_SECURE_NO_WARNINGS
//#define fastio() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <vector>
#include <queue>
#include <deque>
#include <cmath>

using namespace std;

// 25305

int main() {
    //fastio();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    
    int N, k, x;
    int arr[1001];

    cin >> N >> k;

    for(int i=0;i<N;++i)
    {
        cin >> x;
        arr[i] = x;
    }

    sort(arr, arr + N);

    cout << arr[N - k];





	return 0;
}