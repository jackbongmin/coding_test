//#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <deque>
#include <string>
#include <vector>

using namespace std;

int N, M, V;
vector<vector<int>> v;
vector<bool> visited;

void DFS(int current)
{
    visited[current] = true;                    // 방문 도장
    cout << current << " ";

    // 현재위치와 연결된 노드들 훑기
    for (int i = 0; i < v[current].size(); ++i) // v[current].size() = 현재 노드와 연결된 노드가 몇개인지
    {
        int next = v[current][i];               // next = 그중 i번째 노드
        if (!visited[next])
        {
            DFS(next);                          // 방문한 적이 없다면? 그리로 이동해라(재귀호출) / 함수가 시작되면서 current -> next로 바뀜
        }
    }
}

void BFS(int start)
{
    queue<int> q;                               // 대기열 생성
    q.push(start);                              // 시작점 넣기
    visited[start] = true;                      // 줄서자마자 방문체크

    while (!q.empty())                          // 대기열이 텅 빌때까지 계속 일함
    {
        int current = q.front();                // currnet = 줄 맨앞에 있는 애
        q.pop();                                // 데려왔으니 삭제
        cout << current << " ";                 

        // 방금 처리한 current의 주변 노드를 훑기
        for (int i = 0; i < v[current].size(); ++i)
        {
            int next = v[current][i];
            if (!visited[next])                 // 아직 방문 도장이 없는 노드라면
            {
                visited[next] = true;           // 방문체크하고?
                q.push(next);                   // 대기열 맨뒤에 줄세우기(나중에 처리하려고)
            }
        }
    }
}

int main() {
    //fastio();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> N >> M >> V;
    v.resize(N + 1);                // 방을 N+1개 만들기
    visited.resize(N + 1, false);   // visited를 false로 초기화

    for (int i = 0; i < M; ++i)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);          // 양방향 연결
        v[b].push_back(a);

    }

    for (int i = 1; i <= N; i++) 
    {
        sort(v[i].begin(), v[i].end()); // 작은번호부터 정렬
    }

    DFS(V);

    cout << "\n";
    fill(visited.begin(), visited.end(), false);    // DFS 했던거 초기화

    BFS(V);


    return 0;
}

