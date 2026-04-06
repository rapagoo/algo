#include <iostream>
#include <queue>
using namespace std;
#define X first
#define Y second
int board[502][502];
bool vis[502][502];
int n, m;
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;
	for (int i{}; i < n; ++i)
		for (int j{}; j < m; ++j)
			cin >> board[i][j];

	int mx{};
	int num{};
	for (int i{}; i < n; ++i)
	{
		for (int j{}; j < m; ++j)
		{
			if (board[i][j] != 1 || vis[i][j]) continue;
			num++;
			queue<pair<int, int>> q;
			q.push({ i,j });
			vis[i][j] = 1;
			int area{};
			while (!q.empty())
			{
				pair<int, int> cur{ q.front() }; q.pop(); area++;
				for (int dir{}; dir < 4; ++dir)
				{
					int nx{ cur.X + dx[dir] };
					int ny{ cur.Y + dy[dir] };
					if (board[nx][ny] != 1 || vis[nx][ny]) continue;
					if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
					vis[nx][ny] = 1;
					q.push({ nx, ny });
				}
			}
			mx = max(mx, area);
		}
	}
	cout << num << '\n' << mx;
}