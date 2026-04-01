//Queues_data_str:
// Queues is a linear data_str which supports FIFO(FCFS:First_Come_First_Served)...!
// Operations On Queues:
// 1)Enqueue;
// 2)Dequeue;
// 3)Front;
// 4)isEmpty?
// 5)isFull?
// 6)size;
// Types Of Queues:
// 1)Simple;
// 2)Priority(Custom_Principle(not FIFO));
// 3)Circular;
// 4)Double Ended Queue(Deque)(addition and removal are possible both at front and back);
// Implementation Of Queue Using Linked List;
/*#include <iostream>
using namespace std;
class Node{
    public:
    Node* next;
    int val;
    Node(int value) {
        val = value;
        next = NULL;
    }
};
class Queue{
    public:
    Node* head;
    Node* tail;
    int size;
    Queue() {
        head = NULL;
        tail = NULL;
        size = 0;
    }
    void enqueue(int value) {
        Node* new_node = new Node(value);
        if(head==NULL) {
            head = new_node;
            tail = head;
            size++;
            return;
        }else {
            tail->next = new_node;
            tail = new_node;
            size++;
        }return;
    }
    void dequeue() {
        if(head!=NULL){
        Node* temp = head;
        head = head->next;
        size--;
        free(temp);
        }
        if(head==NULL) {
            tail = head;
        }
        return;
    }
    int front() {
        if(head==NULL) {
            return -1;
        }
        return head->val;
    }
    int isEmpty() {
        if(head==NULL) {
            return 1;
        }return 0;
    }
    int isFull(int capacity) {
        if(size==capacity) {
            return 1;
        }else {
            return 0;
        }
    }
    int getSize() {
        return size;
    }
    void displayQueue() {
        Node* temp = head;
        while(temp!=NULL) {
            cout<<temp->val<<" ";
            temp = temp->next;
        }cout<<endl;
        return;
    }
};
int main() {
    Queue q1;
    q1.enqueue(1);
    q1.enqueue(2);
    q1.enqueue(3);
    q1.dequeue();
    q1.enqueue(4);
    cout<<q1.front()<<endl;
    cout<<q1.getSize()<<endl;
    q1.displayQueue();
    q1.isEmpty();
    return 0;
}
*/
// Implementation Of Queue Using Arrays:
/*#include <iostream>
#include <vector>
using namespace std;
class Queue{
    vector <int> v;
    public:
    int front;
    int back;
    Queue() {
        front = -1;
        back = -1;
    }
    void enqueue(int value) {
        v.push_back(value);
        if(front==-1) {
            front++;
            back++;
        }
        else {
            back++;
        }
        return;
    }
    void dequeue() {
        if(getSize()==1) {
         front = -1;
         back = -1;
         v.clear();   
        }
        else {
            front++;
        }
        return;
    }
    int getFront() {
        return v[front];
    }
    int getSize() {
        return back-front+1;
    }
    int isEmpty() {
        return front==-1;
    }
    int isFull(int capacity) {
        return back+1==capacity;
    }
    void displayQueue() {
        if(front==-1) {
            cout<<-1<<endl;
        }
        for(int i=front; i<back+1; i++) {
            cout<<v[i]<<" ";
        }cout<<endl;
        return;
    }
};
int main() {
    Queue q1;
    q1.enqueue(1);
    q1.enqueue(2);
    q1.enqueue(3);
    q1.dequeue();
    q1.enqueue(4);
    q1.displayQueue();
    q1.dequeue();
    q1.dequeue();
    q1.displayQueue();
    q1.dequeue();
    q1.displayQueue();
    // cout<<q1.getSize()<<endl;
    // cout<<q1.getSize()<<endl;
    // cout<<q1.isEmpty()<<endl;
    // cout<<q1.getFront()<<endl;
    return 0;
}*/
// Implementation Of Queue Using STL in C++;
/*#include <iostream>
#include <queue>
using namespace std;
int main() {
    queue <int> q;
        q.push(1);
        q.push(2);
        q.push(3);
        q.push(4);
        q.pop();
        while(not q.empty()) {
            cout<<q.front()<<" ";
            q.pop();
        }cout<<endl;
    return 0;
}*/
// reversing a queue:
/*#include <iostream>
#include <stack>
#include <queue>
using namespace std;
void reverseQueue(queue <int> &q) {
    stack <int> st;
    while(not q.empty()) {
        st.push(q.front());
        q.pop();
    }
    while(not st.empty()) {
        q.push(st.top());
        st.pop();
    }
    return;
}
int main() {
    queue <int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    reverseQueue(q);
    while(not q.empty()) {
        cout<<q.front()<<" ";
        q.pop();
    }cout<<endl;
    return 0;
}*/
//Implementation Of Deque Using STL:
/*#include <iostream>
#include <deque>
using namespace std;
int main() {
    deque <int> dq;
    dq.push_front(1);
    dq.push_front(2);
    dq.push_front(3);
    dq.push_back(4);
    dq.push_back(5);
    dq.push_back(6);
    dq.pop_back();
    dq.pop_front();
    while(not dq.empty()) {
        cout<<dq.front()<<" ";
        dq.pop_front();
    }cout<<endl;
    return 0;
}*/
//Implementation Of Deque Using DLL(Doubly_Linked_List):
/*#include <iostream>
using namespace std;
class Node {
    public:
    Node* next;
    Node* prev;
    int val;
    Node(int value) {
        val = value;
        next = NULL;
        prev = NULL;
    }
};
class Deque {
    public:
    Node* head;
    Node* tail;
    int size;
    Deque() {
        head = NULL;
        tail = NULL;
        size = 0;
    }
    void pushFront(int value) {
        Node* new_node = new Node(value);
        if(head==NULL) {
            head = new_node;
            tail = head;
            size++;
            return;
        }
        else {
            new_node->next = head;
            head->prev = new_node;
            head = new_node;
            size++;
        }
        return;
    }
    void pushBack(int value) {
        Node* new_node = new Node(value);
        if(head==NULL) {
            head = new_node;
            tail = head;
            size++;
            return;
        }
        else {
            tail->next = new_node;
            new_node->prev = tail;
            tail = new_node;
            size++;
        }
        return;
    }
    void popFront() {
        if(head==NULL) {
            cout<<-1<<endl;
            return;
        }
        else if(size==1) {
            Node* temp = head;
            free(temp);
            size--;
        }
        else {
            Node* temp = head;
            head = head->next;
            free(temp);
            size--;
        }
        return;
    }
    void popBack() {
        if(head==NULL) {
            cout<<-1<<endl;
            return;
        }
        else if(size==1) {
            Node* temp = tail;
            free(tail);
            size--;
        }
        else {
            
            Node* temp = tail;
            tail->prev->next = tail->next;
            tail = tail->prev;
            free(temp);
            size--;
        }
        return;
    }
    int getSize() {
        return size;
    }
    int isEmpty() {
        return size==0;
    }
    void displayQueue() {
        if(size==0) {
            cout<<-1<<endl;   
        }
        else {
        Node* temp = head;
        while(temp!=NULL) {
            cout<<temp->val<<" ";
            temp = temp->next;
        }cout<<endl;
        }
    }
};
int main() {
    Deque dq;
    // dq.pushFront(1);
    // dq.pushFront(2);
    dq.pushFront(3);
    // dq.popFront();
    // dq.pushBack(4);
    // dq.pushBack(5);
    // dq.pushBack(6);
    dq.popBack();
    dq.displayQueue();
    cout<<dq.getSize()<<endl;
    cout<<dq.isEmpty()<<endl;
    return 0;
}
*/
// Q) You are given a array of integers nums, there is a sliding window of size k which is moving from very left of the array to the very right of the array. You can only see the k numbers in the window.
// Each time the sliding window moves by one position. Return the max sliding window which basically contains the max element in each window:
// #include <iostream>
// #include <deque>
// #include <vector>
// using namespace std;
// vector <int> maxOfMaxWin(vector<int> array, int k) {
//     int n = array.size();
//     deque <int> dq;
//     vector <int> ans;
//     int i = 0;
//     int p = 0;
//     while(i<n) {
//         int j = 0;
//         while(j<k) {
//             if(i==0) {
//                 dq.push_back(array[i]);
//                 i++;
//                 j++;
//             }
//             if(not dq.empty() and dq.size()<k and i<n and i-p<k) {
//             if(dq.back()>array[i]) {
//                 dq.push_back(array[i]);
//             }
//             else {
//             while(dq.size()!=0 and dq.back()<array[i]) {
//                 dq.pop_back();
//             }
//             dq.push_back(array[i]);
//             }
//             // if(i!=1) {
//             ans.push_back(dq.front());
//             // }
//             j++;
//             i++;
//             }
//             else {
//                 j++;
//             }
//         }
//         if(dq.front()==array[p]) {
//             dq.pop_front();
//         }
//         p++;
        
