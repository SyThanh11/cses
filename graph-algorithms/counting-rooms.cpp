#include <iostream>
#include <vector>

using namespace std;

int n, m;
vector<vector<char>> map;
vector<vector<bool>> visited;

void dfs(int x, int y) {
    if (x < 0 || x >= n || y < 0 || y >= m) return;
    if (map[x][y] == '#' || visited[x][y]) return;

    visited[x][y] = true;

    dfs(x + 1, y);
    dfs(x - 1, y);
    dfs(x, y + 1);
    dfs(x, y - 1);
}

int main() {
    cin >> n >> m;
    map.assign(n, vector<char>(m));
    visited.assign(n, vector<bool>(m, false));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> map[i][j];

    int room_count = 0;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            if (map[i][j] == '.' && !visited[i][j]) {
                dfs(i, j);
                room_count++;
            }
        }

    cout << room_count << endl;
    return 0;
}