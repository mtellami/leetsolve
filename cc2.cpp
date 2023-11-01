#include <iostream>
#include <vector>

using namespace std;

int count(int amount, vector<int> coins, int size) {
	if (!amount) return 1;
	if (amount < 0 || size <= 0) return 0;

	int include = count(amount - coins.at(size - 1), coins, size);
	int exclude = count(amount, coins, size - 1);

	return include + exclude;
}

int main() {
	vector<int>	coins = {1, 2, 3};
	int amount = 5;

	int result = count(amount, coins, coins.size());

	cout << result << endl;
	return EXIT_SUCCESS;
}
