#include <iostream>

using namespace std;

// using bell triangle
size_t bell_numbers(size_t n) {
	size_t board[n][n];
	board[0][0] = 1;

	for (size_t i = 1; i < n; i++) {
		board[i][0] = board[i - 1][i - 1];
		for (size_t j = 1; j < n; j++) {
			board[i][j] = board[i - 1][j - 1] + board[i][j - 1];
		}
	}

	return board[n - 1][n - 1];
}

int main(int argc, char **argv) {
	if (argc != 2) {
		cerr << "usage: ./bn <number>" << endl;
		return EXIT_FAILURE;
	}

	size_t n = atol(argv[1]);
	size_t result = bell_numbers(n);

	cout << "Bell numbers of " << n << " elements is " << result << endl;

	return EXIT_SUCCESS;
}
