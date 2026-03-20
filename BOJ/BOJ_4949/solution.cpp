#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	while (true)
	{
		string s;
		getline(cin, s);
		if (s == ".") break;
		bool isError{};
		stack<char> st;
		for (char c : s)
		{
			if (c == '(' || c == '[')
			{
				st.push(c);
			}
			else if (c == ')')
			{
				if (!st.empty() && st.top() == '(')
				{
					st.pop();
				}
				else
				{
					isError = true;
					break;
				}
			}
			else if (c == ']')
			{
				if (!st.empty() && st.top() == '[')
				{
					st.pop();
				}
				else 
				{
					isError = true;
					break;
				}
			}
		}
		if (isError||!st.empty()) cout << "no\n";
		else cout << "yes\n";
	}
}