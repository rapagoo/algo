#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	cin >> s;
	int count{};
	int ans{};
	char prev{};
	for (char c : s) {
		if (c == '(') count++;
		else if (prev == '(') {
			count--;
			ans = ans + count;
		}
		else {
			count--;
			ans += 1;
		}
		prev = c;
	}
	cout << ans; 
}