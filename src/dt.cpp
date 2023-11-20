#include "leetsolve.hpp"

// Dynamic programming
int dt(int m, int n, int x) {
	vector<vector<int>> table(n + 1, vector<int>(x + 1, 0));

	for (int i = 1; i <= m && i <= x; i++) {
		table.at(1).at(i) = 1;
	}

	for (int i = 2; i <= n; i++) {
		for (int j = 1; j <= x; j++) {
			for (int k = 1; k <= m && k < j; k++) {
				table.at(i).at(j) += table.at(i - 1).at(j - k);
			}
		}
	}

	return table.at(n).at(x);
} 

int main () {
	int m = 4, n = 3, x = 5;

	int result = dt(m, n, x);

	cout << "The number of ways to get sum " << x << ": "<< result << endl;

	return EXIT_SUCCESS;
}
