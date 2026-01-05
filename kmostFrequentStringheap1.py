from collections import Counter
import heapq

class Pair:
    def __init__(self,st,freq):
        self.st = st
        self.freq = freq

    def __lt__(self,other):
        if(self.freq == other.freq):
            return self.st<other.st
        return self.freq>other.freq





def KmostString(strs,k):
    hashmap =  Counter(strs)
    maxheap =  [Pair(st,freq) for st, freq in hashmap.items()]
    heapq.heapify(maxheap)
    return [heapq.heappop(maxheap).st for _ in range(k)]

strs= ["go", "coding", "byte", "byte", "go", "interview", "go"]
k =3
print(KmostString(strs,k))

#obj = Pair('a',2)
#print(obj,st)
