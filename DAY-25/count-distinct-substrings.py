def distinctSimilarSubstrings(str):

	n = len(str)

	if(n <= 1):
		return 0
	dp = [[0 for x in range(n + 1)]
			for y in range(n + 1)]

	substrings = set()

	for j in range(n - 1, -1, -1):

		for i in range(j - 1, -1, -1):

			if(str[i] == str[j]):
				dp[i][j] = dp[i + 1][j + 1] + 1

			else:
				dp[i][j] = 0

			if(dp[i][j] >= j - i):
				substrings.add(str[i : j - i])

	return len(substrings)

# Driver Code
str = "geeksgeeksforgeeks"
# Function call
print(distinctSimilarSubstrings(str))
