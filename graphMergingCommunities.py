class Union:
    def __init__(self,size):
        self.parent = [ i for i in range(size)]
        self.size = [1]*size
    def find_rep(self,x):
        if(x == self.parent[x]):
            return x

        self.parent[x] = self.find_rep(self.parent[x])
        return self.parent[x]



    def union(self,node1,node2):
        repx , repy = self.find_rep(node1),self.find_rep(node2)
        if(repx!= repy):
            if(self.size[repx] > self.size[repy]):
                self.parent[repy] = repx
                self.size[repx] +=self.size[repy]

            else:

                 self.parent[repx] = repy
                 self.size[repy] +=self.size[repx]

    def get_size(self,node):
        return self.size[self.find_rep(node)]

class emerge:
    def __init__(self,n):
        self.uv =  Union(n)

    def connect(self,x,y):
        return  self.uv.union(x,y)
    def get_community_size(self,node):
        return  self.uv.get_size(node)

obj= emerge(5)
li =  [obj.connect(0, 1), obj.connect(1, 2), obj.get_community_size(3),obj.get_community_size(0), obj.connect(3, 4), obj.get_community_size(4)]
print(li)

