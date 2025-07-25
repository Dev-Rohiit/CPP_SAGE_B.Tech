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
// 	// 1. dynamically create a List node with the given 'val'
    ListNode* n =  new ListNode(val);

// 	// 2. update the next field of the newly created node 
// 	// such that it points to the current head of the LL
    n->next = head;


// 	// 3. make the newly created node as the head of the LL
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


int main() {

	ListNode* head = NULL; // initially, linkedList is empty

	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);
	insertAtHead(head, 0);

	printLinkedList(head);
	// printLinkedList(head);

	return 0;
}