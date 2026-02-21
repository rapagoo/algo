#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, M;
	cin >> N >> M;
	deque<int> dq;
	for (int i{}; i < N; ++i) {
		dq.push_back(i + 1);
	}
	int count{};
	for (int i{}; i < M; ++i) {
		int x;
		cin >> x;
		int index = find(dq.begin(), dq.end(), x) - dq.begin();
		if (index > dq.size() - index) {
			for (int j{}; j < dq.size() - index; ++j) {
				dq.push_front(dq.back());
				dq.pop_back();
				count++;
			}

		}
		else {
			for (int j{}; j < index; ++j) {
				dq.push_back(dq.front());
				dq.pop_front();
				count++;
			}
		}

		dq.pop_front();
	}
	cout << count;
}