#include <bits/stdc++.h>
#define ll long long
#define nL "\n"
#define pb push_back
#define pii pair<int, int> 
using namespace std;

void solve() {
	string s, ans = ""; cin >> s;
	int a = 0, len = s.size();
	set<char> sc;

	while (a < len) {
		if (a < len - 1 && s[a] == s[a + 1]) {
			a += 2;
		} else {
			sc.insert(s[a]);
			a++;
		}
	}
	if (sc.size()) {
		for (auto q: sc) ans += q;	
	} else {
		ans = " ";
	}
	cout << ans << nL;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif 
	
	int T = 1;
	cin >> T;
	while(T--){
		solve();
	}
	return 0;
}	