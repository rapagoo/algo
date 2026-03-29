#include <iostream>
#include <string>
#include <deque>
#include <algorithm>
using namespace std;

void parse(string& s, deque<int>& dq)
{
	int current{};
	for (int i{ 1 }; i < s.size() - 1; ++i)
	{
		if (s[i] == ',')
		{
			dq.push_back(current);
			current = 0;
		}
		else
		{
			current = 10 * current + (s[i] - '0');
		}
	}
	if (current != 0) dq.push_back(current);
}

void print_result(deque<int>& dq)
{
	cout << '[';
	for (int i{}; i < dq.size(); ++i)
	{
		cout << dq[i];
		if (i + 1 != dq.size()) cout << ',';
	}
	cout << "]\n";
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	cin >> T;
	while (T--)
	{
		string op;
		int n;
		deque<int> dq;
		string s;
		cin >> op >> n >> s;
		parse(s, dq);
		bool reversed{};
		bool isError{};
		for (char c : op)
		{
			if (c == 'R')
			{
				reversed = !reversed;
			}
			else
			{
				if (dq.empty())
				{
					isError = true;
					break;
				}
				if (reversed) dq.pop_back();
				else dq.pop_front();
			}
		}
		if (isError) cout << "error\n";
		else
		{
			if (reversed) reverse(dq.begin(), dq.end());
			print_result(dq);
		}
	}
}