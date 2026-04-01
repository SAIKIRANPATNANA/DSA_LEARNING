// Stacks Using Arrays:
/*Stacks are a type of container adaptor, specifically designed to operate in a LIFO context (last-in first-out), where elements are inserted and extracted only from one end of the container.

stacks are implemented as container adaptors, which are classes that use an encapsulated object of a specific container class as its underlying container, providing a specific set of member functions to access its elements. Elements are pushed/popped from the "back" of the specific container, which is known as the top of the stack.
The underlying container may be any of the standard container class templates or some other specifically designed container class. The container shall support the following operations:
empty
size
back
push_back
pop_back

The standard container classes vector, deque and list fulfill these requirements. By default, if no container class is specified for a particular stack class instantiation, the standard container deque is used.*/
/*#include <iostream>
using namespace std;
class Stack {
    int capacity;
    int *array;
    int top;
    public:
    Stack(int c) {
        capacity = c;
        array = new int[c];
        top = -1;
    }
    void pushItem(int ele){
        if(this->top==this->capacity-1) {
            cout<<"Sorry, Overflown...!";
        }
        top++;
        this->array[this->top] = ele;
        return;
    }
    void popItem() {
        if(this->top==-1) {
            cout<<"Sorry, Underflown...!";
        }
        else {
            this->top--;
        }
    }
    int getItem(){
        if(this->top==-1) {
            cout<<"Sorry, Underflown..!"<<endl;
        }
        return this->array[this->top];
    }
    int checkEmpty() {
        return this->top==-1;
    }
    int checkFull() {
        return this->top==this->capacity-1;
    }
    int getSize() {
        if(this->top==-1) {
            return 0;
        }
        return this->top+1;
    }
};
int main() {
    Stack st1(5);
    st1.popItem();
    // st1.getItem();
    cout<<st1.checkEmpty()<<endl;;
    st1.pushItem(1);
    st1.pushItem(2);
    cout<<st1.getItem()<<endl;
    st1.pushItem(3);
    cout<<st1.getSize()<<endl;
    st1.popItem();
    cout<<st1.getItem()<<endl;
    cout<<st1.checkFull()<<endl;
    st1.pushItem(3);
    st1.pushItem(4);
    st1.pushItem(5);
    cout<<st1.checkFull()<<endl;
    st1.pushItem(6);
    return 0;
}*/
// Stacks Using Linked List:
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
class Stack {
    public:
    Node* head;
    int size;
    int capacity;
    Stack (int c) {
        head = NULL;
        capacity = c;
        size = 0;
    }
    void pushItem(int value) {
        if(size==capacity) {
            cout<<"Sorry, Overflown..!"<<endl;
            return;
        }
        Node* new_node = new Node(value);
        if(head==NULL) {
          head = new_node;
          size++;
          return;
        }
        else {
             new_node->next = head;
             head = new_node;
             size++;
             return;
        }
    }
    void popItem() {
        if(head==NULL) {
            cout<<"Sorry, Underflown..!"<<endl;
        }
        else {
            Node* dup = head;
            head = head->next;
            free(dup);
            size--;
            return;
        }
    }
    int getItem() {
        if(head==NULL) {
            cout<<"Sorry, Underflown..!"<<endl;
            return -1;
        }
        return head->val;
    }
    int getSize() {
        if(head==NULL) {
            return 0;
        }
        return size;
    }
    int checkEmpty() {
        return head==NULL;
    }
    int checkFull() {
        return size == capacity;
    }
    void printItems() {
        Node* temp = head;
        while(temp!=NULL) {
            cout<<temp->val<<" ";
            temp = temp->next;
        }cout<<endl;
    }
};
int main() {
    Stack st1(5);
    st1.popItem();
    cout<<st1.getItem()<<endl;
    cout<<st1.checkEmpty()<<endl;;
    st1.pushItem(1);
    st1.pushItem(2);
    cout<<st1.getItem()<<endl;
    st1.pushItem(3);
    cout<<st1.getSize()<<endl;
    st1.popItem();
    cout<<st1.getItem()<<endl;
    cout<<st1.checkFull()<<endl;
    st1.pushItem(3);
    st1.pushItem(4);
    st1.pushItem(5);
    cout<<st1.getItem()<<endl;
    cout<<st1.checkFull()<<endl;
    st1.pushItem(6);
    return 0;
}*/
// copy_stack(copying contents of one stack to another stack):
/*#include <iostream>
#include <stack>
using namespace std;
stack<int> copyStack(stack<int> &input) {
    stack<int> temp;
    while(input.empty()!=1) {
        int x = input.top();
        input.pop();
        temp.push(x);
    }
    stack<int> ans;
    while(temp.empty()!=1){
        int x = temp.top();
        temp.pop();
        ans.push(x);
    }
    return ans;
}
int main() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    stack<int> result = copyStack(st);
    while(result.empty()!=1) {
        cout<<result.top()<<endl;
        result.pop();
    }
    // time_complexity: O(n);
    // space_complexity: O(n);
    return 0;
}*/
// above program using recursive approach:
/*#include <iostream>
#include <stack>
using namespace std;
void copyStack(stack<int> &st, stack<int> &ans) {
    // base_case:
    if(st.empty()==1) {
        return;
    }
    // self_work;
    else {
        int x = st.top();
        st.pop();
        // Assumptional_case:
        copyStack(st,ans);
        ans.push(x);
        return;
    }
    
}
int main() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    stack <int> ans;
    copyStack(st, ans);
    while(ans.empty()!=1) {
        cout<<ans.top()<<endl;
        ans.pop();
    }
    return 0;
}*/
// Insert At Bottom / Any Index;
// Bottom:
/*#include <iostream>
#include <stack>
using namespace std;
void AddAtBottom(stack<int> &st, int x) {
    stack<int> temp;
    while(st.empty()!=1) {
       temp.push(st.top());
       st.pop();
    }
    st.push(x);
    while(temp.empty()!=1) {
        st.push(temp.top());
        temp.pop();
    }
    return;
}
int main() {
    stack<int> st;
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    AddAtBottom(st,1);
    while(st.empty()!=1) {
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}
*/
// any Index:
/*#include <iostream>
#include <stack>
using namespace std;
void addAtIndex(stack<int> &st, int index, int value) {
    stack<int> temp;
    int i = 0;
    int size = st.size();
    // while(st.empty()!=1) {
    //     temp.push(st.top());
    //     st.pop();
    // }
    // int i = 0;
    // while(i<index-1) {
    //     st.push(temp.top());
    //     temp.pop();
    //     i++;
    // }
    // st.push(value);
    // while(temp.empty()!=1){
    //     st.push(temp.top());
    //     temp.pop();
    // }
    while(i<(size-index+1)) {
        temp.push(st.top());
        st.pop();
        i++;
    }
    st.push(value);
    while(temp.empty()!=1) {
        st.push(temp.top());
        temp.pop();
    }
    return;
}
int main() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(5);
    addAtIndex(st,5,7);
    while(st.empty()!=1) {
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}*/
// Bottom using recursion;
/*#include <iostream>
#include <stack>
using namespace std;
void AddAtBottom(stack <int> &st, int value ) {
    if(st.empty()==1) {
        st.push(value);
        return;
    }
    else {
        int x = st.top();
        st.pop();
        AddAtBottom(st,value);
        st.push(x);
        return;
    }
}
int main() {
    stack <int> st;
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    AddAtBottom(st,1);
    while(st.empty()!=1) {
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}
*/
// addingAtBottom Using Recursion:
/*#include <iostream>
#include <stack>
using namespace std;
void addAtIndex(stack <int> &st, int value, int &size, int index) {
    if(size+1==index) {
        st.push(value);
        return;
    }
    else {
        int x = st.top();
        st.pop();
        size--;
        addAtIndex(st,value,size,index);
        st.push(x);
        return;
    }
}
int main() {
    stack <int> st;
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    int n = st.size();
    addAtIndex(st,6,n,5);
    while(st.empty()!=1) {
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}*/
//Remove_From_Bottom_using_iteration:
/*#include <iostream>
#include<stack>
using namespace std;
void removeAtBottom(stack<int> &st) {
    int i=0;
    stack <int> temp;
    int size = st.size();
    while(i<size-1){
        temp.push(st.top());
        st.pop();
        i++;
    }
    st.pop();
    while(temp.empty()!=1) {
        st.push(temp.top());
        temp.pop();
    }
    return;
}
void printStack(stack <int> st) {
    while(st.empty()!=1) {
        cout<<st.top()<<" ";
        st.pop();
    }cout<<endl;
}
int main() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    printStack(st);
    removeAtBottom(st);
    printStack(st);
    return 0;
}
*/
// removing_An_element_At_any_index:
/*#include <iostream>
#include<stack>
using namespace std;
void removeAtBottom(stack<int> &st, int index) {
    int i=0;
    stack <int> temp;
    int size = st.size();
    while(i<size-index){
        temp.push(st.top());
        st.pop();
        i++;
    }
    st.pop();
    while(temp.empty()!=1) {
        st.push(temp.top());
        temp.pop();
    }
    return;
}
void printStack(stack <int> st) {
    while(st.empty()!=1) {
        cout<<st.top()<<" ";
        st.pop();
    }cout<<endl;
}
int main() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    printStack(st);
    removeAtBottom(st,3);
    printStack(st);
    return 0;
}*/
//Removing An Element At Bottom Recursively:
/*#include <iostream>
#include<stack>
using namespace std;
void removeAtBottom(stack<int> &st, int size) {
    if(size==1) {
        st.pop();
        return;
    }
    else {
        int x = st.top();
        st.pop();
        removeAtBottom(st,--size);
        st.push(x);
        return;
    }
}
void printStack(stack <int> st) {
    while(st.empty()!=1) {
        cout<<st.top()<<" ";
        st.pop();
    }cout<<endl;
}
int main() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    printStack(st);
    removeAtBottom(st,st.size());
    printStack(st);
    return 0;
}*/
// Removing an element at any index in a stack;
/*#include <iostream>
#include<stack>
using namespace std;
void removeAtBottom(stack<int> &st, int size, int index) {
    if(size==index) {
        st.pop();
        return;
    }
    else {
        int x = st.top();
        st.pop();
        removeAtBottom(st,--size,index);
        st.push(x);
        return;
    }
}
void printStack(stack <int> st) {
    while(st.empty()!=1) {
        cout<<st.top()<<" ";
        st.pop();
    }cout<<endl;
}
int main() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    printStack(st);
    removeAtBottom(st,st.size(),2);
    printStack(st);
    return 0;
}*/
// Reversing A Stack iteratively:
/*#include <iostream>
#include<stack>
using namespace std;
void reverseStack(stack<int> &st) {
    stack <int> temp1;
    while(st.empty()!=1) {
        temp1.push(st.top());
        st.pop();
    }
    stack <int> temp2;
    while(temp1.empty()!=1) {
        temp2.push(temp1.top());
        temp1.pop();
    }
    while(temp2.empty()!=1) {
        st.push(temp2.top());
        temp2.pop();
    }
    return;
}
void printStack(stack <int> st) {
    while(st.empty()!=1) {
        cout<<st.top()<<" ";
        st.pop();
    }cout<<endl;
}
int main() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    printStack(st);
    reverseStack(st);
    printStack(st);;
    return 0;
}*/
// Reversing A Stack Recursively:
/*#include <iostream>
#include <stack>
using namespace std;
void insertAtBottom(stack<int> &st, int value) {
    if(st.empty()==1) {
        st.push(value);
        return;
    }
    else {
        int x = st.top();
        st.pop();
        insertAtBottom(st,value);
        st.push(x);
        return;
    }
}
void reverseStack(stack<int> &st) {
    if(st.empty()==1) {
    return;
    }
    else {
        int x = st.top();
        st.pop();
        reverseStack(st);
        insertAtBottom(st,x);
        return;
    }
}
void printStack(stack <int> st) {
    while(st.empty()!=1) {
        cout<<st.top()<<" ";
        st.pop();
    }cout<<endl;
}
int main() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    printStack(st);
    reverseStack(st);
    printStack(st);
    return 0;
}
*/
// Given an integer num, repeatedly add all its digits until the result has only one digit, and return it:
/*#include <iostream>
#include <stack>
using namespace std;
int result(int x) {
    stack <int> st;
    while(x!=0) {
        st.push(x%10);
        x /= 10;
    }
    if(st.size()==1) {
        return st.top();
    }
    else if(st.size()>1) {
        while(st.empty()!=1) {
            x += st.top();
            st.pop();
        }
        return result(x);
    }
    return 0;
}
int main() {
    int x;
    cout<<"enter x: ";
    cin>>x;
    cout<<result(x);
    return 0;
}
*/
// Infix to Postfix Conversion using Stack
// Reverse individual words and also reversing a string;
/*#include <iostream>
#include <stack>
#include <string>
using namespace std;
void reverseIndividualWords(string &word) {
    stack <string> st;
    string ans;
    int i = 0;
    int n = word.size();
    while(i<n) {
        while(i<n and word[i]!=' ') {
            st.push(word.substr(i,1));
            i++;
        }
        while(st.empty()!=1) {
        ans += st.top();
        st.pop();
        }
        ans+=" ";
        i++;
    }
    word = ans;
    return;
}
int main() {
  string word = "abc";
  cout<<word<<endl;
  reverseIndividualWords(word);
  cout<<word<<endl;
   return 0;
}*/
// Merging two stacks via linked list:
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
class Stack{
    public:
    Node* head;
    Node* tail;
    Stack() {
        head = NULL;
        tail = NULL;
    }
    void push(int value) {
        Node* new_node = new Node(value);
        if(head==NULL) {
            head = new_node;
            tail = new_node;
            tail->next = head;
            return;
        }
        else {
        new_node->next = head;
        tail->next = new_node;
        head = new_node;
        return;
        }
    }
    void top() {
        cout<<head->val<<endl;
    }
    void pop() {
        Node* temp = head;
        tail->next = head->next;
        head = head->next;
        free(temp);
    }
};
void mergeStacks(Node* &h1, Node* &t1, Node* h2, Node* &t2) {
    t1->next = h2;
    t2->next = h1;
    return;
}
void displayStacks(Node* &head) {
    Node* temp = head;
    int temp_val = temp->val;
    int i = 0;
    while(temp!=head or i==0) {
        temp_val = temp->val;
        cout<<temp->val<<" ";
        temp = temp->next;
        i++;
    }cout<<endl;
    return;
}
int main() {
    Stack st1;
    Stack st2;
    st1.push(1);
    st1.push(2);
    st1.push(3);
    st1.push(4);
    st2.push(5);
    st2.push(6);
    st2.push(7);
    st2.push(8);
    // st1.top();
    // st2.top();
    // st1.pop();
    // st2.pop();
    displayStacks(st1.head);
    displayStacks(st2.head);
    mergeStacks(st1.head,st1.tail,st2.head,st2.tail);
    displayStacks(st1.head);
    return 0;
}*/
// Next Greater Element (NGE) for every element in given Array using stacks;
/*#include <iostream>
#include <stack>
using namespace std;
int nextGreaterElement(stack<int> &st) {
    stack <int> st_dup = st;
    st_dup.pop();
    while(st_dup.empty()!=1) {
        if(st.top()<st_dup.top()) {
            st.pop();
            return st_dup.top();
        }
        else {
            st_dup.pop();
        }
    }
    st.pop();
    return -1;
}
int main() {
    int array[]  =  {4, 6, 3, 1, 0, 9, 5, 6, 7, 3, 2};
    int n = sizeof(array)/sizeof(array[0]);
    stack <int> st;
    for(int i=n-1; i>=0; i--) {
        st.push(array[i]);
    }
    for(int i=0; i<n; i++) {
    cout<<array[i]<<"-->"<<nextGreaterElement(st)<<endl;
    }
    return 0;
}
*/
//Next Greater Frequency Element Using Stacks:
// problem_statement: Given an array, for each element find the value of the nearest element 
// to the right which is having a frequency greater than that of the current element.
// If there does not exist an answer for a position, then make the value ‘-1’.
/*#include <iostream>
#include <stack>
using namespace std;
void addAtBottom(int x, stack<int> &ele_freq) {
    if(ele_freq.empty()==1) {
        ele_freq.push(x);
        return;
    }
    else {
        int y = ele_freq.top();
        ele_freq.pop();
        addAtBottom(x,ele_freq);
        ele_freq.push(y);
        return;
    }
}
void displayStack(stack<int> st){
    while(st.size()!=0) {
        cout<<st.top()<<" ";
        st.pop();
    } cout<<endl;
    return;
}
stack <int> countFrequency(stack<int> ele) {
    stack <int> ele_freq;
    stack <int> ele_dup = ele;
    while(ele_dup.empty()!=1) {
        stack <int> temp = ele;
        int f = 0;
        while(temp.empty()!=1) {
           if(ele_dup.top()==temp.top()) {
               f++;
           }
           temp.pop();
        }
        ele_dup.pop();
        addAtBottom(f,ele_freq);
    }
    return ele_freq;
}
stack <int> nextGreaterFrequencyElement(stack<int> ele, stack <int> ele_freq) {
    stack <int> result;
    while(ele.empty()!=1 and ele_freq.empty()!=1) {
        stack<int> ele_fdup = ele_freq;
        stack<int> ele_dup = ele;
        int ans = 0;
        ele_fdup.pop();
        ele_dup.pop();
        while(ele_fdup.empty()!=1 and ele_dup.empty()!=1) {
        if(ele_freq.top()<ele_fdup.top()) {
            ans = ele_dup.top();
            break;
        }
        else {
            ele_fdup.pop();
            ele_dup.pop();
        }
        }
        if(ans!=0) {
           addAtBottom(ans,result);
           ele.pop();
           ele_freq.pop();
        }
        else {
            addAtBottom(-1,result);
            ele.pop();
            ele_freq.pop();
        }
    }
    return result;
}
int main() {
    stack <int> ele;
    ele.push(3);
    ele.push(3);
    ele.push(11);
    ele.push(2);
    ele.push(2);
    ele.push(2);
    ele.push(2);
    ele.push(1);
    ele.push(1);
    ele.push(1);
    stack <int> ele_freq = countFrequency(ele);
    displayStack(ele);  
    displayStack(ele_freq);
    stack <int> result = nextGreaterFrequencyElement(ele,ele_freq);
    displayStack(result);
    return 0;
}
*/
// Find next Smaller of next Greater in an array..
/*#include <iostream>
#include <stack>
using namespace std;
int nextSmallerOfnextGreaterElement(stack<int> &st) {
    stack <int> st_dup = st;
    st_dup.pop();
    int ans = -10;
    while(st_dup.empty()!=1) {
        if(st.top()<st_dup.top()) {
            ans = st_dup.top();
            break;
        }
        else {
            st_dup.pop();
        }
    }
    st.pop();
    if(ans!=-10) {
        st_dup.pop();
        while(st_dup.empty()!=1) {
            if(ans>st_dup.top()) {
                ans = st_dup.top();
                return ans;
            }
            else {
                st_dup.pop();
            }    
        }
    }
    return -1;
}
int main() {  
    int array[]  =  {4, 8, 2, 1, 9, 5, 6, 3};
    int n = sizeof(array)/sizeof(array[0]);
    stack <int> st;
    for(int i=n-1; i>=0; i--) { //2  5  5  5 -1  3 -1 -1  
        st.push(array[i]);
    }
    for(int i=0; i<n; i++) {
    cout<<array[i]<<"-->"<<nextSmallerOfnextGreaterElement(st)<<endl;
    }
    return 0;
}
*/
// Interview Questions on stacks:
// Balanced Brackets Sequence;
/*#include <iostream>
#include <stack>
#include <string>
using namespace std;
void addAtBottom(stack <string> &st, string s) {
    if(st.empty()==1) {
        st.push(s);
        return;
    }
    else {
        string x = st.top();
        st.pop();
        addAtBottom(st,s);
        st.push(x);
        return;
    }
}
bool checkBracketSequence(string Bracket_sequence) {
    stack <string> st;
    for(int i=0; i<Bracket_sequence.size(); i++) {
        addAtBottom(st,Bracket_sequence.substr(i,1));
    }
    int counter = 0;
    stack <string> st_dup;
    while(st.size()!=0) {
        if(st.top()=="[" or st.top()=="{" or st.top()=="(") {
            counter++;
            st_dup.push(st.top());
            st.pop();
        }
        else if(st_dup.empty()==1 and (st.top()==")" or st.top()=="}" or st.top()=="]")) {
            counter++;
            break;
        }
        else if(st.top()=="}" or st.top()==")" or st.top()=="]") {
            if(st_dup.top()=="[" and st.top()=="]") {
                st_dup.pop();
                st.pop();
                counter--;
            }
            else if(st_dup.top()=="{" and st.top()=="}") {
                st_dup.pop();
                st.pop();
                counter--;
            }
            else if(st_dup.top()=="(" and st.top()==")") {
                st_dup.pop();
                st.pop();
                counter--;
            }
            else {
            st_dup.push(st.top());
            counter++;
            st.pop();
            }
        }
    }
    if(counter == 0) {
        return true;
    }
    return false;
}
int main() {
    string Bracket_sequence = "({{}[]}()())";
    cout<<checkBracketSequence(Bracket_sequence)<<endl;
    return 0;
}*/
/*Optimization of above code:
#include <iostream>
#include <stack>
using namespace std;
bool isValid(string braces) {
    stack <char> st;
    for(int i=0; i<braces.size(); i++) {
        char b = braces[i];
        if(b=='[' or b=='(' or b=='{') {
            st.push(b);
        }
        else {
            if(b==']' and !st.empty() and st.top()=='[') {
                st.pop();
            }else if(b=='}' and !st.empty() and st.top()=='{') {
                st.pop();
            }else if(b==')' and !st.empty() and st.top()=='(') {
                st.pop();
            }else {
                return false;
            }
        }
    }
    return st.empty();
}
int main() {
    string braces = "({{([])[][]}{}})";
    cout<<isValid(braces)<<endl;
    return 0;
}
*/
// smarter and optimized approach for NextGreaterElement:
/*#include <iostream>
#include <stack>
#include <vector>
using namespace std;
vector <int> NextGreaterElement(vector <int> vec) {
    stack <int> st;
    st.push(0);
    vector <int> result(vec.size(), -1);
    for(int i=1; i<vec.size(); i++) {
        while(!st.empty() and vec[st.top()]<vec[i]) { //changing vec[st.top()]<vec[i] to vec[st.top()]>vec[i] gives NextSmallererElement..!
            result[st.top()] = vec[i];
            st.pop();
        }st.push(i);
    }
    return result;
}
int main() {
    int n;
    cout<<"enter n: ";
    cin>>n;
    vector<int> vec;
    for(int i=0; i<n; i++) {
        int x;
        cin>>x; 4 6 3 1 0 9 5 6 7 3 2
       vec.push_back(x);
    }
    vector <int> result = NextGreaterElement(vec);
    for(int i=0; i<result.size(); i++) {
        cout<<result[i]<<" ";
    }cout<<endl;
    return 0;
}*/
//next Smaller Element:
/*#include <iostream>
#include <stack>
#include <vector>
using namespace std;
vector <int> NextGreaterElement(vector <int> vec) {
    stack <int> st;
    st.push(0);
    vector <int> result(vec.size(), -1);
    for(int i=1; i<vec.size(); i++) {
        while(!st.empty() and vec[st.top()]>vec[i]) { 
            result[st.top()] = vec[i];
            st.pop();
        }st.push(i);
    }
    return result;
}
int main() {
    int n;
    cout<<"enter n: ";
    cin>>n;
    vector<int> vec;
    for(int i=0; i<n; i++) {
        int x;
        cin>>x; 4 6 3 1 0 9 5 6 7 3 2
       vec.push_back(x);
    }
    vector <int> result = NextGreaterElement(vec);
    for(int i=0; i<result.size(); i++) {
        cout<<result[i]<<" ";
    }cout<<endl;
    return 0;
}*/
// previous Greater Element:
/*#include <iostream>
#include <stack>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
vector <int> NextGreaterElement(vector <int> vec) {
    stack <int> st;
    st.push(0);
    vector <int> result(vec.size(), -1);
    for(int i=1; i<vec.size(); i++) {
        while(!st.empty() and vec[st.top()]<vec[i]) { 
            result[st.top()] = vec[i];
            st.pop();
        }st.push(i);
    }
    return result;
}
int main() {
    int n;
    cout<<"enter n: ";
    cin>>n;
    vector<int> vec;
    for(int i=0; i<n; i++) {
        int x;
        cin>>x; 
       vec.push_back(x);
    }
    reverse(vec.begin(), vec.end());
    vector <int> result = NextGreaterElement(vec);
    reverse(result.begin(), result.end());
    for(int i=0; i<result.size(); i++) {
        cout<<result[i]<<" ";
    }cout<<endl;
    return 0;
}
*/
// previous_smaller_element:
/*#include <iostream>
#include <stack>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
vector <int> NextGreaterElement(vector <int> vec) {
    stack <int> st;
    st.push(0);
    vector <int> result(vec.size(), -1);
    for(int i=1; i<vec.size(); i++) {
        while(!st.empty() and vec[st.top()]>vec[i]) { 
            result[st.top()] = vec[i];
            st.pop();
        }st.push(i);
    }
    return result;
}
int main() {
    int n;
    cout<<"enter n: ";
    cin>>n;
    vector<int> vec;
    for(int i=0; i<n; i++) {
        int x;
        cin>>x; 
       vec.push_back(x);
    }
    reverse(vec.begin(), vec.end());
    vector <int> result = NextGreaterElement(vec);
    reverse(result.begin(), result.end());
    for(int i=0; i<result.size(); i++) {
        cout<<result[i]<<" ";
    }cout<<endl;
    return 0;
}
*/
// stock_span_problem;
/*#include <iostream>
#include <stack>
using namespace std;
void reverseStack(stack <int> &st) {
    stack <int> st_dup_1;
    while(not st.empty()){
        st_dup_1.push(st.top());
        st.pop();
    }
    stack <int> st_dup_2;
    while(not st_dup_1.empty()){
        st_dup_2.push(st_dup_1.top());
        st_dup_1.pop();
    }
    while(not st_dup_2.empty()){
        st.push(st_dup_2.top());
        st_dup_2.pop();
    }
    return;
}
void stockSpan(int Stocks[], int n) {
    stack <int> st;
    for(int i=0; i<n; i++) {
        int j=i-1; 
        int ans = 1;
        while(Stocks[j]<Stocks[i] and j>=0) {
            ans ++;
            j--;
        }
        st.push(ans);
    }
    reverseStack(st);
    while(not st.empty()) {
        cout<<st.top()<<" ";
        st.pop();
    }
    return;
}
int main() {
    int Stocks[] = {10, 4, 5, 90, 120, 80};
    int n = sizeof(Stocks)/sizeof(Stocks[0]);
    stockSpan(Stocks,n);
    return 0;
}*/
// Area of the largest rectangle in the histogram;
// #include <iostream>
// #include <stack>
// #include <vector>
// using namespace std;
// void largestRectangle(vector <int> rectangles) {
//     stack <int> st_pse;
//     stack <int> st_nge;
//     vector<int> pse(rectangles.size(), -1);
//     st_pse.push(0);
//     for(int i=1; i<rectangles.size(); i++) {
//         while(rectangles[st_pse.top()]<rectangles[i]) {
//         if(rectangles[st_pse.top()]<rectangles[i]) {
//             pse[i] = st_pse.top();
//             st_pse.pop();
//             break;
//         }
//         st_pse.pop();
//         }
//         int k = st_pse.top()+1;
//         while(st_pse.top()<i) {
//         st_pse.push(k);
//         k++;
//         }
//     }
//     for(int i=0; i<pse.size(); i++) {
//         cout<<pse[i]<<" ";
//     }cout<<endl;
    
