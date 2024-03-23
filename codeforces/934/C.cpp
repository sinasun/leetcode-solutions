#include <iostream>
#include <unordered_map>

using namespace std;

int main(int argc, char* argv[]) {
	int t;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		int n;
		cin >> n;

		unordered_map<int, int> c;
		bool d = false;
		int mx = 0;
		for (int j = 0; j < n; ++j) {
			int temp;
			cin >> temp;
			if (temp >= mx) {
				mx = temp;
			}
			c[temp]++;
		}

		int mn = 0;
		for (int j = 0; j < n; ++j) {
			// Alice turn
			for (int k = 0; k <= mx; ++j) {
				if (c[j] > j + 1 - mn) {
				}
			}
		}
		for (int j = 0; j <= mx; ++j) {
			if (c[j] < j + 1) {
				cout << j << endl;
				d = true;
				break;
			}
		}
		if (d == false) {
			cout << mx + 1 << endl;
		}
	}
}
