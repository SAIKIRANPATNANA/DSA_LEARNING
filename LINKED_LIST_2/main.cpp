// Q)Given the head of a Doubly linked List. The values of linked list are sorted in non-decreasing order. 
// Find if there exists a pair of distinct nodes such that the sum of their values is x. Return the pair in the form of vector[L,R], 
// where l and r values stored in the two nodes pointed by the pointers. If there are Multiple such pairs, return any of them .
//If there is no such pair return [-1,-1];
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
int* EffectDLL(Node* head, Node* tail, int k) {
    Node* ptr1 = head;
    Node* ptr2 = tail;
    int* array = new int[100];
    array[0] = -1;
    array[1] = -1;
    while(ptr1!=ptr2) {
        if(ptr1->val+ptr2->val == k) {
            array[0] = ptr1->val;
            array[1] = ptr2->val;
            return array;
        }
        else if(ptr1->val+ptr2->val>k) {
            ptr2 = ptr2->prev;
        }
        else {
            ptr1 = ptr1->next;
        }
    }
    return array;
}
int main() {
    DLL l1;
    l1.insertAtTail(2);
    l1.insertAtTail(5);
    l1.insertAtTail(6);
    l1.insertAtTail(8);
    l1.insertAtTail(10);
    l1.displayNodes();
    int* result = EffectDLL(l1.head, l1.tail, 100);
    int n = sizeof(result)/sizeof(result[0]);
    cout<<"[ ";
    for(int i=0; i<n; i++) {
        cout<<result[i]<<" ";
    }
    cout<<"]";
    delete[] result;
    return 0;
}*/
// How do you find the length of a doubly linked list?
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
    void addAtEnd(int value) {
        Node* new_node = new Node(value);
        if(head==NULL) {
        head = new_node;
        tail = new_node;
        return;
        }
    new_node->next = tail->next;
    new_node->prev = tail;
    tail->next = new_node;
    tail = new_node;
    return;
   }
   void displayNodes() {
       Node* temp = head;
       while(temp!=NULL) {
           cout<<temp->val<<" ";
           temp = temp->next;
       }cout<<endl;
   }
   void countNodes() {
       Node* temp = head;
       int count = 0;
       while(temp!=NULL) {
           temp = temp->next;
           count++;
       }
       cout<<count<<endl;
   }
};
int main() {
    DLL l1;
    l1.addAtEnd(1);
    l1.addAtEnd(2);
    l1.addAtEnd(3);
    l1.addAtEnd(4);
    l1.addAtEnd(5);
    l1.displayNodes();
    l1.countNodes();
    return 0;
}
*/
// Given a linked list tail, return an array of length 2 containing [minDistance,maxDistance]:
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
    void addAtEnd(int value) {
        Node* new_node = new Node(value);
        if(head==NULL) {
        head = new_node;
        tail = new_node;
        return;
        }
    new_node->next = tail->next;
    new_node->prev = tail;
    tail->next = new_node;
    tail = new_node;
    return;
   }
   void displayNodes() {
       Node* temp = head;
       while(temp!=NULL) {
           cout<<temp->val<<" ";
           temp = temp->next;
       }cout<<endl;
   }
};
int* EffectDLL(Node* head, Node* tail) {
    int* array = new int[100];
    Node* temp = tail->prev;
    int i = 0;
    int firstCritical;
    array[0] = -1;
    array[1] = -1;
    int mini = 100;
    int maxi;
    int a,b,c;
    while(temp!=head) {
        a = temp->val;
        b = temp->next->val;
        c = temp->prev->val;
        if((a>b and a>c) or (a<c and a<b)) {
            if(i==0) {
                firstCritical = 0;
            }
            else {
                int dist = i-firstCritical;
                mini = min(mini,dist);
                maxi = dist;
            }
                i++;
                temp = temp->prev;
        }
        else {
            temp = temp->prev;
            i++;
        }
    }
    array[0] = mini;
    array[1] = maxi;
    return array;
}
int main() {
    DLL l1;
    l1.addAtEnd(1);
    l1.addAtEnd(5);
    l1.addAtEnd(4);
    l1.addAtEnd(2);
    l1.addAtEnd(6);
    l1.addAtEnd(3);
    l1.displayNodes();
    int* result = EffectDLL(l1.head, l1.tail);
    int n = sizeof(result)/sizeof(result[0]);
    cout<<"[ ";
    for(int i=0; i<n; i++) {
        cout<<result[i]<<" ";
    }
    cout<<"]";
    delete[] result;
    return 0;
}*/
// Insert value in sorted way in a sorted doubly linked list:
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
    void addAtEnd(int value) {
        Node* new_node = new Node(value);
        if(head==NULL) {
        head = new_node;
        tail = new_node;
        return;
        }
    new_node->next = tail->next;
    new_node->prev = tail;
    tail->next = new_node;
    tail = new_node;
    return;
   }
   void displayNodes() {
       Node* temp = head;
       while(temp!=NULL) {
           cout<<temp->val<<" ";
           temp = temp->next;
       }cout<<endl;
   }
};
void insertInSortedWay(Node* &head, int value) {
    Node* temp = head;
    Node* new_node = new Node(value);
    if(value<temp->val) {
        new_node->next = temp;
        new_node->prev = temp->prev;
        temp->prev = new_node;
        head = new_node;
    }
    else {
        temp = temp->next;
        if(value<temp->val) {
            new_node->next = head->next;
            new_node->prev = head;
            head->next->prev = new_node;
            head->next = new_node;
        }
        else {
        while(value>temp->val){
            
            if((temp->next!=NULL) and (value>temp->val and value<temp->next->val)){
                new_node->next = temp->next;
                temp->next->prev = new_node;
                temp->next = new_node;
                new_node->prev = temp;
                break;
            }
            else if(value>temp->val and temp->next==NULL) {
                new_node->next = temp->next;
                temp->next = new_node;
                new_node->prev = temp;
            }
            else {
                temp = temp->next;
            }
         }
        }
    }
    return;
}
int main() {
    DLL l1;
    l1.addAtEnd(3);
    l1.addAtEnd(5);
    l1.addAtEnd(8);
    l1.addAtEnd(10);
    l1.addAtEnd(12);
    l1.displayNodes();
    insertInSortedWay(l1.head,15);
    l1.displayNodes();
    return 0;
}*/
// Remove duplicates from an unsorted doubly linked list
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
    void addAtEnd(int value) {
        Node* new_node = new Node(value);
        if(head==NULL) {
        head = new_node;
        tail = new_node;
        return;
        }
    new_node->next = tail->next;
    new_node->prev = tail;
    tail->next = new_node;
    tail = new_node;
    return;
   }
   void displayNodes() {
       Node* temp = head;
       while(temp!=NULL) {
           cout<<temp->val<<" ";
           temp = temp->next;
       }cout<<endl;
   }
};
void RemoveDuplicatesInUnsorted(Node* &head) {
    Node* temp = head;
    Node* ptr = temp->next;
    while(temp!=NULL) {
    ptr = temp->next;
    while(ptr!=NULL) {
    if(temp->val==ptr->val and ptr->next==NULL) {
        Node* dup = ptr;
        ptr->prev->next = ptr->next;
        ptr = ptr->next;
        free(dup);
    }
    else if(temp->val==ptr->val){
        Node* dup = ptr;
        ptr->prev->next = ptr->next;
        ptr->next->prev = ptr->prev;
        ptr = ptr->next;
        free(dup);
    }
    else{
        ptr = ptr->next;
    }
    }
    temp = temp->next;
    }
    return;
}
int main() {
    DLL l1;
    l1.addAtEnd(1);
    l1.addAtEnd(2);
    l1.addAtEnd(2);
    l1.addAtEnd(3);
    l1.addAtEnd(3);
    l1.addAtEnd(3);
    l1.addAtEnd(4);
    l1.addAtEnd(4);
    l1.addAtEnd(4);
    l1.addAtEnd(4);
    l1.addAtEnd(5);
    l1.addAtEnd(5);
    l1.addAtEnd(5);
    l1.addAtEnd(5);
    l1.addAtEnd(5);
    l1.displayNodes();
    RemoveDuplicatesInUnsorted(l1.head);
    l1.displayNodes();
    return 0;
}
*/
// working_with_circular_linked_list;
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
class CLL{
    public:
    Node* head;
    CLL() {
        head = NULL;
    }
    void addAtStart(int value) {
        Node* new_node = new Node(value);
        if(head==NULL) {
            head = new_node;
            head->next = head;
        }
        else {
        Node* temp = head;
        while(temp->next!=head) {
            temp = temp->next;
        }
        temp->next = new_node;
        new_node->next = head;
        head = new_node;
        }
        return;
    }
    void addAtEnd(int value) {
        if(head==NULL) {
            addAtStart(value);
            return;
        }
        else{
            Node* new_node = new Node(value);
            Node* temp = head;
            while(temp->next!=head) {
                temp = temp->next;
            }
            temp->next = new_node;
            new_node->next = head;
        }
        return;
    }
    void addAtKthPos(int k, int value) {
        if(k==1) {
            addAtStart(value);
            return;
        }
        else{
        Node* new_node = new Node(value);
        Node* temp = head;
        int i = 0;
        while(i<k-2) {
            temp = temp->next;
            i++;
        }
        new_node->next = temp->next;
        temp->next = new_node;
        return;
        }
    }
    void deleteAtStart() {
        if(head==NULL) {
            return;
        }
        Node* temp = head;
        while(temp->next!=head){
            temp = temp->next;
        }
        Node* dup = head;
        temp->next = head->next;
        head = head->next;
        free(dup);
        return;
    }
    void deleteAtEnd() {
        if(head==NULL) {
            return;
        }
        Node* temp = head;
        while(temp->next->next!=head) {
            temp = temp->next;
        }
        Node* dup = temp->next;
        temp->next = head;
        free(dup);
        return;
    }
    void deleteAtKthPos(int k) {
        if(k==1) {
            deleteAtStart();
            return;
        }
        else {
        Node* temp = head;
        int i = 0;
        while(i<k-2) {
            temp = temp->next;
            i++;
        }
        Node* dup = temp->next;
        temp->next = temp->next->next;
        return;
        }
    }
    void displayNodes() {
        Node* temp = head;
        while(true) {
            cout<<temp->val<<"->";
            if(temp->next==head) {
                break;
            }
            temp = temp->next;
        } cout<<endl;
        
        // Aliter:
    //     do {
    //         cout<<temp->val<<"->";
    //         temp = temp->next;
    //     } while(temp!=head);
    //     cout<<"NULL"<<endl;
        
    //     return;
    // }
    
};
int checkCircularity(Node* head) {
    Node* ptr1 = head;
    Node* ptr2 = head;
    int i = 0;
    while(ptr1!=ptr2 or i==0) {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next->next;
        if(ptr2==NULL or ptr2->next==NULL) {
            return 0;
        }
        i++;
    }
    return 1;
}
void printCircular(Node* head) {
    Node* temp = head;
    for(int i=0; i<15; i++) {
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    return;
}
int main() {
    CLL l1;
    l1.addAtEnd(1);
    l1.addAtEnd(2);
    l1.addAtEnd(3);
    l1.addAtEnd(4);
    l1.addAtEnd(5);
    l1.addAtEnd(6);
    l1.addAtEnd(7);
    l1.addAtEnd(8);
    l1.addAtEnd(9);
    l1.addAtEnd(10);
    l1.displayNodes();
    // cout<<checkCircularity(l1.head)<<endl;
    // printCircular(l1.head);
    // l1.addAtKthPos(1,1);
    // l1.addAtKthPos(11,11);
    // l1.deleteAtStart();
    // l1.deleteAtEnd();
    // l1.deleteAtKthPos(9);
    // l1.displayNodes();
    return 0;
}
*/
// Template_Classes:
/*#include <iostream>
using namespace std;
template <typename T>
class Node{
    public:
    T val;
    Node* next;
    Node(T value) {
        val = value;
        next = NULL;
    }
};
int main() {
    Node<int>* new_node_1 = new Node<int>(5);
    cout<<new_node_1->val<<endl;
    Node<char>* new_node_2 = new Node<char>('P');
    cout<<new_node_2->val<<endl;
    Node<string>* new_node_3 = new Node<string>("PRASANNA");
    cout<<new_node_3->val<<endl;
    return 0;
}*/
// STL(Standard_Template_Library):
/*#include<iostream>
#include<list>
using namespace std;
int main() {
    list<int> l1{1,2,3,4,5};
    list<int> l2 = {6,7,8,9,10};
    // auto itr = l1.begin();
    // cout<<*itr<<endl;
    // auto itr = l1.begin();
    // l1.end() points to the position after 5 in l1;
    // l2.end() points to the position after 10 in l2;
    // auto itr = l1.rbegin();
    // auto itr = l2.rbegin();
    // l1.rend() points to the position after 1 in l1;
    // l2.rend() points to the position after 6 in l2;
    // advance(itr,4);
    // Traversal in a List;
    {
    {// Using_range_based_loop:
    // for(auto num: l1) {
    //     cout<<num<<"->";
    // }cout<<"NULL"<<endl;
    // for(auto num: l2) {
    //     cout<<num<<"->";
    // }cout<<"NULL"<<endl;
    }
    //using_iterators:
    {// auto itr = l1.begin();
    // while(itr != l1.end()) {
    //     cout<<*itr<<"->";
    //     advance(itr,1);
    // }cout<<"NULL"<<endl;
    }
    {// for(auto itr = l1.begin(); itr!=l1.end(); itr++) {
    //     cout<<*itr<<"->";
    // }cout<<"NULL";
    }
    // Reverse_Traversal of a list:
    {
    // for(auto itr = l1.rbegin(); itr!=l1.rend(); itr++) {
    //     cout<<*itr<<"->";
    // }cout<<"NULL"<<endl;
    }
    }
    // inserting_Elements_in_a_list:
    {
    auto itr = l1.begin();
    {
    //   {itr++;
    //   itr++;
    //   itr++;
    }
    {
    // l1.insert(itr,6);
    // for(auto num: l1) {
    //     cout<<num<<"->";
    // }cout<<"NULL"<<endl;
    }
    {
    // auto l = l1.begin();
    // auto r = l1.begin();
    // advance(r,2);
    // l1.insert(itr,l,r);
    // for(auto num: l1) {
    //     cout<<num<<"->";
    // }cout<<"NULL"<<endl;
    }
    {
    // itr = l1.end();
    // l1.insert(itr,6);
    // for(auto num: l1) {
    //     cout<<num<<"->";
    // }cout<<"NULL"<<endl;
    }
    {
    // advance(itr,2);
    // cout<<*itr<<endl;
    // l1.insert(itr,4,7);
    // for(auto num: l1) {
    //     cout<<num<<"->";
    // }cout<<"NULL"<<endl;
    }
    }
    // Deletion_of_elements_in_a_list:
    { //Deleting_A_Particular_Element:
        auto itr = l1.begin();
    {   //advance(itr,2);
    //     l1.erase(itr);
    //     for(auto num: l1) {
    //     cout<<num<<"->";
    //     }cout<<"NULL"<<endl;
     }
     { //Deleting_A_Section_of_Elements;
        // auto l = ++itr;
        // auto r = l;
        // advance(r,2);
        // l1.erase(l,r);
        // for(auto num: l1) {
        // cout<<num<<"->";
        // }cout<<"NULL"<<endl;
     }
     {  //Deleting_A_last_Element_of_a_list:
        // auto step_itr = l1.begin();
        // int i=0;
        // while(itr!=l1.end()) {
        //     if(i>1){
        //         step_itr = itr;
        //     }
        //     i++;
        //     advance(itr,1);
        // }
        // l1.erase(step_itr);
        // for(auto num: l1) {
        // cout<<num<<"->";
        // }cout<<"NULL"<<endl;
     }
    }
    //Other_MemberFunctions_of_a_list_container:
    {
    //push_back(value);
    {
        // l1.push_back(6);
        // for(auto num: l1) {
        // cout<<num<<"->";
        // }cout<<"NULL"<<endl;
    }
    //push_front(value);
    {
        // l1.push_front(0);
        // for(auto num: l1) {
        // cout<<num<<"->";
        // }cout<<"NULL"<<endl;
    }
    //pop_back();
    {
        // l1.pop_back();
        // for(auto num: l1) {
        // cout<<num<<"->";
        // }cout<<"NULL"<<endl;
    }
    //pop_front();
    {
        l1.pop_front();
        for(auto num: l1) {
        cout<<num<<"->";
        }cout<<"NULL"<<endl;
    }
    }
    // cout<<*itr<<endl;
    return 0;
}*/
//splitting_a_circular_linked_list_into_two_halves..!
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
class CLL {
    public:
    Node* head;
    Node* tail;
    CLL() {
        head = NULL;
        tail = NULL;
    }
    void addAtEnd(int value) {
        Node* new_node = new Node(value);
        if(head==NULL) {
            head = new_node;
            tail = new_node;
            tail->next = head;
            return;
        }
        else {
           tail->next = new_node;
           new_node->prev = tail;
           tail = new_node;
           tail->next = head;
           head->prev = tail;
        }
    }
    void displayNodes() {
        Node* temp = head;
        int i = 0;
        while(temp!=head or i==0) {
            cout<<temp->val<<" ";
            temp = temp->next;
            i++;
        }cout<<endl;
        return;
    }
};
Node* HalveCLLs(Node* &head, Node* &tail) {
    Node* ptr1 = head;
    Node* ptr2 = head;
    int i=0;
    while((ptr2!=head and ptr2->next!=head) or (i==0)){
        ptr1 = ptr1->next;
        ptr2 = ptr2->next->next;
        i++;
    }
    Node* head1;
    Node* head2;
    head1 = head;
    head2 = ptr1;
    Node* tail1 = ptr1->prev;
    tail1->next = head1;
    Node* tail2 = tail;
    tail2->next = head2;
    return head2;
}
int main() {
    CLL l1;
    l1.addAtEnd(11);
    l1.addAtEnd(2);
    l1.addAtEnd(56);
    l1.addAtEnd(12);
    l1.displayNodes();
    CLL l2;
    CLL l3;
    l2.head = l1.head;
    l3.head = HalveCLLs(l1.head,l1.tail);
    l2.displayNodes();
    l3.displayNodes();
    return 0;
}*/
//splitting_a_circular_linked_list_into_two_halves..!
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
class CLL {
    public:
    Node* head;
    Node* tail;
    CLL() {
        head = NULL;
        tail = NULL;
    }
    void addAtEnd(int value) {
        Node* new_node = new Node(value);
        if(head==NULL) {
            head = new_node;
            tail = new_node;
            tail->next = head;
            return;
        }
        else {
           tail->next = new_node;
           new_node->prev = tail;
           tail = new_node;
           tail->next = head;
           head->prev = tail;
        }
    }
    void displayNodes() {
        Node* temp = head;
        int i = 0;
        while(temp!=head or i==0) {
            cout<<temp->val<<" ";
            temp = temp->next;
            i++;
        }cout<<endl;
        return;
    }
};
Node* ExchangeFirstLastNodesInCLL(Node* &head, Node* &tail) {
    tail->prev->next = head;
    head->prev = tail->prev;
    head->next->prev = tail;
    tail->next = head->next;
    head->next = tail;
    tail->prev = head;
    head = tail;
    return head;
}
int main() {
    CLL l1;
    l1.addAtEnd(1);
    l1.addAtEnd(2);
    l1.addAtEnd(3);
    l1.addAtEnd(4);
    l1.addAtEnd(5);
    l1.displayNodes();
    l1.head = ExchangeFirstLastNodesInCLL(l1.head,l1.tail);
    l1.displayNodes();
    return 0;
}*/
// Reverse Nodes in Even Length Groups
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
class LL {
    public:
    Node* head;
    LL() {
        head = NULL;
    }
    void addAtEnd(int value) {
        Node* new_node = new Node(value);
        if (head==NULL) {
            head = new_node;
            return;
        }
        else {
            Node* temp = head;
            while(temp->next!=NULL) {
                temp = temp->next;
            }
            temp->next = new_node;
            return;
        }
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
void reverseNodesInEvenLengths(Node* &head) {
    Node* temp;
    int i;
    {temp = head;
    i = 0;
    while(temp!=NULL) {
        temp = temp->next;
        i++;
    }
    }
    temp = head;
    int j = 0;
    int counter = 0;
    while(temp!=NULL) {
        j++;
        int l = (j*(j+1))/2;
        if(l<=i) {
        if(j%2==0) {
            Node* ptr1 = temp->next;
            Node* ptr2 = ptr1;
            int k=0;
            while(k<j-1){
                ptr2 = ptr2->next;
                k++;
            }
            Node* previous = ptr2->next;
            Node* current = ptr1;
            Node* need = ptr2->next;
            while(current!=need) {
                Node* nextNode = current->next;
                current->next = previous;
                previous = current;
                current = nextNode;
            }
            counter += j;
            temp->next = previous;
            temp = ptr1->next;
        }
        else {
            int k = 0;
            while(k<j-1) {
            temp = temp->next;
            k++;
           }
           counter+=j;
        }
        }
        else {
            Node* test = head;
            while(test->next!=temp){
                test = test->next;
            }
            if((i-counter)%2==0) {
                Node* previous = NULL;
                Node* current = temp;
                while(current!=NULL) {
                    Node* nextNode = current->next;
                    current->next = previous;
                    previous = current;
                    current = nextNode;
                }
                test->next = previous;
           }
           temp = NULL;
        }
    }
    return;
}
int main() {
    LL l1;
    l1.addAtEnd(1);
    l1.addAtEnd(1);
    l1.addAtEnd(0);
    l1.addAtEnd(6);
    l1.addAtEnd(5);
    l1.displayNodes();
    reverseNodesInEvenLengths(l1.head);
    l1.displayNodes();
    return 0;
}
*/

// 1. You are given two non-empty linked lists representing two non-negative integers. The digits are stored in
// reverse order, and each of their nodes contains a single digit. Add the two numbers and store the sum in the
// first linked list.
// The first line of input contains n and m, the size of the first and the second linked list respectively.
// The second line contains the elements of the first linked list.
// The third line contains the elements of the second linked list.

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
class LL {
    public:
    Node* head;
    LL() {
        head = NULL;
    }
    void addAtEnd(int value) {
        Node* new_node =new Node(value);
        if(head==NULL) {
            head = new_node;
        }else {
            Node* temp = head;
            while(temp->next!=NULL) {
                temp = temp->next;
            }
            temp->next = new_node;
        }
        return;
    }
    void displayList() {
        Node* temp = head;
        while(temp!=NULL) {
            cout<<temp->val<<"->";
            temp = temp->next;
        }cout<<"NULL"<<endl;
        return;
    }
};
void sum(Node* &head1, Node* &head2) {
    Node* temp1 = head1;
    Node* temp2 = head2;
    while(temp1!=NULL and temp2!=NULL) {
        temp1->val += temp2->val;
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    Node*  temp = head1;
    while(temp->next!=NULL) {
        temp = temp->next;
    }
    temp1 = temp;
    temp1->next = temp2;
    return;
}
int main() {
    LL l1,l2;
    int n,m;
    cout<<"enter n: ";
    cin>>n;
    cout<<"enter values of l1: ";
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        l1.addAtEnd(x);
    }
    cout<<"enter m: ";
    cin>>m;
    cout<<"enter values of l2: ";
    for(int i=0; i<m; i++){
        int x;
        cin>>x;
        l2.addAtEnd(x);
    }
    l1.displayList();
    l2.displayList();
    sum(l1.head,l2.head);
    Node* result = l1.head;
    while(result!=NULL) {
        cout<<result->val<<"->";
        result = result->next;
    }cout<<"NULL"<<endl;
    return 0;
}*/

// 2. Given the head of a sorted linked list, delete all nodes that have duplicates, leaving only distinct numbers
// from the original list. Return the linked list sorted as well.
// The first line of input contains n, the number of elements in the linked list.
// The second line of input contains the elements of the linked list.
/*#include <iostream>
#include <bits/stdc++.h>
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
class LL {
    public:
    Node* head;
    LL() {
        head = NULL;
    }
    void addAtEnd(int value) {
        Node* new_node =new Node(value);
        if(head==NULL) {
            head = new_node;
        }else {
            Node* temp = head;
            while(temp->next!=NULL) {
                temp = temp->next;
            }
            temp->next = new_node;
        }
        return;
    }
    void displayList() {
        Node* temp = head;
        while(temp!=NULL) {
            cout<<temp->val<<"->";
            temp = temp->next;
        }cout<<"NULL"<<endl;
        return;
    }
};
void deleteDuplicated(Node* &head) {
    Node* temp = head;
    multiset <int> dupNum;
    while(temp!=NULL) {
        dupNum.insert(temp->val);
        temp = temp->next;
    }
    temp = head;
    Node* dup = temp;
    for(auto value: dupNum) {
        if(dupNum.count(value)==1) {
          temp->val = value;
          dup = temp;
          temp = temp->next;
        }
    }
    dup->next = NULL;
    dup = temp;
    while(dup!=NULL) {
        Node* del = dup;
        dup = dup->next;
        free(del);
    }
    free(dup);
    return;
}
int main() {
    LL l1;
    int n;
    cout<<"enter n: ";
    cin>>n; 
    cout<<"enter the values: ";
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        l1.addAtEnd(x);
    }
    l1.displayList();
    deleteDuplicated(l1.head);
    l1.displayList();
    return 0;
}*/

// 3. Given the head of a linked list and a value x, partition it such that all nodes with value less than or equal to
// x come before nodes with value greater than x.
// You should preserve the original relative order of the nodes in each of the two partitions.
// The first line of input contains n, the size of the linked list, and x.
// The second line of input contains the elements of the linked list.

/*#include <iostream>
#include <bits/stdc++.h>
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
class LL {
    public:
    Node* head;
    LL() {
        head = NULL;
    }
    void addAtEnd(int value) {
        Node* new_node =new Node(value);
        if(head==NULL) {
            head = new_node;
        }else {
            Node* temp = head;
            while(temp->next!=NULL) {
                temp = temp->next;
            }
            temp->next = new_node;
        }
        return;
    }
    void displayList() {
        Node* temp = head;
        while(temp!=NULL) {
            cout<<temp->val<<"->";
            temp = temp->next;
        }cout<<"NULL"<<endl;
        return;
    }
};
void query(Node* &head,int x) {
    Node* temp = head;
    LL part1;
    LL part2;
    while(temp!=NULL) {
        if(temp->val<=x) {
            part1.addAtEnd(temp->val);
        }
        else {
            part2.addAtEnd(temp->val);
        }
        Node* dup = temp;
        temp = temp->next;
        free(dup);
    }
    free(temp);
    Node* end = part1.head;
    while(end->next!=NULL) {
        end = end->next;
    }end->next = part2.head;
    head = part1.head;
    return;
}
int main() {
    LL l1;
    int n;
    cout<<"enter n: ";
    cin>>n; 
    int x;
    cout<<"enter x: ";
    cin>>x;
    cout<<"enter the values: ";
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        l1.addAtEnd(x);
    }
    l1.displayList();
    query(l1.head,x);
    l1.displayList();
    return 0;
}*/

/*4. Given the head of a singly linked list and two integers left and right where left <= right, reverse the nodes of
the list from position left to position right, and return the reversed list.
The first line of input contains n, the size of the linked list.
The second line of input contains the elements of the linked list.
The third line of input contains the value for left and right respectively.*/

/*#include <iostream>
#include <bits/stdc++.h>
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
class LL {
    public:
    Node* head;
    LL() {
        head = NULL;
    }
    void addAtEnd(int value) {
        Node* new_node =new Node(value);
        if(head==NULL) {
            head = new_node;
        }else {
            Node* temp = head;
            while(temp->next!=NULL) {
                temp = temp->next;
            }
            temp->next = new_node;
        }
        return;
    }
    void displayList() {
        Node* temp = head;
        while(temp!=NULL) {
            cout<<temp->val<<"->";
            temp = temp->next;
        }cout<<"NULL"<<endl;
        return;
    }
};
void query(Node* &head,int left,int right) {
    Node* temp = head;
    int i=1;
    while(i<left-1 and left!=1) {
        temp = temp->next;
        i++;
    }
    if(left==1) {
        Node* previous = temp;
        Node* maintain = temp->next;
        i=1;
        temp = head;
        while(i<right) {
            temp = temp->next;
            i++;
        }
        Node* rightLink = temp;
        temp = head;
        while(previous!=rightLink) {
        Node* current = maintain;
        maintain = maintain->next;
        current->next = previous;
        previous = current;
        }
        temp->next = maintain;
        head = rightLink;
        return;
    }
    else {
    Node* leftLink = temp;
    Node* previous = temp->next;
    Node* maintain = temp->next->next;
    temp = head;
    i=1;
    while(i<right) {
        temp = temp->next;
        i++;
    }
    Node* rightLink = temp;
    temp = previous;
    while(previous!=rightLink) {
        Node* current = maintain;
        maintain = maintain->next;
        current->next = previous;
        previous = current;
    }
    leftLink->next = rightLink;
    temp->next = maintain;
    }
    return;
}
int main() {
    LL l1;
    int n;
    cout<<"enter n: ";
    cin>>n; 
    int left;
    cout<<"enter left: ";
    cin>>left;
    int right;
    cout<<"enter right: ";
    cin>>right;
    cout<<"enter the values: ";
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        l1.addAtEnd(x);
    }
    l1.displayList();
    query(l1.head,left,right);
    l1.displayList();
    return 0;
}*/

// 5. Given head which is a reference node to a singly-linked list. The value of each node in the linked list is
// either 0 or 1. The linked list holds the binary representation of a number.
// Return the decimal value of the number in the linked list.
// The most significant bit is at the head of the linked list.
// The first line of input contains n, the size of the linked list.
// The second line of input contains the elements of the linked list.

/*#include <iostream>
#include <bits/stdc++.h>
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
class LL {
    public:
    Node* head;
    LL() {
        head = NULL;
    }
    void addAtEnd(int value) {
        Node* new_node =new Node(value);
        if(head==NULL) {
            head = new_node;
        }else {
            Node* temp = head;
            while(temp->next!=NULL) {
                temp = temp->next;
            }
            temp->next = new_node;
        }
        return;
    }
    void displayList() {
        Node* temp = head;
        while(temp!=NULL) {
            cout<<temp->val<<"->";
            temp = temp->next;
        }cout<<"NULL"<<endl;
        return;
    }
};
int query(Node* &head) {
    Node* temp = head;
    int size=0;
    while(temp!=NULL) {
        temp = temp->next;
        size++;
    }
    temp = head;
    size--;
    int ans = 0;
    while(temp!=NULL) {
        ans += pow(2,size)*temp->val;
        size--;
        temp = temp->next;
    }
    return ans;
}
int main() {
    LL l1;
    int n;
    cout<<"enter n: ";
    cin>>n; 
    cout<<"enter the values: ";
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        l1.addAtEnd(x);
    }
    l1.displayList();
    cout<<query(l1.head)<<endl;
    return 0;
}*/

// 6.Given the head of a linked list, return the node where the cycle begins. If there is no cycle, return null:
/*#include <iostream>
#include <bits/stdc++.h>
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
class LL {
    public:
    Node* head;
    LL() {
        head = NULL;
    }
    void addAtEnd(int value) {
        Node* new_node =new Node(value);
        if(head==NULL) {
            head = new_node;
        }else {
            Node* temp = head;
            while(temp->next!=NULL) {
                temp = temp->next;
            }
            temp->next = new_node;
        }
        return;
    }
    void displayList() {
        Node* temp = head;
        while(temp!=NULL) {
            cout<<temp->val<<"->";
            temp = temp->next;
        }cout<<"NULL"<<endl;
        return;
    }
};
Node* query(Node* &head) {
    Node* fast = head;
    Node* slow = head;
    while(fast->next!=NULL and fast->next->next!=NULL) {
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast) {
            Node* start = head;
            while(slow!=start) {
                slow = slow->next;
                start = start->next;
            }return start;
        }
    }
    return NULL;
}
int main() {
    LL l1;
    int n;
    cout<<"enter n: ";
    cin>>n; 
    cout<<"enter the values: ";
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        l1.addAtEnd(x);
    }
    Node* temp = l1.head;
    while(temp->next!=NULL) {
        temp = temp->next;
    }temp->next = l1.head->next->next;
    // l1.displayList();
    Node* result = query(l1.head);
    if(result!=NULL) {
        cout<<result->val<<endl;
    }else {
        cout<<"NULL";
    }
    return 0;
}*/

// 7.Given the head of a singly linked list, sort the list using insertion sort, and return the sorted list's head.
// The first line of input contains n, the size of the list.
// The second line of input contains the elements of the linked list.

// insertion_sort_algorithm:
/*#include<iostream>
using namespace std;
int main() {
 int array[] = {5,4,3,2,1};
 int n = sizeof(array)/sizeof(array[0]);
 for(int i=1; i<n; i++) {
     int j = i-1;
     int trend = array[i];
     while(j!=-1 and array[j]>trend) {
         array[j+1] = array[j];
         j--;
     }array[j+1] = trend;
 }
 for(int i=0; i<n; i++) {
     cout<<array[i]<<" ";
 }
 return 0;
//  tc: O(n^2);
// nature : stable;
}*/

/*#include <iostream>
#include <bits/stdc++.h>
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
class LL {
    public:
    Node* head;
    LL() {
        head = NULL;
    }
    void addAtEnd(int value) {
        Node* new_node =new Node(value);
        if(head==NULL) {
            head = new_node;
        }else {
            Node* temp = head;
            while(temp->next!=NULL) {
                temp = temp->next;
            }
            temp->next = new_node;
            new_node->prev = temp;
        }
        return;
    }
    void displayList() {
        Node* temp = head;
        while(temp!=NULL) {
            cout<<temp->val<<"->";
            temp = temp->next;
        }cout<<"NULL"<<endl;
        return;
    }
};
void insertionSort(Node* &head) {
    Node* main = head->next;
    Node* mod_head;
    Node* temp = head;
    int min = 100000;
    while(temp!=NULL) {
        if(min>temp->val) {
            min = temp->val;
            mod_head = temp;
        }
        temp = temp->next;
    }
    while(main!=NULL) {
        int trend = main->val;
        Node* dup = main->next;
        Node* temp = main->prev;
        int temp_val = temp->val;
        if(dup!=NULL) {
        int dup_val = dup->val;
        }
        int main_val = main->val;
        while(temp!=NULL and temp->val>trend) {
            if(main->next!=NULL) {
            main->next->prev = temp;
            }
            main->prev = temp->prev;
            temp->next = main->next;
            if(temp->prev!=NULL) {
            temp->prev->next = main;
            }
            temp->prev = main;
            main->next = temp;
            temp = main->prev;
        }main = dup;
    }head = mod_head;
    return;
}
int main() {
    LL l1;
    int n;
    cout<<"enter n: ";
    cin>>n; 
    cout<<"enter the values: ";
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        l1.addAtEnd(x);
    }
    Node* temp = l1.head;
    while(temp->next!=NULL) {
        temp = temp->next;
    }
    l1.displayList();
    insertionSort(l1.head);
    l1.displayList();
    return 0;
}*/

// 8.Given the head of a singly linked list and an integer k, split the linked list into k consecutive linked list
// parts.
// The length of each part should be as equal as possible: no two parts should have a size differing by more
// than one. This may lead to some parts being null.
// The parts should be in the order of occurrence in the input list, and parts occurring earlier should always
// have a size greater than or equal to parts occurring later.
// Return an array of the k parts.
// The first line of input contains n (the size of the list) and k.
// The second line of input contains the elements of the linked list.

/*#include <iostream>
#include <bits/stdc++.h>
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
class LL {
    public:
    Node* head;
    LL() {
        head = NULL;
    }
    void addAtEnd(int value) {
        Node* new_node =new Node(value);
        if(head==NULL) {
            head = new_node;
        }else {
            Node* temp = head;
            while(temp->next!=NULL) {
                temp = temp->next;
            }
            temp->next = new_node;
        }
        return;
    }
};
void displayList(Node* head) {
        Node* temp = head;
        while(temp!=NULL) {
            cout<<temp->val<<"->";
            temp = temp->next;
        }cout<<"NULL"<<endl;
        return;
}
vector <Node*> query(Node* &head, int n, int k) {
    vector <Node*> result;
    int partSize = n%k;
    Node* temp = head;
    int count = 1;
    while(temp!=NULL) {
        result.push_back(temp);
        int i = 1;
        while(i<partSize and count!=n) {
            temp = temp->next;
            count++;
            i++;
        }Node* maintain = temp->next;
        temp->next = NULL;
        temp = maintain;
        count++;
    }
    return result;
}
int main() {
    LL l1;
    int n,k;
    cout<<"enter n: ";
    cin>>n;
    cout<<"enter k: ";
    cin>>k; 
    cout<<"enter the values: ";
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        l1.addAtEnd(x);
    }
    Node* temp = l1.head;
    while(temp->next!=NULL) {
        temp = temp->next;
    }
    displayList(l1.head);
    vector <Node*> result = query(l1.head,n,k);
    cout<<"linked list parts: "<<endl;
    for(Node* ptr: result) {
       displayList(ptr);
    }
    return 0;
}*/

// 9.You are given the head of a linked list, which contains a series of integers separated by 0's. The beginning
// and end of the linked list will have Node.val == 0.
// For every two consecutive 0's, merge all the nodes lying in between them into a single node whose value is
// the sum of all the merged nodes. The modified list should not contain any 0's.
// Return the head of the modified linked list.
// The first line of input contains n, the size of the list.
// The second line of input contains the elements of the linked list.

/*#include <iostream>
#include <bits/stdc++.h>
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
class LL {
    public:
    Node* head;
    LL() {
        head = NULL;
    }
    void addAtEnd(int value) {
        Node* new_node =new Node(value);
        if(head==NULL) {
            head = new_node;
        }else {
            Node* temp = head;
            while(temp->next!=NULL) {
                temp = temp->next;
            }
            temp->next = new_node;
        }
    }
    void displayList() {
        Node* temp = head;
        while(temp!=NULL) {
            cout<<temp->val<<"->";
            temp = temp->next;
        }cout<<"NULL"<<endl;
        return;
    }
};
void query(Node* &head) {
    Node* temp = head;
    while(temp->val==0) {
        temp = temp->next;
    }head = temp;
    while(temp!=NULL) {
        Node* maintain = temp;
        temp = temp->next;
        while(temp!=NULL and temp->val!=0) {
            maintain->val += temp->val;
            temp = temp->next;
        }while(temp!=NULL and temp->val==0){
            temp = temp->next;
        }maintain->next  = temp;
    }return;
}
int main() {
    LL l1;
    int n,k;
    cout<<"enter n: ";
    cin>>n;
    cout<<"enter the values: ";
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        l1.addAtEnd(x);
    }
    l1.displayList();
    query(l1.head);
    if(n==1 and l1.head->val==0) {
        cout<<-1<<endl;
    }else {l1.displayList();}
    
    return 0;
}*/

// 10.In a linked list of size n, where n is even, the ith node (0-indexed) of the linked list is known as the twin of
// the (n-1-i)th node, if 0 <= i <= (n / 2) - 1.
// For example, if n = 4, then node 0 is the twin of node 3, and node 1 is the twin of node 2. These are the only
// nodes with twins for n = 4.
// The twin sum is defined as the sum of a node and its twin.
// Given the head of a linked list with even length, return the maximum twin sum of the linked list.
// The first line of input contains n, the size of the list.
// The second line of input contains the elements of the linked list.

/*#include <iostream>
#include <bits/stdc++.h>
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
class LL {
    public:
    Node* head;
    LL() {
        head = NULL;
    }
    void addAtEnd(int value) {
        Node* new_node =new Node(value);
        if(head==NULL) {
            head = new_node;
        }else {
            Node* temp = head;
            while(temp->next!=NULL) {
                temp = temp->next;
            }
            temp->next = new_node;
            new_node->prev = temp;
        }
    }
    void displayList() {
        Node* temp = head;
        while(temp!=NULL) {
            cout<<temp->val<<"->";
            temp = temp->next;
        }cout<<"NULL"<<endl;
        return;
    }
};
int query(Node* &head, int n) {
    int result = -1000000;
    Node* temp = head;
    Node* tail;
    while(temp->next!=NULL) {
        temp = temp->next;
    }tail = temp;
    Node* moment1 = head;
    Node* moment2 = tail;
    int i = 0;
    while(i<((n/2)-1)){
        if(result<(moment1->val+moment2->val)) {
         result = moment1->val + moment2->val; 
        }
        moment1 = moment1->next;
        moment2 = moment2->prev;
        i++;
    }
    return result;
}
int main() {
    LL l1;
    int n,k;
    cout<<"enter n(!!!n must be even!!!): ";
    cin>>n;
    cout<<"enter the values: ";
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        l1.addAtEnd(x);
    }
    l1.displayList();
    if(n==1 and l1.head->val==0) {
        cout<<-1<<endl;
    }else {
        int result = query(l1.head,n);
        cout<<result<<endl;
    }
    return 0;
}
*/




