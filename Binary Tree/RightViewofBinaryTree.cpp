/*
Right View of Binary Tree 
Easy Accuracy: 51.66% Submissions: 51600 Points: 2
Given a Binary Tree, find Right view of it. Right view of a Binary Tree is set of nodes visible when tree is viewed from right side.

Right view of following tree is 1 3 7 8.

          1
       /     \
     2        3
   /   \      /    \
  4     5   6    7
    \
     8

Example 1:

Input:
       1
    /    \
   3      2
Output: 1 2
Example 2:

Input:
     10
    /   \
  20     30
 /   \
40  60 
Output: 10 30 60
Your Task:
Just complete the function rightView() that takes node as parameter and returns the right view as a list. 

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Height of the Tree).

Constraints:
1 <= Number of nodes <= 105
1 <= Data of a node <= 105.
*/
/* A binary tree node has data, pointer to left child
   and a pointer to right child 
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

// Should return  right view of tree
class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       // Your Code here
       vector<int> ans;
       if(!root) return ans;
       queue<Node *> q;
       q.push(root);
       while(!q.empty())
       {
           int sz = q.size();
           Node *t;
           while(sz--){
               t=q.front();
               q.pop();
               if(t->left) q.push(t->left);
               if(t->right) q.push(t->right);
           }
           ans.push_back(t->data);
        }
        return ans;
    }
};