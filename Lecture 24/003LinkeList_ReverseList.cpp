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

void printLinkedList(ListNode* head){
    while (head!= NULL)
    {
        cout<<head->val<<" ";
        head = head ->next;
    }
    cout<<endl;
    
}
void insertAtHead(ListNode*& head, int val){
    ListNode* n =  new ListNode(val);
    n->next = head;
    head = n;
}
//-----------------------------------------------------------------
// ListNode* reverseIterative(ListNode* head){
//     ListNode* prev = NULL;
//     ListNode* curr = head;
//     while (curr!=NULL){
//         ListNode* temp = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = temp;
//     }
//     return prev;
    
// }
// //=======================================================================
ListNode* reverseIterative(ListNode* head){
    ListNode* curr = head;
    ListNode* prev = NULL;
    while (curr!=NULL)//
    {
        ListNode* temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
    
}
//===========================================================================
int main() {

	ListNode* head = NULL; // initially, linkedList is empty

	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);
	insertAtHead(head, 0);

	printLinkedList(head);
    head = reverseIterative(head);
    printLinkedList(head);

	return 0;
}