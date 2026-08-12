class Solution(object):
    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        i = 0
        j = 1

        # 0 1 0 3 12
        # 1 0 0 3 12 increment j until non 0
        # 1 3 0 0 12 increment i


        while j < len(nums):
            if nums[i] == 0:
                if (nums[j] == 0):
                    j+= 1
                else:
                    nums[i] = nums[j]
                    nums[j] = 0
                    i += 1
                    j = i + 1
            else:
                i += 1
                j += 1
        return nums
    
        