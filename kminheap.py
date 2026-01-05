import heapq
from collections import Counter


class Pair:

    def __init__(self,st,freq):
        self.st = st
        self.freq = freq


    def __lt__(self,other):
        if(self.freq == other.freq):
            return self.st > self.st

        return self.freq < other.freq



def maxHeapKfqnt(strs,k):
   hashmap =Counter(strs)
   heap = []
   for st , freq  in hashmap.items():
      pair = Pair(st,freq)
      heapq.heappush(heap,pair)
      if(len(heap)>k):
          heapq.heappop(heap)

   res =  [heapq.heappop(heap).st  for _ in range(k)]
   res.reverse()
   return res


strs = ["go", "coding", "byte", "byte", "go", "interview", "go"]


print(maxHeapKfqnt(strs,2))



