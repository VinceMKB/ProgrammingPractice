#include <iostream>
using namespace std;

#include <vector>

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

        vector<int> preorderTraversal(BinaryNode* root)
        {
            vector <int> rootData;
            
            if(root == nullptr)
            {
                return rootData;
            }

            rootData.push_back(root -> data);
            vector <int> leftData = preorderTraversal(root -> left);
            rootData.insert(rootData.end(),leftData.begin(), leftData.end());
            vector <int> rightData = preorderTraversal(root -> right);
            rootData.insert(rootData.end(),rightData.begin(), rightData.end());

            return rootData;

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

    BinaryNode* root = new BinaryNode(3);
    root->left = new BinaryNode(9);
    root->right = new BinaryNode(20);
    root->right->left = new BinaryNode(15);
    root->right->right = new BinaryNode(7);

    vector <int> outRoot = objSol.preorderTraversal(root);

    for(int val : outRoot)
    {
        cout << "Value: " << val << " ";
    }
    cout << endl;
    
    cout << "BinaryTreePreOrderTraversal is working!" << endl;

    objSol.deleteBinaryTree(root);

    return 0;
}