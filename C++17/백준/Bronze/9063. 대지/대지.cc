
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

    int min_x = 20000;
    int max_x = -20000;
    int min_y = 20000;
    int max_y = -20000;

    for (int i = 0; i < N; ++i) 
    {
        int x, y;
        cin >> x >> y;

        min_x = min(min_x, x);
        max_x = max(max_x, x);
        min_y = min(min_y, y);
        max_y = max(max_y, y);
    }

    int area = (max_x - min_x) * (max_y - min_y);

    cout << area << "\n";

    return 0;
    
}

