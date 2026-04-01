// linked_list in cpp;
// implementation of linked_list and node;
/*#include <iostream>
using namespace std;
 class Node {
        public:
        int val;
        Node* next;
        Node(int x) {
            val = x;
            next = NULL;
        }
    };
void insertAtHead(Node* &head, int val) {
    Node *new_node = new Node(val);
    new_node->next = head;
    head = new_node;
}
void displayNewNode(Node* head) {
    Node* temp = head;
    while(temp!=NULL) {
        cout<<temp->val<<"->";
        // cout<<temp->next<<endl;
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
int main() {
    // Node *n = new Node(2);
    // cout<<"n_value: "<<n->val<<endl;
    // cout<<"n_ptr: "<<n->next<<endl;
    Node* head = NULL;
    insertAtHead(head, 1);
    displayNewNode(head);
    insertAtHead(head, 3);
    displayNewNode(head);
    insertAtHead(head, 2);
    displayNewNode(head);
    return 0;
}*/
/*#include <iostream>
using namespace std;
class Node {
    public: 
    int val;
    Node* next;
    Node(int value) {
        val = value;
        next = NULL;
    }
};
void insertAtEnd(Node* &head, int value) {
        Node *new_node = new Node(value);
        if(head==NULL) {
            head = new_node;
            return;
        }
        Node* temp = head;
        while(temp->next!=NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }
void displayNewNode(Node* head) {
        Node* temp = head;
        while(temp!=NULL) {
            cout<<temp->val<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
}

int main() {
    Node* head = NULL;
    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);
    displayNewNode(head);
    return 0;
}
*/
// insertion of data at the start practice;
/*#include <iostream>
using namespace std;
class Node {
    public:
    int val;
    Node* next;
    Node(int value) {
        val = value;
        next = NULL;
    }
};
void insertAtStart(Node* &head, int value) {
    Node* new_node = new Node(value);
    new_node->next = head;
    head = new_node;
}
void printNodes(Node *head) {
    Node* temp = head;
    while(temp!=NULL) {
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
}
int main() {
    Node* head = NULL;
    insertAtStart(head, 1);
    insertAtStart(head, 2);
    insertAtStart(head, 3);
    printNodes(head);
    return 0;
}*/
// insertion of data at the end practice:
/*#include <iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node (int value) {
    val = value;
    next = NULL;
    }
};
void insertAtEnd(Node* &head, int value) {
    Node* new_node = new Node(value);
    Node* temp = head;
    if(head==NULL) {
        head = new_node;
    return;
    }
    while(temp->next!=NULL) {
        temp = temp->next;
    }
    temp->next = new_node;
}
void printNodes(Node* head) {
    Node* temp = head;
    while(temp!=NULL) {
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
}
int main() {
    Node* head = NULL;
    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);
    printNodes(head);
    return 0;
}*/
// adding a node at any arbitrary position;
/*#include <iostream>
using namespace std;
class Node{
    public: 
    int val;
    Node* next;
    Node(int value) {
        val = value;
        next = NULL;
    }
};
void insertAtStart(Node* &head, int value) {
    Node* new_node = new Node(value);
    new_node->next = head;
    head = new_node;
}
void insertAtKthpos(Node* &head, int value, int k) {
    Node* new_node = new Node(value);
    Node* temp = head;
    if(k==0){
        insertAtStart(head, value);
        return;
    }
    int i = 0;
    while(i<k-1) {
        temp = temp->next;
        i++;
    }
    new_node->next = temp->next;
    temp->next = new_node;
}
void insertAtEnd(Node* &head, int value) {
    Node* new_node = new Node(value);
    if(head==NULL) {
        head = new_node;
        return;
    }
    Node* temp = head;
    while(temp->next!=NULL) {
        temp = temp->next; 
    }
    temp->next = new_node;
}
void displayNewNode(Node* head) {
    Node* temp = head;
    while(temp!=NULL) {
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
}
int main() {
    Node* head = NULL;
    // insertAtStart(head,1);
    // insertAtStart(head,3);
    // insertAtStart(head,4);
    insertAtEnd(head,1);
    insertAtEnd(head,3);
    insertAtEnd(head,4);
    insertAtKthpos(head,2,1);
    displayNewNode(head);
    // time_complexity: O(n);
    return 0;
}*/
// updating value at kth position;
/*#include <iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int value) {
        val = value;
        next = NULL;
    }
};
void insertAtStart(Node* &head, int value) {
    Node* new_node = new Node(value);
    new_node->next = head;
    head = new_node;
}
void updateAtKthPos(Node* &head, int value, int k){
    int i=0; 
    Node* temp = head;
    while(i<k-1){
        temp = temp->next;
        i++;
    }
    (temp->next)->val = value;
}
void printNodes(Node* head) {
    Node* temp = head;
    while(temp!=NULL) {
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
}
int main() {
    Node* head = NULL;
    insertAtStart(head, 3);
    insertAtStart(head,4);
    insertAtStart(head,1);
    updateAtKthPos(head,2,1);
    printNodes(head);
    return 0;
}*/
// Deletion at kth position in a singly linked_list;
/*#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int value) {
        val = value;
        next = NULL;
    }
};
void insertAtEnd(Node* &head, int value) {
    Node* new_node = new Node(value);
    if(head==NULL) {
        head = new_node;
        return;
    }
    Node* temp = head;
    while(temp->next!=NULL) {
        temp = temp->next;
    }
    temp->next = new_node;
}
void deleteAtHead(Node* &head) {
    if(head=NULL) {
        return;
    }
    Node* temp = head;
    head = head->next;
    free(temp);
}
void printNodes(Node* head) {
    Node* temp = head;
    while(temp!=NULL) {
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
}
int main() {
    Node* head = NULL;
    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);
    deleteAtHead(head);
    printNodes(head);
    return 0;
    // time_complexity: O(1);
}*/
// Deletion of an element at tail;
/*#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int value) {
        val = value;
        next = NULL;
    }
};
void insertAtEnd(Node* &head, int value) {
    Node* new_node = new Node(value);
    if(head==NULL) {
        head = new_node;
        return;
    }
    Node* temp = head;
    while(temp->next!=NULL) {
        temp = temp->next;
    }
    temp->next = new_node;
}
void deleteAtEnd(Node* head) {
    // if(head=NULL) {
    //     return;
    // }
    Node* second_last = head;
    while(second_last->next->next!=NULL) {
        second_last = second_last->next;
    }
    Node* temp = second_last->next;
    second_last->next = NULL;
    free(temp);
}
void printNodes(Node* head) {
    Node* temp = head;
    while(temp!=NULL) {
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
}
int main() {
    Node* head = NULL;
    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);
    deleteAtEnd(head);
    printNodes(head);
    return 0;
    // time_complexity: O(n);
}
*/
// deletion at kth position in a linked_list;
/*#include <iostream>
using namespace std;
class Node {
    public:
    int val;
    Node* next;
    Node(int value) {
        val = value;
        next = NULL;
    }
};
void insertAtHead(Node* &head, int value) {
    Node* new_node = new Node(value);
    new_node->next = head;
    head = new_node;
}
void insertAtTail(Node* &head, int value) {
    Node* new_node = new Node(value);
    if(head==NULL) {
        head = new_node;
        return;
    }
    Node* temp = head;
    while(temp->next!=NULL) {
        temp = temp->next; 
    }
    temp->next = new_node;
}
void insertAtKthpos(Node* head, int value, int k) {
    Node* new_node = new Node(value);
    if(k==0) {
        insertAtHead(head,value);
        return;
    }
    Node* temp = head;
    int i = 0;
    while(i<k-1) {
        temp = temp->next;
        i++;
    }
    new_node->next = temp->next;
    temp->next = new_node;
}
void printNodes(Node* head) {
    Node* temp = head;
    while(temp!=NULL) {
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
}
void deleteAtKthPos(Node* head, int k){
    Node* temp = head;
    int i = 0;
    while(i<k-1) {
        temp = temp->next;
        i++;
    }
    Node* dup = temp->next;
    temp->next = dup->next;
    free(dup);
}
int main() {
    Node* head = NULL;
    insertAtHead(head,1);
    insertAtTail(head,3);
    insertAtKthpos(head,2,1);
    deleteAtKthPos(head,1);
    printNodes(head);
    return 0;
}*/
// Linked_list Practice;
/*#include <iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int value) {
        val = value; 
        next = NULL;
    }
};
void addAtStart(Node* &head, int value) {
    Node* new_node = new Node(value);
    new_node->next = head;
    head = new_node;
}
void addAtEnd(Node* head, int value) {
    Node* new_node = new Node(value);
    if(head==NULL) {
        head = new_node;
        return;
    }
    else{
        Node* temp = head;
        while(temp->next!=NULL) {
            temp = temp->next;
        }
        new_node->next = NULL;
        temp->next = new_node;
    }
}
void addAtPos(Node* head, int value, int k) {
    if(k==0){
        addAtStart(head,value);
        return;
    }
    Node* new_node = new Node(value);
    Node* temp = head;
    int i = 0;
    while(i<k-1) {
        temp = temp->next;
        i++;
    }
    new_node->next = temp->next;
    temp->next = new_node;
}
void printNodes(Node* head) {
    Node* temp = head;
    while(temp!=NULL) {
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
}
void deleteAtStart(Node* &head) {
    Node* temp = head;
    head = head->next;
    free(temp);
}
void deleteAtEnd(Node* &head) {
    Node* temp = head;
    while(temp->next->next!=NULL) {
        temp = temp->next;
    }
    Node* dup = temp->next;
    temp->next = temp->next->next;
    free(dup);
}
void deleteAtPos(Node* head, int k) {
   if(k==0) {
       deleteAtStart(head);
   }
    Node* temp = head;
    int i = 0;
    while(i<k-1) {
        temp = temp->next;
        i++;
    }
    Node* dup = temp->next;
    temp->next = temp->next->next;
    free(dup);
}
int main() {
    Node* head = NULL;
    // addAtStart(head,3);
    // addAtStart(head,2);
    // addAtStart(head,1);
    // addAtPos(head,4,3);
    // addAtPos(head,5,4);
    // addAtPos(head,6,5);
    addAtEnd(head,7);
    addAtEnd(head,8);
    addAtEnd(head,9);
    // deleteAtStart(head);
    // deleteAtEnd(head);
    // deleteAtPos(head,3);
    printNodes(head);
    return 0;
}
*/
// given the head of the Linked_list, delete every alternate element from the list starting from the second element; 
/*#include <iostream>
using namespace std;
class Node {
    public:
    int val;
    Node* next;
    Node(int value) {
        val = value;
        next = NULL;
    }
};
void addAtStart(Node* &head, int value) {
    Node* new_node = new Node(value);
    new_node->next = head;
    head = new_node;
}
void addAtEnd(Node* &head, int value) {
    Node* new_node = new Node(value);
    if(head==NULL) {
        head = new_node;
        return;
    }
    else{
        Node* temp = head;
        while(temp->next!=NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}
void RemoveAlternative(Node* &head) {
    Node* temp = head;
    while(temp!=NULL and temp->next!=NULL) {
        Node* dup = temp->next;
        temp->next = temp->next->next;
        free(dup);
        temp = temp->next;
    }
}
void printNodes(Node* &head) {
    Node* temp = head;
    while(temp!=NULL) {
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
}
int main() {
    Node* head = NULL;
    addAtStart(head, 5);
    addAtStart(head, 4);
    addAtStart(head, 3);
    addAtStart(head, 2);
    addAtStart(head, 1);
    addAtEnd(head, 6);
    addAtEnd(head, 7);
    addAtEnd(head, 8);
    addAtEnd(head, 9);
    addAtEnd(head, 10);
    RemoveAlternative(head);
    printNodes(head);
    return 0;
}*/
// given the head of a sorted Linked_list, delete all duplicates such that each element appears only once and return the Linked_list sorted as well;
/*#include <iostream>
using namespace std;
class Node {
    public:
    int val;
    Node* next;
    Node(int value) {
        val = value;
        next = NULL;
    }
};
void insertAtHead(Node* &head, int value) {
    Node* new_node = new Node(value);
    new_node->next = head;
    head = new_node;
}
void insertAtTail(Node* &head, int value) {
    Node* new_node = new Node(value);
    if(head==NULL) {
        head = new_node;
        return;
    }
    else {
        Node* temp = head;
        while(temp->next!=NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}
void RemoveDuplicates(Node* &head){
    Node* temp = head;
    while(temp->next!=NULL) {
    if((temp->val)==((temp->next)->val)) {
             Node* dup = temp->next;
             temp->next = temp->next->next;
             free(dup);
    }
    else{
             temp = temp->next;
     }
    }
}
void printNodes(Node* &head) {
    Node* temp = head; 
    while(temp!=NULL) {
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
}
int main() {
    Node* head = NULL;
    insertAtHead(head,2);
    insertAtHead(head,2);
    insertAtHead(head,1);
    insertAtTail(head,3);
    insertAtTail(head,3);
    insertAtTail(head,3);
    RemoveDuplicates(head);
    printNodes(head);
    return 0;
}*/
// deleting the alternate elements starting with the first element;
/*#include <iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int value) {
        val = value;
        next = NULL;
    }
};
void addAtEnd(Node* &head, int value) {
    Node* new_node = new Node(value);
    if(head==NULL) {
        head = new_node;
    }
    else{
        Node* temp = head;
        while(temp->next!=NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}
// void deleteAlter(Node* &head) {
//     Node* temp = head;
//     Node* dup = NULL;
//     while(temp!=NULL and temp->next!=NULL) {
//         temp = temp->next;
//         dup = temp;
        
//         free(dup))
//     }
// }
void printNode(Node* &head) {
    Node* temp = head;
    while(temp!=NULL) {
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
}
int main() {
    Node* head = NULL;
    addAtEnd(head,1);
    addAtEnd(head,2);
    addAtEnd(head,3);
    addAtEnd(head,4);
    addAtEnd(head,5);
    addAtEnd(head,6);
    addAtEnd(head,7);
    addAtEnd(head,8);
    deleteAlter(head);
    printNode(head);
    return 0;
}*/
// printing Elements in reverse order;
/*#include <iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int value) {
        val = value;
        next = NULL;
    }
};
void addAtEnd(Node* &head, int value) {
    Node* new_node = new Node(value);
    if(head==NULL) {
        head = new_node;
    }
    else{
        Node* temp = head;
        while(temp->next!=NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}
void printReverse(Node* head) {
    if(head==NULL) {
        return;
    }
    else {
        printReverse(head->next);
        cout<<head->val<<"->";
    }
}
void printNode(Node* &head) {
    Node* temp = head;
    while(temp!=NULL) {
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
}
int main() {
    Node* head = NULL;
    addAtEnd(head,1);
    addAtEnd(head,2);
    addAtEnd(head,3);
    addAtEnd(head,4);
    addAtEnd(head,5);
    addAtEnd(head,6);
    addAtEnd(head,7);
    addAtEnd(head,8);
    // printNode(head);
    printReverse(head);
    cout<<"NULL";
    return 0;
}*/
/*#include <iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int value) {
        val = value;
        next = NULL;
    }
};
void addAtEnd(Node* &head, int value) {
    Node* new_node = new Node(value);
    if(head==NULL) {
        head = new_node;
    }
    else{
        Node* temp = head;
        while(temp->next!=NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}
void reverse(Node* &head) {
    Node* current = head;
    Node* previous = NULL;
    while(current!=NULL) {
        Node* temp = current->next;
        current->next = previous;
        previous = current;
        current = temp;
    }
    head = previous;
}
void printNode(Node* &head) {
    Node* temp = head;
    while(temp!=NULL) {
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
}
int main() {
    Node* head = NULL;
    addAtEnd(head,1);
    addAtEnd(head,2);
    addAtEnd(head,3);
    addAtEnd(head,4);
    addAtEnd(head,5);
    addAtEnd(head,6);
    addAtEnd(head,7);
    reverse(head);
    printNode(head);
    return 0;
}*/
/*#include <iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int value) {
        val = value;
        next = NULL;
    }
};
void addAtStart(Node* &head, int value) {
    Node* new_node = new Node(value);
    new_node->next = head;
    head = new_node;
}
void reverse(Node* &head) {
    Node* current = head;
    Node* temp = head;
    Node* previous = NULL;
    while(temp!=NULL) {
        temp = current->next;
        current->next = previous;
        previous = current;
        current = temp;
    }
    head = previous;
}
void printNodes(Node* &head) {
    Node* temp = head;
    while(temp!=NULL) {
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
}
int main() {
    Node* head = NULL;
    addAtStart(head,1);
    addAtStart(head,2);
    addAtStart(head,3);
    addAtStart(head,4);
    addAtStart(head,5);
    reverse(head);
    printNodes(head);
    return 0;
}*/
// Reversal of a Linked_list in an iterative manner;
/*#include <iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int value) {
        val = value;
        next = NULL;
    }
};
void addAtEnd(Node* &head, int value) {
    Node* new_node = new Node(value);
    if(head==NULL) {
        head = new_node;
    }
    else{
        Node* temp = head;
        while(temp->next!=NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}
void reverse(Node* &head) {
    Node* current = head;
    Node* previous = NULL;
    Node* temp = head;
    while(temp!=NULL) {
        temp = current->next;
        current->next = previous;
        previous = current;
        current = temp;
    }
    head = previous;
}
void printNode(Node* &head) {
    Node* temp = head;
    while(temp!=NULL) {
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
}
int main() {
    Node* head = NULL;
    addAtEnd(head,1);
    addAtEnd(head,2);
    addAtEnd(head,3);
    addAtEnd(head,4);
    addAtEnd(head,5);
    addAtEnd(head,6);
    addAtEnd(head,7);
    reverse(head);
    printNode(head);
    return 0;
}*/
// Reversal of Linked_list in Recursive Manner;
/*#include <iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int value) {
        val = value;
        next = NULL;
    }
};
void addAtStart(Node* &head, int value) {
    Node* new_node = new Node(value);
    new_node->next = head;
    head = new_node;
}
void reverse(Node* &head, Node* previous, Node* current) {
    if(current==NULL) {
        head = previous;
        return;
    }
    else{
        Node* nextNode = current->next;
        current->next = previous;
        previous = current;
        current = nextNode;
        reverse(head,previous,current);
    }
}
void printNodes(Node* &head) {
    Node* temp = head;
    while(temp!=NULL) {
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
}
int main() {
    Node* head = NULL;
    addAtStart(head,1);
    addAtStart(head,2);
    addAtStart(head,3);
    addAtStart(head,4);
    addAtStart(head,5);
    reverse(head,NULL,head);
    printNodes(head);
    return 0;
}
*/
// program_incomplete;
/*#include <iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int value) {
        val = value;
        next = NULL;
    }
};
void addAtStart(Node* &head, int value) {
    Node* new_node = new Node(value);
    new_node->next = head;
    head = new_node;
}
 reverse(Node* &head) {
    if(head==NULL or head->next == NULL) {
    return;
    }
    else {
        reverse(head->next);
        head->next->next = head;
        head->next = NULL;
    }
    
}
void printNodes(Node* &head) {
    Node* temp = head;
    while(temp!=NULL) {
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
}
int main() {
    Node* head = NULL;
    addAtStart(head,1);
    addAtStart(head,2);
    addAtStart(head,3);
    addAtStart(head,4);
    addAtStart(head,5);
    reverse(head);
    printNodes(head);
    return 0;
}
*/
// Given the head of a Linked_list, reverse the nodes of the list k at a time, and return the modified list;
// program_incomplete;
// #include <iostream>
// using namespace std;
// class Node{
//     public:
//     int val;
//     Node* next;
//     Node(int value) {
//         val = value;
//         next = NULL;
//     }
// };
// void addAtStart(Node* &head, int value) {
//     Node* new_node = new Node(value);
//     new_node->next = head;
//     head = new_node;
// }
// void reverseKatATime(Node* &head, int k) {
//     Node* temp = head;
//     Node* current = head->next;
//     Node* nextNode = head->next;
//     Node* connect = head;
//     while(nextNode!=NULL) {
//         int i = 0;
//     while(i<k-1 and nextNode!=NULL) {
//         nextNode = current->next;
//         current->next = temp;
//         temp = current;
//         current = nextNode;
//         i++;
//     }
//      node* fake = current;
//      int j=0;
//      while(j<k-1) {
//         fake = fake->next;
//         j++;
//      }
//      connect->next = fake;
//      connect = current;
//      temp = current;
//      current = current->next;
//     }
// }
// void printNodes(Node* &head) {
//     Node* temp = head;
//     while(temp!=NULL) {
//         cout<<temp->val<<"->";
//         temp = temp->next;
//     }
//     cout<<"NULL";
// }
// int main() {
//     Node* head = NULL;
//     addAtStart(head,1);
//     addAtStart(head,2);
//     addAtStart(head,3);
//     addAtStart(head,4);
//     addAtStart(head,5);
//     addAtStart(head,6);
//     addAtStart(head,7);
//     addAtStart(head,8);
//     addAtStart(head,9);
//     printNodes(head);
//     return 0;
// }
/*#include <iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int value) {
        val = value;
        next = NULL;
    }
};
void addAtEnd(Node* &head, int value) {
    Node* new_node = new Node(value);
    if(head==NULL) {
        head = new_node;
        return;
    }
    else {
        Node* temp = head;
        while(temp->next!=NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}
Node* reverseKatATime(Node* &head, int k) {
    Node* previous = NULL;
    Node* current = head;
    int i = 0;
    while(current!=NULL and i<k) {
        Node* nextNode = current->next;
        current->next = previous;
        previous = current;
        current = nextNode;
        i++;
    }
    if(current!=NULL) {
        Node* newHead = reverseKatATime(current, k);
        head->next = newHead;
    }
    return previous;
}
void printNodes(Node* &head) {
    Node* temp = head;
    while(temp!=NULL) {
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
}
int main() {
    Node* head = NULL;
    addAtEnd(head,1);
    addAtEnd(head,2);
    addAtEnd(head,3);
    addAtEnd(head,4);
    addAtEnd(head,5);
    addAtEnd(head,6);
    addAtEnd(head,7);
    addAtEnd(head,8);
    head = reverseKatATime(head,3);
    printNodes(head);
    return 0;
}
*/
// deleting the alternate elements starting with the first element;
/*#include <iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int value) {
        val = value;
        next = NULL;
    }
};
void addAtEnd(Node* &head, int value) {
    Node* new_node = new Node(value);
    if(head==NULL) {
        head = new_node;
        return;
    }
    else {
        Node* temp = head;
        while(temp->next!=NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}
void deleteAlterAtFirst(Node* &head) {
    Node* current = head;
    Node* temp = head;
    head = head->next;
    if(current == temp) {
        temp = current;
        current = current->next;
        free(temp);
    }
    while(current!=NULL and current->next!=NULL) {
            temp = current->next;
            current->next = current->next->next;
            free(temp);
            current = current->next;
    }

}
void printNodes(Node* &head) {
    Node* temp = head;
    while(temp!=NULL) {
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
}
int main() {
    Node* head = NULL;
    addAtEnd(head,1);
    addAtEnd(head,2);
    addAtEnd(head,3);
    addAtEnd(head,4);
    addAtEnd(head,5);
    addAtEnd(head,6);
    addAtEnd(head,7);
    addAtEnd(head,8);
    addAtEnd(head,9);
    addAtEnd(head,10);
    // head = reverseKatATime(head,3);
    deleteAlterAtFirst(head);
    printNodes(head);
    return 0;
}*/
// Linked_list excercise;
// 1. Write a C++ program to create and display a Singly Linked List.
/*#include <iostream>
using namespace std;
class Node {
    public: 
    int val;
    Node* next;
    Node(int value) {
        val = value;
        next = NULL;
    }
};
void addAtStart(Node* &head, int value) {
    Node* new_node = new Node(value);
    new_node->next = head;
    head = new_node;
}
void printNodes(Node* head) {
    Node* temp = head;
    while(temp!=NULL) {
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
}
int main() {
    Node* head = NULL;
    addAtStart(head,1);
    addAtStart(head,3);
    addAtStart(head,5);
    addAtStart(head,7);
    addAtStart(head,9);
    addAtStart(head,11);
    printNodes(head);
    return 0;
}*/
// 2. Write a C++ program to create a singly linked list of n nodes and display it in reverse order.
/*#include <iostream>
using namespace std;
class Node {
    public: 
    int val;
    Node* next;
    Node(int value) {
        val = value;
        next = NULL;
    }
};
void addAtStart(Node* &head, int value) {
    Node* new_node = new Node(value);
    new_node->next = head;
    head = new_node;
}
void printReverse(Node* &head) {
    Node* temp = head;
    Node* previous = head; 
    while(temp->next!=NULL and previous->next->next!=NULL) {
        previous = previous->next;
        temp = previous->next;
    }
    cout<<temp->val<<" ";
    while(previous!=head) {
        Node* note = previous;
        temp = head;
        previous = head;
        while(temp!=note) {
            if(previous->next!=note) {
                previous = previous->next;
            }
            temp = temp->next;
        }
        cout<<temp->val<<" ";
    }
    cout<<previous->val<<" ";
}
void printNodes(Node* head) {
    Node* temp = head;
    while(temp!=NULL) {
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
}
int main() {
    Node* head = NULL;
    addAtStart(head,1);
    addAtStart(head,3);
    addAtStart(head,5);
    addAtStart(head,7);
    addAtStart(head,9);
    addAtStart(head,11);
    printReverse(head);
    return 0;
}
*/
/*#include <iostream>
using namespace std;
class Node {
    public: 
    int val;
    Node* next;
    Node(int value) {
        val = value;
        next = NULL;
    }
};
void addAtStart(Node* &head, int value) {
    Node* new_node = new Node(value);
    new_node->next = head;
    head = new_node;
}
void counttNodes(Node* head) {
    Node* temp = head;
    int count = 0;
    while(temp!=NULL) {
        count++;
        temp = temp->next;
    }
    cout<<count;
}
void printNodes(Node* head) {
    Node* temp = head;
    while(temp!=NULL) {
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
}
int main() {
    Node* head = NULL;
    addAtStart(head,1);
    addAtStart(head,3);
    addAtStart(head,5);
    addAtStart(head,7);
    addAtStart(head,9);
    addAtStart(head,11);
    addAtStart(head,13);
    counttNodes(head);
    return 0;
}*/
// 4. Write a C++ program to insert a new node at the beginning of a Singly Linked List.
/*#include <iostream>
using namespace std;
class Node {
    public: 
    int val;
    Node* next;
    Node(int value) {
        val = value;
        next = NULL;
    }
};
void addAtStart(Node* &head, int value) {
    Node* new_node = new Node(value);
    new_node->next = head;
    head = new_node;
}
void printNodes(Node* head) {
    Node* temp = head;
    while(temp!=NULL) {
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
}
int main() {
    Node* head = NULL;
    addAtStart(head,1);
    addAtStart(head,3);
    addAtStart(head,5);
    addAtStart(head,7);
    addAtStart(head,9);
    addAtStart(head,11);
    addAtStart(head,13);
    addAtStart(head,0);
    printNodes(head);
    return 0;
}*/
// 5. Write a C++ program to insert a new node at the end of a Singly Linked List.
/*#include <iostream>
using namespace std;
class Node {
    public: 
    int val;
    Node* next;
    Node(int value) {
        val = value;
        next = NULL;
    }
};
void addAtStart(Node* &head, int value) {
    Node* new_node = new Node(value);
    new_node->next = head;
    head = new_node;
}
void addAtEnd(Node* &head, int value) {
    Node* new_node = new Node(value);
    if(head==NULL) {
        head = new_node;
        return;
    }
    Node* temp = head;
    while(temp->next!=NULL) {
        temp = temp->next;
    }
    temp->next = new_node;
}
void printNodes(Node* head) {
    Node* temp = head;
    while(temp!=NULL) {
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
}
int main() {
    Node* head = NULL;
    addAtStart(head,1);
    addAtStart(head,3);
    addAtStart(head,5);
    addAtStart(head,7);
    addAtStart(head,9);
    addAtStart(head,11);
    addAtStart(head,13);
    addAtEnd(head,0);
    printNodes(head);
    return 0;
}*/
// 6. Write a C++ program to find the middle element of a given Linked List. 
/*#include <iostream>
using namespace std;
class Node {
    public: 
    int val;
    Node* next;
    Node(int value) {
        val = value;
        next = NULL;
    }
};
void addAtStart(Node* &head, int value) {
    Node* new_node = new Node(value);
    new_node->next = head;
    head = new_node;
}
void addAtEnd(Node* &head, int value) {
    Node* new_node = new Node(value);
    if(head==NULL) {
        head = new_node;
        return;
    }
    Node* temp = head;
    while(temp->next!=NULL) {
        temp = temp->next;
    }
    temp->next = new_node;
}
void findMiddleEle(Node* &head) {
    Node* temp = head;
    int count = 0;
    while(temp!=NULL) {
        temp = temp->next;
        count++;
    }
    int mid = (count/2)+1;
    temp = head;
    int i = 1;
    while(i<mid) {
        temp = temp->next;
        i++;
    }
    cout<<temp->val;
}
void printNodes(Node* head) {
    Node* temp = head;
    while(temp!=NULL) {
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
}
int main() {
    Node* head = NULL;
    addAtEnd(head,9);
    addAtEnd(head,7);
    addAtEnd(head,5);
    addAtEnd(head,3);
    addAtEnd(head,1);
    // printNodes(head);
    findMiddleEle(head);
    return 0;
}*/
// 7. Write a C++ program to insert a new node at the middle of a given Singly Linked List. 
/*#include <iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int value) {
        val = value;
        next = NULL;
    }
};
void addAtStart(Node* &head, int value) {
    Node* new_node = new Node(value);
    new_node->next = head;
    head = new_node;
}
void addAtEnd(Node* &head, int value) {
    Node* new_node = new Node(value);
    if(head==NULL) {
        head = new_node;
    }
    else {
        Node* temp = head;
        while(temp->next!=NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}
void insertAtKthpos(Node* &head, int value, int k) {
    if(k==0){
        addAtStart(head,value);
        return;
    }
    else {
    Node* new_node = new Node(value);
    Node* temp = head;
    int i = 0;
    while(i<k-2) {
        temp = temp->next;
        i++;
    }
    new_node->next = temp->next;
    temp->next = new_node;
    }
}
void insertAtMid(Node* &head, int value) {
    Node* temp = head;
    int count = 0;
    while(temp!=NULL) {
        temp = temp->next;
        count++;
    }
    int mid = (count/2)+1;
    insertAtKthpos(head, value, mid);
}
void printNodes(Node* &head) {
    Node* temp = head;
    while(temp!=NULL) {
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
}
int main() {
    Node* head = NULL;
    addAtEnd(head,1);
    addAtEnd(head,2);
    addAtEnd(head,5);
    addAtEnd(head,6);
    addAtEnd(head,7);
    // insertAtKthpos(head,4,4);
    // insertAtKthpos(head,6,6);
    // insertAtKthpos(head,0,0);
    insertAtMid(head,3);
    insertAtMid(head,4);
    printNodes(head);
    return 0;
}
*/
// 8. Write a C++ program to get Nth node in a given Singly Linked List. 
/*#include <iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int value) {
        val = value;
        next = NULL;
    }
};
void addAtStart(Node* &head, int value) {
    Node* new_node = new Node(value);
    new_node->next = head;
    head = new_node;
}
void addAtEnd(Node* &head, int value) {
    Node* new_node = new Node(value);
    if(head==NULL) {
        head = new_node;
    }
    else {
        Node* temp = head;
        while(temp->next!=NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}
void getNthNode(Node* &head, int n) {
    Node* temp = head;
    int i = 0;
    while(i<=n-2) {
        temp = temp->next;
        i++;
    }
    cout<<temp->val;
}
void insertAtKthpos(Node* &head, int value, int k) {
    if(k==0){
        addAtStart(head,value);
        return;
    }
    else {
    Node* new_node = new Node(value);
    Node* temp = head;
    int i = 0;
    while(i<k-2) {
        temp = temp->next;
        i++;
    }
    new_node->next = temp->next;
    temp->next = new_node;
    }
}
void printNodes(Node* &head) {
    Node* temp = head;
    while(temp!=NULL) {
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
}
int main() {
    Node* head = NULL;
    addAtEnd(head,7);
    addAtEnd(head,5);
    addAtEnd(head,3);
    addAtEnd(head,1);
    getNthNode(head,4);
    // printNodes(head);
    return 0;
}*/
// 9. Write a C++ program to insert a new node at any position of a Singly Linked List
/*#include <iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int value) {
        val = value;
        next = NULL;
    }
};
void addAtStart(Node* &head, int value) {
    Node* new_node = new Node(value);
    new_node->next = head;
    head = new_node;
}
void addAtEnd(Node* &head, int value) {
    Node* new_node = new Node(value);
    if(head==NULL) {
        head = new_node;
    }
    else {
        Node* temp = head;
        while(temp->next!=NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}
void getNthNode(Node* &head, int n) {
    if(n==0) {
        cout<<" ";
        return;
    }
    Node* temp = head;
    int i = 0;
    while(i<=n-2) {
        temp = temp->next;
        i++;
    }
    cout<<temp->val;
}
void insertAtKthpos(Node* &head, int value, int k) {
    if(k==0){
        addAtStart(head,value);
        return;
    }
    else {
    Node* new_node = new Node(value);
    Node* temp = head;
    int i = 0;
    while(i<k-2) {
        temp = temp->next;
        i++;
    }
    new_node->next = temp->next;
    temp->next = new_node;
    }
}
void printNodes(Node* &head) {
    Node* temp = head;
    while(temp!=NULL) {
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
}
int main() {
    Node* head = NULL;
    addAtEnd(head,7);
    addAtEnd(head,5);
    addAtEnd(head,3);
    addAtEnd(head,1);
    getNthNode(head,2);
    // printNodes(head);
    return 0;
}
*/
// deleting element at any position;
/*#include <iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int value) {
        val = value;
        next = NULL;
    }
};
void addAtEnd(Node* &head, int value) {
    Node* new_node = new Node(value);
    if(head==NULL) {
        head = new_node;
    }
    else {
        Node* temp = head;
        while(temp->next!=NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}
void deleteAtStart(Node* &head) {
    Node* temp = head;
    head = head->next;
    free(temp);
}
void deleteAtEnd(Node* &head) {
    Node* temp = head;
    while(temp->next->next!=NULL) {
        temp = temp->next;
    }
    Node* dlt = temp->next;
    temp->next = NULL;
    free(dlt);
}
void deleteAtKthPos(Node* &head, int k) {
    if(k==0) {
        deleteAtStart(head);
        return;
    }
    else{
    Node* temp = head;
    int i = 0;
    while(i<k-1) {
        temp = temp->next;
        i++;
    }
    Node* dlt = temp->next;
    temp->next = temp->next->next;
    free(dlt);
    }
}
void printNodes(Node* &head) {
    Node* temp = head;
    while(temp!=NULL) {
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
}
int main() {
    Node* head = NULL;
    addAtEnd(head,1);
    addAtEnd(head,2);
    addAtEnd(head,3);
    addAtEnd(head,4);
    addAtEnd(head,5);
    addAtEnd(head,6);
    // deleteAtStart(head);
    // deleteAtEnd(head);
    // deleteAtKthPos(head,0);
    printNodes(head);
    return 0;
}
*/
// 11. Write a C++ program to delete a node from the middle of Singly Linked List
/*#include <iostream>
using namespace std;
class Node {
    public:
    int val;
    Node* next;
    Node(int value) {
        val = value;
        next = NULL;
    }
};
void addAtEnd(Node* &head, int value) {
    Node* new_node = new Node(value);
    if(head==NULL) {
        head = new_node;
    }
    else {
        Node* temp = head;
        while(temp->next!=NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}
void deleteMiddle(Node* &head) {
    Node* temp = head;
    int count = 0;
    while(temp!= NULL) {
        count++;
        temp = temp->next;
    }
    int mid = (count/2)+1;
    int i = 0;
    temp = head;
    while(i<mid-2) {
        temp = temp->next;
        i++;
    }
    Node* dup = temp->next;
    temp->next = temp->next->next;
    free(dup);
}
void printNodes(Node* &head) {
    Node* temp = head;
    while(temp!=NULL) {
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
}
int main() {
    Node* head = NULL;
    addAtEnd(head,9);
    addAtEnd(head,7);
    addAtEnd(head,5);
    addAtEnd(head,3);
    addAtEnd(head,1);
    deleteMiddle(head);
    printNodes(head);
    return 0;
}*/
//Q) Write a C++ program to find the kth node of a linked list by starting at the middle and moving towards the head.
/*#include <iostream>
using namespace std;
class Node {
    public:
    int val;
    Node* next;
    Node(int value) {
        val = value;
        next = NULL;
    }
};
void addAtEnd(Node* &head, int value) {
    Node* new_node = new Node(value);
    if(head==NULL) {
        head = new_node;
    }
    else {
        Node* temp = head;
        while(temp->next!=NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}
void targetValue(Node* &head, int pos) {
    Node* temp = head;
    int count = 0;
    while(temp!= NULL) {
        count++;
        temp = temp->next;
    }
    int mid = (count/2)+1;
    int target = (mid-1)-pos;
    temp = head;
    int i = 0;
    while(i<target) {
        temp = temp->next;
        i++;
    }
    cout<<temp->val;
}
void printNodes(Node* &head) {
    Node* temp = head;
    while(temp!=NULL) {
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
}
int main() {
    Node* head = NULL;
    addAtEnd(head,9);
    addAtEnd(head,7);
    addAtEnd(head,5);
    addAtEnd(head,3);
    addAtEnd(head,1);
    targetValue(head,2);
    return 0;
}*/
// reversal of a linked_list practice;
/*#include <iostream>
using namespace std;
class Node {
    public:
    int val;
    Node* next;
    Node(int value) {
        val = value;
        next = NULL;
    }
};
void addAtEnd(Node* &head, int value) {
    Node* new_node = new Node(value);
    if(head==NULL) {
        head = new_node;
    }
    else {
        Node* temp = head;
        while(temp->next!=NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}
void reversal(Node* &head) {
    Node* current = head;
    Node* previous = NULL;
    Node* nextNode;
    while(current!=NULL) {
        nextNode = current->next;
        current->next = previous;
        previous = current;
        current = nextNode;
    }
    head = previous;
}
void printNodes(Node* &head) {
    Node* temp = head;
    while(temp!=NULL) {
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
}
int main() {
    Node* head = NULL;
    addAtEnd(head,9);
    addAtEnd(head,7);
    addAtEnd(head,5);
    addAtEnd(head,3);
    addAtEnd(head,1);
    reversal(head);
    printNodes(head);
    return 0;
}
*/
// sorting a linked_list:
// #include <iostream>
// using namespace std;
// class Node {
//     public:
//     int val;
//     Node* next;
//     Node(int value) {
//         val = value;
//         next = NULL;
//     }
// };
// void addAtEnd(Node* &head, int value) {
//     Node* new_node = new Node(value);
//     if(head==NULL) {
//         head = new_node;
//     }
//     else {
//         Node* temp = head;
//         while(temp->next!=NULL) {
//             temp = temp->next;
//         }
//         temp->next = new_node;
//     }
// }
// // using bubble sort;
// void sort(Node* &head) {
//     Node* temp = head;
//     int count = 0;
//     while(temp != NULL) {
//         count++;
//         temp = temp->next;
//     }
//     int n = count;
//     // for(int i=0; i<n-1; i++) {
//         temp = head;
//         Node* start;
//         count = 0;
//         Node* trace;
//         int temp_val = temp->val;
//         int dup_val; 
//         int start_val;
//         int trace_val;
//         for(int j=0; j<n-1-0; j++) {
//             bool flag = false;
//             Node* ptr = temp;
//             Node* dup;
//             if((temp->val)>((temp->next)->val)) {
//                 dup = temp->next;
//                 temp->next = temp->next->next;
//                 dup->next = temp;
//                 flag = true;
//                 count++;
//                 temp_val = temp->val;
//                 dup_val = dup->val;
//             }
//             {
//                 if(j==0 and flag==true) {
//                     start = dup;
//                     head = start;
//                 }
//                 else if(j==0 and flag==false) {
//                     start = temp;
//                     head = start;
//                 }
//                 start_val = start->val;
//             }
//             {
//             if(count==1 and flag==true) {
//                 trace = dup;
        
