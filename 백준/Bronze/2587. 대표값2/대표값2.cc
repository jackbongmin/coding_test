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


    int a[5];
    int sum = 0;

    for (int i = 0; i < 5; ++i)
    {
		cin >> a[i];
    }
    for (int i = 0; i < 5; ++i)
    {
        sum += a[i];
    }
	sort(begin(a), end(a));

	cout << sum/5 << "\n";
    cout << a[2];

    
    return 0;
}
 