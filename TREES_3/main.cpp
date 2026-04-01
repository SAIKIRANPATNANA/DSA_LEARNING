//Generic Tress:
//preorder traversal:
/*#include <iostream>
#include <vector>
using namespace std;
class Node {
    public:
    char data;
    vector <Node*> children;
    Node(char data) {
        this->data = data;
    }
};
void preOrderTraversal(Node* root_node){
   if (root_node->children.size()==0) {
       cout<<root_node->data<<" ";
       return;
   } else {
       cout<<root_node->data<<" ";
       for(int i=0; i<root_node->children.size();i++) {
           preOrderTraversal(root_node->children[i]);
       }
   }return;
    
}
int main() {
    Node* root_node = new Node('A');
    root_node->children.push_back(new Node('B'));
    root_node->children.push_back(new Node('C'));
    root_node->children.push_back(new Node('D'));
    root_node->children[0]->children.push_back(new Node('E'));
    root_node->children[0]->children.push_back(new Node('F'));
    root_node->children[2]->children.push_back(new Node('G'));
   // cout<<root_node->data;
    preOrderTraversal(root_node);
    return 0;
}*/

//inorder traversal:
/*#include <iostream>
#include <vector>
using namespace std;
class Node {
    public:
    char data;
    vector <Node*> children;
    Node(char data) {
        this->data = data;
    }
};
void inOrderTraversal(Node* root_node){
   if (root_node->children.size()==0) {
       cout<<root_node->data<<" ";
       return;
   } else {
       for(int i=0; i<root_node->children.size()-1;i++) {
           inOrderTraversal(root_node->children[i]);
       }cout<<root_node->data<<" ";
       inOrderTraversal(root_node->children[root_node->children.size()-1]);
   }return;
    
}
int main() {
    Node* root_node = new Node('A');
    root_node->children.push_back(new Node('B'));
    root_node->children.push_back(new Node('C'));
    root_node->children.push_back(new Node('D'));
    root_node->children[0]->children.push_back(new Node('E'));
    root_node->children[0]->children.push_back(new Node('F'));
    root_node->children[2]->children.push_back(new Node('G'));
   // cout<<root_node->data;
    inOrderTraversal(root_node);
    return 0;
}*/
//postorder traversal:
/*#include <iostream>
#include <vector>
using namespace std;
class Node {
    public:
    char data;
    vector <Node*> children;
    Node(char data) {
        this->data = data;
    }
};
void postOrderTraversal(Node* root_node){
   if (root_node->children.size()==0) {
       cout<<root_node->data<<" ";
       return;
   } else {
       for(int i=0; i<root_node->children.size()-1;i++) {
           postOrderTraversal(root_node->children[i]);
       }postOrderTraversal(root_node->children[root_node->children.size()-1]);
       cout<<root_node->data<<" ";
   }return;
}
int main() {
    Node* root_node = new Node('A');
    root_node->children.push_back(new Node('B'));
    root_node->children.push_back(new Node('C'));
    root_node->children.push_back(new Node('D'));
    root_node->children[0]->children.push_back(new Node('E'));
    root_node->children[0]->children.push_back(new Node('F'));
    root_node->children[2]->children.push_back(new Node('G'));
   // cout<<root_node->data;
    postOrderTraversal(root_node);
    return 0;
}*/
//levelOrderTraversal:
/*#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class Node {
    public:
    char data;
    vector <Node*> children;
    Node(char data) {
        this->data = data;
    }
};
void levelOrderTraversal(Node* root_node){
   queue <Node*> q;
   q.push(root_node);
   while(!q.empty()){
   int currentSize = q.size();
   while(currentSize){
       cout<<q.front()->data<<" ";
       if(q.front()->children.size()){
           for(int i=0; i<q.front()->children.size();i++){
               q.push(q.front()->children[i]);
           }
       }currentSize--;
       q.pop();
   }
   cout<<endl;
   }
   return;
}
int main() {
    Node* root_node = new Node('A');
    root_node->children.push_back(new Node('B'));
    root_node->children.push_back(new Node('C'));
    root_node->children.push_back(new Node('D'));
    root_node->children[0]->children.push_back(new Node('E'));
    root_node->children[0]->children.push_back(new Node('F'));
    root_node->children[2]->children.push_back(new Node('G'));
   // cout<<root_node->data;
    levelOrderTraversal(root_node);
    return 0;
}*/
//Q) Given a generic tree and x=10 and find & return the the just greater than value of x.
/*#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class Node {
    public:
    int data;
    vector <Node*> children;
    Node(int data) {
        this->data = data;
    }
};
int levelOrderTraversal(Node* root_node, int x){
   queue <Node*> q;
   q.push(root_node);
   int ans = 1000000;
   while(!q.empty()){
   int currentSize = q.size();
   while(currentSize){
       if(q.front()->data>x and q.front()->data<ans) {
           ans = q.front()->data;
       }if(q.front()->children.size()){
           for(int i=0; i<q.front()->children.size();i++){
               q.push(q.front()->children[i]);
           }
       }currentSize--;
       q.pop();
   }
   }
   return ans;
}
int main() {
    Node* root_node = new Node(20);
    root_node->children.push_back(new Node(8));
    root_node->children.push_back(new Node(22));
    root_node->children[0]->children.push_back(new Node(4));
    root_node->children[0]->children.push_back(new Node(12));
    root_node->children[0]->children[1]->children.push_back(new Node(10));
    root_node->children[0]->children[1]->children.push_back(new Node(14));
    cout<<levelOrderTraversal(root_node,14);
    return 0;
}*/
//Above_query_aliter:
/*#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class Node {
    public:
    int data;
    vector <Node*> children;
    Node(int data) {
        this->data = data;
    }
};
void just_greater_value(Node* root_node, int x, Node* &ans){
    if(root_node==NULL) {
        return;
    }else{
        if((root_node->data>x) and (ans==NULL or root_node->data<ans->data)) {
            ans = root_node;
        }for(int i=0; i<root_node->children.size(); i++){
        just_greater_value(root_node->children[i],x,ans);}
    }return;
}
int main() {
    Node* root_node = new Node(20);
    root_node->children.push_back(new Node(8));
    root_node->children.push_back(new Node(22));
    root_node->children[0]->children.push_back(new Node(4));
    root_node->children[0]->children.push_back(new Node(12));
    root_node->children[0]->children[1]->children.push_back(new Node(10));
    root_node->children[0]->children[1]->children.push_back(new Node(14));
    Node* ans = NULL;
    int x = 100;
    just_greater_value(root_node,x,ans); 
    if (ans==NULL) {
        cout<<"NULL";
    }else{
        cout<<ans->data;
    }
    return 0;
}*/
//printing a mirror image of a generic tree:
/*#include <iostream>
#include <vector>
#include <queue>
#include <stack>
using namespace std;
class Node {
    public:
    int data;
    vector <Node*> children;
    Node(int data) {
        this->data = data;
    }
};
void levelOrderTraversal(Node* root_node){
   queue <Node*> q;
   q.push(root_node);
   while(!q.empty()){
   int currentSize = q.size();
   while(currentSize){
       cout<<q.front()->data<<" ";
       if(q.front()->children.size()){
           for(int i=0; i<q.front()->children.size();i++){
               q.push(q.front()->children[i]);
           }
       }currentSize--;
       q.pop();
   }
   cout<<endl;
   }
   return;
}
void get_mirror_image(Node* &root_node){
    if(root_node==NULL) {
        return;
    }else{
        if(root_node->children.size()==0) {
            return;
        }else{
            stack <Node*> st;
            int n = root_node->children.size();
            for(int i=0;i<n;i++){
                get_mirror_image(root_node->children[i]);
                st.push(root_node->children[i]);
                root_node->children.pop_back();
            }while(!st.empty()) {
                root_node->children.push_back(st.top());
                st.pop();
            }
        }
    }return;
}
int main() {
    Node* root_node = new Node(20);
    root_node->children.push_back(new Node(8));
    root_node->children.push_back(new Node(22));
    root_node->children[0]->children.push_back(new Node(4));
    root_node->children[0]->children.push_back(new Node(12));
    root_node->children[0]->children[1]->children.push_back(new Node(10));
    root_node->children[0]->children[1]->children.push_back(new Node(14));
    levelOrderTraversal(root_node);
    get_mirror_image(root_node);
    cout<<endl;
    levelOrderTraversal(root_node);
    return 0;
    //tc: O(n);
    //sc: O(h);
}*/
// above_query_aliter:
/*#include <iostream>
#include <vector>
#include <queue>
#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    int data;
    vector <Node*> children;
    Node(int data) {
        this->data = data;
    }
};
void levelOrderTraversal(Node* root_node){
   queue <Node*> q;
   q.push(root_node);
   while(!q.empty()){
   int currentSize = q.size();
   while(currentSize){
       cout<<q.front()->data<<" ";
       if(q.front()->children.size()){
           for(int i=0; i<q.front()->children.size();i++){
               q.push(q.front()->children[i]);
           }
       }currentSize--;
       q.pop();
   }
   cout<<endl;
   }
   return;
}
void get_mirror_image(Node* &root_node){
    if(root_node==NULL) {
        return;
    }else{
        if(root_node->children.size()<2) {
            return;
        }else{
            reverse(root_node->children.begin(),root_node->children.end());
            for(int i=0;i<root_node->children.size();i++){
                get_mirror_image(root_node->children[i]);
            }
        }
    }return;
}
int main() {
    Node* root_node = new Node(20);
    root_node->children.push_back(new Node(8));
    root_node->children.push_back(new Node(22));
    root_node->children[0]->children.push_back(new Node(4));
    root_node->children[0]->children.push_back(new Node(12));
    root_node->children[0]->children[1]->children.push_back(new Node(10));
    root_node->children[0]->children[1]->children.push_back(new Node(14));
    levelOrderTraversal(root_node);
    get_mirror_image(root_node);
    cout<<endl;
    levelOrderTraversal(root_node);
    return 0;
    //tc: O(n);
    //sc: O(h)+O(m) whre h is height of the generic tree and m is max no. of nodes at each level;
}*/
//Q)serializing a generic tree:
/*#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class Node {
    public:
    char data;
    vector <Node*> children;
    Node(char data) {
        this->data = data;
    }
};
void levelOrderTraversal(Node* root_node){
   queue <Node*> q;
   q.push(root_node);
   while(!q.empty()){
   int currentSize = q.size();
   while(currentSize){
       cout<<q.front()->data<<" ";
       if(q.front()->children.size()){
           for(int i=0; i<q.front()->children.size();i++){
               q.push(q.front()->children[i]);
           }
       }currentSize--;
       q.pop();
   }
   cout<<endl;
   }
   return;
}
string get_serial_tree(Node* root_node) {
       string serial_tree  = root_node->data+":"+to_string(root_node->children.size());
       for(int i=0; i<root_node->children.size();i++) {
           serial_tree += root_node->children[i]->data+",";
       }serial_tree.pop_back();
       return serial_tree;
}
void serializingGenTree(Node* root_node) {
    queue <Node*> q;
    q.push(root_node);
    while(!q.empty()) {
        cout<<get_serial_tree(root_node)<<endl;
        for(int i=0;i<root_node->children.size();i++) {
            q.push(root_node->children[i]);
        }q.pop();
    }return;
}
int main() {
    Node* root_node = new Node('A');
    root_node->children.push_back(new Node('B'));
    root_node->children.push_back(new Node('C'));
    root_node->children.push_back(new Node('D'));
    root_node->children[0]->children.push_back(new Node('E'));
    root_node->children[0]->children.push_back(new Node('F'));
    root_node->children[2]->children.push_back(new Node('G'));
    levelOrderTraversal(root_node);
    cout<<endl;
    serializingGenTree(root_node);
    return 0;
}*/



