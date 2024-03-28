#include <iostream>
using namespace std;

#include <vector>
#include <list>

struct ListNode
{
    int data;
    ListNode* next;
    
    ListNode(int data) : data(data), next(nullptr)
    {

    }
};

ListNode* createListNodes(const vector <int>& datavec)
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

ListNode* findLastNode(ListNode* head)
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

ListNode* combineListNodes(ListNode* newdatalist1, ListNode* newdatalist2)
{
   if(!newdatalist1)
   {
        return newdatalist2;
   }
   if(!newdatalist2)
   {
        return newdatalist2;
   }

   ListNode* lastnode = findLastNode(newdatalist1);

   lastnode -> next = newdatalist2;

   return newdatalist1;

}

ListNode* merge(ListNode* left, ListNode* right)
{
    ListNode dummy(0);
    ListNode* tail = &dummy;

    while(left && right)
    {
        if(left -> data <= right -> data)
        {
            tail -> next = left;
            left = left -> next;
        }
        else
        {
            tail ->  next = right;
            right = right -> next;
        }
        tail = tail -> next;
    }

    if(left)
    {
        tail -> next = left;
    }
    else
    {
        tail -> next = right;
    }

    return dummy.next;
}

ListNode* mergeSort(ListNode* head)
{
    if(!head || !head -> next)
    {
        return head;
    }

    ListNode* slow = head;
    ListNode* fast =  head -> next;

    while(fast && fast -> next)
    {
        slow = slow -> next;
        fast = fast -> next -> next;
    }

    ListNode* mid = slow -> next;
    slow -> next = nullptr;

    ListNode* left = mergeSort(head);
    ListNode* right = mergeSort(mid);

    return merge(left, right);
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
    vector <int> datalist1 = {1,2,3,9,30,60};
    vector <int> datalist2 = {2,5,9,3,25,6,7};

    ListNode* listnode1 = createListNodes(datalist1);
    ListNode* listnode2 = createListNodes(datalist2);

    cout << "This is the data of ListNode One: ";
    printList(listnode1);
    cout << endl;
    cout << "This is the data of ListNode Two: ";
    printList(listnode2);
    cout << endl;

    ListNode* combinedlistnode =  combineListNodes(listnode1, listnode2);

    cout << "This is the data of combined ListNode: ";
    printList(combinedlistnode);
    cout << endl;

    combinedlistnode = mergeSort(combinedlistnode);

    cout << "This is the data of combined and sorted ListNode: ";
    printList(combinedlistnode);
    cout << endl;

    

    cout << "hello world" << endl;
}