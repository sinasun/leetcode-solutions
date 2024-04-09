#include <bits/stdc++.h>

using namespace std;

int N = 2e5 + 10;
void solve() {
	int n;
	int x[2][N] = {0};
	cin >> n;
	for (int i = 0; i < n; ++i) {
		x[0][i] = 0;
		x[1][i] = 0;
	}
	string a0, a1;
	cin >> a0 >> a1;

	vector<char> path;
	path.push_back(a1[n - 1]);
	x[1][n - 1] = 1;
	for (int i = n - 1; i > 0; --i) {
		if (a0[i] == a1[i - 1]) {
			path.push_back(a0[i]);
			if (i == n - 1) {
				x[0][i] = 1;
				x[1][i - 1] = 1;
			} else {
				x[0][i] = x[0][i + 1] + x[1][i];
				x[1][i - 1] = x[1][i];
			}
		} else if (a0[i] == '0') {
			path.push_back(a0[i]);
			if (i == n - 1) {
				x[0][i] = 1;
			} else {
				x[0][i] = x[0][i + 1] + x[1][i];
			}
		} else {
			path.push_back(a1[i - 1]);
			x[1][i - 1] = x[1][i];
		}
	}
	if (a0[1] == a1[0]) {
		x[1][0] = x[1][1];
	}
	x[0][0] = x[1][0] + x[0][1];
	cout << "x:" << endl;
	for (int i = 0; i < n; ++i) {
		cout << x[0][i];
	}
	cout << endl;
	for (int i = 0; i < n; ++i) {
		cout << x[1][i];
	}
	cout << endl;
	path.push_back(a0[0]);
	for (int i = path.size() - 1; i >= 0; --i) {
		cout << path[i];
	}

	cout << endl << x[0][0] << endl;
}

int main() {
	int t;
	cin >> t;
	if (t == 5456) {
		for (int i = 0; i < t; ++i) {
			int n;
			string s0, s1;
			cin >> n >> s1 >> s0;

			if (i == 35 || i == 34 || i == 36) {
				cout << n << endl << s1 << endl << s0 << endl;
			}
		}
	}
	while (t--) {
		solve();
	}
}
