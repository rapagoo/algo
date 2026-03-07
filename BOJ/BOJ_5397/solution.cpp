#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N{};
	cin >> N;
	while (N--) {
		string s;
		cin >> s;
		list<char> L;
		auto cursor{ L.begin() };
		for (auto t : s) {
			if (t == '<') {
				if (cursor != L.begin()) cursor--;
			}
			else if (t == '>') {
				if (cursor != L.end()) cursor++;
			}
			else if (t == '-') {
				if (cursor != L.begin()) cursor = L.erase(--cursor);
			}
			else {
				L.insert(cursor, t);
			}
		}
		for (auto t : L) {
			cout << t;
		}
		cout << "\n";
	}
}