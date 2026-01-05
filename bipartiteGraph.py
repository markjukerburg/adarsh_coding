def check_bipartite(graphList):
    colors = [0]*len(graphList)
    for i in range(len(graphList)):
        if(colors[i]==0 and not dfs(i,1,graphList,colors)):
            print(colors)
            return False
    #print(colors)
    return True



def dfs(node,color,graphList,colors):
    colors[node] = color
    for neighbor in graphList[node]:
        if colors[neighbor] == color:
            return False
        if( colors[neighbor] == 0 and not dfs(neighbor,-color,graphList,colors)):
            return False


    return True
graph = [[1, 4], [0, 2], [1], [4], [0, 3]]
print(check_bipartite(graph))