// }
// int main() { 
// int n;
// cout<<"enter n: ";
// cin>>n;
// vector <int> rectangles;
// for(int i=0; i<n; i++) {
//     int x;
//     cin>>x;
//     rectangles.push_back(x);
// }
// largestRectangle(rectangles);
// return 0;
// }
// #include <iostream>
// #include <stack>
// using namespace std;
// int largestRectangle(int array[]) {
//     stack <int> rect;
//     int n = sizeof(array)/sizeof(array[0]);
//     for(int i=n-1; i>=0; i--) {
//         rect.push(array[i]);
//     }
//     stack <int> dup1 = rect;
//     int dup_arr1[n];
//     int i = 1;
//     while(i<15)
//     while(rect.isempty()==0)  {
//         if(rect.top()>array[i]) {
//             dup += 1
//         }
//     }

    
// }
// int main() {
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     int array[n];
//     for(int i=0; i<n; i++) {
//         int x;
//         cin>>x;
//         array[i] = x;
//     }
//     cout<<largestRectangle(array)<<endl;
//     return 0;
// }
// Min_Stack_Problem:
/*#include <iostream>
#include <stack>
#define long long int;
using namespace std;
class minStack {
    public:
    stack<int> st;
    int min;
    minStack() {
        min = 1000;
    }
    void push(int val) {
        if(this->st.size()==0) {
            this->st.push(val);
            this->min = val;
        }
        else if(val>this->min) {
            this->st.push(val-this->min);
        }
        else {
            this->st.push(val-this->min);
            this->min = val;
        }
        return;
    }
    void pop() {
        if(this->st.size()!=0) {
            if(this->st.top()>=0) {
                this->st.pop();
            }
            else {
                this->min -= this->st.top();
                this->st.pop();
            }
        }
        return;
    }
    int top() {
        if(this->st.size()==1) {
            return this->st.top();
        }
        else if(this->st.top()<0) {
            return this->min;
        }
        else {
            return this->min + this->st.top();
        }
    }
    int getMin() {
        return this->min;
    }
};
int main() {
    minStack ms;
    ms.push(5);
    ms.push(6);
    ms.push(12);
    ms.push(-1);
    ms.push(-5);
    ms.pop();
    ms.pop();
    cout<<ms.getMin()<<endl;
    cout<<ms.top()<<endl;
}*/
// checking_validity_of_parenthesis:
/*#include <iostream>
#include <stack>
using namespace std;
bool validateParenthesis(string braces) {
    stack <char> st;
    for(int i=0; i<braces.length(); i++) {
        if(braces[i]=='(') {
            st.push('(');
        }
        else {
            if(st.size()!=0) {
                if(st.top()=='(' and braces[i]==')') {
                    st.pop();
                }
            }
            else {
                if(braces[i]==')') {
                    return false;
                }
            }
        }
    }
    if(st.size()==0) {
        return true;
    }
    return false;
}
int main() {
    string braces = "(())())))";
    cout<<validateParenthesis(braces)<<endl;
    return 0;
}*/
// Finding the min number of braces to be removed to make the given Bracket_sequence balanced:
/*#include <iostream>
#include <stack>
using namespace std;
int validateParenthesis(string braces) {
    stack <char> st;
    for(int i=0; i<braces.length(); i++) {
        if(braces[i]=='(') {
            st.push('(');
        }
        else {
            if(st.size()!=0) {
                if(st.top()=='(' and braces[i]==')') {
                    st.pop();
                }
                else if (st.top()==')' and braces[i]==')') {
                st.push(')');
                }
            }
            else {
                if(braces[i]==')') {
                    st.push(')');
                }
            }
        }
    }
    return st.size();
}
int main() {
    string braces = "(())((()())";
    cout<<validateParenthesis(braces)<<endl;
    return 0;
}*/
// Evaluation of Postfix expressions:
/*#include <iostream> 
#include <stack>
#include <cmath>
#include <string>
using namespace std;
int calc(int a, int b, char op) { 
    if(op=='^') {
        return pow(a,b);
    }
    if(op=='/') {
        return (a/b);
    }
    if(op=='*') {
        return (a*b);
    }
    if(op=='+') {
        return (a+b);
    }
    return (a-b);
}
int evalPostfixExpression(string &expression) {
    stack <int> st;
    for(int i=0; i<expression.length(); i++) {
        if(int(expression[i])>=48 and int(expression[i])<=57) {
            st.push(stoi(expression.substr(i,1)));
        }
        else if(expression[i]=='^' or expression[i]=='*' or expression[i]=='/'  or expression[i]=='+' or expression[i]=='-' ) {
            int b = st.top();
            st.pop();
            int a = st.top();
            st.pop();
            st.push(calc(a,b,expression[i]));
        }
    }
    return st.top();
}
int main() {
    string expression = "231*+9-";
    cout<<evalPostfixExpression(expression);
    return 0;
}*/
// Evaluation of prefix_expression:
/*#include <iostream> 
#include <stack>
#include <cmath>
#include <string>
using namespace std;
int calc(int a, int b, char op) { 
    if(op=='^') {
        return pow(a,b);
    }
    if(op=='/') {
        return (a/b);
    }
    if(op=='*') {
        return (a*b);
    }
    if(op=='+') {
        return (a+b);
    }
    return (a-b);
}
int evalPrefixExpression(string &expression) {
    stack <int> st;
    for(int i=expression.length()-1; i>=0; i--) {
        if(int(expression[i])>=48 and int(expression[i])<=57) {
            st.push(stoi(expression.substr(i,1)));
        }
        else if(expression[i]=='^' or expression[i]=='*' or expression[i]=='/'  or expression[i]=='+' or expression[i]=='-' ) {
            int b = st.top();
            st.pop();
            int a = st.top();
            st.pop();
            st.push(calc(a,b,expression[i]));
        }
    }
    return st.top();
}
int main() {
    string expression = "-9+*132";
    cout<<evalPrefixExpression(expression);
    return 0;
}*/
// #include <iostream> 
// #include <stack>
// #include <cmath>
// #include <string>
// using namespace std;
// int calc(char op, int val1, int val2) {
//     if(op=='^') {
//         return pow(val1,val2);
//     }
//     if(op=='/') {
//         return val1/val2;
//     }
//     if(op=='*') {
//         return val1*val2;
//     }
//     if(op=='+') {
//         return val1+val2;
//     }
//     return val1-val2;
// }
// int eval(string &math) {
//     stack <int> st;
//     for(int i=0; i<math.size(); i++) {
//         if(math[i]=='^' or math[i]=='/' or math[i]=='*' or math[i]=='+' or math[i]=='-') {
//             int val2 = st.top();
//             st.pop();
//             int val1 = st.top();
//             st.pop();
//             st.push(calc(math[i],val1,val2));
//         }
//         else {
//             st.push(stoi(math.substr(i,1)));
//         }
//     }
//     return st.top();
// }
// int main() {
//     string math = "231*^9-";
//     cout<<eval(math);
//     return 0;
// }
// evaluation of an Infix expression:
// #include <iostream>
// #include <stack>
// #include <string>
// #include <cmath>
// using namespace std;
// int calc(char op, int val1, int val2) {
//     if(op=='^') {
//         return pow(val1,val2);
//     }
//     if(op=='/') {
//         return val1/val2;
//     }
//     if(op=='*') {
//         return val1*val2;
//     }
//     if(op=='+') {
//         return val1+val2;
//     }
//     return val1-val2;
// }
// int evalInfixEpression(string &math) {
//     stack <char> op;
//     stack <int> num;
//     for(int i=0; i<math.size(); i++) {
//         char symb = math[i];
//         if(int(math[i]>=48 and int(math[i]<=57))) {
//         num.push(stoi(math.substr(i,1)));
//         }
//         else if(math[i] = '(' or math[i]==')' or math[i]=='^' or math[i]=='/' or math[i]=='*' or math[i]=='+' or math[i]=='-') {
//             if(math[i] == ')') {
//                 int val2 = num.top();
//                 num.pop();
//                 int val1 = num.top();
//                 num.pop();
//                 char sym = op.top();
//                 op.pop();
//                 op.pop();
//                 num.push(calc(sym, val1, val2));
//             }
//             else if(math[i]=='-') {
//                 if(op.top()=='^' or op.top()=='/' or op.top()=='*' or op.top()=='+') {
//                 int val2 = num.top();
//                 num.pop();
//                 int val1 = num.top();
//                 num.pop();
//                 char sym = op.top();
//                 op.pop();
//                 num.push(calc(sym, val1, val2));
//                 op.push(math[i]);
//                 }
//                 else {
//                      op.push(math[i]);
//                 }
//             }
//             else if(math[i]=='+') {
//                 if(op.top()=='^' or op.top()=='/' or op.top()=='*') {
//                 int val2 = num.top();
//                 num.pop();
//                 int val1 = num.top();
//                 num.pop();
//                 char sym = op.top();
//                 op.pop();
//                 num.push(calc(sym, val1, val2));
//                 op.push(math[i]);
//                 }
//                 else {
//                      op.push(math[i]);
//                 }
//             }
//             else if(math[i]=='*') {
//                 if(op.top()=='^' or op.top()=='/') {
//                 int val2 = num.top();
//                 num.pop();
//                 int val1 = num.top();
//                 num.pop();
//                 char sym = op.top();
//                 op.pop();
//                 num.push(calc(sym, val1, val2));
//                 op.push(math[i]);
//                 }
//                 else {
//                      op.push(math[i]);
//                 }
//             }
//             else if(math[i]=='/') {
//                 if(op.top()=='^') {
//                 int val2 = num.top();
//                 num.pop();
//                 int val1 = num.top();
//                 num.pop();
//                 char sym = op.top();
//                 op.pop();
//                 num.push(calc(sym, val1, val2));
//                 op.push(math[i]);
//                 }
//                 else {
//                      op.push(math[i]);
//                 }
//             }
//             else {
//                 op.push(math[i]);
//             }
//         }
    
