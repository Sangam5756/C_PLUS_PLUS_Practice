// Write C/C++ pseudo code to represent Doubly linked List. Implement the
// following ADT: Create, Insert, Delete, and Search operation.

//ADT for Doubly Linked List
#include <iostream>
using namespace std;


//Structure for Doubly Linked List
struct DoublyLinkedList 
{ 
    int data; 
    DoublyLinkedList *prev; 
    DoublyLinkedList *next; 
}; 

//Function to create a doubly linked list
DoublyLinkedList *CreateDoublyLinkedList()
{
    DoublyLinkedList *head = NULL;
    return head;
}

//Function to insert a node in a doubly linked list
void InsertNode(DoublyLinkedList **head, int data)
{
    //Create a new node
    DoublyLinkedList *newNode = new DoublyLinkedList();
    //Set data for the new node
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    
    //If list is empty, then make the new node as head
    if (*head == NULL) 
        *head = newNode; 
    else
    {
        //Traverse to the end of the list
        DoublyLinkedList *temp = *head;
        while (temp->next != NULL) 
            temp = temp->next; 
        //Insert the new node at the end of the list
        temp->next = newNode;
        newNode->prev = temp;
    }
}

//Function to delete a node in a doubly linked list
void DeleteNode(DoublyLinkedList **head, int data)
{
    //Check if list is empty
    if(*head == NULL) 
        return; 
    //Search for the node to be deleted
    DoublyLinkedList *temp = *head, *prev;
    while(temp != NULL && temp->data != data) 
    { 
        prev = temp; 
        temp = temp->next; 
    } 
    //Check if node is found
    if (temp == NULL) 
        return; 
    //If node is the first node
    if (temp == *head) 
        *head = temp->next; 
    //Change the next of prev node
    if (prev != NULL) 
        prev->next = temp->next; 
    //Change the prev of next node
    if (temp->next != NULL) 
        temp->next->prev = prev; 
    //Free the memory
    free(temp); 
}

//Function to search a node in a doubly linked list
bool SearchNode(DoublyLinkedList *head, int data)
{
    //Check if list is empty
    if (head == NULL) 
        return false; 
    //Traverse the list
    while (head != NULL) 
    { 
        if (head->data == data) 
            return true; 
        head = head->next; 
    } 
    return false;
}
int main()
{


    InsertNode(DoublyLinkedList &head,5);
    return 0;

}