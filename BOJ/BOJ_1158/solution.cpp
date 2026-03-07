#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, K;
	cin >> N >> K;
	vector<int> result;
	list<int> L;
	for (int i{}; i < N; ++i) {
		L.push_back(i + 1);
	}
	int count{};
	auto cursor{ L.begin() };
	while (!L.empty()) {
		count++;
		if (count % K == 0) {
			result.push_back(*cursor);
			cursor = L.erase(cursor);
		}
		else
			cursor++;
		if (cursor == L.end()) cursor = L.begin();
	}
	cout << '<';
	for (int i{}; i < result.size() - 1; ++i) {
		cout << result[i] << ", ";
	}
	cout << result.back() << '>';
}