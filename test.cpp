#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<ll> VL;
typedef vector<VL> VVL;
typedef pair<int, int> PII;

#define FOR(i, a, n) for (ll i = (ll)a; i < (ll)n; ++i)
#define REP(i, n) FOR(i, 0, n)
#define ALL(x) x.begin(), x.end()
#define IN(a, b, x) (a<=x&&x<b)
#define MP make_pair
#define PB push_back
const int INF = (1LL<<30);
const ll LLINF = (1LL<<60);
const double PI = 3.14159265359;
const double EPS = 1e-12;
const int MOD = 1000000007;
//#define int ll

template <typename T> T &chmin(T &a, const T &b) { return a = min(a, b); }
template <typename T> T &chmax(T &a, const T &b) { return a = max(a, b); }

int dx[] = {0, 1, 0, -1}, dy[] = {1, 0, -1, 0};

int a[305][305], dp[305][305];
signed main(void)
{
  int n;
  cin >> n;
  REP(i, n) REP(j, n) cin >> a[i][j], dp[i][j] = a[i][j];

  REP(k, n) REP(i, n) REP(j, n) {
    if(k == i || k == j || i == j || dp[i][k] == INF || dp[k][j] == INF) continue;
    if(dp[i][k] + dp[k][j] == a[i][j]) {
      dp[i][j] = INF;
    } else if(dp[i][k] + dp[k][j] < a[i][j]) {
      cout << -1 << endl;
      return 0;
    }
  }

  ll sum = 0;
  REP(i, n) REP(j, n) if(dp[i][j] != INF) sum += dp[i][j];
  cout << sum/2 << endl;

  return 0;
}