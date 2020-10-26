#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin >> s;
	for (int i = 0; i < (int) s.size(); i++) {
		if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B') {
			i += 2;
			cout << " ";
		} else {
			cout << s[i];
		}
	}
	cout << '\n';
	return 0;
}