/*void zigzagTraversal(Node* root) {
    if (!root) return;

    stack<Node*> currentLevel;
    stack<Node*> nextLevel;
    currentLevel.push(root);
    bool leftToRight = true;

    while (!currentLevel.empty()) {
        Node* curr = currentLevel.top();
        currentLevel.pop();

        if (curr) {
            cout << curr->data << " ";

            if (leftToRight) {
                for (auto child : curr->children) {
                    nextLevel.push(child);
                }
            } else {
                for (int i = curr->children.size() - 1; i >= 0; i--) {
                    nextLevel.push(curr->children[i]);
                }
            }
        }

        if (currentLevel.empty()) {
            leftToRight = !leftToRight;
            swap(currentLevel, nextLevel);
        }
    }
}*/
//HEAP TREES:
//insertion of element in min map:
/*#include <iostream>
using namespace std;
int const maxSize = 1e3;
void insertInMinMap(int minMap[],int &size,int element) {
    size++;
    int temp = size;
    minMap[size] = element;
    while((temp/2)>0 and element<minMap[temp/2]){
        swap(minMap[temp],minMap[temp/2]);
        temp /= 2;
    }return;
}
int main() {
    int minMap[maxSize] = {-1,10,20,30,40,50};
    int size = 5;
    insertInMinMap(minMap,size,5);
    for(int i=0;i<=size;i++) {
        cout<<minMap[i]<<" ";
    }return 0;
}*/

//insertion of element in max map:
/*#include <iostream>
using namespace std;
int const maxSize = 1e3;
void insertInMaxMap(int maxMap[],int &size,int element) {
    size++;
    int temp = size;
    maxMap[size] = element;
    while((temp/2)>0 and element>maxMap[temp/2]){
        swap(maxMap[temp],maxMap[temp/2]);
        temp /= 2;
    }return;
}
int main() {
    int maxMap[maxSize] = {-1,60,50,40,30,20,10,5};
    int size = 5;
    insertInMaxMap(maxMap,size,100);
    for(int i=0;i<=size;i++) {
        cout<<maxMap[i]<<" ";
    }return 0;
}*/

//deletion of element in minMap:
/*#include <iostream>
using namespace std;
int const maxSize = 1e3;
void deleteInMinMap(int minMap[],int &size) {
    int temp = size-1;
    minMap[1] = minMap[size];
    size--;
    {
        swap(minMap[temp],minMap[temp*2]);
        temp *= 2;
    }return;
}
int main() {
    int minMap[maxSize] = {-1,10,20,30,40,50};
    int size = 5;
    deleteInMinMap(minMap,size);
    for(int i=0;i<=size;i++) {
        cout<<minMap[i]<<" ";
    }return 0;
}*/

