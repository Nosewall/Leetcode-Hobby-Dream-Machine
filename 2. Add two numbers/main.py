
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
        length1 = self.get_linked_list_length(l1)
        length2 = self.get_linked_list_length(l2)
        arr1 = [length1]
        arr2 = [length2]


    def get_linked_list_length(linkedList):
        length = 0
        while linkedList.next is not None:
            length = length + 1
            linkedList = linkedList.next
        return length

    def assign_linked_list_to_array(self, linkedList, array):
        if(linkedList.next is None):
            array[0] = linkedList.val

    def assign_linked_list_to_array_helper(self, index, linkedList, array):
        if(linkedList.next is None):
            array[len(array) - 1] = linkedList.val


    
