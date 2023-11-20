#include "leetsolve.hpp"

// Using Recursion
int ed(string s1, string s2, size_t m, size_t n) {
	if (!m) return n;
	if (!n) return m;

	if (s1.at(m - 1) == s2.at(n - 1)) {
		return ed(s1, s2, m - 1, n - 1);
	}

	int x = ed(s1, s2, m, n - 1);
	int y = ed(s1, s2, m - 1, n);
	int z = ed(s1, s2, m - 1, n - 1);

	return 1 + min(min(x, y), z);
}

int main () {
	string s1("helho");
	string s2("elhell");

	int result = ed(s1, s2, s1.length(), s2.length());
	cout << "Number of moves (insert, remove, replace): ";
	cout << result << endl;

	return EXIT_SUCCESS;
}
