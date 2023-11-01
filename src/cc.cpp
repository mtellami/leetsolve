#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

int cc(int amount, vector<int> coins) {
	int size = coins.size();
	vector<int> dp(amount + 1, INT_MAX);
	dp.at(0) = 0;

	for (int i = 1; i <= amount; i++) {
		for (int j = 0; j < size; j++) {
			if (coins.at(j) <= i)
				dp.at(i) = min(dp.at(i), 1 + dp.at(i - coins.at(j)));
		}
	}
	return dp.at(amount);
}

int main() {
	int amount = 50;
	vector<int> coins = {1, 2, 3, 4, 5};

	int result = cc(amount, coins);
	cout << "Minimum coins: " << result << endl;

	return EXIT_SUCCESS;
}
