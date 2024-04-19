#include <iostream>
using namespace std;

struct  BinaryNode
{
    string data;
    BinaryNode* next;
};

class Friend
{
    public:

        BinaryNode* createBinaryNode(string data)
        {
            BinaryNode* newNode = new BinaryNode();

            newNode -> data = data;
            newNode -> next = nullptr;

            return newNode;
        }

        void printBinaryNode(BinaryNode* root)
        {
            if(root == nullptr)
            {
                return;
            }

            cout << "The Node is: "<< root -> data << endl;
            printBinaryNode(root -> next);

        }

        bool isBinaryNodeConnected(BinaryNode* root, string target)
        {

            BinaryNode* current = root;
            string m_target = target;

            while (current != nullptr)
            {
                
                string current_data = current -> data;
                cout<< "current_data = " << current_data << endl;

                if(current_data == m_target)
                {
                    return true;
                }

                current = current -> next;

            }
            
            return false;

        }

};

int main()
{
    
    Friend objFriend;
    string target = "D";
    BinaryNode* root = objFriend.createBinaryNode("A");

    root -> next = objFriend.createBinaryNode("B");
    root -> next -> next = objFriend.createBinaryNode("C");

    objFriend.printBinaryNode(root);

    bool result = objFriend.isBinaryNodeConnected(root, target);
    cout << "Is " << root -> data << " connected to " << target << ": " << (result ? "Yes" : "No") << endl;

    cout << "Friend is working" << endl;
    
    return 0;
}