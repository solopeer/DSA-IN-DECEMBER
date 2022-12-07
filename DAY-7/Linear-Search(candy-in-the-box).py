from itertools import cycle
from sys import stdin
input=stdin.readline
T=int(input())
for i in range(T):
    N, K= [int(x) for x in input().split()]
    if K<N:
        print(K)
        continue
    K%=(2*N-2)
    if K>N:
        K=N-(K-N)
    if K==0:
        K=2
    print(K)