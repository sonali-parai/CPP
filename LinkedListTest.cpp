#include<iostream>
#include<list>
#include<vector>
using namespace std;

class ListNode {
public:
	int data;
	ListNode* next;

	ListNode(int data) {
		this->data = data;
		this->next = NULL;
	}
};
void printLinkedList (ListNode* head) {
    cout<<"Printing Linked List : "<<endl;
    //ListNode* tmp = new ListNode(NULL);
    //tmp = head;
    while(head->next != NULL){
        cout<<head->data<<"--";
        head=head->next;
    }
    cout<<head->data<<endl;
}
void insertEndNode(ListNode* head,int data){
    //new list node
    ListNode* tmp = new ListNode(data);

    while(head->next!=NULL){
        head=head->next;
    }
    head->next=tmp;//link with previous linked list
}

vector<int> linkedListToArray (ListNode* head) {
    /**Given a Linked List, return an array containing the nodes 
     of the list in the same order.
    Example
    List: 1→3→4→7
    Array: [1 3 4 7]**/
    vector<int> v_new;
    while(head!=NULL){
        v_new.push_back(head->data);
        head=head->next;
    }
    return v_new;
}
void printVector(vector<int> &v_in){
    cout<<"Printing the vetor :"<<endl;
    for(int element:v_in){
        cout<<element<<" ";
    }
}
void printLinkedListReverse (ListNode* head) {
    // add your logic here
    if(head==NULL){
        return;
    }
    printLinkedListReverse(head->next);
    cout<<head->data<<" ";
}

ListNode* kthElement (ListNode* head, int k) {
    // add your logic here
    /**Given a Linked List, find the element at the kth position.

        Example
        List: 1→3→4→7
        k: 2
        Answer: 3
    **/
    int node_counter{1};
    while(node_counter<k){
        head=head->next;
        node_counter++;
    }
    return head;
}

ListNode* addAtkthElement (ListNode* head, int k, ListNode* newElement) {
    // add your logic here
    /**Given a Linked List, an integer k and an element, add that element at the kth position of the linked list.

    Example
    List: 1→3→4→7
    k: 2
    Element: 5
    Result: 1→5→3→4→7
    **/
   ListNode* tmp_head =new ListNode(NULL);
   tmp_head=head;
   int node_counter{1};
    
    //change the head
    if(k==1){ 
        newElement->next=tmp_head;
        head=newElement;
    }
    else if(k>1){
        while(node_counter<(k-1)){
            tmp_head=tmp_head->next;
            node_counter++;
        }
        if(tmp_head->next!=NULL){
            newElement->next=tmp_head->next;
            tmp_head->next=newElement;
        }
        else if(tmp_head->next==NULL){ //checking for last element
            tmp_head->next = newElement;
        }
    }

    return head;
}

int main()
{
    ListNode* head= new ListNode(10);
    insertEndNode(head,20);
    //printLinkedList(head);
    insertEndNode(head,30);
    //printLinkedList(head);
    insertEndNode(head,40);
    insertEndNode(head,50);
    //printLinkedList(head);

    /*
    vector<int> v_in;
    v_in=linkedListToArray(head);
    printVector(v_in);
    */

   /*
   printLinkedListReverse(head);
   cout<<endl;
   */

    /*
    //Find the k the element from a linked list
    cout<<"enter the element number : ";
    int k{1};
    cin>>k;
    ListNode* k_node= new ListNode(NULL);
    k_node = kthElement(head,k);
    cout<<"K the element : "<<k_node->data<<endl;
    */

    //Add Element at Kth Position in Linked List
    /**Given a Linked List, an integer k and an element, add that element at the kth position of the linked list.

    Example
    List: 1→3→4→7
    k: 2
    Element: 5
    Result: 1→5→3→4→7
    **/
    printLinkedList(head);
    ListNode* newNode = new ListNode(NULL);
    int k,value;
    cout<<"Enter position : ";
    cin>>k;
    cout<<"Enter data : ";
    cin>>value;
    newNode->data=value;
    head = addAtkthElement (head,k,newNode);
    cout<<endl;
    cout<<"Linked List after adding element :"<<endl;
    printLinkedList(head);

    return 0;
}