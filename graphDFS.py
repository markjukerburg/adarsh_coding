#
class GraphNode:
    def __init__(self,val):
        self.val = val
        self.neighbors = []



def clone_node(node):
    if not node:
        return None
    return dfs(node)



def dfs(node,cloned_map ={} ):
    if node in cloned_map:
        return cloned_map[node]

    cloned_node = GraphNode(node.val)
    cloned_map[node] = cloned_node
    print(cloned_node.val)

    for child in node.neighbors:
        neighbors = dfs(child,cloned_map)
        cloned_node.neighbors.append(neighbors)
    return cloned_node


node0 = GraphNode(0)
node1  = GraphNode(1)
node2 = GraphNode(2)
node3 = GraphNode(3)

node0.neighbors.append(node1)
node0.neighbors.append(node2)

node1.neighbors.append(node2)

node2.neighbors.append(node3)


n = clone_node(node0)
print(n.val)
