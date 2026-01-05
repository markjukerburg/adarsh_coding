class TreeNode:
    def __init__(self,val):
        self.val = val
        self.left= None
        self.right = None




def DFS(root,p,q):
    global lca
    if not root:
        return False

    node_p_or_q = root == p or root == q

    node_left_p_or_q = DFS(root.left , p,q)
    node_right_p_or_q = DFS(root.right,p,q)

    if(node_p_or_q+node_left_p_or_q+node_right_p_or_q ==2):
        lca = root
    return (node_p_or_q or node_left_p_or_q or node_right_p_or_q)


node1 = TreeNode(1)
node2 = TreeNode(2)
node3 = TreeNode(3)
node4 = TreeNode(4)
node5 = TreeNode(5)
node6 = TreeNode(6)
node7 = TreeNode(7)
node8 = TreeNode(8)
node9 = TreeNode(9)


node1.left = node2
node1.right  = node3


node2.left = node4
node2.right = node5

node3.left = node6
node3.right = node7

node6.left = node8
node7.right = node9

DFS(node1,node8,node7)

print(lca.val)



