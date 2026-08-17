class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        s = list(set(nums))
        s.sort()

        for j in range(len(s)):
            nums[j] = s[j]      

        return len(s)
        