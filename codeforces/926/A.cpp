#include <bits/stdc++.h>

using namespace std;

const int N = 200;
void solve() {
	int n;
	cin >> n;
	int a[N] = {0};
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	sort(a, a + n);

	int ans = 0;

	for (int i = 1; i < n; ++i) {
		ans += a[i] - a[i - 1];
	}
	cout << ans << endl;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
}
