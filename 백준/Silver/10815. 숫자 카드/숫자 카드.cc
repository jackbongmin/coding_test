#define _CRT_SECURE_NO_WARNINGS
//#define fastio() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int arrN[500001];

int main() {
    //fastio();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int n, m;

    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> arrN[i];
    }

    sort(arrN, arrN + n);
    cin >> m;

    int check;
    for (int i = 0; i < m; ++i)
    {
        cin >> check;
        if (binary_search(arrN, arrN + n, check))
        {
            cout << "1 ";
        }
        else
        {
            cout << "0 ";
        }
    }

    
    return 0;
}
 