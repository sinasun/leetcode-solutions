#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;

	int i = 1;
	while (n > i) {
		if (i * 2 <= n) {
			i = i * 2;
		} else {
			break;
		}
	}
	cout << i << endl;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
}
