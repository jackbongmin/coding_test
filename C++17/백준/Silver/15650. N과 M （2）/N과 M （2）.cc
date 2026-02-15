
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

// 15649

int N, M;
int arr[9];
bool used[9];

void a(int b, int c)
{
    if (b == M)
    {
        for (int i = 0; i < M; ++i)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }
    for (int i = c; i <= N; ++i)
    {
        arr[b] = i;
        a(b + 1, i + 1);
    }
}




int main() {
    //fastio();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    cin >> N >> M;
    a(0, 1);

    
    return 0;
}

