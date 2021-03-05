#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		string s;
		cin >> s;
		int cnt = 0;
		int one = 0;
		for (int i = 0; i < (int) s.size(); i++) {
			if (s[i] == '1') {
				// count the number of 1's
				one++;
			} else {
				if (one >= 1) {
					// check if the number of 1's is >= 1 (this means that a person is sitting)
					// and whenever it encounters a 0, then increment the 'cnt' variable
					// to the count ther number of groups
					cnt++;
				}
				one = 0;
			}
		}
		// check one last time if there are people sitting until the last seat
		cout << (one > 0 ? cnt + 1 : cnt) << '\n';
	}
	return 0;
}
