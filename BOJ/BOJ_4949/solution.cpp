#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	while (true) {
		string s;
		getline(cin, s);
		stack<char> st;
		bool isError{};
		if (s == ".") break;
		for (char c : s) {
			if (c == '(' || c == '[') {
				st.push(c);
			}
			else if (c == ')') {
				if (st.empty() || st.top() != '(') {
					isError = true;
					break;
				}
				st.pop();
			}
			else if (c == ']') {
				if (st.empty() || st.top() != '[') {
					isError = true;
					break;
				}
				st.pop();
			}
		}
		if (!st.empty()) isError = true;
		if (!isError) cout << "yes\n";
		else cout << "no\n";
	}
}