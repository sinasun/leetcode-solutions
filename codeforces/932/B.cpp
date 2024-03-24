#include <bits/stdc++.h>

using namespace std;

const int N = 2e5;

void solve() {
	int n, arr[N], s[N], e[N];
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}

	int d[N] = {0};
	int mex = 0;
	for (int i = 0; i < n; ++i) {
		d[arr[i]]++;
		while (d[mex] > 0) {
			mex++;
		}
		s[i] = mex;
		// cout << i << " " << mex << endl;
		;
	}

	// cout << endl;
	mex = 0;
	int d2[N] = {0};
	for (int i = n - 1; i >= 0; --i) {
		d2[arr[i]]++;
		while (d2[mex] > 0) {
			mex++;
		}
		e[i] = mex;
		// cout << i << " " << mex << endl;
		;
	}

	for (int i = 0; i < n - 1; ++i) {
		if (s[i] == e[i + 1]) {
			cout << 2 << endl;
			cout << 1 << " " << i + 1 << endl;
			cout << i + 2 << " " << n << endl;
			return;
		}
	}
	cout << -1 << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
}