//     }
//     if(op.empty()!=1) {
//         while(op.empty()!=1) {
//                 int val2 = num.top();
//                 num.pop();
//                 int val1 = num.top();
//                 num.pop();
//                 char sym = op.top();
//                 op.pop();
//                 num.push(calc(sym, val1, val2));
//         }
//     }
//     return num.top();
// }
// int main() {
//     string math = "2*(5*(3+6))/15-2";
//     cout<<evalInfixEpression(math);
//     return 0;
// }
// Evaluation of Infix Expression:
/*#include <iostream>
#include <stack>
#include <cmath>
using namespace std;
int calc(char sym, int val1, int val2) {
    if(sym=='^') {
        return pow(val1,val2);
    }
    if(sym=='/') {
        return val1/val2;
    }
    if(sym=='*') {
        return val1*val2;
    }
    if(sym=='+') {
        return val1+val2;
    }
    return val1-val2;
}
int precedence(char sym) {
    if(sym=='^') {
        return 3;
    }
    else if(sym=='/' or sym=='*') {
        return 2;
    }
    else if(sym=='+' or sym=='-') {
        return 1;
    }
    return -1;
}
int evalInfixEpression(string &math) {
    stack <char> op;
    stack <int> num;
    for(int i=0; i<math.size(); i++) {
    if(int(math[i])>=48 and int(math[i])<=57) {
        num.push(stoi(math.substr(i,1)));
    }
    else if(math[i]=='(') {
        op.push(math[i]);
    }
    else if(math[i]==')') {
    while(op.size()!=0 and op.top()!='(') {
        int val2 = num.top();
        num.pop();
        int val1 = num.top();
        num.pop();
        char sym = op.top();
        op.pop();
        num.push(calc(sym,val1,val2));
    }
    if(op.size()!=0) {
        op.pop();
    }
    }
    else {
       if(op.size()!=0 and precedence(math[i])<=precedence(op.top())) {
        int val2 = num.top();
        num.pop();
        int val1 = num.top();
        num.pop();
        char sym = op.top();
        op.pop();
        num.push(calc(sym,val1,val2));
       }
       op.push(math[i]);
    }
    }
    while(op.size()!=0) {
        int val2 = num.top();
        num.pop();
        int val1 = num.top();
        num.pop();
        char sym = op.top();
        op.pop();
        num.push(calc(sym,val1,val2));
    }
    return num.top();
}
int main() {
    string math = "2*(((3+5)/2)-2+7)^2";
    cout<<evalInfixEpression(math);
    return 0;
}*/
// Prefix to Postfix Transition:
/*#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;
string Postfix(string &math) {
    stack <string> post_fix;
    reverse(math.begin(), math.end());
    for(int i=0; i<math.size(); i++) {
        if(int(math[i])>=48 and int(math[i])<=57) {
            post_fix.push(math.substr(i,1));
        }
        else if(math[i]=='^' or math[i]=='/' or math[i]=='*' or math[i]=='+' or math[i]=='-') {
            string new_math = "";
            for(int i=0; i<2; i++) {
                new_math += post_fix.top();
                post_fix.pop();
            }
            new_math += math[i];
            post_fix.push(new_math);
        }
    }
    return post_fix.top();
}
int main() {
    string math = "*+32-15";
    cout<<Postfix(math);
    return 0;
}*/
// Maximum product of indexes of next greater on left and right:
/*#include <iostream>
#include <stack>
using namespace std;
void reverseStack(stack <int> &st) {
    stack <int> st_dup_1;
    while(not st.empty()){
        st_dup_1.push(st.top());
        st.pop();
    }
    stack <int> st_dup_2;
    while(not st_dup_1.empty()){
        st_dup_2.push(st_dup_1.top());
        st_dup_1.pop();
    }
    while(not st_dup_2.empty()){
        st.push(st_dup_2.top());
        st_dup_2.pop();
    }
    return;
}
int maxLRproduct(int *array,int n) {
    stack <int> st;
    for(int i=0; i<n; i++) {
        st.push(array[i]);
    }
    int k=1;
    stack <int> left;
    while(st.empty()!=1) {
        int r = 0;
        int ans = -1;
        for(int i=0; i<n-k; i++) {
            if(array[i]>st.top()) {
                ans = i;
                r = 1;
            }
        }
        if(ans == -1) {
        left.push(0);
        }
        else {
        left.push(ans+1);
        }
        st.pop();
        k++;
    }
    for(int i=n-1; i>=0; i--) {
        st.push(array[i]);
    }
    stack <int> right;
    k = 0;
    while(st.empty()!=1) {
        int r = 0;
        for(int i=k+1; i<n; i++) {
            if(array[i]>st.top()) {
                right.push(i+1);
                st.pop();
                r = 1;
                break;
            }
        }
        if(r==0) {
            right.push(0);
            st.pop();
        }
        k++;
    }
    reverseStack(left);
    int max_product = 0;
    while(left.empty()!=1 and right.empty()!=1) {
        int a = right.top();
        int b = left.top();
        if(max_product<a*b) {
            max_product = a*b;
        }
        left.pop();
        right.pop();
    }
    return max_product;
}
int main() {
    int array[] = {3,1,2,5,4};
    int n = sizeof(array)/sizeof(array[0]);
    cout<<maxLRproduct(array, n);
    return 0;
}
*/
// Find index of closing bracket for a given opening bracket in an expression:
/*#include <iostream>
using namespace std;
int closeBraceIdx(string &Sequence, int &openbBraceIdx) {
    int i = openbBraceIdx+1;
    if(Sequence[openbBraceIdx]!='[') {
        return -1;
    }
    int ans;
    while(true) {
        if(Sequence[i]=='[') {
            i++;
            while(Sequence[i]!=']') {
                i++;
            }
        }
        else if(Sequence[i]==']') {
        ans = i;
        break;
        }
        i++;
    }
    return ans;
}
int main() {
    string Sequence = "[ABC[23]][89]";
    int openbBraceIdx;
    cout<<"enter openbrace index: ";
    cin>>openbBraceIdx;
    cout<<closeBraceIdx(Sequence,openbBraceIdx);
    return 0;
}*/
// Above Problem Sovling Using Stacks:
/*#include <iostream>
#include <stack>
using namespace std;
int closeBraceIdx(string &Sequence, int &openbBraceIdx) {
    stack <char> braces;
    int ans;
    if(Sequence[openbBraceIdx]!='[') {
        return -1;
    }
    int i = openbBraceIdx;
    braces.push(Sequence[i]);
    i++;
    while(not braces.empty()) {
    if(Sequence[i]=='[') {
        braces.push(Sequence[i]);
    }
    else if(Sequence[i]==']'){
        braces.pop();
    }
    i++;
    }
    return i-1;
}
int main() {
    string Sequence = "[ABC[23]][89]";
    int openbBraceIdx;
    cout<<"enter openbrace index: ";
    cin>>openbBraceIdx;
    cout<<closeBraceIdx(Sequence,openbBraceIdx);
    return 0;
}
*/
// Sorting a stack using a temporary stack:
/*#include <iostream>
#include <stack>
using namespace std;
void reverseStack(stack <int> &st) {
    stack <int> st_dup_1;
    while(not st.empty()){
        st_dup_1.push(st.top());
        st.pop();
    }
    stack <int> st_dup_2;
    while(not st_dup_1.empty()){
        st_dup_2.push(st_dup_1.top());
        st_dup_1.pop();
    }
    while(not st_dup_2.empty()){
        st.push(st_dup_2.top());
        st_dup_2.pop();
    }
    return;
}
void sort(stack <int> &st) {
    stack <int> st_dup;
    st_dup.push(st.top());
    st.pop();
    while(not st.empty()) {
        if(st.top()>st_dup.top()) {
            st_dup.push(st.top());
            st.pop();
        }
        else {
            int x = st.top();
            st.pop();
            while(not st_dup.empty() and st_dup.top()>x) {
                st.push(st_dup.top());
                st_dup.pop();
            }
            st_dup.push(x);
        }
    }
    st = st_dup;
    reverseStack(st);
    return;
}
int main() {
    int array[] = {3, 5, 1, 4, 2, 8};
    int n = sizeof(array)/sizeof(array[0]);
    stack <int> st;
    for(int i=0; i<n; i++) {
        st.push(array[i]);
    }
    sort(st);
    while(not st.empty()) {
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}
*/
// Reverse a number using stack:
/*#include <iostream>
#include <stack>
using namespace std;
void reverseStack(stack <int> &st) {
    stack <int> st_dup_1;
    while(not st.empty()){
        st_dup_1.push(st.top());
        st.pop();
    }
    stack <int> st_dup_2;
    while(not st_dup_1.empty()){
        st_dup_2.push(st_dup_1.top());
        st_dup_1.pop();
    }
    while(not st_dup_2.empty()){
        st.push(st_dup_2.top());
        st_dup_2.pop();
    }
    return;
}
int reverseNumber(int &number) {
    stack <int> st;
    while(number!=0) {
        st.push(number%10);
        number /= 10;
    }
    reverseStack(st);
    while(not st.empty()) {
        number = number*10 + st.top();
        st.pop();
    }
    return number;
}
int main() {
    int number;
    cout<<"enter number: ";
    cin>>number;
    cout<<"reverse number: "<<reverseNumber(number);
    return 0;
}
*/
// Find maximum of minimum for every window size in a given array:
// #include <iostream>
// #include <stack>
// using namespace std;
// void maxOfMin(int array[], int n) {
//     int flag[n];
//     for(int i=0; i<n; i++) {
//         flag[i] = 0;
//     }
//     stack <int> st;
//     for(int i=n-1; i>=0; i--) {
//         st.push(array[i]);
//     }
//     int ans[n];
//     for(int i=0; i<n; i++) {
//         ans[i] = -1;
//     }
//     while(not st.empty()){
//         int i=0;
//         int start = 0;
//         for(i=0; i<n; i++) {
//             if(array[i]==st.top() and flag[i]==0) {
//                 flag[i]==1;
//                 start = i;
//                 break;
//             }
//         }
//         if(i==0) {
//             start = 0;
//         }
//         int k = i-1;
//         i++;
//         while(i<n and st.top()<=array[i]) {
//             i++;
//         }
//         if(start==0 and i==n) {
//             ans[n-1] = st.top();
//         }
//         else {
//         i--;
//         ans[i-k-1] = st.top();
//         }
//         st.pop();
//     }
//     int min_win;
//     for(int i=0; i<n; i++) {
//         if(ans[i]!=-1) {
//             min_win = ans[i];
//         }
//     }
//     for(int i=0; i<n; i++) {
//         if(ans[i]==-1) {
//             ans[i] = min_win;
//         }
//         cout<<ans[i]<<" ";
//     }cout<<endl;
//     return;
// }
// int main() {
//     int array[] = {4, 6, 8, 2, 7};
//     int n = sizeof(array)/sizeof(array[0]);
//     maxOfMin(array,n);
//     return 0;
// }

