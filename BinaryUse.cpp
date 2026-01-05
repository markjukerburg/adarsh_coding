#include<iostream>
//#include<pair>
//#include<tie>
#include "BinaryTreeNode.h"
#include<queue>
#include<cmath>
using namespace std;
//#include<vector>
//#include<unordered_set>
//#include<unordered_set>
/*unordered_map<TreeNode *,vector<TreeNode*> > graph;
 TreeNode* start;
int closestDis(TreeNode*root , int k)
{ 
    graph.clear();
  start = nullptr;
 build_Graph(root, nullptr, k);
 queue<TreeNode*> q;
q.push(start);
unordered_set<TreeNode*>seen;
while(!q.empty())
{

int size = q.size();
while(size-- > 0)
{
         TreeNode* cur  =q.front();
        q.pop();
      seen.insert(cur);
        if(!cur->left && !cur->right) return cur->val;
         for(TreeNode* node : graph[cur])
        {
         if(!seen.count(node)) q.push(node);
          }
}

}
   
return 0;
 }

void build_Graph(TreeNode* node, TreeNode* parent, int k)
{
if(!node) return;
if(node->val==k) start =node;
 if(parent){
graph[node].push_back(parent);
graph[parent].push_back(node);
}
build_Graph(node->left,  node, k);
build_Graph(node->right, node,k);
  

}
*/
 BinaryTreeNode<int>* buildTreeHelper2(int *in,int *post,int InS,int InE,int postS,int postE);
int countNodes(BinaryTreeNode<int>* root)
{
    if(root == NULL)return 0;
    return 1+countNodes(root->left)+countNodes(root->right);
}

void printLevel(BinaryTreeNode<int>* root)
{
   if( root == NULL)
       return;

  //BInaryTreeNode<int>*curr = root;
   queue<BinaryTreeNode<int>*> q;
   q.push(root);
   while(!q.empty())
   {  int n = q.size();
       while(n--)
       {
          BinaryTreeNode<int>* curr  =  q.front();
          q.pop();
         cout << curr->data << endl;
         if(curr->left)
             q.push(curr->left);

         if(curr->right)
              q.push(curr->right);

       }
      


   }
 
}

/*

BinaryTreeNode<int> * buildTreeHelper(int *in,int *pre,int inS,int inE,int preS,int preE)
{  if(inS>inE)
    {
        return NULL;}
 int rootData = pre[preS];
 int rootIndex = -1;
for(int i = inS;i<=inE;i++)
{
  
    if(in[i] == rootData)
   {
       rootIndex = i;
   }

}
   //int rootData = pre[preS];
    int lInS = inS;
    int lInE = rootIndex-1;
    int lpreS = preS+1;
    int lpreE = lInE-lInS+lpreS;;
    int rInS = rootIndex+1;;
    int rInE = inE;
    int rpreS = lpreE+1 ;
    int rpreE = preE;

 BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
 root->left = buildTreeHelper(in,pre,lInS,lInE,lpreS,lpreE);
 root->right = buildTreeHelper(in,pre,rInS,rInE,rpreS,rpreE);

 return root;

}



BinaryTreeNode<int> * buildTree(int* in,int * pre,int size)
{
return buildTreeHelper(in,pre,0,size-1,0,size-1);

}
*/
//in ans post//
BinaryTreeNode<int> * buildTree2(int * in,int *post,int size)
{
  return buildTreeHelper2(in,post,0,size-1,0,size-1);
}
BinaryTreeNode<int>* buildTreeHelper2(int *in,int *post,int InS,int InE,int postS,int postE)
{
if(InS >InE)
{
    return NULL;

}
int rootData = post[postE];
int rootIndex = -1;
for(int i = InS;i<=InE;i++)
{  if(rootData == in[i])
    {
     rootIndex = i;
    }

}
int LinS = InS;
int LinE = rootIndex-1;;
int LpoS = postS;
int LpoE = LinE-LinS+LpoS ;
int RinS = rootIndex+1;
int RinE = InE ;
int RpoS = LpoE+1;
int RpoE = postE-1;

BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
root->left = buildTreeHelper2(in,post,LinS,LinE,LpoS,LpoE);
root->right = buildTreeHelper2(in,post,RinS,RinE,RpoS,RpoE);

return root;
}
/*
int diameter(BinatyTreeNode<int>*root)
{
    if(root==NULL)
    {
     return 0;
    }

  int c1 = height(root->left)+height(root->right);
  int c2 = diameter(root->left);
  int c3 = diameter(root->right);

return max(c1,max(c2,c3));
}
int height(BinaryTreeNode<int>*root)
{

    if(root==NULL)
    {
        return 0;
    }

   return 1+max(height(root->left),height(root->right));


}
*/
//
//
pair<int,int> find_Max_Min(BinaryTreeNode<int>* root)
{
  if(root == NULL)
  {
     pair<int ,int>p;
      p.first = INT_MAX; //for min;
      p.second = INT_MIN; // for max;
  return p;
  }
int Mi = root->data;
int Max = root->data;
pair<int,int>left = find_Max_Min(root->left);
pair<int,int>right = find_Max_Min(root->right);
  int lMin  = left.first;
  int lMax  = left.second;
  int rMin  = right.first;
  int rMax = right.second;
       int F =  min(lMin,min(Mi,rMin)); 
     int S = max(lMax,max(Max,rMax));
  


  pair<int,int> p;
  p.first = F;
  p.second  = S;
  return p; 

}


