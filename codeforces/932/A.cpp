#include <bits/stdc++.h>

#include <algorithm>

using namespace std;

int main() {
	int t;
	cin >> t;

	for (int i = 0; i < t; ++i) {
		int n;
		string s;
		cin >> n >> s;

		string a1 = s;
		string a2 = s;
		reverse(a2.begin(), a2.end());
		a2 = a2 + s;

		bool st = false;
		for (int j = 0; j < a2.length(); ++j) {
			if (a1[j] != a2[j]) {
				if (a2[j] < a1[j]) {
					cout << a2 << endl;
				} else {
					cout << a1 << endl;
				}
				st = true;
				break;
			}
		}
		if (st == true) {
			continue;
		}
		cout << a1 << endl;
	}
}
