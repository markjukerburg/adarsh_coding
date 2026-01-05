import heapq

class ListNode:
    def __init__(self,val,nxt=None):
        self.val = val
        self.next = nxt
    def __lt__(self,other):
        return self.val < other.val




def combineList(lstNodes):
   heap = []
   for head in lstNodes:
       if head:
         heapq.heappush(heap,head)

   dummy = ListNode(-1)
   curr = dummy
   while heap:
       node =heapq.heappop(heap)
       curr.next = node
       curr = node
       if(node.next):
        heapq.heappush(heap,node.next)
   return dummy.next

head1 = ListNode(1)
newnode = ListNode(6)
head1.next =newnode

head2 = ListNode(1)
newnode = ListNode(2)
newNode2 = ListNode(6)
head2.next = newnode
newnode.next = newNode2

head3  = ListNode(3)
newnode = ListNode(7)
head3.next = newnode
listnode = [head1,head2,head3]

resnode = combineList(listnode)

while resnode!=None:
      print(resnode.val)
      resnode = resnode.next



