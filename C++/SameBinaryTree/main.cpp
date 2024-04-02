#include <iostream>
using namespace std;

#include <utility>

struct BinaryNode
{
    int data;
    BinaryNode* right;
    BinaryNode* left;
    
    //Default Constructor
    //The default constructor is useful for creating a new node that will be used as a leaf node or when you need to initialize a node's value and children separately.
    BinaryNode() : data(0), left(nullptr), right(nullptr)
    {

    }
    
    //Value Constructor
    //The value constructor allows for easy creation of nodes with a specific value, 
    //which is useful when building a binary tree from a list of values or when inserting a new node into the tree.
    BinaryNode(int x): data(x), left(nullptr), right(nullptr)
    {

    }

    //Full Constructor
    //The full constructor is particularly useful when you need to create a node and immediately link it to existing child nodes.
    //This is often necessary when constructing a binary tree from a predefined structure or when performing operations that involve rearranging nodes within the tree.
    BinaryNode(int x, BinaryNode *left, BinaryNode *right) : data(x), left(left), right(right) 
    {

    }
};

class Solution
{
     public:
        bool isSameBinaryTree(BinaryNode* p, BinaryNode *q)
        {
            if(p == nullptr && q == nullptr)
            {
                return true;
            }
            if(p == nullptr || q == nullptr)
            {
                return false;
            }
            
            return p -> data == q -> data && isSameBinaryTree(p -> left, q -> left) && isSameBinaryTree(p -> right, p -> right) ;
        }

        pair<BinaryNode*, BinaryNode*> createBinaryNodes()
        {
            BinaryNode* rootOne = new BinaryNode(1);
            rootOne -> left = new BinaryNode(2);
            rootOne -> right = new BinaryNode(3);

            BinaryNode* rootTwo = new BinaryNode(1);
            rootTwo -> left = new BinaryNode(4);
            rootTwo -> right = new BinaryNode(3);
            
            
            return make_pair(rootOne, rootTwo);
        }

        void deleteBinaryTree(BinaryNode* node)
        {
            if(node == nullptr)
            {
                return;
            }

            deleteBinaryTree(node->left);
            deleteBinaryTree(node->right);

            delete node;
        }

};

int main()
{
    Solution objSol;
    pair<BinaryNode*, BinaryNode*> treebi = objSol.createBinaryNodes();
    bool sameBinaryTree = objSol.isSameBinaryTree(treebi.first, treebi.second);
    
    cout << "This Binary Tree is: " << (sameBinaryTree ? "Same" : "Not Same") << endl;
    cout << "SameBinaryTree is working!"<< endl;

    objSol.deleteBinaryTree(treebi.first);
    objSol.deleteBinaryTree(treebi.second);

    return 0;
}