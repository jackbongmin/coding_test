
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


    int N;
    cin >> N;

    vector<int> cards(N);
    for (int i = 0; i < N; ++i) 
    {
        cin >> cards[i];
    }

    sort(cards.begin(), cards.end());

    int M;
    cin >> M;

    for (int i = 0; i < M; ++i) 
    {
        int target;
        cin >> target;

        int count = upper_bound(cards.begin(), cards.end(), target) - lower_bound(cards.begin(), cards.end(), target);

        cout << count << " ";
    }
    cout << "\n";

    return 0;
    
}

