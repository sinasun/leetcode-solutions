#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;

	for (int i = 0; i < t; ++i) {
		int n;
		cin >> n;
		vector<int> v;

		for (int j = 0; j < n; ++j) {
			int temp;
			cin >> temp;
			v.push_back(temp);
		}

		sort(v.begin(), v.end());

		int med = n / 2 + n % 2 - 1;

		int ans = 1;
		while (med < n - 1 && v[med + 1] == v[med]) {
			ans++;
			med++;
		}
		cout << ans << endl;
	}
}
