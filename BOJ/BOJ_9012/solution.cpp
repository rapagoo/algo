#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	cin >> T;
	while (T--) {
		string s;
		cin >> s;
		int count{};
		bool isError{};
		for (char c : s) {
			if (c == '(') {
				count++;
			}
			else {
				count--;
				if (count < 0) {
					isError = true;
					break;
				}
			}
		}
		if (!isError && count == 0) cout << "YES\n";
		else cout << "NO\n";
	}
}