//  Q1. You are given an array of n digits. Your task is to generate a k-digit number such that it is the maximum
// possible number that can be generated from the given digits. Make sure that the relative ordering of the
// digits is not changed.
// Note the value of k can be large so the number should be formed in the form of a string.
/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    stack <int> st;
    int n,k;
    cout<<"enter n: ";
    cin>>n;
    int array[n];
    cout<<"enter digits: ";
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        array[i] = x;
    }
    cout<<"enter k: ";
    cin>>k;
    for(int i=0; i<n; i++) {
        st.push(array[i]);
    }
    int req_num = 0;
    for(int i=0; i<k; i++) {
        req_num = req_num*10 + st.top();
        st.pop();
    }
    int req_num_rev = 0;
    while(req_num!=0) {
        req_num_rev = (req_num_rev*10)+(req_num%10);
        req_num /= 10;
    }
    cout<<"result: "<<req_num_rev<<endl;
    return 0;
}
*/

/*Q2. You are given two non-empty linked lists representing two non-negative integers. The most significant
digit comes first and each of their nodes contains a single digit. Add the two numbers and return the sum as
a linked list.
You may assume the two numbers do not contain any leading zero, except the number 0 itself.
The first line of input contains n and m, the size of the 2 linked lists.
The second line of input contains n integers, the values stored in the first linked list.
The third line of input contains m integers, the values stored in the second linked list.*/

