import queue
class TreeNode:
    def __init__(self,val):
        self.val  = val
        self.left = None
        self.right  =None

def bsf(root):
    if root is None:
        return
    que = queue.deque([root])
    while que:
       item = que.popleft()
       print(item.val)
       if item.left:
           que.append(item.left)
       if item.right:
           que.append(item.right)


def invertTree(root):
    if root is None:
        return
    root.left,root.right = root.right,root.left
    invertTree(root.left)
    invertTree(root.right)
    return root
def invBfs(root):
    if root is None:
        return
    stack = [root]
    while stack:
        item =  stack.pop()
        item.left,item.right = item.right, item.left
        if item.left:
            stack.append(item.left)
        if item.right:
            stack.append(item.right)
    return root



root= TreeNode('001')
root.left = TreeNode('002')
root.right =TreeNode( '003')
#inroot = invertTree(root)
inroot = invBfs(root)
bsf(inroot)
