#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<int> v(20);
	for (int i{}; i < 20; ++i) {
		v[i] = i + 1;
	}
	for (int i{}; i < 10; ++i) {
		int start{};
		int end{};
		cin >> start >> end;
		reverse(v.begin() + start - 1, v.begin() + end);
	}
	for (auto t : v)
		cout << t << ' ';
}