/*#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    stack <list <int>> st;
    for(int i=0; i<2; i++) {
        int n;
        cout<<"enter n: ";
        cin>>n;
        list <int> li;
        cout<<"enter digits: ";
        for(int j=0; j<n; j++) {
            int x;
            cin>>x;
            li.push_back(x);
        }
        st.push(li);
    }
    list <int> li1 = st.top();
    st.pop();
    list <int> li2 = st.top();
    st.pop();
    list <int> result;
    while(not li1.empty() and not li2.empty()) {
    auto itr1 = li1.end();
    auto itr2 = li2.end();
    itr1--; itr2--;
    result.push_front(*itr1 + *itr2);
    li1.pop_back();
    li2.pop_back();
    }
    st.push(result);
    while(not li1.empty()) {
        auto itr1 = li1.begin();
        result.push_front(*itr1);
        li1.pop_front();
    }
    while(not li2.empty()) {
        auto itr2 = li2.begin();
        result.push_front(*itr2);
        li2.pop_front(); 
    }
    cout<<"result: ";
    for(auto val: result) {
        cout<<val<<" ";
    }cout<<endl;
    return 0;
}
*/

// Q3. Given a vector, print the index of the Next Smaller Element for every element.
// The Next Smaller Element for an element x is the first smaller element on the right side of x in the vector.
// Elements for which no smaller element exists, consider the next smaller element as -1.
// The first line of input contains the size of the vector.
// The second line of input contains the elements of the vector.

