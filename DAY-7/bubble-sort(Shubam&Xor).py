c = int(input())
ans = 0
for a in range(c + 1):
    ans = max(ans, a * (a ^ c))
print(ans)