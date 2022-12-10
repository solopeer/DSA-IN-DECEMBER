def compareStacks(s1, s2):
	N = len(s1)
	M = len(s2)
	if (N != M):
		return "No"
	for i in range(1, N + 1):
		pushElements(s1, s2, N - i)
		val = s1[-1]
		pushElements(s2, s1, 2 * (N - i))
		if (val != s2[-1]):
			return "No"
		pushElements(s1, s2, N - i)
	return "Yes"
def pushElements(s1, s2, len):
	i = 1
	while (i <= len):
		s2.append(s1[-1])
		del s1[-1]
		i += 1
if __name__ == '__main__':
	S1 = []
	S2 = []

	S1.append(1)
	S1.append(2)
	S1.append(4)
	S1.append(3)

	S2.append(1)
	S2.append(2)
	S2.append(4)
	S2.append(3)

	print(compareStacks(S1, S2))