/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
stack <int> NextSmallererElementIdx(stack <int> st, vector <int> vec) {
    int i = 0;
    stack <int> ans;
    while(!st.empty()) {
            bool happened = false;
            for(int j=i+1; j<vec.size(); j++) {
                if(vec[j]<st.top()) {
                    ans.push(j);
                    happened = true;
                    break;
                }
            }
            if(happened==false) {
                ans.push(-1);
            }
           st.pop();
           i++;
    }
    stack <int> temp1;
    while(not ans.empty()) {
        temp1.push(ans.top());
        ans.pop();
    }stack <int> temp2;
    while(not temp1.empty()) {
        temp2.push(temp1.top());
        temp1.pop();
    }while(not temp2.empty()) {
        ans.push(temp2.top());
        temp2.pop();
    }
    return ans;
}
int main() {
    vector<int> vec;
    int n;
    cout<<"enter n: ";
    cin>>n;
    stack <int> st;
    cout<<"enter array of numbers: ";
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        vec.push_back(x);
    }
    for(int i=n-1; i>=0; i--) {
        st.push(vec[i]);
    }
    stack <int> result = NextSmallererElementIdx(st,vec);
    while(not st.empty()) {
        cout<<st.top()<<" ";
        st.pop();
    }cout<<endl;
    while(not result.empty()) {
        cout<<result.top()<<" ";
        result.pop();
    }cout<<endl;
    return 0;
}*/


