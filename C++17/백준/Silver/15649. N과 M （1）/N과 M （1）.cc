
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

void a(int b)
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
    for (int i = 1; i <= N; ++i)
    {
        if (!used[i])
        {
            arr[b] = i;
            used[i] = true;
            a(b + 1);
            used[i] = false;
        }
    }
}




int main() {
    //fastio();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    cin >> N >> M;
    a(0);

    
    return 0;
}

