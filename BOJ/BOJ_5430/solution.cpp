#include <iostream>
#include <string>
#include <deque>
#include <algorithm>
using namespace std;

void parse(string& s, deque<int>& dq) {
	int cur{};
	for (int i{ 1 }; i < s.size() - 1; ++i) {
		if (s[i] == ',') {
			dq.push_back(cur);
			cur = 0;
		}
		else {
			cur = 10 * cur + (s[i] - '0');
		}
	}
	if (cur != 0) dq.push_back(cur);
}

void print_result(deque<int>& dq) {
	cout << '[';
	for (int i{}; i < dq.size(); ++i) {
		cout << dq[i];
		if (i + 1 != dq.size()) cout << ',';
	}
	cout << "]\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	cin >> T;

	while (T--) {
		string op;
		int n;
		string s;
		cin >> op;
		cin >> n;
		cin >> s;
		bool reversed{};
		bool isError{};
		deque<int> dq;
		parse(s, dq);
		for (char c : op) {
			if (c == 'R') {
				reversed = !reversed;
			}
			else {
				if (dq.empty()) {
					isError = true;
					break;
				}
				if (reversed) dq.pop_back();
				else dq.pop_front();
			}
		}
		if (isError) cout << "error\n";
		else {
			if (reversed) reverse(dq.begin(), dq.end());
			print_result(dq);
		}
	}
}