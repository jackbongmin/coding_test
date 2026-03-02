
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

int arr[100005];

int main() {
    //fastio();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int N, M;
    cin >> N >> M;

    for(int i = 1; i <= N; ++i) 
    {
        int num;
        cin >> num;
		arr[i] = arr[i - 1] + num;
	}

    for (int k = 0; k < M; ++k)
    {
        int i, j;
        cin >> i >> j;

		cout << arr[j] - arr[i - 1] << "\n";

    }

    return 0;
    
}

