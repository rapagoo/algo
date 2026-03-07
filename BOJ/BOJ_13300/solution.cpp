#include <iostream>
using namespace std;

int students[2][7]{};
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, K;
	cin >> N >> K;
	for (int i{}; i < N; ++i) {
		int A, B;
		cin >> A >> B;
		students[A][B]++;
	}
	int rooms{};
	for (int i{}; i < 2; ++i) {
		for (int j{}; j < 7; ++j) {
			int count = students[i][j];
			if (count == 0) continue;
			rooms += (count + K - 1) / K;
		}
	}
	cout << rooms;
}