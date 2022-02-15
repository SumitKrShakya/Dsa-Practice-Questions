/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
// class Solution {
// public:
//     int maxx=INT_MIN;
    
//     int cal(TreeNode* root,int depth){
//         if(root==NULL){
//             return maxx;
//         }
//         cout<<root->val<<" "<<depth<<endl;
//         if(root->left==NULL && root->right==NULL && depth>maxx){
//             maxx=depth;
//             return maxx;
//         }
//         cal(root->left,depth+1);
        
//         cal(root->right,depth+1);
//         return maxx;
//     }
//     int maxDepth (TreeNode* root) {
//         if(root==NULL){
//             return 0;
//         }
//         return cal(root,1);

//     }
// };
class Solution {
public:
       
    
    int maxDepth (TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int l = maxDepth(root->left);
        int r = maxDepth(root->right);
        return max(l,r)+1;
    }
};