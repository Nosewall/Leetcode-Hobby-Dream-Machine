class Solution(object):
    def generate(self, numRows):
        """
        :type numRows: int
        :rtype: List[List[int]]
        """
        all_rows = []
        previous_row = []
        for i in range(numRows):
            current_row = []
            for j in range(i + 1):
                if j == 0 or j == i:
                    current_row.append(1)
                else:
                    current_row.append(previous_row[j] + previous_row[j-1])
            all_rows.append(current_row)
            previous_row = current_row

        return all_rows

sol = Solution()
print(sol.generate(5))

