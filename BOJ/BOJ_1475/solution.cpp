#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin >> s;
	int arr[10]{};
	for (char c : s) {
		int num{ c - '0' };
		if (num == 6) {
			num = 9;
		}
		arr[num]++;
	}
	arr[9] = (arr[9] + 1) / 2;
	int result{ *max_element(arr, arr + 10) };
	cout << result;
}