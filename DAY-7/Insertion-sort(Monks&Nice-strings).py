N = int(input())
arr = []
for i in range(N):
    arr.append(input())

nice = [0]*N
for i in range(1,N):
    for j in range(0,i):
        if arr[i]>arr[j]:
            nice[i] += 1

for n in nice:
    print(n)