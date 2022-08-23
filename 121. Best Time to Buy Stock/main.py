class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        highest = prices[0]
        lowest = prices[0]
        current_value = 0
        current_index = 0

        for i in range(len(prices)):
            if prices[i] < lowest:
                lowest = prices[i]
                highest = prices[i]
            elif prices[i] > highest:
                highest = prices[i]

            if highest - lowest > current_value:
                current_value = highest - lowest
                current_index = i

        return current_value


sol = Solution()
print(sol.maxProfit([2, 7, 1, 2, 1]))
