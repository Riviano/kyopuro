#include<bits/stdc++.h>
using namespace std;
#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define SZ(x) ((int)(x).size())
#define debug(x) cerr << #x << ": " << x << '\n'
#define INF 999999999
typedef long long int Int;
typedef pair<int,int> P;
using ll = long long;
using VI = vector<int>;


// 四方向への移動ベクトル
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

// 入力
int H, W;
int count = 0;//チーズの数を取得
vector<string> field;
vector<pair<int,int>> tizu(n);
// 探索
bool seen[510][510]; // seen[h][w] := マス (h, w) が検知済みかどうか
void dfs(int h, int w) {
    seen[h][w] = true;

    // 四方向を探索
    for (int dir = 0; dir < 4; ++dir) {
        int nh = h + dx[dir];
        int nw = w + dy[dir];

        // 場外アウトしたり、移動先が壁の場合はスルー
        if (nh < 0 || nh >= H || nw < 0 || nw >= W) continue;
        if (field[nh][nw] == 'X') continue;

        // 移動先が探索済みの場合
        if (seen[nh][nw]) continue;

        // 再帰的に探索
        dfs(nh, nw);
    }
}

int main() {
    // 入力受け取り
    cin >> H >> W;
    field.resize(H);

    for (int h = 0; h < H; ++h) cin >> field[h];

    // s と g のマスを特定する
    int sh, sw, gh, gw;
    for (int h = 0; h < H; ++h) {
        for (int w = 0; w < W; ++w) {
            if (field[h][w] == 'S') sh = h, sw = w;
            if(field[h][w]=='1')
        }
    }

    // 探索開始
    memset(seen, 0, sizeof(seen)); // seen 配列全体を false に初期化
    dfs(sh, sw);

    // 結果
    if (seen[gh][gw]) cout << "Yes" << endl;
    else cout << "No" << endl;
}
