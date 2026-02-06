
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


    int x, y;

    int a, b, c, d, e, f;

    cin >> a >> b >> c >> d >> e >> f;

    for (int x = -999; x <= 999; x++) 
    {

        for (int y = -999; y <= 999; y++) 
        {

            if ((a * x) + (b * y) == c && (d * x) + (e * y) == f) 
            {
                cout << x << " " << y;
                return 0;
            }
        }
    }

    
    return 0;
}

