#include "leetsolve.hpp"

int mcp(vector<vector<int>> costs) {
	vector<vector<int>> res(costs.size(), vector<int>(costs.begin()->size(), 0));

	res.begin()->at(0) = costs.begin()->at(0);

	for (int i = 1; i < (int)costs.begin()->size(); i++) {
		res[0][i] = costs[0][i] + res[0][i - 1];
	}

	for (int i = 1; i < (int)costs.size(); i++) {
		res[i][0] = costs[i][0] + res[i - 1][0];
	}

	for (int i = 1; i < (int)costs.size(); i++) {
		for (int j = 1; j < (int)costs[i].size(); j++) {
			res[i][j] = costs[i][j] + min(res[i - 1][j], res[i][j - 1]);
		}
	}

	return *((res.end() - 1)->end() - 1);
}

int main() {
	vector<vector<int>> costs;
	costs = {
		{1, 2, 3}, 
		{4, 8, 2},
		{1, 5, 3},
	};

	int result  = mcp(costs);
	cout << "Minimum cost path: " << result << endl;
	return EXIT_SUCCESS;
}
