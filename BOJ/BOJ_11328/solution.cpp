#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N{};
	cin >> N;
	while (N--) {
		string s1;
		cin >> s1;
		int A[26]{};
		for (char c : s1) {
			A[c - 'a']++;
		}
		string s2;
		cin >> s2;
		int B[26]{};
		for (char c : s2) {
			B[c - 'a']++;
		}
		if (equal(begin(A), end(A), begin(B))) {
			cout << "Possible\n";
		}
		else cout << "Impossible\n";
	}
}