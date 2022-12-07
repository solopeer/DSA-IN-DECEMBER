<<<<<<< HEAD
def searchRange(self, nums, target):
    def search(lo, hi):
        if nums[lo] == target == nums[hi]:
            return [lo, hi]
        if nums[lo] <= target <= nums[hi]:
            mid = (lo + hi) / 2
            l, r = search(lo, mid), search(mid+1, hi)
            return max(l, r) if -1 in l+r else [l[0], r[1]]
        return [-1, -1]
    return search(0, len(nums)-1)
def findFirstAndLast(arr, n, x):
    first = -1
    last = -1
    for i in range(0, n):
        if (x != arr[i]):
            continue
        if (first == -1):
            first = i
        last = i

    if (first != -1):
        print("First Occurrence = ", first,
            " \nLast Occurrence = ", last)
    else:
        print("Not Found")
arr = [1, 2, 2, 2, 2, 3, 4, 7, 8, 8]
n = len(arr)
x = 8
=======
def searchRange(self, nums, target):
    def search(lo, hi):
        if nums[lo] == target == nums[hi]:
            return [lo, hi]
        if nums[lo] <= target <= nums[hi]:
            mid = (lo + hi) / 2
            l, r = search(lo, mid), search(mid+1, hi)
            return max(l, r) if -1 in l+r else [l[0], r[1]]
        return [-1, -1]
    return search(0, len(nums)-1)
def findFirstAndLast(arr, n, x):
    first = -1
    last = -1
    for i in range(0, n):
        if (x != arr[i]):
            continue
        if (first == -1):
            first = i
        last = i

    if (first != -1):
        print("First Occurrence = ", first,
            " \nLast Occurrence = ", last)
    else:
        print("Not Found")
arr = [1, 2, 2, 2, 2, 3, 4, 7, 8, 8]
n = len(arr)
x = 8
>>>>>>> c054e307eb20f7e40fb1f50c51b52e1b52906c35
findFirstAndLast(arr, n, x)