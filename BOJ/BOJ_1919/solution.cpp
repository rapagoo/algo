#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s1;
	string s2;
	cin >> s1 >> s2;
	int result{};
	int check1[26]{};
	int check2[26]{};
	for (int i{}; i < s1.size(); ++i) {
		check1[s1[i] - 'a']++;
	}
	for (int i{}; i < s2.size(); ++i) {
		check2[s2[i] - 'a']++;
	}
	for (int i{}; i < 26; ++i) {
		result += abs(check1[i] - check2[i]);
	}
	cout << result;
}