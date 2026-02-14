
//#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <deque>
#include <string>
#include <vector>
#include <cstring>

using namespace std;

int a[500005];
int temp[500005];
int cnt = 0;
int K;
int result = -1;

void merge(int p, int q, int r)
{
    int i = p;
    int j = q + 1;
    int k = 1;

    while (i <= q && j <= r) 
    {
        if (a[i] <= a[j]) 
        {
            temp[k++] = a[i++];
        }
        else 
        {
            temp[k++] = a[j++];
        }
    }
    while (i <= q) {
        temp[k++] = a[i++];
    }

    while (j <= r) {
        temp[k++] = a[j++];
    }

    i = p;
    k = 1;
    while (i <= r) {
        a[i++] = temp[k++];

        cnt++;
        if (cnt == K) {
            result = a[i - 1]; 
        }
    }
}

void merge_sort(int p, int r) {
    if (p < r) {
        int q = (p + r) / 2;
        merge_sort(p, q);
        merge_sort(q + 1, r);
        merge(p, q, r);
    }
}

int main() {
    //fastio();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int N;
    cin >> N >> K;

    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    merge_sort(0, N - 1);

    cout << result;
 
    return 0;
}

