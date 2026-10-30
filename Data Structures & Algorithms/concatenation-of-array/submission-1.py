class Solution:
    def getConcatenation(self, nums: List[int]) -> List[int]:
        nums_length = len(nums)
        ans = [1] * (2 * nums_length)
        for i in range(len(nums)):
            ans[i] = ans[i+nums_length] = nums[i]

        return ans