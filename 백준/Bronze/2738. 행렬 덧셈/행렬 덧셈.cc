#define _CRT_SECURE_NO_WARNINGS

//#define _CRT_SECURE_NO_WARNINGS
//#define fastio() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int A[101][101];
int B[101][101];

int a, b;


int main() {
    //fastio();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


	cin >> a >> b;
    for (int i = 0; i < a; ++i)
    {
        for(int j = 0; j < b; ++j)
        {
            cin >> A[i][j];
		}
    }
    for (int i = 0; i < a; ++i)
    {
        for (int j = 0; j < b; ++j)
        {
            cin >> B[i][j];
        }
    }
    for (int i = 0; i < a; ++i)
    {
        for (int j = 0; j < b; ++j)
        {
            cout << A[i][j] + B[i][j] << " ";
        }
		cout << "\n";
    }

    return 0;
}