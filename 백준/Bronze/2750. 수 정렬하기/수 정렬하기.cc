#define _CRT_SECURE_NO_WARNINGS
//#define fastio() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;


int main() {
    //fastio();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int a;
    int b[1000];

    cin >> a;

    for (int i = 0; i < a; ++i)
    {
		cin >> b[i];
    }
	sort(begin(b), begin(b) + a);

    for (int i = 0; i < a; ++i)
    {
		cout << b[i] << "\n";
    }

    return 0;
}
 