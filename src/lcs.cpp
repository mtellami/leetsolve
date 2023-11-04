#include "leetsolve.hpp"

// using Recursion
size_t lcs(string s1, string s2) {
  if (!s1.length() || !s2.length()) {
		return 0;
	}
  if (s1.back() == s2.back()) {
		return 1 + lcs(s1.substr(0, s1.length() - 1), s2.substr(0, s2.length() - 1));
	}
  return max(lcs(s1, s2.substr(0, s2.length() - 1)), lcs(s1.substr(0, s1.length() - 1), s2));
}

int main(int argc, char **argv) {
  if (argc != 3) {
		cerr << "try: ./lcs <string1> <string2>" << endl;
		return EXIT_FAILURE;
  }

  string s1(argv[1]);
  string s2(argv[2]);

  size_t result = lcs(s1, s2);
  cout << "Longest common subsequence: " << result << endl;

  return EXIT_SUCCESS;
}
