#include <bits/stdc++.h>

using namespace std;

const int N = 1e4 + 5;
int a[N] = {0};

int main() {
	a[0] = 0;
	a[1] = 1;
	a[3] = 1;
	a[6] = 1;
	a[10] = 1;
	a[15] = 1;
	for (int i = 1; i < N; ++i) {
		if (a[i] == 0 && i > 15) {
			a[i] =
				min(a[i - 1],
					min(a[i - 3], min(a[i - 6], min(a[i - 10], a[i - 15])))) +
				1;
		} else if (a[i] == 0 && i > 10) {
			a[i] = min(a[i - 1], min(a[i - 3], min(a[i - 6], a[i - 10]))) + 1;
		} else if (a[i] == 0 && i > 6) {
			a[i] = min(a[i - 1], min(a[i - 3], a[i - 6])) + 1;
		} else if (a[i == 0 && i > 3]) {
			a[i] = min(a[i - 1], a[i - 3]) + 1;
		} else if (a[i] == 0) {
			a[i] = a[i - 1] + 1;
		}
	}

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int ans = 0;
		int temp = n / 15;
		if (temp > 50) {
			ans = temp - 30;
			n = n % 15 + 15 * 30;
		}

		while (n > N) {
			n -= 15;
			ans++;
		}
		cout << a[n] + ans << endl;
	}
}
