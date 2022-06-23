#include <bits/stdc++.h>
#define ll long long
#define nL "\n"
#define pb push_back
#define pii pair<int, int> 
using namespace std;

void solve() {
	int n, m, a = 0, b = 0;
	cin >> n >> m;
	vector<ll> d(n), l(m);
	
	for (auto &x: d)
		cin >> x;
	for (auto &x: l)
		cin >> x;

	ll dorm = 0LL, track = d[0];
	while (a < n && b < m) {
		if (l[b] <= track) {
			cout << a + 1 << " " << l[b] - dorm << nL;
			b++;
		} else {
			a++;
			track += d[a];
			dorm += d[a - 1];
		}			
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif 
	
	int T = 1;
	//cin >> T;
	while(T--){
		solve();
	}
	return 0;
}	