class Solution(object):
    def intersect(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        nums1_map = {}
        result = []
        for num in nums1:
            nums1_map[num] = 1 + nums1_map.get(num, 0)

        for num in nums2:
            try:
                val = nums1_map[num]
                if val > 0:
                    result.append(num)
                nums1_map[num] -= 1
            except:
                continue

        return result