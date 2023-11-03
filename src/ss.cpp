#include "leetsolve.hpp"

// Using Recursion
bool ss(vector<int> set, int sum) {
	if (set.empty()) return false;
	if (!sum) return true;

	if (*(set.end() - 1) > sum) {
		return ss(vector<int>(set.begin(), set.end() - 1), sum);
	}

	return ss(vector<int>(set.begin(), set.end() - 1), sum)
		|| ss(vector<int>(set.begin(), set.end() - 1), sum - set.at(set.size() - 1));
}

int main () {
	vector<int> set({3, 5, 2, 9, 4});
	int sum = 9;

	bool result = ss(set, sum);
	cout << "There is " << (result ? "a" : "no");
	cout << " subset with given sum"  << endl;

	return EXIT_SUCCESS; 
}
