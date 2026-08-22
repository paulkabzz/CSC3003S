class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:

        # iteratre through nums
        # if nums == val
        # replace with last element
        # [3, 2, 2, 3]
        # [2, 2, 2, 3]

        
        i = 0
        j = len(nums) -1
        
        while ( (i <= j) ):
            if nums[i] == val:
                if nums[j] == val:
                    j -= 1
                else:
                    nums[i] = nums[j]
                    nums[j] = val
            else:
                i += 1

        return i

    #

