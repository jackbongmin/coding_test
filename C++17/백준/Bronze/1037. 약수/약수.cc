
//#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <deque>
#include <string>
#include <vector>
#include <cstring>

using namespace std;


int main() {
    //fastio();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int num;

    cin >> num;
    vector<int> a(num);

    for (int i = 0; i < num; ++i)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int N = a.front() * a.back();

    cout << N;

    return 0;
    
}

