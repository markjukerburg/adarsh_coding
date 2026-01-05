def within_bound(row,col,matrix):
    max_row =len(matrix)
    max_col = len(matrix[0])
    return  0<=row<max_row and 0<=col<max_col


def countIslandhelper(matrix):
    if not matrix:
        return 0
    count  = 0
    hashset = set()
    for row in range(len(matrix)):
        for col in range(len(matrix[0])):
            if(matrix[row][col]==1 and (row,col) not in hashset ):
                dfs(row,col,matrix,hashset)
                count+=1
    return count,hashset

def dfs(row,col,matrix,hashset):
    #matrix[row][col] = -1
    hashset.add((row,col))
    direc = [(-1,0),(1,0),(0,-1),(0,1)]
    for d in direc:
        new_r ,new_c = row+d[0],col+d[1]
        if(  (new_r,new_c) not in hashset and within_bound(new_r,new_c,matrix) and matrix[new_r][new_c]==1):
            dfs(new_r,new_c,matrix,hashset)

l = [[1, 1, 0, 0], [1, 1, 0, 0], [0, 0, 1, 1], [0, 0, 0, 1]]
l1 = [[0, 0, 1, 0], [1, 1, 1, 0], [0, 1,0,0], [0, 0, 0, 0]]
a,b = countIslandhelper(l)
print(a)
print(b)
