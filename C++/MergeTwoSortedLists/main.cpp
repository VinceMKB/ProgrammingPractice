#include <iostream>
using namespace std;

#include <list>
#include <string>
#include <vector>

struct ListNode
{
    int data;
    ListNode* next;

    ListNode(int data) : data(data), next(nullptr)
    {

    }

};

ListNode* createListNodes(const vector <int> & datavec)
{
   if(datavec.empty())
   {
        return nullptr;
   }
   
   ListNode* head = new ListNode(datavec[0]);
   ListNode* current = head;

   for(size_t i = 1; i < datavec.size(); ++i)
   {
        ListNode* newNode = new ListNode(datavec[i]);
        current -> next = newNode;
        current = newNode;
   }

   return head;

}

ListNode* findlastnode(ListNode* head)
{
     if(!head)
     {
          return nullptr;
     }

     ListNode* current = head;
     while(current -> next)
     {
          current = current -> next;
     }
     
     return current;

}

ListNode* combineListNodes(ListNode* newlistnode1, ListNode* newlistnode2)
{
     if(!newlistnode1)
     {
          return newlistnode2;
     }
     
     if(!newlistnode2)
     {
          return newlistnode1;
     }

     ListNode* lastNode = findlastnode(newlistnode1);

     lastNode -> next = newlistnode2;


     return newlistnode1;

}

void printList(ListNode* head)
{
   ListNode* current =  head;
   while (current != nullptr)
   {
        cout << current -> data << " ";
        current = current -> next;
   }
   cout << endl;
    
}

int main()
{
    vector <int> listdata1 = {1, 2, 3};
    vector <int> listdata2 = {2, 4, 6};
    
    ListNode* listnode1 = createListNodes(listdata1);
    ListNode* listnode2 = createListNodes(listdata2);
    ListNode* combinedlistnode = combineListNodes(listnode1, listnode2);

    cout << "This is the data of ListNode One: ";
    printList(listnode1);
    cout << endl;
    cout << "This is the data of ListNode Two: ";
    printList(listnode2);
    cout << endl;
    cout << "This is the data of combined ListNode: ";
    printList(combinedlistnode);
    cout << endl;

    delete listnode1;
    delete listnode2;

    return 0;
}