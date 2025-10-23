class Solution(object):
    def hasSameDigits(self, s):
        """
        :type s: str
        :rtype: bool
        """
        while len(s) > 2:
            new_s = []
            for i in range(len(s) - 1):
                new_digit = (int(s[i]) + int(s[i + 1])) % 10
                new_s.append(str(new_digit))
            s = ''.join(new_s)
        return s[0] == s[1]

# Example usage
solution = Solution()
print(solution.hasSameDigits("3902"))  # Output: True
print(solution.hasSameDigits("34789"))  # Output: False