//Zig Zag Traversal through a binary tree?
/*#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class Node {
    public:
    char data;
    vector <Node*> children;
    Node(char data) {
        this->data = data;
    }
};
void levelOrderTraversal(Node* root_node){
   queue <Node*> q;
   q.push(root_node);
   while(!q.empty()){
   int currentSize = q.size();
   while(currentSize){
       cout<<q.front()->data<<" ";
       if(q.front()->children.size()){
           for(int i=0; i<q.front()->children.size();i++){
               q.push(q.front()->children[i]);
           }
       }currentSize--;
       q.pop();
   }
   cout<<endl;
   }
   return;
}
void zigzagTraversal(Node* root_node) {
    if(!root_node) {
        return;
    }else{
        int level = 0;
        queue <Node*> q1;
        queue <Node*> q2;
        q1.push(root_node);
        while(!q1.empty() or !q2.empty()) {
            if(level%2==0){
                if(!level){
                        cout<<q1.front()->data<<endl;
                        for(int i=0;i<q1.front()->children.size();i++) {
                        q1.push(q1.front()->children[i]);
                        }q1.pop();
                }else{
                    while(!q1.empty()) {
                        cout<<q1.front()->data<<" ";
                        q1.pop();
                    }cout<<endl;
                    while(!q2.empty()) {
                        q1.push(q2.front());
                        q2.pop();
                    }int n = q1.size();
                    while(n) {
                        for(int i=0;i<q1.front()->children.size();i++) {
                        q1.push(q1.front()->children[i]);
                    }q1.pop();
                    n--;}
                }
                level++; 
            }else{
                int n=q1.size();
                while(n){
                    cout<<q1.front()->data<<" ";
                    for(int i=q1.front()->children.size()-1; i>=0; i--){
                        q1.push(q1.front()->children[i]);
                    }for(int i=0; i<q1.front()->children.size(); i++){
                        q2.push(q1.front()->children[i]);
                    }q1.pop();
                    n--;
                }cout<<endl;
                level++;
            }
        } 
    }return;
}
int main() {
    Node* root_node = new Node('A');
    root_node->children.push_back(new Node('B'));
    root_node->children.push_back(new Node('C'));
    root_node->children.push_back(new Node('D'));
    root_node->children[0]->children.push_back(new Node('E'));
    root_node->children[0]->children.push_back(new Node('F'));
    root_node->children[0]->children.push_back(new Node('G'));
    root_node->children[0]->children[0]->children.push_back(new Node('N'));
    root_node->children[0]->children[0]->children.push_back(new Node('O'));
    root_node->children[1]->children.push_back(new Node('H'));
    root_node->children[1]->children.push_back(new Node('I'));
    root_node->children[0]->children[2]->children.push_back(new Node('K'));
    root_node->children[0]->children[2]->children.push_back(new Node('L'));
    root_node->children[0]->children[2]->children.push_back(new Node('M'));
    levelOrderTraversal(root_node);
    cout<<endl;
    zigzagTraversal(root_node);
    return 0;
}*/
//deletion of element in minMap:
/*#include <iostream>
using namespace std;
int const maxSize = 1e3;
void deleteInMinHeap(int minHeap[],int &size) {
    int temp = 1;
    minHeap[1] = minHeap[size];
    size--;
    while(((temp*2+1)<=size or (temp*2<=size)) and ((minHeap[temp]>minHeap[2*temp] or minHeap[temp]>minHeap[2*temp+1]))){
        if(minHeap[temp*2]>minHeap[temp*2+1] and minHeap[temp]>minHeap[2*temp+1]) {
            swap(minHeap[temp],minHeap[temp*2+1]);
            temp = temp*2+1;
        }else if(minHeap[temp*2+1]>minHeap[temp*2] and minHeap[temp]>minHeap[2*temp]) {
            swap(minHeap[temp],minHeap[temp*2]);
            temp = temp*2;
        }
    }return;
}
int main() {
    int minHeap[maxSize] = {-1,10,20,30,40,50};
    int size = 5;
    deleteInMinHeap(minHeap,size);
    for(int i=1;i<=size;i++) {
        cout<<minHeap[i]<<" ";
    }return 0;
}*/
//deletion of element in maxMap:
/*#include <iostream>
using namespace std;
int const maxSize = 1e3;
void deleteInMaxHeap(int maxHeap[],int &size) {
    int temp = 1;
    maxHeap[1] = maxHeap[size];
    size--;
    while(((temp*2+1)<=size or (temp*2<=size)) and ((maxHeap[temp]<maxHeap[2*temp] or maxHeap[temp]<maxHeap[2*temp+1]))){
        if(maxHeap[temp*2]<maxHeap[temp*2+1] and maxHeap[temp]<maxHeap[2*temp+1]) {
            swap(maxHeap[temp],maxHeap[temp*2+1]);
            temp = temp*2+1;
        }else if(maxHeap[temp*2+1]<maxHeap[temp*2] and maxHeap[temp]<maxHeap[2*temp]) {
            swap(maxHeap[temp],maxHeap[temp*2]);
            temp = temp*2;
        }
    }return;
}
int main() {
    int maxHeap[maxSize] = {-1,50,40,30,20,10};
    int size = 5;
    deleteInMaxHeap(maxHeap,size);
    for(int i=1;i<=size;i++) {
        cout<<maxHeap[i]<<" ";
    }return 0;
}*/
/*#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class Node {
    public:
    int data;
    vector <Node*> children;
    Node(int data) {
        this->data = data;
    }
};
void levelOrderTraversal(Node* root_node){
   queue <Node*> q;
   q.push(root_node);
   while(!q.empty()){
   int currentSize = q.size();
   while(currentSize){
       cout<<q.front()->data<<" ";
       if(q.front()->children.size()){
           for(int i=0; i<q.front()->children.size();i++){
               q.push(q.front()->children[i]);
           }
       }currentSize--;
       q.pop();
   }
   cout<<endl;
   }
   return;
}
void zigzagTraversal(Node* root_node) {
    if(!root_node) {
        return;
    }else{
        int level = 0;
        queue <Node*> q1;
        queue <Node*> q2;
        q1.push(root_node);
        while(!q1.empty() or !q2.empty()) {
            if(level%2==0){
                if(!level){
                        cout<<q1.front()->data<<endl;
                        for(int i=0;i<q1.front()->children.size();i++) {
                        q1.push(q1.front()->children[i]);
                        }q1.pop();
                }else{
                    while(!q1.empty()) {
                        cout<<q1.front()->data<<" ";
                        q1.pop();
                    }cout<<endl;
                    while(!q2.empty()) {
                        q1.push(q2.front());
                        q2.pop();
                    }int n = q1.size();
                    while(n) {
                        for(int i=0;i<q1.front()->children.size();i++) {
                        q1.push(q1.front()->children[i]);
                    }q1.pop();
                    n--;}
                }
                level++; 
            }else{
                int n=q1.size();
                while(n){
                    cout<<q1.front()->data<<" ";
                    for(int i=q1.front()->children.size()-1; i>=0; i--){
                        q1.push(q1.front()->children[i]);
                    }for(int i=0; i<q1.front()->children.size(); i++){
                        q2.push(q1.front()->children[i]);
                    }q1.pop();
                    n--;
                }cout<<endl;
                level++;
            }
        } 
    }return;
}
int main() {
    Node* root_node = new Node(30);
    root_node->children.push_back(new Node(5));
    root_node->children.push_back(new Node(11));
    root_node->children.push_back(new Node(63));
    root_node->children[0]->children.push_back(new Node(1));
    root_node->children[0]->children.push_back(new Node(4));
    root_node->children[0]->children.push_back(new Node(8));
    root_node->children[1]->children.push_back(new Node(6));
    root_node->children[1]->children.push_back(new Node(7));
    root_node->children[1]->children.push_back(new Node(15));
    root_node->children[2]->children.push_back(new Node(31));
    root_node->children[2]->children.push_back(new Node(55));
    root_node->children[2]->children.push_back(new Node(65));
    levelOrderTraversal(root_node);
    cout<<endl;
    zigzagTraversal(root_node);
    return 0;
}*/
//heapifying concept:
//arranging the nodes in correct order so that they follow the properties of min heap or max heap:
//incomplete code:
/*#include <iostream>
using namespace std;
int const maxSize = 1e3;
void heapify(int minHeap[],int size) {
    int temp = size/2;
    while(temp>=1){
        if(minHeap[temp]>minHeap[temp*2]){
            if(minHeap[temp*2]<minHeap[temp*2+1] and temp*2+1>size){
                swap(minHeap[temp*2],minHeap[temp]);
            }temp--;
        }else if(minHeap[temp]>minHeap[temp*2+1] and temp*2+1<=size){
            if(minHeap[temp*2]>minHeap[temp*2+1]){
                swap(minHeap[temp*2+1],minHeap[temp]);
            }temp--;
        }else if(minHeap[temp]>minHeap[temp*2] and minHeap[temp*2]<minHeap[temp*2+1] and temp*2+1<=size){
            swap(minHeap[temp*2],minHeap[temp]);
            temp--;
        }
    }temp+=2;
    while(temp*2+1<=size or temp*2<=size){
        if(minHeap[temp]>minHeap[temp*2] and minHeap[temp*2]<minHeap[temp*2+1]) {
            swap(minHeap[temp],minHeap[temp*2]);
        }else if((minHeap[temp]>minHeap[temp*2+1]) and (minHeap[temp*2]>minHeap[temp*2+1])) {
            swap(minHeap[temp],minHeap[temp*2+1]);
        }temp++;
    }return;
}
int main() {
    int minHeap[] = {-1,60,10,80,50,5,20};
    int size = 6;
    for(int i=1;i<=size;i++){
        cout<<minHeap[i]<<" ";
    }heapify(minHeap,size);
    cout<<endl;
    for(int i=1;i<=size;i++){
        cout<<minHeap[i]<<" ";
    }return 0;
}*/
//heapifying into minHeap:
//Urvi's code:
/*#include <iostream>
using namespace std;
int const maxSize = 1e3;
void heapify(int minHeap[],int size,int temp) {
    while(temp*2<=size){
        int leftChildIdx = temp*2;
        int rightChildIdx = temp*2+1;
        if(rightChildIdx<=size and minHeap[temp]>minHeap[rightChildIdx] and minHeap[rightChildIdx]<minHeap[leftChildIdx]) {
            swap(minHeap[rightChildIdx],minHeap[temp]);
            temp = rightChildIdx;
        }else if(minHeap[temp]>minHeap[leftChildIdx] and rightChildIdx>size){
            swap(minHeap[leftChildIdx],minHeap[temp]);
            temp = leftChildIdx;
        }else if(minHeap[temp]>minHeap[leftChildIdx] and minHeap[leftChildIdx]<minHeap[rightChildIdx]){
            swap(minHeap[leftChildIdx],minHeap[temp]);
            temp = leftChildIdx;
        }else{
            return;
        }
    }return;
}
int main() {
    int minHeap[] = {-1,60,10,80,50,5,20};
    int size = 6;
    for(int i=1;i<=size;i++){
        cout<<minHeap[i]<<" ";
    }cout<<endl;
    for(int i=size/2;i>=1;i--){
        heapify(minHeap,size,i);
    }for(int i=1;i<=size;i++){
        cout<<minHeap[i]<<" ";
    }return 0;
}*/
//heapifying into maxHeap:
//Urvi's code:
/*#include <iostream>
using namespace std;
int const maxSize = 1e3;
void heapify(int maxHeap[],int size,int temp) {
    while(temp*2<=size){
        int leftChildIdx = temp*2;
        int rightChildIdx = temp*2+1;
        if(rightChildIdx<=size and maxHeap[temp]<maxHeap[rightChildIdx] and maxHeap[rightChildIdx]>maxHeap[leftChildIdx]) {
            swap(maxHeap[rightChildIdx],maxHeap[temp]);
            temp = rightChildIdx;
        }else if(maxHeap[temp]<maxHeap[leftChildIdx] and rightChildIdx>size){
            swap(maxHeap[leftChildIdx],maxHeap[temp]);
            temp = leftChildIdx;
        }else if(maxHeap[temp]<maxHeap[leftChildIdx] and maxHeap[leftChildIdx]>maxHeap[rightChildIdx]){
            swap(maxHeap[leftChildIdx],maxHeap[temp]);
            temp = leftChildIdx;
        }else{
            return;
        }
    }return;
}
int main() {
    int maxHeap[] = {-1,60,10,80,50,5,20};
    int size = 6;
    for(int i=1;i<=size;i++){
        cout<<maxHeap[i]<<" ";
    }cout<<endl;
    for(int i=size/2;i>=1;i--){
        heapify(maxHeap,size,i);
    }for(int i=1;i<=size;i++){
        cout<<maxHeap[i]<<" ";
    }return 0;
}
*/
//implementing heapsort algorithm:
/*#include <iostream>
using namespace std;
int const maxSize = 1e3;
void heapify(int maxHeap[],int size,int temp) {
    while(temp*2<=size){
        int leftChildIdx = temp*2;
        int rightChildIdx = temp*2+1;
        if(rightChildIdx<=size and maxHeap[temp]<maxHeap[rightChildIdx] and maxHeap[rightChildIdx]>maxHeap[leftChildIdx]) {
            swap(maxHeap[rightChildIdx],maxHeap[temp]);
            temp = rightChildIdx;
        }else if(maxHeap[temp]<maxHeap[leftChildIdx] and rightChildIdx>size){
            swap(maxHeap[leftChildIdx],maxHeap[temp]);
            temp = leftChildIdx;
        }else if(maxHeap[temp]<maxHeap[leftChildIdx] and maxHeap[leftChildIdx]>maxHeap[rightChildIdx]){
            swap(maxHeap[leftChildIdx],maxHeap[temp]);
            temp = leftChildIdx;
        }else{
            return;
        }
    }return;
}
void heapSort(int maxHeap[], int size){
    while(size){
        for(int i=size/2;i>=1;i--){
        heapify(maxHeap,size,i);
        }swap(maxHeap[1],maxHeap[size]);
        size--;
    }return;
        
}
int main() {
    int maxHeap[] = {-1,60,10,80,50,5,20,70};
    int size = 7;
    for(int i=1;i<=size;i++){
        cout<<maxHeap[i]<<" ";
    }cout<<endl;
    heapSort(maxHeap,size);
    for(int i=1;i<=size;i++){
        cout<<maxHeap[i]<<" ";
    }return 0;
    //tc: O(NlogN);
}*/
//merging two maxheaps into a single maxheap:
/*#include <iostream>
using namespace std;
int const maxSize = 1e3;
void heapify(int maxHeap[],int size,int temp) {
    while(temp*2<=size){
        int leftChildIdx = temp*2;
        int rightChildIdx = temp*2+1;
        if(rightChildIdx<=size and maxHeap[temp]<maxHeap[rightChildIdx] and maxHeap[rightChildIdx]>maxHeap[leftChildIdx]) {
            swap(maxHeap[rightChildIdx],maxHeap[temp]);
            temp = rightChildIdx;
        }else if(maxHeap[temp]<maxHeap[leftChildIdx] and rightChildIdx>size){
            swap(maxHeap[leftChildIdx],maxHeap[temp]);
            temp = leftChildIdx;
        }else if(maxHeap[temp]<maxHeap[leftChildIdx] and maxHeap[leftChildIdx]>maxHeap[rightChildIdx]){
            swap(maxHeap[leftChildIdx],maxHeap[temp]);
            temp = leftChildIdx;
        }else{
            return;
        }
    }return;
}
int* mergeMaxHeaps(int maxHeap1[],int maxHeap2[],int size1,int size2) {
    int size = size1+size2;
    int* maxHeap = new int[maxSize];
    maxHeap[0]=-1;
    int j=1;
    for(int i=1; i<=size1; i++) {
        maxHeap[j] = maxHeap1[i];
        j++;
    }for(int i=1; i<=size2; i++) {
        maxHeap[j] = maxHeap2[i];
        j++;
    }for(int i=1;i<=size;i++){
        cout<<maxHeap[i]<<" ";
    }cout<<endl;
    for(int i=size/2;i>=1;i--){
        heapify(maxHeap,size,i);
    }return maxHeap;
}
int main() {
    int maxHeap1[maxSize] = {-1,10,5,6,2};
    int maxHeap2[maxSize] = {-1,12,7,9};
    int size1 = 4;
    int size2 = 3;
    int size = size1+size2;
    int* maxHeap = mergeMaxHeaps(maxHeap1,maxHeap2,size1,size2);
    for(int i=1;i<=size;i++){
        cout<<maxHeap[i]<<" ";
    }return 0;
}*/
//finding kth smallest element from the given array:
/*#include <iostream>
using namespace std;
int const maxSize = 1e3;
void heapify(int minHeap[],int size,int temp) {
    while(temp*2<=size){
        int leftChildIdx = temp*2;
        int rightChildIdx = temp*2+1;
        if(minHeap[temp]>minHeap[leftChildIdx] and rightChildIdx>size) {
            swap(minHeap[temp],minHeap[leftChildIdx]);
            temp = leftChildIdx;
        }else if(minHeap[temp]>minHeap[rightChildIdx] and minHeap[rightChildIdx]<minHeap[leftChildIdx] and rightChildIdx<=size) {
            swap(minHeap[temp],minHeap[rightChildIdx]);
            temp = rightChildIdx;
        }else if(minHeap[temp]>minHeap[leftChildIdx] and minHeap[rightChildIdx]>minHeap[leftChildIdx]){
            swap(minHeap[temp],minHeap[leftChildIdx]);
            temp = leftChildIdx;
        }else{
            return;
        }
    }return;
}
int get_kth_small_ele(int minHeap[],int size,int k) {
    int j = size;
    while(k){
    for(int i=j/2; i>=1; i--){
        heapify(minHeap,j,i);
    }if(!(k-1)){
        break;
    }swap(minHeap[1],minHeap[j]);
    j--;
    k--;
    }return minHeap[1];
}
int main() {
    int minHeap[maxSize] = {-1,7,3,4,10,20,15};
    int size = 6; 
    int k = 4;
    int kth_small_ele = get_kth_small_ele(minHeap,size,k);
    cout<<kth_small_ele<<endl;
    return 0;
}*/
//reference for above question:
/*#include <iostream>
using namespace std;
int const maxSize = 1e3;
void heapify(int minHeap[],int size,int temp) {
    while(temp*2<=size){
        int leftChildIdx = temp*2;
        int rightChildIdx = temp*2+1;
        if(rightChildIdx<=size and minHeap[temp]>minHeap[rightChildIdx] and minHeap[rightChildIdx]<minHeap[leftChildIdx]) {
            swap(minHeap[rightChildIdx],minHeap[temp]);
            temp = rightChildIdx;
        }else if(minHeap[temp]>minHeap[leftChildIdx] and rightChildIdx>size){
            swap(minHeap[leftChildIdx],minHeap[temp]);
            temp = leftChildIdx;
        }else if(minHeap[temp]>minHeap[leftChildIdx] and minHeap[leftChildIdx]<minHeap[rightChildIdx]){
            swap(minHeap[leftChildIdx],minHeap[temp]);
            temp = leftChildIdx;
        }else{
            return;
        }
    }return;
}
void heapSort(int minHeap[], int size){
    while(size){
        for(int i=size/2;i>=1;i--){
        heapify(minHeap,size,i);
        }swap(minHeap[1],minHeap[size]);
        size--;
    }return;
        
}
int main() {
    int minHeap[] = {-1,60,10,80,50,5,20,70};
    int size = 7;
    for(int i=1;i<=size;i++){
        cout<<minHeap[i]<<" ";
    }cout<<endl;
    heapSort(minHeap,size);
    for(int i=1;i<=size;i++){
        cout<<minHeap[i]<<" ";
    }return 0;
}*/
//finding the sum of the elements in b/w k1th smallest and k2th smallest elements;
/*#include <iostream>
using namespace std;
int const maxSize = 1e3;
void heapify(int minHeap[],int size,int temp) {
    while(temp*2<=size){
        int leftChildIdx = temp*2;
        int rightChildIdx = temp*2+1;
        if(minHeap[temp]>minHeap[leftChildIdx] and rightChildIdx>size) {
            swap(minHeap[temp],minHeap[leftChildIdx]);
            temp = leftChildIdx;
        }else if(minHeap[temp]>minHeap[rightChildIdx] and minHeap[rightChildIdx]<minHeap[leftChildIdx] and rightChildIdx<=size) {
            swap(minHeap[temp],minHeap[rightChildIdx]);
            temp = rightChildIdx;
        }else if(minHeap[temp]>minHeap[leftChildIdx] and minHeap[rightChildIdx]>minHeap[leftChildIdx]){
            swap(minHeap[temp],minHeap[leftChildIdx]);
            temp = leftChildIdx;
        }else{
            return;
        }
    }return;
}
int required_sum(int minHeap[],int size,int k1,int k2) {
    int j = size;
    int k = k2;
    int req_sum = 0;
    int l = 0;
    while(k){
    for(int i=j/2; i>=1; i--){
        heapify(minHeap,j,i);
    }if(l>=k1 and l<=k2-2) {
        req_sum += minHeap[1];
        for(int i=1; i<=size; i++) {
            cout<<minHeap[i]<<" ";
        }cout<<endl;
    }swap(minHeap[1],minHeap[j]);
    j--;
    k--;
    l++;
    }return req_sum;
}
int main() {
    int minHeap[maxSize] = {-1,20,8,22,4,12,10,14};
    int size = 7; 
    int k1 = 5;
    int k2 = 7;
    int req_sum = required_sum(minHeap,size,k1,k2);
    cout<<req_sum<<endl;
    return 0;
}*/
//reference for above question:
/*#include <iostream>
using namespace std;
int const maxSize = 1e3;
void heapify(int minHeap[],int size,int temp) {
    while(temp*2<=size){
        int leftChildIdx = temp*2;
        int rightChildIdx = temp*2+1;
        if(rightChildIdx<=size and minHeap[temp]>minHeap[rightChildIdx] and minHeap[rightChildIdx]<minHeap[leftChildIdx]) {
            swap(minHeap[rightChildIdx],minHeap[temp]);
            temp = rightChildIdx;
        }else if(minHeap[temp]>minHeap[leftChildIdx] and rightChildIdx>size){
            swap(minHeap[leftChildIdx],minHeap[temp]);
            temp = leftChildIdx;
        }else if(minHeap[temp]>minHeap[leftChildIdx] and minHeap[leftChildIdx]<minHeap[rightChildIdx]){
            swap(minHeap[leftChildIdx],minHeap[temp]);
            temp = leftChildIdx;
        }else{
            return;
        }
    }return;
}
void heapSort(int minHeap[], int size){
    while(size){
        for(int i=size/2;i>=1;i--){
        heapify(minHeap,size,i);
        }swap(minHeap[1],minHeap[size]);
        size--;
    }return;
        
}
int main() {
    int minHeap[] = {-1,60,10,80,50,5,20,70};
    int size = 7;
    for(int i=1;i<=size;i++){
        cout<<minHeap[i]<<" ";
    }cout<<endl;
    heapSort(minHeap,size);
    for(int i=1;i<=size;i++){
        cout<<minHeap[i]<<" ";
    }return 0;
}*/
//converting MinHeap into MaxHeap:
/*#include <iostream>
using namespace std;
int const maxSize = 1e3;
void heapify(int minHeap[],int size,int temp) {
    while(temp*2<=size){
        int leftChildIdx = temp*2;
        int rightChildIdx = temp*2+1;
        if(rightChildIdx<=size and minHeap[temp]<minHeap[rightChildIdx] and minHeap[rightChildIdx]>minHeap[leftChildIdx]) {
            swap(minHeap[rightChildIdx],minHeap[temp]);
            temp = rightChildIdx;
        }else if(minHeap[temp]<minHeap[leftChildIdx] and rightChildIdx>size){
            swap(minHeap[leftChildIdx],minHeap[temp]);
            temp = leftChildIdx;
        }else if(minHeap[temp]<minHeap[leftChildIdx] and minHeap[leftChildIdx]>minHeap[rightChildIdx]){
            swap(minHeap[leftChildIdx],minHeap[temp]);
            temp = leftChildIdx;
        }else{
            return;
        }
    }return;
}
void maxHeaping(int minHeap[],int size) {
    for(int i=size/2; i>=1; i--){
        heapify(minHeap,size,i);
    }return;
}
int main() {
    int minHeap[] = {-1,1,3,6,5,9,8};
    int size = 6;
    for(int i=1;i<=size;i++){
        cout<<minHeap[i]<<" ";
    }cout<<endl;
    maxHeaping(minHeap,size);
    for(int i=1;i<=size;i++){
        cout<<minHeap[i]<<" ";
    }return 0;
}*/
//Q2)Given an array of elements, sort the array in decreasing order using min heap?
/*#include <iostream>
using namespace std;
int const maxSize = 1e3;
void heapify(int minHeap[],int size,int temp) {
    while(temp*2<=size){
        int leftChildIdx = temp*2;
        int rightChildIdx = temp*2+1;
        if(rightChildIdx<=size and minHeap[temp]>minHeap[rightChildIdx] and minHeap[rightChildIdx]<minHeap[leftChildIdx]) {
            swap(minHeap[rightChildIdx],minHeap[temp]);
            temp = rightChildIdx;
        }else if(minHeap[temp]>minHeap[leftChildIdx] and rightChildIdx>size){
            swap(minHeap[leftChildIdx],minHeap[temp]);
            temp = leftChildIdx;
        }else if(minHeap[temp]>minHeap[leftChildIdx] and minHeap[leftChildIdx]<minHeap[rightChildIdx]){
            swap(minHeap[leftChildIdx],minHeap[temp]);
            temp = leftChildIdx;
        }else{
            return;
        }
    }return;
}
void heapSort(int minHeap[],int size) {
    while(size){
    for(int i=size/2; i>=1; i--){
        heapify(minHeap,size,i);
    }swap(minHeap[1],minHeap[size]);
    size--;
    }return;
}
int main() {
    int minHeap[] = {-1,5,3,10,1};
    int size = 4;
    for(int i=1;i<=size;i++){
        cout<<minHeap[i]<<" ";
    }cout<<endl;
    heapSort(minHeap,size);
    for(int i=1;i<=size;i++){
        cout<<minHeap[i]<<" ";
    }return 0;
}*/
//Q) Given are N ropes of different lengths, the task is to connect these ropes into one rope with 
//minimum cost, such that the cost to connect two ropes is equal to the sum of their lengths:
/*#include <iostream>
using namespace std;
int const maxSize = 1e3;
void heapify(int minHeap[],int size,int temp) {
    while(temp*2<=size){
        int leftChildIdx = temp*2;
        int rightChildIdx = temp*2+1;
        if(rightChildIdx<=size and minHeap[temp]>minHeap[rightChildIdx] and minHeap[rightChildIdx]<minHeap[leftChildIdx]) {
            swap(minHeap[rightChildIdx],minHeap[temp]);
            temp = rightChildIdx;
        }else if(minHeap[temp]>minHeap[leftChildIdx] and rightChildIdx>size){
            swap(minHeap[leftChildIdx],minHeap[temp]);
            temp = leftChildIdx;
        }else if(minHeap[temp]>minHeap[leftChildIdx] and minHeap[leftChildIdx]<minHeap[rightChildIdx]){
            swap(minHeap[leftChildIdx],minHeap[temp]);
            temp = leftChildIdx;
        }else{
            return;
        }
    }return;
}
void heapSort(int minHeap[],int size) {
    while(size){
    for(int i=size/2; i>=1; i--){
        heapify(minHeap,size,i);
    }swap(minHeap[1],minHeap[size]);
    size--;
    }return;
}
int findMinCost(int minHeap[], int size) {
    int MinCost = 0;
    if(size==1){
        return 0;
    }else{
    while(size>1) {
        heapSort(minHeap,size);
        minHeap[size-1] += minHeap[size];
        size--;
        MinCost += minHeap[size];
    }
    }return MinCost;
}
int main() {
    int minHeap[] = {-1,4,3,2,6};
    int size = 4;
    for(int i=1;i<=size;i++){
        cout<<minHeap[i]<<" ";
    }cout<<endl;
    cout<<findMinCost(minHeap,size);
    return 0;
}*/
//Q) Given the level order traversal of a complete Binary Tree, determine whether the Binary Tree 
//is a Max Heap or not.
//A complete binary tree means that all levels are filled except possibly the last level, and all nodes 
//in the last level are as far left as possible.
/*#include <iostream>
using namespace std;
int const maxSize = 1e3;
void heapify(int maxHeap[],int size,int temp) {
    while(temp*2<=size){
        int leftChildIdx = temp*2;
        int rightChildIdx = temp*2+1;
        if(rightChildIdx<=size and maxHeap[temp]<maxHeap[rightChildIdx] and maxHeap[rightChildIdx]>maxHeap[leftChildIdx]) {
            swap(maxHeap[rightChildIdx],maxHeap[temp]);
            temp = rightChildIdx;
        }else if(maxHeap[temp]<maxHeap[leftChildIdx] and rightChildIdx>size){
            swap(maxHeap[leftChildIdx],maxHeap[temp]);
            temp = leftChildIdx;
        }else if(maxHeap[temp]<maxHeap[leftChildIdx] and maxHeap[leftChildIdx]>maxHeap[rightChildIdx]){
            swap(maxHeap[leftChildIdx],maxHeap[temp]);
            temp = leftChildIdx;
        }else{
            return;
        }
    }return;
}
bool checkBTIsMaxHeap(int maxHeap[], int size){
    int checkBT[size];
    for(int i=0;i<=size;i++) {
        checkBT[i] = maxHeap[i];
    }for(int i=size/2; i>=1; i--){
    heapify(checkBT,size,i);
    }for(int i=1;i<=size;i++){
        cout<<checkBT[i]<<" ";
    }cout<<endl;
    for(int i=1; i<=size; i++) {
        if(checkBT[i]!=maxHeap[i]){
            return false;
        }
    }return true;
}
int main() {
    int maxHeap[] = {-1,90,15,10,7,12,2,7,3};
    int size = 8;
    for(int i=1; i<=size; i++) {
        cout<<maxHeap[i]<<" ";
    }cout<<endl;
    if(checkBTIsMaxHeap(maxHeap,size)){
        cout<<"Given BTree is a MaxHeap"<<endl;
    }else{
        cout<<"Given BTree is not a MaxHeap"<<endl;
    }return 0;
}*/
//Q)Given a binary search tree which is also a complete binary tree& The problem is to convert the 
//given BST into a Min Heap with the condition that all the values in the left subtree of a node 
//should be less than all the values in the right subtree of the node& This condition is applied to all 
//the nodes, in the resultant converted Min Heap.
/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void heapify(vector<int> &minHeap,int size,int temp) {
    while(temp*2<=size){
        int leftChildIdx = temp*2;
        int rightChildIdx = temp*2+1;
        if(rightChildIdx<=size and minHeap[temp]>minHeap[rightChildIdx] and minHeap[rightChildIdx]<minHeap[leftChildIdx]) {
            swap(minHeap[rightChildIdx],minHeap[temp]);
            temp = rightChildIdx;
        }else if(minHeap[temp]>minHeap[leftChildIdx] and rightChildIdx>size){
            swap(minHeap[leftChildIdx],minHeap[temp]);
            temp = leftChildIdx;
        }else if(minHeap[temp]>minHeap[leftChildIdx] and minHeap[leftChildIdx]<minHeap[rightChildIdx]){
            swap(minHeap[leftChildIdx],minHeap[temp]);
            temp = leftChildIdx;
        }else{
            return;
        }
    }return;
}
void minHeapToBSTree(vector <int> &BSTree, int size){
    for(int i=size/2; i>=1; i--){
        heapify(BSTree,size,i);
    }return;
}
void getInorderedTree(vector <int> &BSTree){
    sort(BSTree.begin(),BSTree.end());
    return;
}
int main() {
    vector <int> BSTree = {-1,4,2,6,1,3,5,7};
    int size = 7;
    for(int i=1; i<=size; i++) {
        cout<<BSTree[i]<<" ";
    }cout<<endl;
    getInorderedTree(BSTree);
    minHeapToBSTree(BSTree,size);
    for(int i=1;i<=size;i++){
        cout<<BSTree[i]<<" ";
    }cout<<endl;
    return 0;
}*/
//Note: InOrderTraversal of BSTree results in a sorted array.
//TimeComplexities:
//Heapify: O(logN);
//HeapSort: O(NlogN);
//Insertion / Deletion: O(logN);

