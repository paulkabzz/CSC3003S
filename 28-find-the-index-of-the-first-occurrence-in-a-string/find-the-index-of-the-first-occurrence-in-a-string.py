class Solution:
    def strStr(self, haystack: str, needle: str) -> int:

        # last_idx = 0
        # i = 0
        # j = 0


        # while (i < len(haystack)  and j < len(needle)):
        #     if haystack[i] == needle[j]:

        #         j += 1
                
        #         if haystack[last_idx:last_idx+j] == needle:
        #             return last_idx
        #     else:
        #         i = last_idx
        #         last_idx += 1
        #         j = 0

        #     i+=1

        # return -1

        if not (needle in haystack):
            return -1
        else:
            return haystack.index(needle)
        