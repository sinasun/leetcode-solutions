#include <bits/stdc++.h>

using namespace std;

const int A = 3e6;
void solve() {
	int n;
	cin >> n;
	vector<int> arr;
	for (int i = 0; i < n; ++i) {
		int temp;
		cin >> temp;
		arr.push_back(temp);
	}

	sort(arr.begin(), arr.end());
	cout << abs(arr[0] - arr[n - 2]) + abs(arr[n - 1] - arr[1]) +
				abs(arr[1] - arr[n - 2]) + abs(arr[0] - arr[n - 1])
		 << endl;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
}
