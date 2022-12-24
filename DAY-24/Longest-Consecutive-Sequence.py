def longestConsecutive(nums):
    """Using sorting
    Time complexity: O(nlgn); Space complexity: O(1)"""
    if not nums:
        return 0

    nums.sort()

    longest = 1
    current = 1

    for i in range(1, len(nums)):
        if nums[i] != nums[i - 1]:
            if nums[i] == nums[i - 1] + 1:
                current += 1
            else:
                longest = max(longest, current)
                current = 1

    return max(longest, current)


def longestConsecutive2(nums):
    """Using hash O(n)"""
    longest = 0
    num_set = set(nums)

    for num in num_set:
        if num - 1 not in num_set:
            current_num = num
            current = 1

            while current_num + 1 in num_set:
                current_num += 1
                current += 1
            longest = max(longest, current)

    return longest


if __name__ == '__main__':
    print(longestConsecutive([100, 4, 200, 1, 3, 2]))
    print(longestConsecutive2([100, 4, 200, 1, 3, 2]))
