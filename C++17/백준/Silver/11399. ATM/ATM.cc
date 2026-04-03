
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


    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++)
    {
		cin >> p[i];
    }
	sort(p.begin(), p.end());
    vector<int> sum(n);
    sum[0] = p[0];
    int result = sum[0];


    for (int i = 1; i < n; i++)
    {
        sum[i] = sum[i - 1] + p[i];
        result += sum[i];
    }
	cout << result << "\n";


    return 0;
    
}

// n명 1<= i <= n , i번째 사람이 돈 인출하는데 걸리는 시간 pi분


