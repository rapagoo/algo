#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin >> s;
	list<char> L;
	for (auto t : s) {
		L.push_back(t);
	}
	auto cursor{ L.end() };
	int N{};
	cin >> N;
	while (N--) {
		char op{};
		cin >> op;
		if (op == 'P') {
			char input{};
			cin >> input;
			L.insert(cursor, input);
		}
		else if (op == 'L') {
			if (cursor != L.begin()) cursor--;
		}
		else if (op == 'D') {
			if (cursor != L.end()) cursor++;
		}
		else {
			if (cursor != L.begin()) {
				cursor--;
				cursor = L.erase(cursor);
			}
		}
	}
	for (auto t : L) {
		cout << t;
	}
}