//             }
//             else if(count>1 and flag==true) {
//                 trace->next = dup;
//                 trace = trace->next;
//             }
//             else  {
//                 trace = temp;
//             }
//             trace_val = trace->val;
//             }
//             if(temp->next==NULL) {
//                 break;
//             }
//           { 
//             if(flag==true) {
//                 temp = ptr;
//             }
//             else{
//                 temp = ptr->next;
//             }
//             temp_val = temp->val;
//           }
//         }
//     }
// // }
// void reversal(Node* &head) {
//     Node* current = head;
//     Node* previous = NULL;
//     Node* nextNode;
//     Node* temp = head;
//     while(current!=NULL) {
//         nextNode = current->next;
//         current->next = previous;
//         previous = current;
//         current = nextNode;
//     }
//     head = previous;
// }
// void printNodes(Node* &head) {
//     Node* temp = head;
//     int temp_val;
//     temp_val = temp->val;
//     while(temp!=NULL) {
//         cout<<temp->val<<"->";
//         temp = temp->next;
//         if(temp!=NULL) {
//         temp_val = temp->val; }
//     }
//     cout<<"NULL";
// }
// int main() {
//     Node* head = NULL;
//     addAtEnd(head,7);
//     addAtEnd(head,9);
//     addAtEnd(head,4);
//     addAtEnd(head,1);
//     addAtEnd(head,3);
//     // addAtEnd(head,5);
//     // addAtEnd(head,4);
//     // addAtEnd(head,3);
//     // addAtEnd(head,2);
//     // addAtEnd(head,1);
//     sort(head);
//     // reversal(head);
//     printNodes(head);
//     return 0;
// }
// removing duplicates in a sorted linked list;
/*#include <iostream>
using namespace std;
class Node {
    public:
    int val;
    Node* next;
    Node(int value) {
        val = value;
        next = NULL;
    }
};
void addAtEnd(Node* &head, int value) {
    Node* new_node = new Node(value);
    if(head==NULL) {
        head = new_node;
    }
    else {
        Node* temp = head;
        while(temp->next!=NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}
void RemoveDuplicates(Node* &head) {
    Node* temp = head;
    while(temp!=NULL) {
    if(temp->val == temp->next->val) {
        temp->next = temp->next->next;
        temp = temp->next;
    }
    else {
        temp = temp->next;
    }
    }
}
void reversal(Node* &head) {
    Node* current = head;
    Node* previous = NULL;
    Node* nextNode;
    Node* temp = head;
    while(current!=NULL) {
        nextNode = current->next;
        current->next = previous;
        previous = current;
        current = nextNode;
    }
    head = previous;
}

void printNodes(Node* &head) {
    Node* temp = head;
    while(temp!=NULL) {
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
int main() {
    Node* head = NULL;
    addAtEnd(head,1);
    addAtEnd(head,2);
    addAtEnd(head,2);
    addAtEnd(head,3);
    addAtEnd(head,3);
    printNodes(head);
    RemoveDuplicates(head);
    printNodes(head);
    return 0;
}*/
// Q1) Given two linked linked lists, tell if they are equal or not;
// Two lists are said to be identical if they are possessing the same data in the same order;
/*#include <iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int value) {
        val = value;
        next = NULL;
    }
};
class LL{
   public: 
   Node* head;
   LL() {
       head = NULL;
   }
   void addAtLast(int value) {
    Node* new_node = new Node(value);
    if(head==NULL) {
        head = new_node;
        return;
    }
    Node* temp = head;
    while(temp->next!=NULL) {
        temp = temp->next;
        }
    temp->next = new_node;
    }
    void displayNodes() {
    Node* temp = head;
    while(temp!=NULL) {
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
};
int checkEquality(Node* head1,Node* head2) {
    Node* temp1 = head1;
    Node* temp2 = head2;
    int count1 = 0;
    int count2 = 0;
    while(temp1!=NULL) {
        temp1 = temp1->next;
        count1++;
    }
    while(temp2!=NULL) {
        temp2 = temp2->next;
        count2++;
    }
    if(count1!=count2) { return 0; }
    temp1 = head1;
    temp2 = head2;
    int result = 0;
    while(temp1!=NULL and temp2!=NULL) {
        if(temp1->val==temp2->val) {
            result = 1;
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        else {
            return 0;
        }
    }
    return 1;
}
int main() {
    LL l1;
    LL l2;
    l1.addAtLast(1);
    l1.addAtLast(2);
    l1.addAtLast(3);
    l1.addAtLast(4);
    l1.addAtLast(5);
    l1.displayNodes();
    l2.addAtLast(1);
    l2.addAtLast(2);
    l2.addAtLast(3);
    l2.addAtLast(4);
    l2.addAtLast(5);
    l2.displayNodes();
    cout<<checkEquality(l1.head,l2.head);
    return 0;
}*/
// Q2) Give the heads of two Singly linked lists head1 and head2, return the node at which the two linked lists intersect, if the two linked 
// lists have no intersection at all, return null;
/*#include <iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int value) {
        val = value;
        next = NULL;
    }
};
class LL{
   public: 
   Node* head;
   LL() {
       head = NULL;
   }
   void addAtLast(int value) {
    Node* new_node = new Node(value);
    if(head==NULL) {
        head = new_node;
        return;
    }
    Node* temp = head;
    while(temp->next!=NULL) {
        temp = temp->next;
        }
    temp->next = new_node;
    }
    void displayNodes() {
    Node* temp = head;
    while(temp!=NULL) {
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
};
int getLength(Node* head) {
    Node* temp = head;
    int count = 0;
    while(temp!=NULL) {
        temp = temp->next;
        count++;
    }
    return count;
}
Node* shiftNode(Node* head, int shift) {
    Node* temp = head;
    for(int i=0; i<shift; i++) {
        temp = temp->next;
    }
    return temp;
}
Node* intersectionNode(Node* head1, Node* head2) {
    int L1,L2;
    L1 = getLength(head1);
    L2 = getLength(head2);
    Node* temp1 = head1;
    Node* temp2 = head2;
    int shift;
    if(L2>L1) {
        shift = L2-L1;
        temp2 = shiftNode(head2, shift);
    }
    else {
        shift = L1-L2;
        temp1 = shiftNode(head1, shift);
    }
    while(temp1!=temp2) {
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    return temp1;
}
int main() {
    LL l1;
    LL l2;
    l1.addAtLast(1);
    l1.addAtLast(2);
    l1.addAtLast(3);
    l1.addAtLast(4);
    l1.addAtLast(5);
    l1.addAtLast(6);
    l1.addAtLast(7);
    l1.addAtLast(8);
    l1.addAtLast(9);
    l2.addAtLast(3);
    l2.addAtLast(4);
    l2.addAtLast(5);
    l1.displayNodes();
    l2.displayNodes();
    l2.head->next->next->next = l1.head->next->next->next->next->next;
    Node* result = intersectionNode(l1.head,l2.head);
    l1.displayNodes();
    l2.displayNodes();
    if(result!=NULL) {
        cout<<result->val;
    }
    else {
        cout<<"NULL";
    }
    return 0;
}*/
// Q3) Given the head of a linked list, remove the kth node from the end of the list and return it's head;
// BruteForce_Approach:
/*#include <iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int value) {
        val = value;
        next = NULL;
    }
};
class LL{
   public: 
   Node* head;
   LL() {
       head = NULL;
   }
   void addAtLast(int value) {
    Node* new_node = new Node(value);
    if(head==NULL) {
        head = new_node;
        return;
    }
    Node* temp = head;
    while(temp->next!=NULL) {
        temp = temp->next;
        }
    temp->next = new_node;
    }
    void displayNodes() {
    Node* temp = head;
    while(temp!=NULL) {
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
};
int getLength(Node* head) {
    Node* temp = head;
    int count = 0;
    while(temp!=NULL) {
        temp = temp->next;
        count++;
    }
    return count;
}
Node* removeKthNodeFromLast(Node* &head, int k) {
    int L = getLength(head);
    Node* temp = head;
    int fwd = L-k+1;
    Node* dup;
    if(fwd==1) {
        dup = head;
        head = head->next;
        free(dup);
    }
    else{
    for(int i=0; i<fwd-2; i++) {
        temp = temp->next;
    }
    dup = temp->next;
    temp->next = temp->next->next;
    free(dup);
    }
    return head;
}
int main() {
    LL l1;
    LL l2;
    l1.addAtLast(1);
    l1.addAtLast(2);
    l1.addAtLast(3);
    l1.addAtLast(4);
    l1.addAtLast(5);
    l1.addAtLast(6);
    l1.addAtLast(7);
    l1.addAtLast(8);
    l1.addAtLast(9);
    l1.head = removeKthNodeFromLast(l1.head, 9);
    l1.displayNodes();
    return 0;
}*/
// two_ptr_approach:
/*#include <iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int value) {
        val = value;
        next = NULL;
    }
};
class LL{
   public: 
   Node* head;
   LL() {
       head = NULL;
   }
   void addAtLast(int value) {
    Node* new_node = new Node(value);
    if(head==NULL) {
        head = new_node;
        return;
    }
    Node* temp = head;
    while(temp->next!=NULL) {
        temp = temp->next;
        }
    temp->next = new_node;
    }
    void displayNodes() {
    Node* temp = head;
    while(temp!=NULL) {
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
};
int getLength(Node* head) {
    Node* temp = head;
    int count = 0;
    while(temp!=NULL) {
        temp = temp->next;
        count++;
    }
    return count;
}
Node* shiftNode(Node* head, int shift) {
    Node* temp = head;
    for(int i=0; i<shift; i++) {
        temp = temp->next;
    }
    return temp;
}
Node* removeKthNodeFromLast(Node* &head, int k) {
    Node* temp1 = head;
    Node* temp2 = shiftNode(head,k);
    if(temp2==NULL) {
        head = head->next;
        free(temp1);
    }
    else {
    while(temp2->next!=NULL) {
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    Node* dup = temp1->next;
    temp1->next = temp1->next->next;
    free(dup);
    }
    return head;
}
int main() {
    LL l1;
    l1.addAtLast(1);
    l1.addAtLast(2);
    l1.addAtLast(3);
    l1.addAtLast(4);
    l1.addAtLast(5);
    l1.addAtLast(6);
    l1.addAtLast(7);
    l1.addAtLast(8);
    l1.addAtLast(9);
    l1.head = removeKthNodeFromLast(l1.head, 5);
    l1.displayNodes();
    return 0;
}*/
//Q)merging_two_sorted_linked_lists;
// Using_Merge_Sort;
/*#include <iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int value) {
        val = value;
        next = NULL;
    }
};
class LL{
   public: 
   Node* head;
   LL() {
       head = NULL;
   }
   void addAtLast(int value) {
    Node* new_node = new Node(value);
    if(head==NULL) {
        head = new_node;
        return;
    }
    Node* temp = head;
    while(temp->next!=NULL) {
        temp = temp->next;
        }
    temp->next = new_node;
    }
    void displayNodes() {
    Node* temp = head;
    while(temp!=NULL) {
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
};
Node* mergeSortedLinkedLists(Node* &head1, Node* &head2) {
    Node* ptr1 = head1;
    Node* ptr2 = head2;
    Node* ptr3;
    Node* ans;
    if(head1->val<head2->val) {
         ptr3 = head1;
         ptr1 = head1->next;
         ans = ptr3;
         
    }
    else{
         ptr3 = head2;
         ptr2 = head2->next;
         ans = ptr3;
    }
    int i = 0;
    int ptr1_val;
    int ptr2_val;
    int ptr3_val;
    while(ptr1!=NULL or ptr2!=NULL) {
    if((ptr1!=NULL and ptr2!=NULL)) {
    if(ptr1->val<ptr2->val) {
        ptr3->next = ptr1;
        ptr1_val = ptr1->val;
        ptr3_val = ptr3->val;
        ptr1 = ptr1->next;
        ptr3 = ptr3->next;
        if(ptr1!=NULL) {
        ptr1_val = ptr1->val;
        ptr3_val = ptr3->val;
        }
        if(ptr3!=NULL) {
            ptr3_val = ptr3->val;
        }
        i++;
    }
    else {
        ptr3->next = ptr2;
        ptr2_val = ptr2->val;
        ptr3_val = ptr3->val;
        ptr2 = ptr2->next;
        ptr3 = ptr3->next;
        if(ptr2!=NULL) {
        ptr2_val = ptr2->val;
        }
        if(ptr3!=NULL) {
            ptr3_val = ptr3->val;
        }
        i++;
    }
    }
    else {
        if (ptr1!=NULL) {
        ptr3->next = ptr1;
        ptr1_val = ptr1->val;
        ptr3_val = ptr3->val;
        ptr1 = ptr1->next;
        ptr3 = ptr3->next;
        ptr3->next = ptr1;
       if(ptr1!=NULL) {
        ptr1_val = ptr1->val;
        }
         if(ptr3!=NULL) {
            ptr3_val = ptr3->val;
        }
        i++;
        
    }
       if(ptr2!=NULL) {
        ptr3->next = ptr2;
        ptr2_val = ptr2->val;
        ptr3_val = ptr3->val;
        ptr2 = ptr2->next;
        ptr3 = ptr3->next;
       if(ptr2!=NULL) {
        ptr2_val = ptr2->val;
        }
        if(ptr3!=NULL) {
            ptr3_val = ptr3->val;
        }
        i++;
    }
    }
    }
    return ans;
}
int main() {
    LL l1;
    LL l2;
    l1.addAtLast(1);
    l1.addAtLast(4);
    l1.addAtLast(5);
    l2.addAtLast(2);
    l2.addAtLast(3);
    Node* result = mergeSortedLinkedLists(l1.head, l2.head);
    if(l1.head==result) {
    l1.displayNodes();
    }
    else{
    l2.displayNodes();
    }
    return 0;
}*/
// Q)Merging Multiple Linked Lists;
/*#include <iostream>
#include <vector>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int value) {
        val = value;
        next = NULL;
    }
};
class LL{
   public: 
   Node* head;
   LL() {
       head = NULL;
   }
   void addAtLast(int value) {
    Node* new_node = new Node(value);
    if(head==NULL) {
        head = new_node;
        return;
    }
    Node* temp = head;
    while(temp->next!=NULL) {
        temp = temp->next;
        }
    temp->next = new_node;
    }
    void displayNodes() {
    Node* temp = head;
    while(temp!=NULL) {
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
};
Node* mergeSortedLinkedLists(Node* &head1, Node* &head2) {
    Node* ptr1 = head1;
    Node* ptr2 = head2;
    Node* ptr3;
    Node* ans;
    if(head1->val<head2->val) {
         ptr3 = head1;
         ptr1 = head1->next;
         ans = ptr3;
         
    }
    else{
         ptr3 = head2;
         ptr2 = head2->next;
         ans = ptr3;
    }
    int i = 0;
    int ptr1_val;
    int ptr2_val;
    int ptr3_val;
    while(ptr1!=NULL or ptr2!=NULL) {
    if((ptr1!=NULL and ptr2!=NULL)) {
    if(ptr1->val<ptr2->val) {
        ptr3->next = ptr1;
        ptr1_val = ptr1->val;
        ptr3_val = ptr3->val;
        ptr1 = ptr1->next;
        ptr3 = ptr3->next;
        if(ptr1!=NULL) {
        ptr1_val = ptr1->val;
        ptr3_val = ptr3->val;
        }
        if(ptr3!=NULL) {
            ptr3_val = ptr3->val;
        }
        i++;
    }
    else {
        ptr3->next = ptr2;
        ptr2_val = ptr2->val;
        ptr3_val = ptr3->val;
        ptr2 = ptr2->next;
        ptr3 = ptr3->next;
        if(ptr2!=NULL) {
        ptr2_val = ptr2->val;
        }
        if(ptr3!=NULL) {
            ptr3_val = ptr3->val;
        }
        i++;
    }
    }
    else {
        if (ptr1!=NULL) {
        ptr3->next = ptr1;
        ptr1_val = ptr1->val;
        ptr3_val = ptr3->val;
        ptr1 = ptr1->next;
        ptr3 = ptr3->next;
        ptr3->next = ptr1;
       if(ptr1!=NULL) {
        ptr1_val = ptr1->val;
        }
         if(ptr3!=NULL) {
            ptr3_val = ptr3->val;
        }
        i++;
        
    }
       if(ptr2!=NULL) {
        ptr3->next = ptr2;
        ptr2_val = ptr2->val;
        ptr3_val = ptr3->val;
        ptr2 = ptr2->next;
        ptr3 = ptr3->next;
       if(ptr2!=NULL) {
        ptr2_val = ptr2->val;
        }
        if(ptr3!=NULL) {
            ptr3_val = ptr3->val;
        }
        i++;
    }
    }
    }
    return ans;
}
Node* MergeMultipleLinkedLists(vector <Node*>  &list_heads) {
    Node* temp_result;
    if(list_heads.size()==0) {
        return NULL;
    }
    else {
    while(list_heads.size()>1) {
    temp_result = mergeSortedLinkedLists(list_heads[0], list_heads[1]);
    list_heads.push_back(temp_result);
    list_heads.erase(list_heads.begin());
    list_heads.erase(list_heads.begin());
    }
    }
    return temp_result;
}
int main() {
    LL l1;
    LL l2;
    LL l3;
    l1.addAtLast(1);
    l1.addAtLast(4);
    l1.addAtLast(5);
    l2.addAtLast(2);
    l2.addAtLast(3);
    l2.addAtLast(6);
    l3.addAtLast(7);
    l3.addAtLast(8);
    l3.addAtLast(9);
    l3.addAtLast(10);
    vector <Node *> list_heads;
    list_heads.push_back(l1.head);
    list_heads.push_back(l2.head);
    list_heads.push_back(l3.head);
    Node* result = MergeMultipleLinkedLists(list_heads);
    LL l4;
    l4.head = result;
    l4.displayNodes();
    return 0;
}*/
// Q) Finding the middle element using slow_fast pointer approach:
/*#include <iostream>
#include <vector>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int value) {
        val = value;
        next = NULL;
    }
};
class LL{
   public: 
   Node* head;
   LL() {
       head = NULL;
   }
   void addAtLast(int value) {
    Node* new_node = new Node(value);
    if(head==NULL) {
        head = new_node;
        return;
    }
    Node* temp = head;
    while(temp->next!=NULL) {
        temp = temp->next;
        }
    temp->next = new_node;
    }
    void displayNodes() {
    Node* temp = head;
    while(temp!=NULL) {
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
};
Node* middleElement(Node* &head){
    Node* ptr1 = head;
    Node* ptr2 = head;
    while(ptr2!=NULL and ptr2->next!=NULL) {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next->next;
    }
    return ptr1;
}
int main() {
    LL l1;
    l1.addAtLast(1);
    l1.addAtLast(4);
    l1.addAtLast(5);
    l1.addAtLast(2);
    l1.addAtLast(3);
    l1.addAtLast(6);
    l1.addAtLast(7);
    l1.addAtLast(8);
    l1.addAtLast(9);
    l1.addAtLast(10);
    Node* result = middleElement(l1.head);
    if(result!=NULL) {
    cout<<result->val;
    }
    return 0;
}*/
// Q) checking cycularity...!
// using slow_fast ptr approach;
/*#include <iostream>
#include <vector>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int value) {
        val = value;
        next = NULL;
    }
};
class LL{
   public: 
   Node* head;
   LL() {
       head = NULL;
   }
   void addAtLast(int value) {
    Node* new_node = new Node(value);
    if(head==NULL) {
        head = new_node;
        return;
    }
    Node* temp = head;
    while(temp->next!=NULL) {
        temp = temp->next;
        }
    temp->next = new_node;
    }
    void displayNodes() {
    Node* temp = head;
    while(temp!=NULL) {
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
};
void cycleLastNode(Node* &head) {
    Node* temp = head;
    while(temp->next!=NULL) {
        temp = temp->next;
    }
    temp->next = head->next->next->next->next->next->next;
    cout<<temp->next->val<<endl;
    // temp->next = head;
}
int checkCycularity(Node* &head) {
    Node* ptr1 = head;
    Node* ptr2 = head;
    int i = 0;
    while((ptr1!=ptr2 or i==0)) {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next->next;
        if(ptr2==NULL or ptr2->next==NULL){
            return 0;
        }
       i++;
    }
    // cout<<i<<endl;
    cout<<ptr1->val<<endl;
    return 1;
}
int main() {
    LL l1;
    l1.addAtLast(1);
    l1.addAtLast(2);
    l1.addAtLast(3);
    l1.addAtLast(4);
    l1.addAtLast(5);
    l1.addAtLast(6);
    l1.addAtLast(7);
    l1.addAtLast(8);
    cycleLastNode(l1.head);
    int result = checkCycularity(l1.head);
    if(result) {
    cout<<"Yeah, LL is cycular.";
    }
    else {
        cout<<"LL is not cycular.";
    }
    return 0;
}
*/
// removing_cycularity:
/*#include <iostream>
#include <vector>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int value) {
        val = value;
        next = NULL;
    }
};
class LL{
   public: 
   Node* head;
   LL() {
       head = NULL;
   }
   void addAtLast(int value) {
    Node* new_node = new Node(value);
    if(head==NULL) {
        head = new_node;
        return;
    }
    Node* temp = head;
    while(temp->next!=NULL) {
        temp = temp->next;
        }
    temp->next = new_node;
    }
    void displayNodes() {
    Node* temp = head;
    while(temp!=NULL) {
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
};
void cycleLastNode(Node* &head) {
    Node* temp = head;
    while(temp->next!=NULL) {
        temp = temp->next;
    }
    // temp->next = head->next->next;
    // cout<<temp->next->val<<endl;
    // temp->next = head->next;
    temp->next = head->next->next->next->next->next->next;
}
Node* checkCycularity(Node* &head) {
    Node* ptr1 = head;
    Node* ptr2 = head;
    int i = 0;
    while((ptr1!=ptr2 or i==0)) {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next->next;
        if(ptr2==NULL or ptr2->next==NULL){
            return 0;
        }
       i++;
    }
    // cout<<i<<endl;
    // cout<<ptr2->val<<endl;
    return ptr1;
}
void removeCycularity(Node* &head) {
    Node* ptr2 = checkCycularity(head);
    Node* ptr1 = head;
    if(ptr1==ptr2) {
       Node* temp = head;
       while(temp->next!=head) {
           temp = temp->next;
       }
       temp->next = NULL;
       return;
    }
    while(ptr1->next!=ptr2->next) {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    // cout<<ptr2->next->val<<endl;
    ptr2->next = NULL;
}
int main() {
    LL l1;
    l1.addAtLast(1);
    l1.addAtLast(2);
    l1.addAtLast(3);
    l1.addAtLast(4);
    l1.addAtLast(5);
    l1.addAtLast(6);
    l1.addAtLast(7);
    l1.addAtLast(8);
    cycleLastNode(l1.head);
    removeCycularity(l1.head);
    l1.displayNodes();
    return 0;
}*/
// check palindrome...!
/*#include <iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int value) {
        val = value;
        next = NULL;
    }
};
class LL{
   public: 
   Node* head;
   LL() {
       head = NULL;
   }
   void addAtLast(int value) {
    Node* new_node = new Node(value);
    if(head==NULL) {
        head = new_node;
        return;
    }
    Node* temp = head;
    while(temp->next!=NULL) {
        temp = temp->next;
        }
    temp->next = new_node;
    }
    void displayNodes() {
    Node* temp = head;
    while(temp!=NULL) {
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
};
bool getNumber(Node* &head) {
    int num = 0;
    Node* temp = head;
    while(temp!=NULL) {
        num += temp->val;
        num *= 10;
        temp = temp->next;
    }
    num = num/10;
    // cout<<num<<endl;
    int rev_num = 0;
    while(num!=0) {
        rev_num += num%10;
        rev_num *= 10;
        num /= 10;
    }
    rev_num /= 10;
    // cout<<rev_num<<endl;
    if(num==rev_num) {
        return true;
    }
   return false;
}
int main() {
    LL l1;
    l1.addAtLast(1);
    l1.addAtLast(2);
    l1.addAtLast(3);
    l1.addAtLast(2);
    l1.addAtLast(6);
    bool result = getNumber(l1.head);
    if(result) {
    cout<<"your Linked List is a palindrome..!";
    }
    else {
        cout<<"cholly, your Linked List is not a palindrome..!";
    }
    // l1.displayNodes();
    return 0;
}*/
/*#include <iostream>
#include <vector>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int value) {
        val = value;
        next = NULL;
    }
};
class LL{
   public: 
   Node* head;
   LL() {
       head = NULL;
   }
   void addAtLast(int value) {
    Node* new_node = new Node(value);
    if(head==NULL) {
        head = new_node;
        return;
    }
    Node* temp = head;
    while(temp->next!=NULL) {
        temp = temp->next;
        }
    temp->next = new_node;
    }
    void displayNodes() {
    Node* temp = head;
    while(temp!=NULL) {
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
};
bool getResult(Node* &head) {
    // finding_middle_element_using_fast_slow_ptr_approach...
    Node* ptr1 = head;
    Node* ptr2 = head;
    while(ptr2!=NULL and ptr2->next!=NULL) {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next->next;
    }
    // cout<<ptr1->val;
    // reversing the elements starting from the element next to the middle element...
    Node* temp = head;
    while(temp!=ptr1->next) {
       temp = temp->next;
    }
    // cout<<temp->val;
    Node* previous = NULL;
    Node* current = temp;
    while(current!=NULL) {
        Node* nextNode = current->next;
        current->next = previous;
        previous = current;
        current = nextNode;
    }
    ptr1->next = NULL;
    LL l2;
    LL l1;
    l1.head = head;
    l2.head = previous;
    // l1.displayNodes();
    // two_ptr_approach_for_checking_palindrome...
    ptr1 = head;
    ptr2 = l2.head;
    bool result = false;
    while(ptr2!=NULL) {
        if(ptr1->val == ptr2->val) {
            result = true;
        }
        else {
            return false;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    if((ptr1->next!=NULL) and (ptr1->val!=ptr1->next->val)) {
        return false;
    }
    return result;
}
int main() {
    LL l1;
    l1.addAtLast(1);
    l1.addAtLast(2);
    l1.addAtLast(3);
    l1.addAtLast(3);
    l1.addAtLast(2);
    l1.addAtLast(1);
    bool result = getResult(l1.head);
    if(result) {
    cout<<"your Linked List is a Palindrome..!";
    }
    else {
        cout<<"cholly, your Linked List is Not a Palindrome..!";
    }
    return 0;
}*/
//rearrange_of_node_in_a_linked_list;
// BruteForce_Approach:
/*#include <iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int value) {
        val = value;
        next = NULL;
    }
};
class LL{
   public: 
   Node* head;
   LL() {
       head = NULL;
   }
   void addAtLast(int value) {
    Node* new_node = new Node(value);
    if(head==NULL) {
        head = new_node;
        return;
    }
    Node* temp = head;
    while(temp->next!=NULL) {
        temp = temp->next;
        }
    temp->next = new_node;
    }
    void displayNodes() {
    Node* temp = head;
    while(temp!=NULL) {
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
};
void rearrangeLL(Node* &head, int k) {
    int i = 0;
    while(i<k) {
        Node* temp = head;
        while(temp->next->next!=NULL) {
            temp = temp->next;
        }
        temp->next->next = head;
        head = temp->next;
        temp->next = NULL;
        i++;
    }
    return;
}
int main() {
    LL l1;
    l1.addAtLast(1);
    l1.addAtLast(2);
    l1.addAtLast(3);
    l1.addAtLast(4);
    l1.addAtLast(5);
    l1.addAtLast(6);
    l1.displayNodes();
    rearrangeLL(l1.head, 6);
    l1.displayNodes();
    return 0;
}*/
// Smart_Approach;
/*#include <iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int value) {
        val = value;
        next = NULL;
    }
};
class LL{
   public: 
   Node* head;
   LL() {
       head = NULL;
   }
   void addAtLast(int value) {
    Node* new_node = new Node(value);
    if(head==NULL) {
        head = new_node;
        return;
    }
    Node* temp = head;
    while(temp->next!=NULL) {
        temp = temp->next;
        }
    temp->next = new_node;
    }
    void displayNodes() {
    Node* temp = head;
    while(temp!=NULL) {
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
};
void rearrangeLL(Node* &head, int k) {
    int n = 0;
    Node* temp = head;
    while(temp->next!=NULL) {
        n++;
        temp = temp->next;
    }
    n = n+1;
    if(k>=n) {
        while(k>=n) {
        k = k-n;
        }
    }
    // cout<<n;
    if(k==0) {
        return;
    }
    else {
    temp->next = head;
    temp = head;
    int i = 0;
    while(i<n-k-1) {
        temp = temp->next;
        i++;
    }
    head = temp->next;
    temp->next = NULL;
    }
    return;
}
int main() {
    LL l1;
    l1.addAtLast(1);
    l1.addAtLast(2);
    l1.addAtLast(3);
    l1.addAtLast(4);
    l1.addAtLast(5);
    l1.addAtLast(6);
    l1.displayNodes();
    rearrangeLL(l1.head, 35);
    l1.displayNodes();
    return 0;
}*/
//Q) Given the head of a Singly Linked List, group all the nodes with odd indices together followed by the nodes with the even indices and return the reordered list..
/*#include <iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int value) {
        val = value;
        next = NULL;
    }
};
class LL{
   public: 
   Node* head;
   LL() {
       head = NULL;
   }
   void addAtLast(int value) {
    Node* new_node = new Node(value);
    if(head==NULL) {
        head = new_node;
        return;
    }
    Node* temp = head;
    while(temp->next!=NULL) {
        temp = temp->next;
        }
    temp->next = new_node;
    }
    void displayNodes() {
    Node* temp = head;
    while(temp!=NULL) {
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
};
void rearrangeLL(Node* &head) {
    Node* odd = head;
    Node* even = head->next;
    Node* temp = head->next;
    while(odd->next!=NULL and odd->next->next!=NULL) {
        odd->next = odd->next->next;
        odd = odd->next;
        even->next = even->next->next;
        even = even->next;
    }
    odd->next = temp;
    return;
}
int main() {
    LL l1;
    l1.addAtLast(1);
    l1.addAtLast(2);
    l1.addAtLast(3);
    l1.addAtLast(4);
    l1.addAtLast(5);
    // l1.addAtLast(6);
    l1.displayNodes();
    rearrangeLL(l1.head);
    l1.displayNodes();
    return 0;
}*/
// Q) You are given the head of a Singly Linked-List. This list can be represented as L0->L1->L2.......->L(n-1)->Ln;
// Reorder the list to be on the following form...
// L0->Ln->L1->L(n-1)->L2->L(n-2)->.....;
/*#include <iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int value) {
        val = value;
        next = NULL;
    }
};
class LL{
   public: 
   Node* head;
   LL() {
       head = NULL;
   }
   void addAtLast(int value) {
    Node* new_node = new Node(value);
    if(head==NULL) {
        head = new_node;
        return;
    }
    Node* temp = head;
    while(temp->next!=NULL) {
        temp = temp->next;
        }
    temp->next = new_node;
    }
    void displayNodes() {
    Node* temp = head;
    while(temp!=NULL) {
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
};
void rearrangeLL(Node* &head) {
    int n = 0;
    Node* temp = head;
    while(temp!=NULL) {
        temp = temp->next;
        n++;
    }
    if(n%2==0) {
        temp = head;
        int i = 0;
        while(i<((n/2)-1)) {
            temp =  temp->next;
            i++;
        }
        LL l2;
        l2.head = temp->next;
        LL l1;
        l1.head = head;
        temp->next = NULL;
        Node* current = l2.head;
        Node* previous = NULL;
        while(current!=NULL) {
            Node* nextNode = current->next;
            current->next = previous;
            previous = current;
            current = nextNode;
        }
        l2.head = previous;
        Node* temp1 = l1.head;
        Node* temp2 = l2.head;
        while(temp1!=NULL and temp2!=NULL) {
            Node* dup1 = temp1->next;
            Node* dup2 = temp2->next;
            temp1->next = temp2;
            temp2->next = dup1;
            temp1 = dup1;
            temp2 = dup2;
        }
    }
    else if(n%2==1) {
        temp = head;
        int i = 0;
        while(i<(n/2)) {
            temp =  temp->next;
            i++;
        }
        LL l2;
        l2.head = temp->next;
        LL l1;
        l1.head = head;
        temp->next = NULL;
        Node* current = l2.head;
        Node* previous = NULL;
        while(current!=NULL) {
            Node* nextNode = current->next;
            current->next = previous;
            previous = current;
            current = nextNode;
        }
        l2.head = previous;
        Node* temp1 = l1.head;
        Node* temp2 = l2.head;
        while(temp1!=NULL and temp2!=NULL) {
            Node* dup1 = temp1->next;
            Node* dup2 = temp2->next;
            temp1->next = temp2;
            temp2->next = dup1;
            temp1 = dup1;
            temp2 = dup2;
        }
    }
    return;
}
int main() {
    LL l1;
    l1.addAtLast(1);
    l1.addAtLast(2);
    l1.addAtLast(3);
    l1.addAtLast(4);
    l1.addAtLast(5);
    l1.addAtLast(6);
    // l1.addAtLast(7);
    l1.displayNodes();
    rearrangeLL(l1.head);
    l1.displayNodes();
    return 0;
}
*/
// Q) Given a linked list, swap every two adjacent Nodes and return it's head;
// Using_iterative_manner;
/*#include <iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int value) {
        val = value;
        next = NULL;
    }
};
class LL{
   public: 
   Node* head;
   LL() {
       head = NULL;
   }
   void addAtLast(int value) {
    Node* new_node = new Node(value);
    if(head==NULL) {
        head = new_node;
        return;
    }
    Node* temp = head;
    while(temp->next!=NULL) {
        temp = temp->next;
        }
    temp->next = new_node;
    }
    void displayNodes() {
    Node* temp = head;
    while(temp!=NULL) {
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
};
Node* rearrangeLL(Node* &head) {
    Node* temp = head;
    Node* dup1;
    Node* dup2;
    int i = 0;
    while(true) {
        if(i!=0) {
            dup1->next = temp->next;
        }
        else {
            head = head->next;
        }
        dup1 = temp;
        dup2 = temp->next->next;
        temp->next->next = temp;
        temp = dup2;
        if(temp==NULL) {
            dup1->next = NULL;
            break;
        }
        else if(temp->next==NULL) {
            dup1->next = temp;
            break;
        }
        i++;
    }
    return head;
}
int main() {
    LL l1;
    l1.addAtLast(1);
    l1.addAtLast(2);
    l1.addAtLast(3);
    l1.addAtLast(4);
    l1.addAtLast(5);
    l1.addAtLast(6);
    // l1.addAtLast(7);
    l1.displayNodes();
    l1.head = rearrangeLL(l1.head);
    l1.displayNodes();
    return 0;
}*/
// using_Recursive_Manner;
/*#include <iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int value) {
        val = value;
        next = NULL;
    }
};
class LL{
   public: 
   Node* head;
   LL() {
       head = NULL;
   }
   void addAtLast(int value) {
    Node* new_node = new Node(value);
    if(head==NULL) {
        head = new_node;
        return;
    }
    Node* temp = head;
    while(temp->next!=NULL) {
        temp = temp->next;
        }
    temp->next = new_node;
    }
    void displayNodes() {
    Node* temp = head;
    while(temp!=NULL) {
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
};
Node* rearrangeLL(Node* &head) {
    if(head==NULL or head->next==NULL) {
        return head;
    }
    Node* second_node = head->next;
    head->next = rearrangeLL(second_node->next);
    second_node->next = head;
    return second_node;
}
int main() {
    LL l1;
    l1.addAtLast(1);
    l1.addAtLast(2);
    l1.addAtLast(3);
    l1.addAtLast(4);
    l1.addAtLast(5);
    l1.addAtLast(6);
    // l1.addAtLast(7);
    l1.displayNodes();
    l1.head = rearrangeLL(l1.head);
    l1.displayNodes();
    return 0;
}*/
// Doubly and Circular Linked List...!
// implementation of a Node in a Doubly Linked List:
/*#include <iostream>
using namespace std;
class Node {
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int value) {
        val = value;
        next = NULL;
        prev = NULL;
    }
};
class DLL{
    public:
    Node* head;
    Node* tail;
    DLL() {
        head = NULL;
        tail = NULL;
    }
};
int main() {
    Node* new_node = new Node(3);
    DLL l1;
    l1.head = new_node;
    l1.tail = new_node;
    cout<<l1.head->val<<endl;
    cout<<l1.tail->val<<endl;
    return 0;
}
*/
// Insertion of a Node at the starting of a DLL;
/*#include <iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int value) {
        val = value;
        next = NULL;
        prev = NULL;
    }
};
class DLL{
    public:
    Node* head;
    Node* tail;
    DLL() {
    head = NULL;
    tail = NULL;
    }
    void insertAtHead(int value) {
        Node* new_node = new Node(value);
        if(head==NULL) {
            head = new_node;
            tail = new_node;
            return;
        }
        else {
            new_node->next = head;
            head->prev = new_node;
            head = new_node;
        }
    }
    void displayNodes() {
        Node* temp = head;
        while(temp!=NULL) {
            // cout<<temp->val<<"<->";
            cout<<temp->val<<" ";
            temp = temp->next;
        }cout<<endl;
    }
};
int main() {
    DLL l1;
    l1.insertAtHead(1);
    l1.insertAtHead(2);
    l1.insertAtHead(3);
    l1.insertAtHead(4);
    l1.insertAtHead(5);
    l1.insertAtHead(6);
    l1.insertAtHead(7);
    l1.insertAtHead(8);
    l1.displayNodes();
    return 0;
}*/
// insertion of a node at the ending of a Linked List;
/*#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int value) {
        val = value;
        next = NULL;
        prev = NULL;
    }
};
class DLL{
    public:
    Node* head;
    Node* tail;
    DLL(){
        head = NULL;
        tail = NULL;
    }
    void insertAtHead(int value) {
        Node* new_node = new Node(value);
        if(head == NULL) {
            head = new_node;
            tail = new_node;
            return;
        }
        new_node->next = head;
        head->prev = new_node;
        head = new_node;
        return;
    }
    void insertAtTail(int value) {
        if(head==NULL) {
            insertAtHead(value);
            return;
        }
        else {
              Node* new_node = new Node(value);
              tail->next = new_node;
              new_node->prev = tail;
              tail = new_node;
        }
        return;
    }
    void displayNodes() {
        Node* temp = head;
        while(temp!=NULL) {
            cout<<temp->val<<" ";
            temp = temp->next;
        }cout<<endl;
        return;
    }
};
int main() {
    DLL l1;
    l1.insertAtTail(1);
    l1.insertAtTail(2);
    l1.insertAtTail(3);
    l1.insertAtTail(4);
    l1.insertAtTail(5);
    l1.displayNodes();
    return 0;
}*/
// inserting a node at any arbitrary position except at fisrt and n+1 positios:
/*#include<iostream>
using namespace std;
class Node {
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int value) {
        val = value;
        next = NULL;
        prev = NULL;
    }
};
class DLL{
    public:
    Node* head;
    Node* tail;
    DLL(){
        head = NULL;
        tail = NULL;
    }
    void insertAtHead(int value) {
        Node* new_node = new Node(value);
        if(head==NULL) {
            head = new_node;
            tail = new_node;
            return;
        }
        else {
            head->prev = new_node;
            new_node->next = head;
            head = new_node;
            return;
        }
    }
    void insertAtTail(int value) {
        Node* new_node = new Node(value);
        if(tail==NULL) {
            head = new_node;
            tail = new_node;
            return;
        }
        else {
            tail->next = new_node;
            new_node->prev = tail;
            tail = new_node;
        }
        return;
    }
    void insertAtKthpos(int value, int k) {
        if(k==1) {
            insertAtTail(value);
            return;
        }
        else {
            Node* new_node = new Node(value);
            int i = 0;
            Node* temp = head;
            while(i<k-2) {
                temp = temp->next;
                i++;
            }
            temp->next->prev = new_node;
            new_node->next = temp->next;
            new_node->prev = temp;
            temp->next = new_node;
        }
        return;
    }
    void displayNodes() {
        Node* temp = head;
        while(temp!=NULL) {
            cout<<temp->val<<" ";
            temp = temp->next;
        } cout<<endl;
    }
};
int main() {
    DLL l1;
    l1.insertAtTail(1);
    l1.insertAtTail(2);
    l1.insertAtTail(3);
    l1.insertAtTail(4);
    l1.insertAtTail(5);
    // l1.insertAtHead(1);
    // l1.insertAtHead(2);
    // l1.insertAtHead(3);
    // l1.insertAtHead(4);
    // l1.insertAtHead(5);
    // l1.insertAtKthpos(5,1);
    l1.displayNodes();
    return 0;
}*/
// Deletion of a node at the starting of a DLL;
/*#include<iostream>
using namespace std;
class Node {
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int value) {
        val = value;
        next = NULL;
        prev = NULL;
    }
};
class DLL{
    public:
    Node* head;
    Node* tail;
    DLL(){
        head = NULL;
        tail = NULL;
    }
    void insertAtHead(int value) {
        Node* new_node = new Node(value);
        if(head==NULL) {
            head = new_node;
            tail = new_node;
            return;
        }
        else {
            head->prev = new_node;
            new_node->next = head;
            head = new_node;
            return;
        }
    }
    void insertAtTail(int value) {
        Node* new_node = new Node(value);
        if(tail==NULL) {
            head = new_node;
            tail = new_node;
            return;
        }
        else {
            tail->next = new_node;
            new_node->prev = tail;
            tail = new_node;
        }
        return;
    }
    void insertAtKthpos(int value, int k) {
        if(k==1) {
            insertAtTail(value);
            return;
        }
        else {
            Node* new_node = new Node(value);
            int i = 0;
            Node* temp = head;
            while(i<k-2) {
                temp = temp->next;
                i++;
            }
            temp->next->prev = new_node;
            new_node->next = temp->next;
            new_node->prev = temp;
            temp->next = new_node;
        }
        return;
    }
    void deleteAtStart() {
        if(head==NULL) {
            return;
        }
        else if(head->next!=NULL) {
        Node* dup = head;
        head->next->prev = head->prev;
        head = head->next;
        free(dup);
        }
        else if(head->next==NULL){
            tail = NULL;
        }
        return;
    }
    void displayNodes() {
        Node* temp = head;
        while(temp!=NULL) {
            cout<<temp->val<<" ";
            temp = temp->next;
        } cout<<endl;
    }
};
int main() {
    DLL l1;
    l1.insertAtTail(1);
    l1.insertAtTail(2);
    l1.insertAtTail(3);
    l1.insertAtTail(4);
    l1.insertAtTail(5);
    l1.deleteAtStart();
    l1.displayNodes();
    return 0; }
*/
// Deletion of a node from the ending of a linked list;
/*#include<iostream>
using namespace std;
class Node {
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int value) {
        val = value;
        next = NULL;
        prev = NULL;
    }
};
class DLL{
    public:
    Node* head;
    Node* tail;
    DLL(){
        head = NULL;
        tail = NULL;
    }
    void insertAtHead(int value) {
        Node* new_node = new Node(value);
        if(head==NULL) {
            head = new_node;
            tail = new_node;
            return;
        }
        else {
            head->prev = new_node;
            new_node->next = head;
            head = new_node;
            return;
        }
    }
    void insertAtTail(int value) {
        Node* new_node = new Node(value);
        if(tail==NULL) {
            head = new_node;
            tail = new_node;
            return;
        }
        else {
            tail->next = new_node;
            new_node->prev = tail;
            tail = new_node;
        }
        return;
    }
    void insertAtKthpos(int value, int k) {
        if(k==1) {
            insertAtTail(value);
            return;
        }
        else {
            Node* new_node = new Node(value);
            int i = 0;
            Node* temp = head;
            while(i<k-2) {
                temp = temp->next;
                i++;
            }
            temp->next->prev = new_node;
            new_node->next = temp->next;
            new_node->prev = temp;
            temp->next = new_node;
        }
        return;
    }
    void deleteAtStart() {
        if(head==NULL) {
            return;
        }
        else if(head->next==NULL) {
             head = NULL;
        }
        else {
        Node* dup = head;
        head->next->prev = head->prev;
        head = head->next;
        free(dup);
        }
        return;
    }
    void deleteAtEnd() {
        if(head==NULL) {
            return;
        }
        else if(head->next==NULL) {
            head = NULL;
        }
        else {
            tail->prev->next = tail->next;
            Node* dup = tail;
            tail = tail->prev;
            free(dup);
        }
        return;
    }
    void displayNodes() {
        Node* temp = head;
        while(temp!=NULL) {
            cout<<temp->val<<" ";
            temp = temp->next;
        } cout<<endl;
    }
};
int main() {
    DLL l1;
    l1.insertAtTail(1);
    l1.insertAtTail(2);
    l1.insertAtTail(3);
    l1.insertAtTail(4);
    l1.insertAtTail(5);
    // l1.deleteAtStart();
    // l1.deleteAtEnd();
    l1.displayNodes();
    return 0;
}*/
// Deleting a Node at arbitrary position:
/*#include<iostream>
using namespace std;
class Node {
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int value) {
        val = value;
        next = NULL;
        prev = NULL;
    }
};
class DLL{
    public:
    Node* head;
    Node* tail;
    DLL(){
        head = NULL;
        tail = NULL;
    }
    void insertAtHead(int value) {
        Node* new_node = new Node(value);
        if(head==NULL) {
            head = new_node;
            tail = new_node;
            return;
        }
        else {
            head->prev = new_node;
            new_node->next = head;
            head = new_node;
            return;
        }
    }
    void insertAtTail(int value) {
        Node* new_node = new Node(value);
        if(tail==NULL) {
            head = new_node;
            tail = new_node;
            return;
        }
        else {
            tail->next = new_node;
            new_node->prev = tail;
            tail = new_node;
        }
        return;
    }
    void insertAtKthpos(int value, int k) {
        if(k==1) {
            insertAtTail(value);
            return;
        }
        else {
            Node* new_node = new Node(value);
            int i = 0;
            Node* temp = head;
            while(i<k-2) {
                temp = temp->next;
                i++;
            }
            temp->next->prev = new_node;
            new_node->next = temp->next;
            new_node->prev = temp;
            temp->next = new_node;
        }
        return;
    }
    void deleteAtStart() {
        if(head==NULL) {
            return;
        }
        else if(head->next==NULL) {
             head = NULL;
        }
        else {
        Node* dup = head;
        head->next->prev = head->prev;
        head = head->next;
        free(dup);
        }
        return;
    }
    void deleteAtEnd() {
        if(head==NULL) {
            return;
        }
        else if(head->next==NULL) {
            head = NULL;
        }
        else {
            tail->prev->next = tail->next;
            Node* dup = tail;
            tail = tail->prev;
            free(dup);
        }
        return;
    }
    void deleteAtKthPos(int k) {
        Node* temp = head;
        int i=0;
        while(i<k-2) {
            temp = temp->next;
            i++;
        }
        Node* dup = temp->next;
        temp->next = temp->next->next;
        temp->next->prev = temp;
        free(dup);
    } 
    void displayNodes() {
        Node* temp = head;
        while(temp!=NULL) {
            cout<<temp->val<<" ";
            temp = temp->next;
        } cout<<endl;
    }
};
int main() {
    DLL l1;
    l1.insertAtTail(1);
    l1.insertAtTail(2);
    l1.insertAtTail(3);
    l1.insertAtTail(4);
    l1.insertAtTail(5);
    l1.deleteAtKthPos(3);
    l1.displayNodes();
    return 0;
}*/
// Reversing the Nodes in a Doubly Linked List...!
/*#include<iostream>
using namespace std;
class Node {
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int value) {
        val = value;
        next = NULL;
        prev = NULL;
    }
};
class DLL{
    public:
    Node* head;
    Node* tail;
    DLL(){
        head = NULL;
        tail = NULL;
    }
    void insertAtHead(int value) {
        Node* new_node = new Node(value);
        if(head==NULL) {
            head = new_node;
            tail = new_node;
            return;
        }
        else {
            head->prev = new_node;
            new_node->next = head;
            head = new_node;
            return;
        }
    }
    void insertAtTail(int value) {
        Node* new_node = new Node(value);
        if(tail==NULL) {
            head = new_node;
            tail = new_node;
            return;
        }
        else {
            tail->next = new_node;
            new_node->prev = tail;
            tail = new_node;
        }
        return;
    }
    void insertAtKthpos(int value, int k) {
        if(k==1) {
            insertAtTail(value);
            return;
        }
        else {
            Node* new_node = new Node(value);
            int i = 0;
            Node* temp = head;
            while(i<k-2) {
                temp = temp->next;
                i++;
            }
            temp->next->prev = new_node;
            new_node->next = temp->next;
            new_node->prev = temp;
            temp->next = new_node;
        }
        return;
    }
    void deleteAtStart() {
        if(head==NULL) {
            return;
        }
        else if(head->next==NULL) {
             head = NULL;
        }
        else {
        Node* dup = head;
        head->next->prev = head->prev;
        head = head->next;
        free(dup);
        }
        return;
    }
    void deleteAtEnd() {
        if(head==NULL) {
            return;
        }
        else if(head->next==NULL) {
            head = NULL;
        }
        else {
            tail->prev->next = tail->next;
            Node* dup = tail;
            tail = tail->prev;
            free(dup);
        }
        return;
    }
    void deleteAtKthPos(int k) {
        Node* temp = head;
        int i=0;
        while(i<k-2) {
            temp = temp->next;
            i++;
        }
        Node* dup = temp->next;
        temp->next = temp->next->next;
        temp->next->prev = temp;
        free(dup);
    } 
    // void ReverseDLL() {
    //     Node* previous = NULL;
    //     Node* current = head;
    //     Node* nextNode = head;
    //     while(current!=NULL) {
    //         nextNode = current->next;
    //         current->next = previous;
    //         current->prev = nextNode;
    //         previous = current;
    //         current = nextNode;
    //     }
    //     head = previous;
    //     return;
    // }
    void ReverseDLL() {
        Node* previous = NULL;
        Node* current = head;
        Node* nextNode = head;
        while(current!=NULL) {
            nextNode = current->next;
            current->next = current->prev;
            current->prev = nextNode;
            current = nextNode;
        }
        Node* dup = tail;
        tail = head;
        head = dup;
        return;
    }
    void displayNodes() {
        Node* temp = head;
        while(temp!=NULL) {
            cout<<temp->val<<" ";
            temp = temp->next;
        } cout<<endl;
    }
};
int main() {
    DLL l1;
    l1.insertAtTail(1);
    l1.insertAtTail(2);
    l1.insertAtTail(3);
    l1.insertAtTail(4);
    l1.insertAtTail(5);
    l1.displayNodes();
    l1.ReverseDLL();
    l1.displayNodes();
    return 0;
}*/
// Given the Head of DLL, find if it's a Palindrome or not..!
/*#include<iostream>
using namespace std;
class Node {
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int value) {
        val = value;
        next = NULL;
        prev = NULL;
    }
};
class DLL{
    public:
    Node* head;
    Node* tail;
    DLL(){
        head = NULL;
        tail = NULL;
    }
    void insertAtTail(int value) {
        Node* new_node = new Node(value);
        if(tail==NULL) {
            head = new_node;
            tail = new_node;
            return;
        }
        else {
            tail->next = new_node;
            new_node->prev = tail;
            tail = new_node;
        }
        return;
    }
    void displayNodes() {
        Node* temp = head;
        while(temp!=NULL) {
            cout<<temp->val<<" ";
            temp = temp->next;
        } cout<<endl;
    }
};
bool checkPalindrome(Node* head, Node* tail) {
        bool result = true;
        Node* fwd = head;
        Node* bwd = tail;
        while(result){
            if(fwd->val==bwd->val) {
                result = true;
            }
            else {
                result = false;
                break;
            }
            fwd = fwd->next;
            bwd = bwd->prev;
            result = true;
            if(fwd==bwd) {
                break;
            }
            if(fwd->next == bwd) {
                if (fwd->val==bwd->val) {
                    break;
                }
                else {
                    result = false;
                    break;
                }
            }
        }
    return result;
}
int main() {
    DLL l1;
    l1.insertAtTail(1);
    l1.insertAtTail(2);
    l1.insertAtTail(3);
    l1.insertAtTail(3);
    l1.insertAtTail(2);
    l1.insertAtTail(1);
    l1.displayNodes();
    if(checkPalindrome(l1.head,l1.tail)) {
        cout<<"Yeah, this DLL is a Palindrome.";
    }
    else {
        cout<<"Cholly, this DLL is not a Palindrome.";
    }
    return 0;
}
*/
// Given the head of a DLL, delete the nodes whose neighbours have the same value.
// Traverse the list from right to left;
/*#include<iostream>
using namespace std;
class Node {
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int value) {
        val = value;
        next = NULL;
        prev = NULL;
    }
};
class DLL{
    public:
    Node* head;
    Node* tail;
    DLL(){
        head = NULL;
        tail = NULL;
    }
    void insertAtTail(int value) {
        Node* new_node = new Node(value);
        if(tail==NULL) {
            head = new_node;
            tail = new_node;
            return;
        }
        else {
            tail->next = new_node;
            new_node->prev = tail;
            tail = new_node;
        }
        return;
    }
    void displayNodes() {
        Node* temp = head;
        while(temp!=NULL) {
            cout<<temp->val<<" ";
            temp = temp->next;
        } cout<<endl;
    }
};
void EffectDLL(Node* head, Node* tail) {
    Node* temp = tail->prev;
    while(temp!=head) {
        if(temp->next->val==temp->prev->val) {
            Node* dup = temp;
            temp->next->prev = temp->prev;
            temp->prev->next = temp->next;
            temp = temp->prev;
            free(dup);
        }
        else {
            temp = temp->prev;
        }
    }
    return;
}
int main() {
    DLL l1;
    l1.insertAtTail(2);
    l1.insertAtTail(1);
    // l1.insertAtTail(1);
    l1.insertAtTail(2);
    l1.insertAtTail(1);
    l1.displayNodes();
    EffectDLL(l1.head, l1.tail);
    l1.displayNodes();
    return 0;
}*/

