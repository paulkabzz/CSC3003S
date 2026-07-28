class Solution:
    def reverse(self, x: int) -> int:
        if not x:
            return 0

        digit = []
        y = abs(x)

        while (y != 0):
            digit.append(str(y % 10))
            y = y // 10

        res = int("".join(digit)) if x >= 0 else -int("".join(digit))

        if res <= pow(2, 31) -1 and res >= -pow(2, 31):
            return res
        else:
            return 0


        