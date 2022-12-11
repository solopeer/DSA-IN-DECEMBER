class Solution:
    def splitListToParts(self, root, k):
        cur = root
        N = 0
        while cur:
            cur = cur.next
            N += 1
        d, r = divmod(N, k)

        ans = []
        cur = root
        for i in range(k):
            head = cur
            for j in range(d + (i < r) - 1):
                if cur: cur = cur.next
            if cur:
                cur.next, cur = None, cur.next
            ans.append(head)
        return ans
