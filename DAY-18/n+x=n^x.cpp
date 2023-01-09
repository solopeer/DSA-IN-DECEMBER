#include <bits/stdc++.h>
using namespace std;
int countValues(int n)
{
	int unset_bits=0;
	while (n)
	{
		if ((n & 1) == 0)
			unset_bits++;
		n=n>>1;
	}

	return 1 << unset_bits;
}

// Driver code
int main()
{
	int n = 15;
	cout << countValues(n);
	return 0;
}
