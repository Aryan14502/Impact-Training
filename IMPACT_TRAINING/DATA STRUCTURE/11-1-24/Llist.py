class Node:
    def __init__(self, val=0):
        self.data = val
        self.next = None

class LList:
    def __init__(self):
        self.head = None

    def addNodeBeg(self):
        newNode = Node()
        newNode.data = int(input("Enter newNode value: "))
        if not self.head:
            self.head = newNode
            return
        newNode.next = self.head
        self.head = newNode

    def appendNode(self):
        newNode = Node()
        newNode.data = int(input("Enter newNode value: "))
        if not self.head:
            self.head = newNode
            return
        temp = self.head
        while temp.next is not None:
            temp = temp.next
        temp.next = newNode

    def printList(self):
        temp = self.head  # Initialize temp with the head
        print("List is : ")
        while temp is not None:
            print(f"{temp.data}->", end="")
            temp = temp.next
        print("None")
        
    def keyAddNode(self):
        key = int(input("Enter the key you want to find"))
        temp = self.head
        flag = False
        while(temp.next!=None):
            if (temp.data == key):
                flag = True
                break
            else :
                temp = temp.next
        if (flag == True):
            t = temp.next
            newNode = Node()
            newNode.data = int(input("Enter newNode value : "))
            newNode.next = t
            temp.next = newNode
        else:
            print("key not found")
        
    def sorting():
        


LL1 = LList()
LL1.appendNode()
LL1.appendNode()
LL1.appendNode()
LL1.appendNode()
LL1.printList()
LL1.keyAddNode()
LL1.printList()
