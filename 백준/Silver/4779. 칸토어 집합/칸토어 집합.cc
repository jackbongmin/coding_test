#define _CRT_SECURE_NO_WARNINGS
//#define fastio() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <cmath>

using namespace std;

void canto(int a, int b, string& s)
{
    if (b == 1)
    {
        return;
    }
    int newb = b / 3;
    for (int i = a + newb; i < a + newb * 2; ++i)
    {
        s[i] = ' ';
    }

    canto(a, newb, s);
    canto(a + newb * 2, newb, s);
}


int main() {
    //fastio();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N;

    while (cin >> N)
    {
        int len = pow(3, N);

        string s(len, '-');

        canto(0, len, s);

        cout << s << "\n";
    }

    return 0;


}
 