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


void insertAtHead(ListNode*& head, int val) {
	
	ListNode* n = new ListNode(val);
	n->next = head;
	head = n;

}

void printLinkedList(ListNode* head) {
	
	while(head != NULL) {
		cout << head->val << " ";
		head = head->next;
	}
	
	cout << endl;
}

void deleteAtHead(ListNode*& head) {

	if(!head) { // head == NULL
		// linkedList is empty
		return;
	}

	ListNode* temp = head;
	head = head->next;
	delete temp;
}

ListNode* getListNode(ListNode* temp, int j) {

	int k = 0;
	while(temp != NULL && k < j) { // while(temp && k < j)
		temp = temp->next;
		k++;
	}

	return temp;

}

void deleteAtIndex (ListNode*& head, int i){
    if (i==0)
    {
        deleteAtHead(head);
        return;
    }
    
    //1.get the hold of the pointer to the node at the (i-1) index
    ListNode* prev = getListNode(head, i-1) ;
    if (prev == NULL){
        //i is out of range or LL is Empty
        return;
    }
    
    //2. get the hold of the pointer to the node at the  ith index
    ListNode* curr = getListNode(head, i);
    //3 update the next field of the previous node such that it
    //point to the node which comes after the current node
    prev->next = curr->next;
    //4. Delete the curr node
    delete curr;
}


int main() {

	ListNode* head = NULL; // initially, linkedList is empty

	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);
	
	printLinkedList(head);

	deleteAtIndex(head, 0);

	printLinkedList(head);

	return 0;
}