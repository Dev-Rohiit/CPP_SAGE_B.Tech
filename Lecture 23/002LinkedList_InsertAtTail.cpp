#include<iostream>

using namespace std;

class ListNode {

	public :
		
		int val;
		ListNode* next;

		ListNode(int val) {
			this->val = val;
			this->next = NULL;
		}
};


void insertAtHead(ListNode*& head, int val){

    ListNode* n =  new ListNode(val);
    n->next = head;
    head = n;
}
void printLinkedList(ListNode* head){
    while (head!= NULL)
    {
        cout<<head->val<<" ";
        head = head ->next;
    }
    cout<<endl;
    
}
ListNode* getTail(ListNode* head){
    ListNode* temp = head;
    while(temp-> next != NULL)
    {
        temp= temp->next;
    }
    return temp;

    
}

void insertAtTail(ListNode*& head, int val){

    if (head==NULL)
    {
        insertAtHead(head, val);
        return;
    }
    

    //1.create a new ListNode on the heap with the given data
   ListNode* n = new ListNode(val);
   //2.get hold/ Address of the pointer of the tail node..
   ListNode* tail = getTail(head);
   //3.update the next field of the tail node such that it contains the address of the newly created node..
   tail->next = n;
}

int main() {

	ListNode* head = NULL; // initially, linkedList is empty

	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);

	printLinkedList(head);

    insertAtTail(head, 60);
    printLinkedList(head);

	return 0;
}