
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


    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;

    int x4, y4;

    if (x1 == x2) 
    {
        x4 = x3;
    }
    else if (x1 == x3) 
    {
        x4 = x2;
    }
    else 
    {
        x4 = x1;
    }

    if (y1 == y2) 
    {
        y4 = y3;
    }
    else if (y1 == y3) 
    {
        y4 = y2;
    }
    else 
    {
        y4 = y1;
    }

    cout << x4 << " " << y4 << "\n";

    return 0;
    
}

