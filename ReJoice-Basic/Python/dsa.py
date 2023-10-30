class Node:
    def __init__(self, value: int) -> None:
        self.value = value
        self.next = next

class SLL:
    def __init__(self) -> None:
        self.head = None

root = SLL()
root.head = Node(5)
