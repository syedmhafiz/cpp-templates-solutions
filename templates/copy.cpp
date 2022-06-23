#include <bits/stdc++.h>
using namespace std;

vector<int> sieve(int sie) {
	vector<int> ans;
	vector<bool> isPrime(sie + 1, true); isPrime[0] = isPrime[1] = false;
	for (int i = 2; i * i <= sie; i++) {
		if(isPrime[i]) {
			for (int j = i * i; j <= sie; j += i) {
				isPrime[j] = false;
			}
		}
	}
	for (int i = 2; i <= sie; i++) {
		if (isPrime[i]) ans.push_back(i);
	}
	return ans;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	
	int T = 1;
	cin >> T;
	
	cout << T << endl;
	return 0;
}	