// Q4. You are given an array of n integers representing the heights of the buildings in an area. Mario can jump
// from one building of height arr[i] to another of height arr[j], i <= j, if the height of the second building is
// strictly greater than the height of the first building i.e. arr[j] > arr[i]. Each day mario makes a jump. Today he
// is a little busy so he wants to keep the length of jump(j - i) as small as possible. Help him find the location
// from where he must make his jump and to where.
// Assume there always exists a valid answer. If there are multiple answers, print the answer with the
// minimum index(0 -based indexing).
// The first line of input contains the value of n.
// The second line of input contains n integers, the heights of the buildings.

/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector <int> answer(stack <int> st, vector <int> vec) {
    int min = 100000;
    int i = 0;
    int start;
    int end;
    while(not st.empty()) {
        for(int j=i+1; j<vec.size(); j++) {
            if(vec[j]>st.top() and j-i<min) {
                start = i;
                end = j;
                min = j-i;
            }
        }
        i++;
        st.pop();
    }
    vector <int> ans;
    ans.push_back(start);
    ans.push_back(end);
    return ans;
}
int main() {
    int n;
    cout<<"enter n: ";
    cin>>n;
    cout<<"enter heights: ";
    vector <int> vec;
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        vec.push_back(x);
    }
    stack <int> st;
    for(int i=n-1; i>=0; i--) {
        st.push(vec[i]);
    }
    vector <int> result  = answer(st,vec);
    for(int i=0; i<2; i++) {
        cout<<result[i]<<" ";
    }cout<<endl;
    return 0;
}*/
