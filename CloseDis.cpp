 #include<iostream>
 #include "CloseDis.h"
 #include<queue>
 #include<vector>
 #include<unordered_set>
 #include<unordered_map>
using namespace std;
int closestDis(TreeNode*root , int k);
void build_Graph(TreeNode* node, TreeNode* parent, int k);
unordered_map<TreeNode *,vector<TreeNode*> > graph;
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
 if(node->val==k) start=node;
  if(parent){
 graph[node].push_back(parent);
 graph[parent].push_back(node);
 }
 build_Graph(node->left,  node, k);
 build_Graph(node->right, node,k);
 
 
 }
 
 void printTree(TreeNode*root)
 {
 
 if(root==NULL)
 {
 return;
 }
 
 cout << root->val << ":";
 
  if(root->left!=NULL)
  {
 cout <<"L"<< root->left->val<< ",";
 
  }
 
 if(root->right!=NULL)
 {
 
     cout << "R" <<root->right->val ;
 
 }
 cout << endl;
  printTree(root->left);
  printTree(root->right);
 }
 
 TreeNode* takeInputLevel()
 { int rootData;
   cout << "Enter root data" << endl;
   cin >> rootData;
   if(rootData==-1)
   {
       return NULL;
   }
   TreeNode* root = new TreeNode(rootData);
   queue<TreeNode*> pending;
   pending.push(root);
 while(pending.size()!=0)
 {
   TreeNode* front = pending.front();
   pending.pop();
   int leftChildData;
      cout <<" Enter the left child of "<< front->val << endl;
      cin >>leftChildData;
    if(leftChildData!=-1)
    {
         TreeNode* child = new TreeNode(leftChildData);
         front->left  = child;
         pending.push(child);
  }
  int rightChildData;
         cout <<" Enter the right  child of "<< front->val << endl;
         cin >>rightChildData;
   if(rightChildData!=-1)
   {
       TreeNode* child = new TreeNode(rightChildData);
       front->right  = child;
       pending.push(child);
   }
 }
 return root;
 }
 
 int main()
 {
 
 TreeNode* root1 = takeInputLevel();
 printTree(root1);
 int val = closestDis(root1,1);
 cout << val << endl;
 
 }
 
 /*  public:
    TreeNode* dfs(TreeNode *cur, unordered_map<TreeNode*, TreeNode*> &edges, int k) {
        if (cur == nullptr) return nullptr;
        if (cur->val == k) return cur;
        if (cur->left != nullptr) {
            edges[cur->left] = cur;
            auto l = dfs(cur->left, edges, k);
            if (l != nullptr) return l;
        }
        if (cur->right != nullptr) {
            edges[cur->right] = cur;
            auto r = dfs(cur->right, edges, k);
            if (r != nullptr) return r;
        }
        return nullptr;
    }
    
    int findClosestLeaf(TreeNode* root, int k) {
        unordered_map<TreeNode*, TreeNode*> edges;
        auto k_node = dfs(root, edges, k);
        if (k_node == nullptr) return -1;
        queue<TreeNode*> q;
        q.push(k_node);
        unordered_set<TreeNode*> visited;
        while (!q.empty()) {
            for (int size = q.size(); size > 0; --size) {
                auto t = q.front(); q.pop();
                if (t->left == nullptr  && t->right == nullptr) return t->val;
                if (visited.count(t)) continue;
                visited.insert(t);
                if (t->left != nullptr) q.push(t->left);
                if (t->right != nullptr) q.push(t->right);
                if (edges.count(t)) q.push(edges[t]);
            }
        }
        return -1;
    } */

