#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int dwarf[9]{};
	int total{};
	for (int i{}; i < 9; ++i) {
		cin >> dwarf[i];
		total += dwarf[i];
	}
	for (int i{}; i < 8; ++i) {
		for (int j{ i + 1 }; j < 9; ++j) {
			if (total - (dwarf[i] + dwarf[j]) == 100) {
				dwarf[i] = 0;
				dwarf[j] = 0;
				sort(dwarf, dwarf + 9);
				for (int k{ 2 }; k < 9; ++k) {
					cout << dwarf[k] << "\n";
				}
				return 0;
			}
		}
	}
}