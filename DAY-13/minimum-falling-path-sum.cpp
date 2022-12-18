#include <bits/stdc++.h>
using namespace std;

const int n = 3;

int minFallingPathSum(int (&A)[n][n])
{
	for (int R = n - 2; R >= 0; --R) {
		for (int C = 0; C < n; ++C) {

			int best = A[R + 1][C];
			if (C > 0)
				best = min(best, A[R + 1][C - 1]);
			if (C + 1 < n)
				best = min(best, A[R + 1][C + 1]);
			A[R][C] = A[R][C] + best;
		}
	}

	int ans = INT_MAX;
	for (int i = 0; i < n; ++i)
		ans = min(ans, A[0][i]);
	return ans;
}

int main()
{

	int A[n][n] = { { 1, 2, 3 },
					{ 4, 5, 6 },
					{ 7, 8, 9 } };

	cout << minFallingPathSum(A);

	return 0;
}

