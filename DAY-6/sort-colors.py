<<<<<<< HEAD
class Solution(object):
    def sortColors(self, nums):
        def triPartition(nums, target):
            i, j, n = 0, 0, len(nums) - 1
            while j <= n:
                if nums[j] < target:
                    nums[i], nums[j] = nums[j], nums[i]
                    i += 1
                    j += 1
                elif nums[j] > target:
                    nums[j], nums[n] = nums[n], nums[j]
                    n -= 1
                else:
                    j += 1

        triPartition(nums, 1)

if __name__ == "__main__":
    A = [2, 1, 1, 0, 0, 2]
    Solution().sortColors(A)
=======
class Solution(object):
    def sortColors(self, nums):
        def triPartition(nums, target):
            i, j, n = 0, 0, len(nums) - 1
            while j <= n:
                if nums[j] < target:
                    nums[i], nums[j] = nums[j], nums[i]
                    i += 1
                    j += 1
                elif nums[j] > target:
                    nums[j], nums[n] = nums[n], nums[j]
                    n -= 1
                else:
                    j += 1

        triPartition(nums, 1)

if __name__ == "__main__":
    A = [2, 1, 1, 0, 0, 2]
    Solution().sortColors(A)
>>>>>>> c054e307eb20f7e40fb1f50c51b52e1b52906c35
    print (A)