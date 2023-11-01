#include <iostream>

using namespace std;

size_t lcs(string s1, string s2, size_t len1, size_t len2) {
  if (!len1 || !len2)
	return 0;

  if (s1[len1 - 1] == s2[len2 - 1])
	return 1 + lcs(s1, s2, len1 - 1, len2 - 1);

  size_t x = lcs(s1, s2, len1, len2 - 1);
  size_t y = lcs(s1, s2, len1 - 1, len2);
  return max(x, y);
}

int main(int argc, char **argv) {
  if (argc != 3) {
	std::cerr << "usage: ./lcs <string1> <string2>" << std::endl;
	return EXIT_FAILURE;
  }

  std::string s1(argv[1]);
  std::string s2(argv[2]);

  size_t result = lcs(s1, s2, s1.length(), s2.length());

  cout << "Longest common subsequence: " << result << endl;
  return EXIT_SUCCESS;
}
