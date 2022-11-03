class Solution:
    def nextGreaterElement(self, nums1: List[int], nums2: List[int]) -> List[int]:
        answer = []
        for i in nums1:
            found = False
            currentHighest = None
            for j in nums2:
                if i == j:
                    found = True
                    continue
                if found:
                    if j > i:
                        if currentHighest is None:
                            currentHighest = j
                            break
                        elif j > currentHighest:
                            currentHighest = j
                            break
            if currentHighest is None:
                answer.append(-1)
            else:
                answer.append(currentHighest)
        return answer