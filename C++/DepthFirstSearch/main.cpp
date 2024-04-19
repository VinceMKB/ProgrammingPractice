#include <iostream>
using namespace std;

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
        BinaryNode * CreateBinaryNode(int data)
        {
            BinaryNode* newNode = new BinaryNode();

            newNode -> data = data;
            newNode -> left =  newNode -> right = nullptr;

            return newNode;
        }

        // PreOrder (data, left, right)
        void PreOrderBinaryNode(BinaryNode* root)
        {
            if(root == nullptr)
            {
                return;
            }

            cout << root -> data << endl;
            PreOrderBinaryNode(root -> left);
            PreOrderBinaryNode(root -> right);
        }

        // InOrder (left, data, right)
        void InOrderBinaryNode(BinaryNode* root)
        {
            if(root == nullptr)
            {
                return;
            }

            InOrderBinaryNode(root -> left);
            cout << root -> data << endl;
            InOrderBinaryNode(root -> right); 
        }

        // PostOrder (left, right, data)
        void PostOrderBinaryNode(BinaryNode* root)
        {
            if(root == nullptr)
            {
                return;
            }

            PostOrderBinaryNode(root -> left);
            PostOrderBinaryNode(root -> right);  
            cout << root -> data << endl;    
        }
};

int main()
{
    Solution objSol;

    //Lvl One of BinaryNode
    BinaryNode* root = objSol.CreateBinaryNode(1);

    //Lvl Two of BinaryNode
    root -> left = objSol.CreateBinaryNode(2);
    root -> right = objSol.CreateBinaryNode(3);

    //Lvl Three of BinaryNode
    //LeftSide
    root -> left -> left = objSol.CreateBinaryNode(4);
    root -> left -> right = objSol.CreateBinaryNode(5);
    //RightSide
    root -> right -> left = objSol.CreateBinaryNode(6);
    root -> right -> right = objSol.CreateBinaryNode(7);

    //Lvl Four of BinaryNode
    //LeftSide
    root -> left -> right -> left = objSol.CreateBinaryNode(9);
    //RightSide
    root -> right -> right -> left = objSol.CreateBinaryNode(15);

    objSol.PreOrderBinaryNode(root);
    objSol.InOrderBinaryNode(root);


    cout << "DepthFirstSearch is Working" << endl;

    return 0;    
}
