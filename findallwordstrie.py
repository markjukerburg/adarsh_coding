class Trie_Node:
    def __init__(self):
        self.children = {}
        self.word = None

def find_all_words(word_list,board):
   root = Trie_Node()
   for word  in word_list:
       node = root
       for c in word:
           if c not in node.children:
               node.children[c] = Trie_Node()

           node = node.children[c]
       node.word = word


   res = []


   for r in range(len(board)):
       for c in range(len(board[0])):
           if(board[r][c] in root.children):
               dfs(r,c,board,root.children[board[r][c]],res)
   return res


def with_in_bound(r,c,board):
    return   0<=r<len(board) and 0<=c<len(board[0])
def dfs(r,c,board,node,res):
    if(node.word):
        res.append(node.word)
        node.word = None

    direc = [(-1,0),(1,0),(0,1),(0,-1)]
    temp = board[r][c]
    board[r][c] = '#'
    for d in direc:
        row, col = r+d[0],c+d[1]
        if(with_in_bound(row,col,board) and  board[row][col] in node.children):
            dfs(row,col,board,node.children[board[row][col]],res)

    board[r][c]=temp

board = [['b', 'y', 's'], ['r', 't', 'e'], ['a', 'i', 'n']]
words= ["byte", "bytes", "rat", "rain", "trait", "train"]

print(find_all_words(words,board))




