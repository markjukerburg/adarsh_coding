
class TreeNode:
    def __init__(self,val):
        self.val = val
        self.left = None
        self.right = None

def balance_or_not(root):
    return get_height_validation(root)!=-1

def get_height_validation(root):
   if not root:
       return 0

   left_hait = get_height_validation(root.left)
   right_hait = get_height_validation(root.right)

   if(left_hait == -1 or right_hait == -1):
       return -1

   if(abs(left_hait - right_hait)>1):
       return -1

   return  1+max(left_hait,right_hait)



root = TreeNode(5)
new_left_1 = TreeNode(2)
new_right_1= TreeNode(7)
root.left = new_left_1
root.right = new_right_1

'''root2 = new_left_1
new_left_2= TreeNode(1)
new_right_2 = TreeNode(4)
root2.left = new_left_2
root2.rightt = new_right_2
new_right_2.left = TreeNode(3)



root2_right = new_right_1
newnode = TreeNode(8)
root2_right.right = newnode
newnode.left = TreeNode(6)
'''
print(balance_or_not(root))