//     }
//     return ans;
// }
// int main() {
//     vector <int> array = {1};
//     int k = 3;
//     vector <int> result = maxOfMaxWin(array,k);
//     for(int i=0; i<result.size(); i++){
//         cout<<result[i]<<" ";
//     }cout<<endl;
//     return 0;
// }
// aliter:
// #include <iostream>
// #include <deque>
// #include <vector>
// using namespace std;
// vector <int> maxOfMaxWin(vector <int> &vec, int k) {
//     vector <int> ans;
//     deque <int> dq;
//     for(int i=0; i<k; i++) {
//         while(not dq.empty() and vec[dq.back()]<vec[i]) {
//             dq.pop_back();
//         }
//         dq.push_back(i);
//     }
//     ans.push_back(vec[dq.front()]);
//     for(int i=k; i<vec.size(); i++) {
//         if(dq.front()==i-k) {
//             dq.pop_front();
//         }
//         while(not dq.empty() and vec[dq.back()]<vec[i]) {
//             dq.pop_back();
//         }
//         dq.push_back(i);
//         ans.push_back(vec[dq.front()]);
//     }
//     return ans;
// }
// int main() {
//     vector <int> vec = {1,3,-1,-3,5,3,6,7};
//     int k = 3;
//     vector <int> result = maxOfMaxWin(vec, k);
//     for(int i=0; i<result.size(); i++) {
//         cout<<result[i]<<" ";
//     }cout<<endl;
//     return 0;
// }
// Implementation Of Push Efficient Queue Using Stack:
/*#include <iostream>
#include <stack>
using namespace std;
void Pop(stack <int> &q) {
    if(q.size()==1) {
        q.pop();
        return;
    }
    else {
        int x = q.top();
        q.pop();
        Pop(q);
        q.push(x);
    }
    return;
}
int Front(stack <int> &q) {
    stack <int> dup_q;
    while(q.size()>1) {
        dup_q.push(q.top());
        q.pop();
    }
    int top = q.top();
    while(not dup_q.empty()) {
        q.push(dup_q.top());
        dup_q.pop();
    }
    return top;
}
class Queue {
    public:
    stack <int> q;
    Queue() {}
    void push(int value) {
        q.push(value);
        return;
    }
    void pop() {
        if(q.empty()) {
            return;
        }
        Pop(q);
        return;
    }
    int front() {
        if(q.size()==0) {
            return -1;
        }
        return Front(q);
    }
    int back() {
        if(q.size()==0) {
            return -1;
        }
        return q.top();
    }
    int size() {
        return q.size();
    }
    void displayQueue() {
        if(q.empty()) {
         return;
        }
        stack <int> dup_q;
        stack <int> q_original = q;
        while(not q.empty()) {
            dup_q.push(q.top());
            q.pop();
        }
        while(not dup_q.empty()) {
            cout<<dup_q.top()<<" ";
            dup_q.pop();
        }cout<<endl;
        q = q_original;
        return;
    }
    int isEmpty() {
        return q.empty();
    }
};
int main() {
    Queue q;
    cout<<q.isEmpty()<<endl;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.front()<<endl;
    cout<<q.size()<<endl;
    q.displayQueue();
    return 0;
}
*/
// Implementation Of Pop Efficient Queue Using Stack:
/*#include <iostream>
#include <stack>
using namespace std;
void Push(stack <int> &q, int value) {
    if(q.empty()) {
        q.push(value);
        return;
    }
    else {
        int x = q.top();
        q.pop();
        Push(q,value);
        q.push(x);
    }
    return;
}
int Back(stack <int> &q) {
    stack <int> dup_q;
    while(q.size()>1) {
        dup_q.push(q.top());
        q.pop();
    }
    int bottom = q.top();
    while(not dup_q.empty()) {
        q.push(dup_q.top());
        dup_q.pop();
    }
    return bottom;
}
class Queue {
    public:
    stack <int> q;
    Queue() {}
    void push(int value) {
        Push(q,value);
        return;
    }
    void pop() {
        if(q.empty()) {
            return;
        }
        q.pop();
        return;
    }
    int front() {
        if(q.size()==0) {
            return -1;
        }
        return q.top();
    }
    int back() {
        if(q.size()==0) {
            return -1;
        }
        return Back(q);
    }
    int size() {
        return q.size();
    }
    void displayQueue() {
        if(q.empty()) {
         return;
        }
        stack <int> dup_q = q;
        while(not dup_q.empty()) {
            cout<<dup_q.top()<<" ";
            dup_q.pop();
        }
        return;
    }
    int isEmpty() {
        return q.empty();
    }
};
int main() {
    Queue q;
    cout<<q.isEmpty()<<endl;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.front()<<endl;
    cout<<q.size()<<endl;
    cout<<q.back()<<endl;
    q.displayQueue();
    return 0;
}
*/
// Implementation Of Push Efficient Stack Using Queue:
/*#include <iostream>
#include <queue>
using namespace std;
void Pop(queue <int> &st) {
    queue <int> dup_st;
    while(st.size()>1){
        dup_st.push(st.front());
        st.pop();
    }
    st.pop();
    while(not dup_st.empty()) {
        st.push(dup_st.front());
        dup_st.pop();
    }
    return;
}
int Top(queue <int> &st) {
    queue <int> dup_st;
    while(st.size()>1) {
        dup_st.push(st.front());
        st.pop();
    }
    int top = st.front();
    st.pop();
    while(not dup_st.empty()) {
        st.push(dup_st.front());
        dup_st.pop();
    }
    st.push(top);
    return top;
}
void DisplayStack(queue <int> &st) {
    if(st.empty()){
        return;
    }
    else {
        int x = st.front();
        st.pop();
        DisplayStack(st);
        cout<<x<<" ";
    }
    return;
}
class Stack {
    public:
    queue <int> st;
    Stack() {}
    void push(int value) {
        st.push(value);
        return;
    }
    void pop() {
        if(st.empty()) {
            return;
        }
        Pop(st);
        return;
    }
    int top() {
        if(st.size()==0) {
            return -1;
        }
        return Top(st);
    }
    int size() {
        return st.size();
    }
    void displayStack() {
        if(st.empty()) {
         return;
        }
        queue <int> st_dup = st;
        DisplayStack(st_dup);
        cout<<endl;
        return;
    }
    int isEmpty() {
        return st.empty();
    }
};
int main() {
    Stack st;
    cout<<st.isEmpty()<<endl;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    cout<<st.isEmpty()<<endl;
    st.displayStack();
    st.pop();
    st.displayStack();
    return 0;
}
*/
// Implementation Of Pop Efficient Stack Using Queue:
/*#include <iostream>
#include <queue>
using namespace std;
void Push(queue <int> &st, int value) {
    queue <int> dup_st;
    while(not st.empty()){
        dup_st.push(st.front());
        st.pop();
    }
    st.push(value);
    while(not dup_st.empty()) {
        st.push(dup_st.front());
        dup_st.pop();
    }
    return;
}

class Stack {
    public:
    queue <int> st;
    Stack() {}
    void push(int value) {
        Push(st,value);
        return;
    }
    void pop() {
        if(st.empty()) {
            return;
        }
        st.pop();
        return;
    }
    int top() {
        if(st.size()==0) {
            return -1;
        }
        return st.front();
    }
    int size() {
        return st.size();
    }
    void displayStack() {
        if(st.empty()) {
         return;
        }
        queue <int> st_dup = st;
        while(not st_dup.empty()) {
            cout<<st_dup.front()<<" ";
            st_dup.pop();
        }cout<<endl;
        return;
    }
    int isEmpty() {
        return st.empty();
    }
};
int main() {
    Stack st;
    cout<<st.isEmpty()<<endl;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    cout<<st.isEmpty()<<endl;
    st.displayStack();
    st.pop();
    st.displayStack();
    return 0;
}
*/
// Implementation Of Circular Queue Using Arrays:
/*#include <iostream>
#include <vector>
using namespace std;
class Queue{
    vector <int> v;
    public:
    int front;
    int back;
    int n;
    int size;
    Queue(int capacity) {
        front = -1;
        back = -1;
        n = capacity;
        v.resize(n);
    }
    void enqueue(int value) {
        if(front==-1) {
            front = (front+1)%n;
            back = (back+1)%n;
            v[back] = value;
        }
        else {
           back = (back+1)%n;
           v[back] = value;
        }
        size++;
        return;
    }
    void dequeue() {
        if(getSize()==1) {
         front = -1;
         back = -1;
         v.clear();   
        }
        else {
               front = (front+1)%n;
        }
        size--;
        return;
    }
    int getFront() {
        return v[front];
    }
    int getSize() {
        return size;
    }
    int isEmpty() {
        return front==-1;
    }
    int isFull() {
        return getSize()==n;
    }
    void displayQueue() {
        if(front==-1) {
            cout<<-1<<endl;
        }
        else {
        int j = 0;
        int i = front;
        do{
            cout<<v[i]<<" ";
            i = (i+1)%n;
            j++;
        }
        while(i!=front and j<getSize());
        cout<<endl;
        return;
        }
    }
};
int main() {
    Queue q1(4);
    q1.enqueue(1);
    q1.enqueue(2);
    q1.enqueue(3);
    q1.enqueue(4);
    q1.dequeue();
    q1.dequeue();
    q1.enqueue(5);
    q1.displayQueue();
    // cout<<q1.front<<endl;
    // cout<<q1.back<<endl;
    q1.enqueue(6);
    // q1.displayQueue();
    // q1.dequeue();
    q1.displayQueue();
    cout<<q1.getSize()<<endl;
    cout<<q1.isEmpty()<<endl;
    cout<<q1.getFront()<<endl;
    cout<<q1.isFull()<<endl;
    q1.enqueue(7);
    return 0;
}*/
// Write a C++ program to sort the elements of a queue:
/*#include <iostream>
#include <queue>
using namespace std;
void sort(queue <int> &q) {
    queue <int> q1;
    q1.push(q.front());
    q.pop();
    while(not q.empty()) {
        if(q1.back()<q.front()) {
            q1.push(q.front());
            q.pop();
        }
        else {
             queue <int> q2;
             while(not q1.empty() and not q.empty() and q1.front()<q.front()) {
                q2.push(q1.front());
                q1.pop();
             }
             while(not q1.empty() and not q.empty() and q1.front()>q.front()) {
                 q.push(q1.front());
                 q1.pop();
             }
             while(not q2.empty()) {
                 q1.push(q2.front());
                 q2.pop();
             }
             if(not q.empty()) {
             q1.push(q.front());
             q.pop();
             }
        }
    }
    q = q1;
    return;
}
int main() {
    int array[] = {0, 1, 2, 3, 5, 6, -1, 4};
    int n = sizeof(array)/sizeof(array[0]);
    queue <int> q;
    for(int i=0; i<n; i++) {
        q.push(array[i]);
    }
    sort(q);
    while(not q.empty()) {
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}*/
// Write a C++ program to find the sum of all elements of a queue:
/*#include <iostream>
#include <queue>
using namespace std;
int sum(queue <int> q) {
    int Sum = 0;
    while(not q.empty()) {
        Sum += q.front();
        q.pop();
    }
    return Sum;
}
int main() {
    int array[] = {0, 1, 2, 3, 5, 6, -1, 4};
    int n = sizeof(array)/sizeof(array[0]);
    queue <int> q;
    for(int i=0; i<n; i++) {
        q.push(array[i]);
    }
    cout<<sum(q);
    return 0;
}*/
// Write a C++ program to find the average of all elements of a queue:
/*#include <iostream>
#include <queue>
using namespace std;
float avg(queue <int> q) {
    float Sum = 0;
    int size = q.size();
    while(not q.empty()) {
        Sum += q.front();
        q.pop();
    }
    return Sum/size;
}
int main() {
    int array[] = {0, 1, 2, 3, 5, 6, -1, 4};
    int n = sizeof(array)/sizeof(array[0]);
    queue <int> q;
    for(int i=0; i<n; i++) {
        q.push(array[i]);
    }
    cout<<avg(q);
    return 0;
}*/
// Write a C++ program to find the median of all elements of a queue:
/*#include <iostream>
#include <queue>
using namespace std;
float median(queue <int> q) {
    float Sum = 0;
    int size = q.size();
    int j = 0;
    if(size%2==0) {
        while(j<((size/2)-1)) {
        q.pop();
        j++;
        }
        float x = q.front();
        q.pop();
        float y = q.front();
        return (x+y)/2;
    }
    while(j<((size/2))) {
        q.pop();
        j++;
    }
    return q.front();
}
int main() {
    int array[] = {1,2,3,4,5,6,7};
    int n = sizeof(array)/sizeof(array[0]);
    queue <int> q;
    for(int i=0; i<n; i++) {
        q.push(array[i]);
    }
    cout<<median(q);
    return 0;
}*/
// Write a C++ program to find the maximum element of a queue:
/*#include <iostream>
#include <queue>
using namespace std;
int maximum(queue <int> q) {
    int max = -1000000000;
    while(not q.empty()) {
    if(max<q.front() ) {
        max = q.front();
    }
    q.pop();
    }
    return max;
}
int main() {
    int array[] = {0, 1, 2, 3, 5, 6, -1, 4};
    int n = sizeof(array)/sizeof(array[0]);
    queue <int> q;
    for(int i=0; i<n; i++) {
        q.push(array[i]);
    }
    cout<<maximum(q);
    return 0;
}*/
// Write a C++ program to find the second lowest element of a queue:
/*#include <iostream>
#include <queue>
using namespace std;
int second_minimum(queue <int> q) {
    int min = 1000000000;
    int second_minimum = 1000000000;
    while(not q.empty()) {
    if(min>q.front() ) {
        second_minimum = min;
        min = q.front();
    }
    else if(second_minimum>q.front()) {
        second_minimum = q.front();
    }
    q.pop();
    }
    return second_minimum;
}
int main() {
    int array[] = {0, 1, 2, 3, 5, 6, -1, 4};
    int n = sizeof(array)/sizeof(array[0]);
    queue <int> q;
    for(int i=0; i<n; i++) {
        q.push(array[i]);
    }
    cout<<second_minimum(q);
    return 0;
}*/
// Write a C++ program to remove all odd elements from a queue:
/*#include <iostream>
#include <queue>
using namespace std;
void remove_odd(queue <int> &q) {
    queue <int> q1;
    while(not q.empty()) {
        if(q.front()%2==1) {
            q1.push(q.front());
        }
        q.pop();
    }
    q = q1;
    return;
}
int main() {
    int array[] = {0, 1, 2, 3, 5, 6, 4};
    int n = sizeof(array)/sizeof(array[0]);
    queue <int> q;
    for(int i=0; i<n; i++) {
        q.push(array[i]);
    }
    remove_odd(q);
    while(not q.empty()) {
        cout<<q.front()<<" ";
        q.pop();
    }cout<<endl;
    return 0;
}*/
// Write a C++ program to remove all duplicate elements from a queue:
/*#include <iostream>
#include <queue>
using namespace std;
void remove_duplicate(queue <int> &q) {
    queue <int> q1;
    q1.push(q.front());
    q.pop();
    int x = q1.front();
    while(not q.empty()) {
        queue <int> q2;
        while(not q.empty()) {
        if(x!=q.front()) {
            q2.push(q.front());
        }
        q.pop();
        }
        if(not q2.empty()) {
        q = q2;
        q1.push(q.front());
        x = q.front();
        q.pop();
        }
    }
    q = q1;
    return;
}
int main() {
    // int array[] = {1,2,2,3,3,3,4,4,4,4,5,5,5,5,5};
    int array[] = {1, 2, 3, 5, 5, 6, 1 };
    int n = sizeof(array)/sizeof(array[0]);
    queue <int> q;
    for(int i=0; i<n; i++) {
        q.push(array[i]);
    }
    remove_duplicate(q);
    while(not q.empty()) {
        cout<<q.front()<<" ";
        q.pop();
    }cout<<endl;
    return 0;
}*/
//Write a C++ program to remove all elements greater than a number from a queue:
/*#include <iostream>
#include <queue>
using namespace std;
void remove_greater(queue <int> &q, int x) {
    queue <int> q1;
    while(not q.empty()) {
    if(q.front()<=x) {
    q1.push(q.front());
    }
    q.pop();
    }
    q = q1;
    return;
}
int main() {
    int array[] = {1, 2, 3, 5, 5, 6 };
    int n = sizeof(array)/sizeof(array[0]);
    queue <int> q;
    for(int i=0; i<n; i++) {
        q.push(array[i]);
    }
    int x = 5;
    remove_greater(q,x);
    while(not q.empty()) {
        cout<<q.front()<<" ";
        q.pop();
    }cout<<endl;
    return 0;
}
*/
// Write a C++ program to get the Nth element from the top of a queue:
/*#include <iostream>
#include <queue>
using namespace std;
int NthElementFromTop(queue <int> q, int x) {
    queue <int> q1;
    int i=0;
    int size = q.size();
    while(i<(size-x)) {
    q.pop();
    i++;
    }
    return q.front();
}
int main() {
    int array[] = {1, 2, 3, 5, 5, 6 };
    int n = sizeof(array)/sizeof(array[0]);
    queue <int> q;
    for(int i=0; i<n; i++) {
        q.push(array[i]);
    }
    int x = 5;
    cout<<NthElementFromTop(q,x)<<endl;
    return 0;
}*/
//Write a C++ program to find the intersection of two queues:
/*#include <iostream>
#include <queue>
using namespace std;
void IntersectionOfQueues(queue <int> q1, queue <int> q2, queue <int> q3) {
    queue <int> q;
    while(!q1.empty()) {
        queue <int> q_2 = q2;
        while(!q_2.empty()){
        if(q1.front()==q_2.front()) {
            q.push(q1.front());
        }
        q_2.pop();
        }
        q1.pop();
    }
    while(!q.empty()) {
        queue <int> q_3 = q3;
        while(!q_3.empty()){
        if(q.front()==q_3.front()) {
            q1.push(q.front());
        }
        q_3.pop();
        }
        q.pop();
    }
    while(not q1.empty()) {
        cout<<q1.front()<<" ";
        q1.pop();
    }cout<<endl;
    return;
}
int main() {
    int array_1[] = {1, 2, 3 };
    int array_2[] = {1, 2, 4 };
    int array_3[] = {3, 2, 1 };
    int n1 = sizeof(array_1)/sizeof(array_1[0]);
    int n2 = sizeof(array_2)/sizeof(array_2[0]);
    int n3 = sizeof(array_3)/sizeof(array_3[0]);
    queue <int> q1;
    for(int i=0; i<n1; i++) {
        q1.push(array_1[i]);
    }
    queue <int> q2;
    for(int i=0; i<n2; i++) {
        q2.push(array_2[i]);
    }
    queue <int> q3;
    for(int i=0; i<n3; i++) {
        q3.push(array_3[i]);
    }
    IntersectionOfQueues(q1,q2,q3);
    return 0;
}*/
//Write a C++ program to find the union of two queues:
/*#include <iostream>
#include <queue>
using namespace std;
void UnionOfQueues(queue <int> q1, queue <int> q2) {
    queue <int> q;
    queue <int> q_1 = q1;
    while(!q_1.empty()) {
        queue <int> q_2 = q2;
        while(!q_2.empty()){
        if(q_1.front()==q_2.front()) {
            q.push(q_1.front());
        }
        q_2.pop();
        }
        q_1.pop();
    }
    while(!q2.empty()) {
        q1.push(q2.front());
        q2.pop();
    }
    while(!q.empty()) {
        q_1 = q1;
        queue <int> q1_new;
        while(!q_1.empty()) {
            if(q.front()==q_1.front()){
                q_1.pop();
                break;
            }
            else {
                q1_new.push(q_1.front());
                q_1.pop();
            }
        }
        while(!q_1.empty()) {
             q1_new.push(q_1.front());
             q_1.pop();
        }
        q1 = q1_new;
        q.pop();
    }
    while(not q1.empty()) {
        cout<<q1.front()<<" ";
        q1.pop();
    }cout<<endl;
    return;
}
int main() {
    int array_1[] = {1,2,8,5,6,3,9};
    int array_2[] = {1,3,7,2,6,10,4};
    // int array_3[] = {3, 2, 1 };
    int n1 = sizeof(array_1)/sizeof(array_1[0]);
    int n2 = sizeof(array_2)/sizeof(array_2[0]);
    // int n3 = sizeof(array_3)/sizeof(array_3[0]);
    queue <int> q1;
    for(int i=0; i<n1; i++) {
        q1.push(array_1[i]);
    }
    queue <int> q2;
    for(int i=0; i<n2; i++) {
        q2.push(array_2[i]);
    }
    // queue <int> q3;
    // for(int i=0; i<n3; i++) {
    //     q3.push(array_3[i]);
    // }
    UnionOfQueues(q1,q2);
    return 0;
}*/
// Finding first non-repeating character:
/*#include <iostream>
#include <queue>
using namespace std;
char firstNonRepeatingChar(string s) {
    queue <char> q;
    string ans = "";
    for(int i=0; i<s.length(); i++) {
        q.push(s[i]);
    }
    while(!q.empty()) {
        int result = 0;
        for(int j=0; j<s.length(); j++) {
         if(s[j]==q.front()) {
             result++;
         }
        }
        if(result==1) {
            ans += q.front();
        }
        q.pop();
    }
    cout<<ans<<endl;
    if(ans.size()!=0) {
        return ans[0];
    }
    return 'O';
}
int main() {
    string s = "GeeksForGeeks";
    cout<<firstNonRepeatingChar(s)<<endl;
    return 0;
}*/

