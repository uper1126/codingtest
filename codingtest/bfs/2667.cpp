#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#define X first
#define Y second

using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
queue<pair<int, int>> Q;
vector<int> ans;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    char board[n][n];
    bool vis[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> board[i][j];
            vis[i][j] = 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int cnt = 0;
            if (board[i][j] == '1' && !vis[i][j])
            {
                vis[i][j] = 1;
                Q.push({i, j});
                while (!Q.empty())
                {
                    auto cur = Q.front();
                    Q.pop();
                    cnt++;
                    for (int dir = 0; dir < 4; dir++)
                    {
                        int nx = cur.X + dx[dir];
                        int ny = cur.Y + dy[dir];
                        if (nx < 0 || nx >= n || ny < 0 || ny >= n)
                        {
                            continue;
                        }
                        if (vis[nx][ny] || board[nx][ny] != '1')
                        {
                            continue;
                        }
                        Q.push({nx, ny});
                        vis[nx][ny] = 1;
                    }
                }
            }
            if (cnt != 0)
            {
                ans.push_back(cnt);
            }
        }
    }
    sort(ans.begin(), ans.end());

    cout << ans.size() << '\n';
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << "\n";
    }
}