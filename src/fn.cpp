#include "leetsolve.hpp"

// Using Recursion : Time complexity Exponential

// int fn(int n) {
// 	return n <= 1 ? n : fn(n - 1) + fn(n - 2);
// }


// Dynamic programming : Time complexity O(n)

int fn(int n) {
	vector<int> seq(n + 2, 0);
	seq.at(1) = 1;

	for (int i = 2; i <= n; i++) {
		seq.at(i) = seq.at(i - 1) + seq.at(i - 2);
	}

	return seq.at(n);
}

int main () {
	int number = 9;

	int result  = fn(number);
	cout << "Nth fibonacci number: " << result << endl;

	return EXIT_SUCCESS;
}
