/*Generate a permutation of first N natural numbers having count of unique adjacent
differences equal to K | Set 2 using a queue*/
// C++ Program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to calculate the required array
void K_ValuesArray(int N, int K)
{

	// Check for base cases
	if (K < 1 || K >= N) {
		cout << -1;
		return;
	}

	// Maintain a deque to store the
	// elements from [1, N];
	deque<int> dq;
	for (int i = 2; i <= N; i++) {
		dq.push_back(i);
	}

	// Maintain a boolean value which will
	// tell from where to pop the element
	bool front = true;

	// Create a vector to store the answer
	vector<int> ans;

	// Push 1 in the answer initially
	ans.push_back(1);

	// Push the remaining elements
	if (K > 1) {
		front ^= 1;
		K--;
	}

	// Iterate over the range
	for (int i = 2; i <= N; i++) {
		if (front) {
			int val = dq.front();
			dq.pop_front();

			// Push this value in
			// the ans vector
			ans.push_back(val);
			if (K > 1) {
				K--;

				// Flip the boolean
				// value
				front ^= 1;
			}
		}
		else {
			int val = dq.back();
			dq.pop_back();

			// Push value in ans vector
			ans.push_back(val);
			if (K > 1) {
				K--;

				// Flip boolean value
				front ^= 1;
			}
		}
	}

	// Print Answer
	for (int i = 0; i < N; i++) {
		cout << ans[i] << " ";
	}
}

// Driver Code
int main()
{
	int N = 3, K = 2;
	K_ValuesArray(N, K);

	return 0;
}
