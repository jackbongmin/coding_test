
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


    int x, y, w, h;
    cin >> x >> y >> w >> h;

    int minx = min(x, w - x);

    int miny = min(y, h - y);

    int answer = min(minx, miny);

    cout << answer << "\n";

    return 0;
    
}

