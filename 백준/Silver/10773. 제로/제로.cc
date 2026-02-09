#define _CRT_SECURE_NO_WARNINGS

//#define _CRT_SECURE_NO_WARNINGS
//#define fastio() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <vector>

using namespace std;


int main() {
    //fastio();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int K;
	stack<int> S;

	cin >> K;
    for (int i = 0; i < K; ++i)
    {
        int num;
        cin >> num;
        if (num != 0)
        {
            S.push(num);
        }
        else if (num == 0)
        {
            S.pop();
        }
    }

	int sum = 0;
    while (!S.empty())
    {
        sum += S.top();
        S.pop();
	}

	cout << sum;
    

	return 0;
}