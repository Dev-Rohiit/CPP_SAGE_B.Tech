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

	while(head) { // head != NULL
		cout << head->val << " ";
		head = head->next;
	}

	cout << endl;
}
ListNode * getNode(ListNode* head, int j){
    int k = 0;
    ListNode* temp = head;
    while (k<j && temp){ //k<j and temp != NULL
        temp = temp->next;
        k++;
    }
    return temp;

}
void insertAtIndex(ListNode*& head, int val, int i){
    if(i==0){
        insertAtHead(head, val);
        return;
    }
    //1. create a new Node with the given data;
    ListNode* n= new ListNode(val);
    //2. get the address of the pointer to the node at the (i-1)th index
    ListNode* prev = getNode(head, i-1);
    if (!prev){ //prev ==NULL
        //index i exceeds the length of the linkedList
        return;

    }
    {
        /* code */
    }
    
    //3.Update the next field of the newly created node such that
    //it holds the address of the node that comes after the prev. Node;
    n->next = prev->next;
    //4.
    prev->next = n;
}


int main() {

	ListNode* head = NULL; // initially, linkedList is empty

	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);
	
	printLinkedList(head);

	insertAtIndex(head, 25, 2);

	printLinkedList(head);

	return 0;
}