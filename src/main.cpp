#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int a, b;
	cin >> a >> b;

	auto p = a + b;
	auto m = a - b;

	cout << (p < m ? m : p) << '\n'
		<< (p < m ? p : m);

	return 0;
}