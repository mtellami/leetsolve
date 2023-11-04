#pragma once

#include <iostream>
#include <vector>
#include <limits.h>
#include <sys/resource.h>
#include <chrono>

using namespace std;

template <typename T, typename... Args>
T measure(T (*func)(Args...), Args... args) {
  // struct rusage start, end;
  // getrusage(RUSAGE_SELF, &start);

  auto start_time = chrono::high_resolution_clock::now();

	// Function call
  T result = func(args...);
	cout << result << endl;

  auto end_time = chrono::high_resolution_clock::now();
  // getrusage(RUSAGE_SELF, &end);

	auto execution_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
  cout << "Time taken by the function: " << execution_time << " microseconds" << endl;

  return result;
}
