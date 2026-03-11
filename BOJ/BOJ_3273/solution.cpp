#include <iostream>
using namespace std;

int arr[100000]{};
bool check[2000000]{};

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;
	for (int i{}; i < N; ++i) {
		cin >> arr[i];
	}

	int x;
	cin >> x;
	int res{};
	for (int i{}; i < N; ++i) {
		if (x - arr[i] > 0 && check[x - arr[i]])
		{
			res++;
		}
		check[arr[i]] = true;
	}
	cout << res;
}