class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        res = ""

        shortest = min(strs, key=len)

        for i in range(len(shortest)):
            for s in strs:
                if shortest[i] != s[i]:
                    return res
            res += s[i]
       

        return res
        