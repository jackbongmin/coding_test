
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


    int N, M;
    int Deck[100];

    cin >> N >> M;
    for (int i = 0; i < N; ++i)
    {
        cin >> Deck[i];
    }

    int maxsum = 0;

    for (int i = 0; i < N; ++i)
    {
        for (int j = (i + 1); j < N; ++j)
        {
            for (int k = (j + 1); k < N; ++k)
            {
                int sum = Deck[i] + Deck[j] + Deck[k];

                if (sum > M)
                {
                    continue;
                }

                if (sum > maxsum)
                {
                    maxsum = sum;
                }

            }
        }
    }

    cout << maxsum;
    
    return 0;
}

