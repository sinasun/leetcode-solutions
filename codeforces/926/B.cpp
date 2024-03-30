#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;

	int ans = 0;
	if (k <= n * 2) {
		if (k % 2 == 1) {
			ans = k / 2 + 1;
		} else {
			ans = k / 2;
		}
		cout << ans << endl;
		return;
	}

	ans += n;

	k -= n * 2;
	if (k <= (n - 2) * 2) {
		if (k % 2 == 1) {
			ans += k / 2 + 1;
		} else {
			ans += k / 2;
		}
		cout << ans << endl;
		return;
	}

	ans += n - 2;
	k -= (n - 2) * 2;
	ans += k;
	cout << ans << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
}
