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
//--------------------------------------------------------------------------
int lengthIterative(ListNode*  head){
    int cnt = 0;
    ListNode* temp = head;
    while (temp!=NULL)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
    
}
//----------------------------------------------------------------------
int lengthRecursive(ListNode* head){
    //base case...
    if (!head){ //head==NULL
        return 0;
    }
    //recursive case...
    int X = lengthRecursive(head->next);
    return 1+X;
}
//-------------------------------------------------------------------------

int main() {

	ListNode* head = NULL; // initially, linkedList is empty

	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);
	insertAtHead(head, 0);

	printLinkedList(head);
    cout<< lengthIterative(head)<<endl;
    cout<< lengthRecursive(head)<<endl;

	return 0;
}