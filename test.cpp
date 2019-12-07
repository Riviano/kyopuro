#include <bits/stdc++.h>
using namespace std;
#define ALL(v) (v).begin(), (v).end()
#define REP(i, p, n) for (int i = p; i < (int)(n); ++i)
#define rep(i, n) REP(i, 0, n)
#define SZ(x) ((int)(x).size())
#define debug(x) cerr << #x << ": " << x << '\n'
#define INF 999999999
typedef long long int Int;
typedef pair<int, int> P;
using ll = long long;
using VI = vector<int>;

int main()
{
  int n;
  cin >> n;
  vector<pair<int, int>> xy(n);
  vector<int> h(n);
  map<string, int> mp;
  rep(i, n)
  {
    cin >> xy[i].first >> xy[i].second >> h[i];
  }
  sort(h.begin(),h.end());
  int maxh=h[0];
  for (int cx = 0; cx <= 100; cx++)
  {
    for (int cy = 0; cy <= 100; cy++)
    {
      for (int ch = maxh + 200; ch >= 1; ch--)
      {
        bool flag = true;
        string k = to_string(cx) + " " + to_string(cy) + " " + to_string(ch);
        rep(i,n)
        {
          if (h[i] != max(ch - abs(xy[i].first - cx) - abs(xy[i].second - cy), 0))
          {
            flag = false;
          }
        }
        if (flag)
        {
          cout << k << endl;
          return 0;
        }
      }
    }
  }
  for (auto &i : mp)
  {
    if (i.second >= n)
      cout << i.first << endl;
  }
}