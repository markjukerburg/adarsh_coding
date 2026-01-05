
class TreeNode:
    def __init__(self,val):
        self.val =val
        self.left = None
        self.right = None


inordermap ={}
preorderidx = 0
def buildTree(preorder,inorder):
    for idx, val in enumerate(inorder):
        inordermap[val] = idx
    return buildTreehelper(0,len(inorder)-1,preorder,inorder)


def buildTreehelper(left,right,preorder,inorder):
    global preorderidx
    if left > right:
        return None

    val = preorder[preorderidx]
    inorderidx = inordermap[val]
    node =  TreeNode(val)
    preorderidx+=1
    node.left = buildTreehelper(left,inorderidx-1,preorder,inorder)
    node.right = buildTreehelper(inorderidx+1,right,preorder,inorder)
    return node
preorder = [5, 9, 2, 3, 4, 7]
inorder =  [2,9,5,4,3,7]
tree = buildTree(preorder,inorder)
print(tree.val)
