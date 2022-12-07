from bisect import bisect_right
for _ in range(int(input())):
    n,k=map(int,input().split())
    arr=list(map(int,input().split()))
    arr.sort()
    prefix=[0]
    for el in arr:
        prefix.append(prefix[-1]+el)
    for o in range(k):
        q=int(input())-1
        ind=bisect_right(prefix,q)-1
        print(max(ind,0))