// Implementation_of_circular_queue_using_circular_linked_list:
/*#include<iostream>
#include<bits/stdc++.h>
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
class circularQueue {
    public:
    Node* head;
    Node* tail;
    int capacity;
    int size;
    circularQueue(int n) {
        head = NULL;
        tail = NULL;
        capacity = n;
        size = 0;
    }
    void enqueue(int value) {
        if(size==capacity) {
            cout<<-1<<endl;
            return;
        }
        Node* new_node = new Node(value);
        if(head==NULL) {
            head = new_node;
            tail = head;
            size++;
            return;
        }
        else {
           tail->next = new_node;
           tail = new_node;
           new_node->next = head;
           size++;
        }
        return;
    }
    void dequeue() {
        if(head==tail or size==0) {
            cout<<-1<<endl;
            return;
        }
        else {
        Node* temp = head;
        head = head->next;
        tail->next = head;
        size--;
        free(temp);
        }
        return;
    }
    void front() {
        if(head==tail) {
            cout<<-1;
            return;
        }
        else {
        cout<<head->val<<endl;
        }
        return;
    }
    void back() {
        if(head==tail) {
            cout<<-1;
            return;
        }
        else {
        cout<<tail->val<<endl;
        }
        return;
    }
    void getSize() {
        cout<<size<<endl;
        return;
    }
    void isEmpty() {
    if(size==0) {
        cout<<1<<endl;
    }else {
        cout<<0<<endl;
    }
    return;
    }
    void displayQueue() {
        Node* temp = head;
        do {
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        while(temp!=head);
        cout<<endl;
        return;
    }
};
int main() {
    circularQueue q(5);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.displayQueue();
    q.dequeue();
    q.displayQueue();
    q.front();
    q.back();
    q.enqueue(5);
    q.displayQueue();
    q.getSize();
    q.enqueue(1);
    q.displayQueue();
    q.enqueue(6);
    q.dequeue();
    q.displayQueue();
    q.getSize();
    q.enqueue(6);
    q.back();
    return 0;
}

*/

