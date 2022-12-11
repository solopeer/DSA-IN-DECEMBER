class ListNode:
    def __init__(self, val: int, nxt: ListNode = None):
        self.val = val
        self.next = nxt
class MyCircularQueue:
    def __init__(self, k: int):
        self.maxSize = k
        self.size = 0
        self.head = None
        self.tail = None
    def enQueue(self, val: int) -> bool:
        if self.isFull(): return False
        newNode = ListNode(val)
        if self.isEmpty(): self.head = self.tail = newNode
        else: 
            self.tail.next = newNode
            self.tail = self.tail.next
        self.size += 1
        return True
    def deQueue(self) -> bool:
        if self.isEmpty(): return False
        self.head = self.head.next
        self.size -= 1
        return True
    def Front(self) -> int:
        return -1 if self.isEmpty() else self.head.val
    def Rear(self) -> int:
        return -1 if self.isEmpty() else self.tail.val
    def isEmpty(self) -> bool:
        return self.size == 0
    def isFull(self) -> bool:
        return self.size == self.maxSize
