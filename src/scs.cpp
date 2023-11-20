#include "leetsolve.hpp"

int scs(string s1, string s2, size_t m, size_t n) {
	if (!m) return n;
	if (!n) return m;

	if (s1.at(m - 1) == s2.at(n - 1)) {
		return 1 + scs(s1, s2, m - 1, n - 1);
	}

	int x = scs(s1, s2, m - 1, n);
	int y = scs(s1, s2, m, n - 1);

	return 1 + min(x, y);
}

int main () {
	string s1("eel");
	string s2("hello");

	int result = scs(s1, s2, s1.length(), s2.length());

	cout << "length of the shortest supersequence is: ";
	cout << result << endl;

	return EXIT_SUCCESS;
}
