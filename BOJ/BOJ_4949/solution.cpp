#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;
	int res{};
	while (N--) {
		string s;
		cin >> s;
		stack<char> st;
		for (char c : s) {
			if (!st.empty() && st.top() == c) {
				st.pop();
			}
			else {
				st.push(c);
			}
		}
		if (st.empty()) res++;
	}
	cout << res;
}