class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution(object):
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        arr1 = []
        self.assign_linked_list_to_array(l1, arr1)
        arr2 = []
        self.assign_linked_list_to_array(l2, arr2)
        str1 = self.create_string_from_array(arr1)
        str2 = self.create_string_from_array(arr2)
        num1 = int(str1)
        num2 = int(str2)
        finalNum = num1 + num2
        finalStr = str(finalNum)
        finalArr = []
        for i in range(len(finalStr)):
            finalArr.append(str(finalStr[i]))
        return self.assign_list_to_linked_list(reversed(finalArr))

    def assign_linked_list_to_array(self, root, array):
        if root is None:
            return
        self.assign_linked_list_to_array(root.next, array)
        array.append(root.val)

    def create_string_from_array(self, arr):
        string = ""
        for i in range(len(arr)):
            string += str(arr[i])
        return string

    def assign_list_to_linked_list(self, arr):
        cur = dummy = ListNode(0)
        for e in arr:
            cur.next = ListNode(e)
            cur = cur.next
        return dummy.next





    
