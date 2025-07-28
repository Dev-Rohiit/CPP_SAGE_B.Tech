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

//--------------------------------------------------------------------------------
bool SearchIteratitve(ListNode* head, int target){
    ListNode* temp = head;
    while (temp!=NULL){
        if (temp->val == target)
        {
            return true;

        }
        temp = temp->next;
    }
    return false;
    
}

//=======================================================================
bool SearchRecursive(ListNode* head, int target){
    //base case
    if (head==NULL)
    {
        return false;
    }
    

    //recursive case
    if (head->val == target){
        return true;
    }
    return SearchRecursive(head->next, target);
   
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
	int target = 10;
    SearchIteratitve(head,target) ?cout<<target <<" is Found!"<<endl:
                                   cout<<target <<" is Not Found!" <<endl;

    SearchRecursive(head,target) ?cout<<target <<" is Found!"<<endl:
                                   cout<<target <<" is Not Found!" <<endl;
	return 0;
}