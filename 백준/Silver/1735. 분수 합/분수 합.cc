#define _CRT_SECURE_NO_WARNINGS

//#define _CRT_SECURE_NO_WARNINGS
//#define fastio() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <vector>
#include <queue>
#include <deque>
#include <cmath>

using namespace std;

    int gcd(int a, int b) 
    {
        if (b == 0) 
        {
            return a;
        }
        return gcd(b, a % b);
    }



int main() {
    //fastio();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int A, B, C, D;
    cin >> A >> B;
    cin >> C >> D;

    int top = (A * D) + (C * B);
    int bottom = B * D;

    int g = gcd(top, bottom);

    cout << top / g << " " << bottom / g << "\n";


	return 0;
}