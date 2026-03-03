
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


int main() {
    //fastio();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int N, K;
    cin >> N >> K;

    vector<int> v(N);
    for(int i = 0; i < N; ++i)
    {
        cin >> v[i];
    }
    int sum = 0;
    for(int i = 0; i < K; ++i)
    {
        sum += v[i];
	}
	int max_sum = sum;

    for(int i = K; i < N; ++i)
    {
        sum += v[i] - v[i-K];
        max_sum = max(max_sum, sum);
	}

    cout << max_sum << "\n";

    return 0;
    
}