/*#include <iostream>
using namespace std;
class Node {
    public:
    int val;
    Node* next;
    Node(int value) {
        val = value;
        next = NULL;
    }
};void insertNodeAtEnd(Node* &head, int value) {
    Node* new_node = new Node(value);
    if(head==NULL) {
        head = new_node;
        return;
    }Node* temp = head;
    while(temp->next!=NULL) {
        temp = temp->next;
    }temp->next = new_node;
    return;
}void displayNodes(Node* head) {
    Node* temp = head;
    while(temp!=NULL) {
        cout<<temp->val;
        if(temp->next!=NULL) {
            cout<<"->";
        }temp = temp->next;
    }return;
}void removeDuplicates(Node* head){
   Node* temp = head;
   while(temp->next!=NULL) {
       while(temp->val==temp->next->val) {
           temp->next = temp->next->next;
       }temp = temp->next;
   }return;
}int main() {
    Node* head = NULL;
    int n;
    cout<<"Enter the number of colors in the list: ";
    cin>>n;
    cout<<"Enter the colors: ";
    for(int i=0; i<n; i++) {
        int value;
        cin>>value;
        insertNodeAtEnd(head,value);
    }removeDuplicates(head);
    cout<<"Modified Linked List: ";
    displayNodes(head);
    return 0;
}*/












