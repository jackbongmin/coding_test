#define _CRT_SECURE_NO_WARNINGS
//#define fastio() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#include <iostream>
#include <algorithm>
#include <string>
#include <map>

using namespace std;


int c(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return c(b, a % b);
}

int main() {
    //fastio();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int T;
    cin >> T;

    while (T--) 
    {
        int a, b;
        cin >> a >> b;

        int result = (a * b) / c(a, b);

        cout << result << "\n";
    }

    return 0;


}
 