//  Implement a stack and a queue using a deque.
// 1) stact using a deque:
/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Stack {
    public:
    deque <int> q;
    void push(int value) {
        q.push_back(value);
        return;
    }
    void pop() {
        if(q.size()==0) {
        cout<<-1<<endl;
        return;
        }
        q.pop_back();
        return;
    }
    void displayStack() {
        if(q.size()==0) {
            cout<<-1<<endl;
            return;
        }else {
        for (int i: q) {
            cout<<i<<" ";
        }cout<<endl;
        }
        return;
    }
    void getSize() {
        cout<<q.size()<<endl;
        return ;
    }
    void top() {
    if(q.size()==0) {
        cout<<-1<<endl;
    }else {
        cout<<q.back()<<endl;
        return ;
    }
    }
};
int main() {
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.displayStack();
    st.top();
    st.getSize();
    st.pop();
    st.getSize();
    st.displayStack();
    return 0;
}*/

// 2) queue using a deque;
/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Queue {
    public:
    deque <int> q;
    void push(int value) {
        q.push_back(value);
        return;
    }
    void pop() {
        if(q.size()==0) {
        cout<<-1<<endl;
        return;
        }
        q.pop_front();
        return;
    }
    void displayQueue() {
        if(q.size()==0) {
            cout<<-1<<endl;
            return;
        }else {
        for (int i: q) {
            cout<<i<<" ";
        }cout<<endl;
        }
        return;
    }
    void getSize() {
        cout<<q.size()<<endl;
        return ;
    }
    void back() {
        if(q.size()==0) {
        cout<<-1<<endl;
        return;
        }
        cout<<q.back()<<endl;
        return ;
    }
    void front() {
        if(q.size()==0) {
        cout<<-1<<endl;
        return;
        }
        cout<<q.front()<<endl;
        return ;
    }
};
int main() {
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.displayQueue();
    q.back();
    q.getSize();
    q.front();
    q.pop();
    q.front();
    return 0;
}*/












