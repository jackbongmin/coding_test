
//#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <deque>
#include <string>
#include <vector>

using namespace std;



int main() {
    //fastio();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int N;

    cin >> N;

    int result = 0;

    for (int i = 1; i < N; ++i)
    {
        int sum = i;
        int temp = i;

        while (temp != 0)
        {
            sum += temp % 10;
            temp /= 10;
        }

        if(sum == N)
        {
            result = i;
            break;
        }
    }
    cout << result;
        
    return 0;
}

