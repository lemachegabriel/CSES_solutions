#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
#define pb push_back
#define all(x) begin(x), end(x)
using pi = pair<int,int>;
#define f first
#define s second
#define mp make_pair

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n; cin >> n;
	vector<pi> vals;
	for (int i = 0; i < n; i++) {
		int l, r;
		cin >> l >> r;
		vals.pb(mp(l, 1));
		vals.pb(mp(r, -1));
	}
	sort(all(vals));
    for(int i = 0; i < vals.size(); i++){
        cout << vals[i].second;
    }
	int sum = 0;
	int ans = 0;
	for (auto x : vals) {
		sum += x.s;
		ans = max(ans, sum);
	}
	cout << ans << '\n';
}