//

pair<int,int> heightDiameter(BinaryTreeNode<int>* root)
{
         if(root == NULL)
         {
           pair<int,int> p;
           p.first = 0;
           p.second = 0;

           return p;
         }
   pair<int,int> left   =  heightDiameter(root->left);
   pair<int,int> right = heightDiameter(root->right);
   int lh;
   int ld;
   int rh;
   int rd;
   lh =   left.first;
   ld =  left.second;
   rh = right.first;
   rd = right.second;
   int height =  1+max(lh,rh);
   int diameter = max(lh+rh,max(ld,rd));
  pair<int,int> ans;
  ans.first = height;
  ans.second = diameter;
  return ans;
}

//

void printTree(BinaryTreeNode<int>*root)
{

if(root==NULL)
{
return;
}

cout << root->data << ":";

 if(root->left!=NULL)
 {
cout <<"L"<< root->left->data<< ",";

 }

if(root->right!=NULL)
{

    cout << "R" <<root->right->data ;

}
cout << endl;
 printTree(root->left);
 printTree(root->right);
}





BinaryTreeNode<int>* takeInput()
{
   int rootData;
   cout << "Enter data" << endl;
   cin >> rootData;

   if(rootData == -1)
   {
    return NULL;
  
   }

 BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
 cout << "for left child" << endl;
 BinaryTreeNode<int>* leftChild = takeInput();
cout << "for right Child" << endl;
 BinaryTreeNode<int>* rightChild = takeInput();
root->left = leftChild;
root->right = rightChild;
return root;
}
BinaryTreeNode<int>* takeInputLevel()
{ int rootData;
  cout << "Enter root data" << endl;
  cin >> rootData;
  if(rootData==-1)
  {
      return NULL;
  }
  BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
  queue<BinaryTreeNode<int>*> pending;
  pending.push(root);
while(pending.size()!=0)
{ 
  BinaryTreeNode<int>* front = pending.front();
  pending.pop();
  int leftChildData;
     cout <<" Enter the left child of "<< front->data << endl; 
     cin >>leftChildData;
   if(leftChildData!=-1)
   {
        BinaryTreeNode<int>* child = new BinaryTreeNode<int>(leftChildData);
        front->left  = child;
        pending.push(child);
 }
 int rightChildData;
        cout <<" Enter the right  child of "<< front->data << endl;
        cin >>rightChildData;
  if(rightChildData!=-1)
  {
      BinaryTreeNode<int>* child = new BinaryTreeNode<int>(rightChildData);
      front->right  = child;
      pending.push(child);
  }
}
return root;
}

void inorder(BinaryTreeNode<int>* root)
{

  if(root== NULL)
      return;

  inorder(root->left);
  cout << root->data << endl;
  inorder(root->right);

}
int main()
{
/*BinaryTreeNode<int> * root = new BinaryTreeNode<int>(1);
BinaryTreeNode<int> * node1 = new BinaryTreeNode<int>(2);
BinaryTreeNode<int> *node2 = new BinaryTreeNode<int>(3);
root->left = node1;
root->right = node2;
*/

//int in[] = {4,2,5,1,8,6,9,3,7};
//int in[] = {9,3,15,20,7};
//int post[] = {9,15,7,20,3};
//int pre[] = {1,2,4,5,3,6,8,9,7};
//int post[] = {4,5,2,8,9,6,7,3,1};
BinaryTreeNode<int>* root = takeInputLevel();
//pair<int,int>a = heightDiameter(root);
//cout << a.first <<" " << a.second << endl;
  pair<int,int> a   = find_Max_Min(root);
cout << a.first <<" " << a.second << endl;
//BinaryTreeNode<int>* root1 = takeInputLevel();
printTree(root);
//inorder(root1);
//int count = countNodes(root);
//int val = closestDis(root);
//cout << count  << endl;

delete root;
}