//Priority Queue:
//implementation of priority queue(MaxHeap by dafault):
/*#include <iostream>
#include <queue>
using namespace std;
int main() {
    priority_queue <int> pq;
    pq.push(1);
    pq.push(2);
    pq.push(3);
    pq.push(4);
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }cout<<endl;
    return 0;
}*/

//implementation of priority queue(minHeap):
/*#include <iostream>
#include <queue>
using namespace std;
int main() {
    priority_queue <int, vector<int>, greater<int>> pq;
    pq.push(1);
    pq.push(2);
    pq.push(3);
    pq.push(4);
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }cout<<endl;
    return 0;
}*/
//Q) getting kth largest element from the priority queue:
/*#include <iostream>
using namespace std;
#include <queue>
int main() {
    priority_queue <int> pq;
    int array[] =  {3,7,2,9,5};
    int n = sizeof(array)/sizeof(array[0]);
    for(int i=0; i<n; i++) {
        pq.push(array[i]);
    }
    int i=1;
    int k=3;
    while(i<k){
        pq.pop();
        i++;
    }cout<<pq.top();
    return 0;
}*/
//above query aliter:
/*#include <iostream>
#include <queue>
using namespace std;
int main() {
    priority_queue <int, vector<int>, greater<int>> pq;
    int array[] =  {3,7,2,9,5};
    int n = sizeof(array)/sizeof(array[0]);
    int k = 3;
    for(int i=0; i<n; i++) {
        pq.push(array[i]);
        if(pq.size()>k){
            pq.pop();
        }
    }cout<<pq.top();
    return 0;
    //tc: O(NlogK);
}*/
//Q) getting top k closest points to the origin from the given points using manHattan distance:
/*#include <iostream>
#include <queue>
#include <vector>
using namespace std;
vector <pair<int,int>> getKClosestPts(vector <pair<int,int>> pts, int k) {
    priority_queue <pair<int,pair<int,int>>> pq;
    for(int i=0; i<pts.size(); i++) {
        pq.push(make_pair((pts[i].first+pts[i].second),pts[i]));
        if(pq.size()>k){
            pq.pop();
        }
    }vector <pair<int,int>> ans(k);
    while(!pq.empty()){
        ans[pq.size()-1] = pq.top().second;
        pq.pop();
    }return ans;
}
int main() {
    vector <pair<int,int>> pts;
    int n = 6;
    int k = 3;
    for (int i=0; i<n; i++) {
        int x;
        int y;
        cin>>x>>y;
        pts.push_back(make_pair(x,y));
    }vector <pair<int,int>> ans = getKClosestPts(pts,k);
    for(int i=0; i<k; i++) {
        cout<<ans[i].first<<" "<<ans[i].second<<endl;
    }return 0;
}*/
//Q)Given an array of n integers. You are supposed to perform k operations on it. 
//At each operation, the smallest 2 elements of the array are removed from the array, 
//multiplied by each other, and the product is added back to the array. 
//Return the largest element of the array after the k operations. 
//It is guaranteed that at least one element will remain after the k operations.
/*#include <iostream>
#include <queue>
using namespace std;
int getAnswer(int array[],int size,int k) {
    priority_queue <int,vector<int>,greater<int>> pq;
    for(int i=0; i<size; i++){
        pq.push(array[i]);
    }int i=0;
    while(i<k){
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
        pq.push(a*b);
        i++;
    }while(pq.size()>1){
        pq.pop();
    }return pq.top();
}
int main() {
    int array[] = {2,4,3,1,5};
    int n = 5;
    int k = 3;
    int ans = getAnswer(array,n,k);
    cout<<ans<<endl;
    return 0;
    //tc: O(N+kLogN);
}*/
//Q)Given a characters array tasks, representing the tasks a CPU needs to do, 
//where each letter represents a different task. 
//Tasks could be done in any order. Each task is done in one unit of time. 
//For each unit of time, the CPU could complete either one task or just be idle. 
//However, there is a non-negative integer n that represents the cooldown period 
//between two same tasks (the same letter in the array), that is that there must 
//be at least n units of time between any two same tasks. Return the least number 
//of units of times that the CPU will take to finish all the given tasks.
// incompleteCode:
/*#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int getTotalTime(int char_freq[],int dist_freq,int n) {
    int t = 0;
    priority_queue <int> pq;
    for(int i=0; i<dist_freq; i++){
        pq.push(char_freq[i]);
    }vector <int> temp(dist_freq);
    while(!pq.empty()){
            for(int i=0; i<n+1; i++){
                if(!pq.empty()){
                if(pq.top()-1){
                temp.push_back(pq.top()-1);
                pq.pop();}else{
                pq.pop();
                }}t++;
            }for(int i=0; i<temp.size(); i++){
                pq.push(temp[i]);
            }temp.clear();
    }return t;
}
int main() {
    char array[] = {'A','A','A','B','B','B'};
    priority_queue <int> pq;
    int dist_freq = 2;
    int n = 2;
    int char_freq[] = {3,3};
    int totalTime = getTotalTime(char_freq,dist_freq,n);
    cout<<totalTime<<endl;
    return 0;
}*/
//Q)finding the median from the stream of data:
//incompleteCode:
/*#include <iostream>
#include <queue>
#include <vector>
using namespace std;
float getMedian(vector <int> num){
    priority_queue <int> maxHeap;
    priority_queue <int, vector<int>, greater<int>> minHeap;
    maxHeap.push(num[0]);
    float median;
    for(int i=1; i<num.size(); i++){
        if(num[i]<maxHeap.top()){
            maxHeap.push(num[i]);
        }else{
            minHeap.push(num[i]);
        }if((maxHeap.size()-minHeap.size())>1){
            minHeap.push(maxHeap.top());
            maxHeap.pop();
        }else if((minHeap.size()-maxHeap.size())>0){
            maxHeap.push(minHeap.top());
            minHeap.pop();
        }
    }if(num.size()%2==1){
        median = maxHeap.top();
    }else{
        median = (maxHeap.top()+minHeap.top())/2;
    }return median;
}
int main() {
    vector <int> num = {1,2,3,4,5};
    float median = getMedian(num);
    cout<<median<<endl;
    return 0;
}*/
//Q)Given K sorted arrays of size N each, merge them and print the sorted output:
/*#include <iostream> 
#include <queue>
#include <vector>
using namespace std;
vector <int> getMergedSortedArray(vector <vector <int>> sortedArrays, int k, int n) {
    priority_queue <int> pq; 
    for(int i=0; i<k; i++) {
        for(int j=0; j<n; j++){
            pq.push(sortedArrays[i][j]);
        }
    }vector <int> mergedSortedArray(k*n);
    for(int i=k*n-1; i>=0; i--){
        mergedSortedArray[i] = pq.top();
        pq.pop();
    } return mergedSortedArray;
}
int main() {
    int k,n;
    cout<<"enter k: ";
    cin>>k;
    cout<<"enter n: ";
    cin>>n;
    vector <vector <int>> sortedArrays(k,vector<int>(n));
    cout<<"enter sorted arrays one by one:"<<endl;
    for(int i=0; i<k; i++){
        for(int j=0; j<n; j++){
            int p;
            cin>>p;
            sortedArrays[i][j] = p;
        }
    }cout<<endl;
    vector <int> mergedSortedArray = getMergedSortedArray(sortedArrays,k,n);
    cout<<"merged sorted array: "<<endl;
    for(int i=0; i<mergedSortedArray.size(); i++){
        cout<<mergedSortedArray[i]<<" ";
    }return 0;
}*/
//Q)Given a list of intervals, merge overlapping intervals using a priority queue:
/*#include <iostream> 
#include <queue>
#include <vector>
using namespace std;
struct compare {
    bool operator()(const vector<int>& v1, const vector<int>& v2) {
        return v1[0] > v2[0];
    }
};
vector <vector<int>> getMergedIntervals(vector <vector<int>> intervals,int m){
    vector <vector<int>> mergedIntervals;
    priority_queue <vector<int>, vector<vector<int>>, compare> pq;
    for(int i=0; i<m; i++) {
        pq.push(intervals[i]);
    }while(true){
        if(pq.size()==1){
            mergedIntervals.push_back(pq.top());
            pq.pop();
            break;
        }vector <int> a = pq.top();
        pq.pop();
        vector <int> b = pq.top();
        pq.pop();
        if(a[1]>=b[0]) {
            b[0] = a[0];
            b[1] = b[1];
            pq.push(b);
        }else{
            mergedIntervals.push_back(a);
            pq.push(b);
        }
    }return mergedIntervals;
}
int main() {
    int m;
    cout<<"enter m: ";
    cin>>m;
    vector <vector<int>> intervals(m,vector<int>(2));
    cout<<"enter intervals: "<<endl;
    for(int i=0; i<m; i++) {
        for(int j=0; j<2; j++) {
            int p;
            cin>>p;
            intervals[i][j] = p;
        }
    }vector <vector<int>> mergedIntervals= getMergedIntervals(intervals,m);
    cout<<"merged intervals: "<<endl;
    for(int i=0; i<mergedIntervals.size(); i++){
        for(int j=0; j<2; j++){
            cout<<mergedIntervals[i][j]<<" ";
        }cout<<endl;
    }return 0;
}*/
//Q)Implement a stacp using a priority queue.
//Your stacp should perform the following operations:
//1)push
//2)pop
//3)peek
//4)getSize
/*#include <iostream>
#include <queue>
using namespace std;
class stack {
    public:
    priority_queue <pair<int,int>> st;
    int counter = 0;
    stack() {
    }void push(int ele){
        counter++;
        st.push(make_pair(ele,counter));
        return;
    }void pop(){
        priority_queue<pair<int,int>> temp;
        while(st.top().second!=counter){
            temp.push(st.top());
            st.pop();
        }st.pop();
        while(!temp.empty()){
            st.push(temp.top());
            temp.pop();
        }counter--;
        return;
    }int getSize(){
        return counter;
    }int peek() {
        priority_queue<pair<int,int>> temp;
        while(st.top().second!=counter){
            temp.push(st.top());
            st.pop();
        }int top = st.top().first;
        while(!temp.empty()){
            st.push(temp.top());
            temp.pop();
        };
        return top;
    }int isEmpty() {
        if(counter){
            return 0;
        }else {
            return 1;
        }
    }
};
int main() {
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    cout<<st.getSize()<<endl;
    cout<<st.isEmpty()<<endl;
    st.pop();
    st.pop();
    cout<<st.getSize()<<endl;
    cout<<st.isEmpty()<<endl;
    return 0;
}*/
//Q)You are given two integer arrays sorted in ascending order and an integer p. Return the p 
//pairs with the smallest sums.
/*#include <iostream>
#include <queue>
using namespace std;
vector <pair<int,int>> getPSmallestSumPairs(vector<int> v1, vector <int> v2, int p){
    priority_queue <pair<int,pair<int,int>>> pq;
    for(int i=0; i<v1.size(); i++){
        for(int j=0;j<v2.size();j++){
            pq.push(make_pair((v1[i]+v2[j]),make_pair(v1[i],v2[j])));
        }
    }int n = v1.size()*v2.size();
    int i = 0;
    while(i<(n-p)){
        pq.pop();
        i++;
    }vector <pair<int,int>> result;
    while(!pq.empty()){
        result.push_back(pq.top().second);
        pq.pop();
    }return result;
}
int main() {
    vector <int> v1 = {-1, 2, 4};
    vector <int> v2 = {1, 3, 5};
    int p = 2;
    vector <pair<int,int>> result = getPSmallestSumPairs(v1,v2,p);
    for(int i=0; i<p; i++){
        cout<<result[i].first<<" "<<result[i].second<<endl;
    }return 0;
}*/
/*Q5. You are given two 0-indexed integer arrays nums1 and nums2 of equal length n and a 
positive integer p. You must choose a su<sequence of indices from nums1 of length p.
For chosen indices i0, i1, ..., ip - 1, your score is defined asm
; The sum of the selected elements from nums1 multiplied with the minimum of the selected 
elements from nums2.
. It an defined simply as: (nums1[i0] + nums1[i1] +...+ nums1[ik - 1]) * min(nums2[i0] , 
nums2[i1], ... ,nums2[ik - 1]
Return the maximum possible score.
A subsequence of indices of an array is a set that an be derived from the set {0, 1, ..., n-1} by 
deleting some or no elements.*/
/*#include <iostream> 
#include <queue>
#include <vector>
using namespace std;
vector <vector<int>> getPossibleSubSequenceOfIndices(int n, int k){
    vector <int> indices;
    for(int i=0; i<n; i++) {
        indices.push_back(i);
    }vector <vector<int>> possibleSubSequenceOfIndices;
    for(int i=0; i<(1<<n); i++){
        vector <int> temp;
        for(int j=0; j<n; j++){
            if(i&(1<<j)){
                temp.push_back(indices[j]);
            }
        }if(temp.size()==k){
            possibleSubSequenceOfIndices.push_back(temp);
        }
    }return possibleSubSequenceOfIndices;
}int getResult(vector <vector<int>> subSequences,vector <int> v1, vector <int> v2){
    priority_queue <int> ans;
    for(int i=0; i<subSequences.size(); i++){
        int sum = 0;
        priority_queue <int, vector<int>, greater<int>> temp;
        for(int j=0; j<subSequences[i].size(); j++) {
            sum += v1[subSequences[i][j]];
            temp.push(v2[subSequences[i][j]]);
        }ans.push(temp.top()*sum);
    }return ans.top();
}
int main() {
    vector <int> v1 = {1,3,3,2};
    vector <int> v2 = {2,1,3,4};
    int n = 4;
    int k = 3;
    vector <vector<int>> possibleSubSequenceOfIndices = getPossibleSubSequenceOfIndices(n,k);
    int result = getResult(possibleSubSequenceOfIndices,v1,v2);
    cout<<result<<endl;
    return 0;
}*/

