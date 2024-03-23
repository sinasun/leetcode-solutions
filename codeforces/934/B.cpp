#include <bits/stdc++.h>

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char* argv[]) {
	int t;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		int n, k;
		vector<int> ans_left;
		vector<int> ans_right;
		cin >> n >> k;
		int r_left = k * 2;
		int r_right = k * 2;
		vector<int> left;
		vector<int> right;
		unordered_set<int> set_left;
		unordered_set<int> set_right;

		for (int j = 0; j < 2 * n; ++j) {
			int temp;
			cin >> temp;
			if (j < n) {
				left.push_back(temp);
				if (set_left.find(temp) != set_left.end()) {
					if (r_left >= 2) {
						ans_left.push_back(temp);
						ans_left.push_back(temp);
						r_left -= 2;
						set_left.erase(set_left.find(temp));
					}
				} else {
					set_left.insert(temp);
				}
			} else {
				right.push_back(temp);
				if (set_right.find(temp) != set_right.end()) {
					if (r_right >= 2) {
						ans_right.push_back(temp);
						ans_right.push_back(temp);
						r_right -= 2;
						set_right.erase(set_right.find(temp));
					}
				} else {
					set_right.insert(temp);
				}
			}
		}

		for (int j = 1; j <= n && r_left > 0; ++j) {
			if (set_left.find(j) != set_left.end() &&
				set_right.find(j) != set_right.end()) {
				ans_right.push_back(j);
				ans_left.push_back(j);
				r_left--;
			}
		}
		for (int j = 0; j < ans_left.size(); ++j) {
			cout << ans_left[j] << " ";
		}
		cout << endl;

		for (int j = 0; j < ans_right.size(); ++j) {
			cout << ans_right[j] << " ";
		}
		cout << endl;
	}
}
