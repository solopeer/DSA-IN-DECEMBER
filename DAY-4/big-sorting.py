t = int(input())
unsorted = []
for _ in range(t):
    unsorted.append(input())
    
unsorted.sort(key=int)
for s in unsorted:
    print(s)