// Tries Data Structure (Prefix Tree)
#include <iostream>
#include <string> 
using namespace std;
class TrieNode{
    public: 
        char ch;
        int terminal;
        TrieNode* children[26];
        TrieNode(char ch){
            this->ch = ch;
            terminal = 0;
            for(auto &child: children){
                child = NULL;
            }
        }
};TrieNode* root = new TrieNode('\0');
void insert(TrieNode* root, string word){
    if(!word.length()){
        root->terminal = 1;
        return;
    }int idx = word[0]-'a';
    if(root->children[idx]){
        root = root->children[idx];
    }else{
        root->children[idx] = new TrieNode(word[0]);
        root = root->children[idx];
    }insert(root,word.substr(1));
    return;
}int find(TrieNode* root, string word){
    if(!word.length()){
        if(root->terminal){
            return 1;
        }return 0;
    }if(root->children[word[0]-'a']){
        root = root->children[word[0]-'a'];
        return find(root,word.substr(1));
    }return 0;
}void takeAway(TrieNode* root, string word){
    if(!word.length()){
        root->terminal = 0;
        return;
    }root = root->children[word[0]-'a'];
    takeAway(root, word.substr(1));
    return;
}int startsWith(TrieNode* root, string word){
    if(!word.length()){
        return 1;
    }int idx = word[0]-'a';
    if(root->children[idx]){
        root = root->children[idx];
        return startsWith(root, word.substr(1));
    }return 0;
}int main() {
    insert(root,"sai");
    cout<<find(root,"sai")<<endl;
    insert(root, "kiran");
    cout<<startsWith(root,"sa")<<endl;
    cout<<startsWith(root,"kir")<<endl;
    cout<<find(root,"kiran")<<endl;
    cout<<find(root,"patnana")<<endl;
    return 0;
}















