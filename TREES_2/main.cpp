// Binary_Search_Trees(BST's) is an very important Data Structure:
// tc_of_linear_search = O(n);
// tc_of_binary_search = O(lognbase2);
// BST: BinaryTree (a tree in which the max no. of child nodes that can be held by any node(parent) is 2) 
// where all values in left subtree of node are less than the value of the parent node and all the values in the right subtree are greater than the value of root node and 
// This property holds true for root nodes of all subtrees;

// Adavantages:
// for insertion: O(lognnbase2);
// for deletion: O(lognnbase2);
// for search: O(lognnbase2);

// Disadavantages>
// wc_tc: O(n);

// Applications:
// 1)sets(w=dorted_order);
// 2)maps(worted_order);
// 3)priority Queue:

// Implementation of insertion of an element to the binary search tree in an iterative manner:
/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    Node* right;
    Node* left;
    int val;
    Node(int value) {
        val = value;
        left = right = NULL;
    }
};
class BST{
    public:
    Node* root_node;
    BST() {
        root_node = NULL;
    }
};
void insertNodeInBST(Node* &root_node, int value) {
    Node* new_node = new Node(value);
    if(root_node==NULL) {
        root_node = new_node;
        return;
    }else {
        Node* current_node = root_node;
        while(true) {
        if(current_node->val>value) {
            if(current_node->left==NULL) {
                current_node->left = new_node;
                break;
            }else {
                current_node = current_node->left;
            }
        }else if(current_node->val<value) {
            if(current_node->right==NULL) {
                current_node->right = new_node;
                break;
            }else {
                current_node = current_node->right;
            }
          }
        }
    }return;
}void inOrderTraversalThruBST(Node* root_node) {
    if(root_node==NULL) {
        return;
    }else {
    inOrderTraversalThruBST(root_node->left);
    cout<<root_node->val<<" ";
    inOrderTraversalThruBST(root_node->right);
    }return;
}
int main() {
    BST bst1; 
    insertNodeInBST(bst1.root_node, 1);
    insertNodeInBST(bst1.root_node, 3);
    insertNodeInBST(bst1.root_node, 4);
    insertNodeInBST(bst1.root_node, 2);
    inOrderTraversalThruBST(bst1.root_node);
    return 0;
}*/

// Implementation of insertion of an element to the binary search tree in a recursive manner:
/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    Node* right;
    Node* left;
    int val;
    Node(int value) {
        val = value;
        left = right = NULL;
    }
};
class BST{
    public:
    Node* root_node;
    BST() {
        root_node = NULL;
    }
};
Node* insertNodeInBST(Node* &root_node, int value) {
    if(root_node==NULL) {
        Node* root_node = new Node(value);
        return root_node;
    }else {
        if(root_node->val>value) {
            root_node->left = insertNodeInBST(root_node->left, value);
        }else if(root_node->val<value) {
            root_node->right = insertNodeInBST(root_node->right, value);
        }
    }return root_node;
}void inOrderTraversalThruBST(Node* root_node) {
    if(root_node==NULL) {
        return;
    }else {
    inOrderTraversalThruBST(root_node->left);
    cout<<root_node->val<<" ";
    inOrderTraversalThruBST(root_node->right);
    }return;
}
int main() {
    BST bst1; 
    bst1.root_node = insertNodeInBST(bst1.root_node, 1);
    insertNodeInBST(bst1.root_node, 3);
    insertNodeInBST(bst1.root_node, 4);
    insertNodeInBST(bst1.root_node, 2);
    inOrderTraversalThruBST(bst1.root_node)
    return 0;
    // avg_case_tc: O(lognnbase2);
    // worse_case_tc: O(n);
}*/

// Implementation of search operation over a value in BST in an iterative manner:
/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    Node* left;
    Node* right;
    int val;
    Node(int value) {
        val = value;
        left = right = NULL;
    }
};
class BST{
    public:
    Node* root_node;
    BST() {
        root_node = NULL;
    }
};
Node* insertNodeInBST(Node* &root_node, int value) {
    if(root_node==NULL) {
        root_node = new Node(value);
        return root_node;
    }else {
        if(root_node->val>value) {
            root_node->left = insertNodeInBST(root_node->left, value);
        }else {
            root_node->right = insertNodeInBST(root_node->right, value);
        }
    }return root_node;
}void inOrderTraversalThruBST(Node* root_node) {
    if(root_node==NULL) {
        return;
    }else {
    inOrderTraversalThruBST(root_node->left);
    cout<<root_node->val<<" ";
    inOrderTraversalThruBST(root_node->right);
    }return;
}bool searchNodeValInBst(Node* root_node, int value) {
    if(root_node==NULL) {
        return false;
    }else {
        Node* current_node = root_node;
        while(true) {
            if(current_node!=NULL and current_node->val == value) {
               return true;
            }else if(current_node==NULL) {
                break;
            }else if(current_node->val>value) {
                current_node = current_node->left;
            }else if(current_node->val<value){
                current_node = current_node->right;
            }
        }
    }return false;
}
int main() {
    BST bst1; 
    bst1.root_node = insertNodeInBST(bst1.root_node, 1);
    insertNodeInBST(bst1.root_node, 4);
    insertNodeInBST(bst1.root_node, 3);
    insertNodeInBST(bst1.root_node, 2);
    // inOrderTraversalThruBST(bst1.root_node);
    // cout<<endl;
    cout<<searchNodeValInBst(bst1.root_node, 7)<<endl;
    return 0;
}*/

// Implementation of search operation over a value in BST in a recursive manner:
/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    Node* left;
    Node* right;
    int val;
    Node(int value) {
        val = value;
        left = right = NULL;
    }
};
class BST{
    public:
    Node* root_node;
    BST() {
        root_node = NULL;
    }
};
Node* insertNodeInBST(Node* &root_node, int value) {
    if(root_node==NULL) {
        root_node = new Node(value);
        return root_node;
    }else {
        if(root_node->val>value) {
            root_node->left = insertNodeInBST(root_node->left, value);
        }else {
            root_node->right = insertNodeInBST(root_node->right, value);
        }
    }return root_node;
}void inOrderTraversalThruBST(Node* root_node) {
    if(root_node==NULL) {
        return;
    }else {
    inOrderTraversalThruBST(root_node->left);
    cout<<root_node->val<<" ";
    inOrderTraversalThruBST(root_node->right);
    }return;
}bool searchNodeValInBst(Node* root_node, int value) {
    bool result;
    if(root_node == NULL) {
        result = false;
    }else {
    if(root_node->val == value) {
        result = true;
    }if(root_node->val<value) {
        result = searchNodeValInBst(root_node->right, value);
    }if(root_node->val>value) {
        result = searchNodeValInBst(root_node->left, value);
    }
    }return result;
}
int main() {
    BST bst1; 
    bst1.root_node = insertNodeInBST(bst1.root_node, 1);
    insertNodeInBST(bst1.root_node, 4);
    insertNodeInBST(bst1.root_node, 3);
    insertNodeInBST(bst1.root_node, 2);
    // inOrderTraversalThruBST(bst1.root_node);
    // cout<<endl;
    cout<<searchNodeValInBst(bst1.root_node, 4)<<endl;
    return 0;
}
*/

// Deleting a given node in a BST in a recursive manner:

/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    Node* left;
    Node* right;
    int val;
    Node(int value) {
        val = value;
        left = right = NULL;
    }
};
class BST{
    public:
    Node* root_node;
    BST() {
        root_node = NULL;
    }
};
Node* insertNodeInBST(Node* &root_node, int value) {
    if(root_node==NULL) {
        root_node = new Node(value);
        return root_node;
    }else {
        if(root_node->val>value) {
            root_node->left = insertNodeInBST(root_node->left, value);
        }else {
            root_node->right = insertNodeInBST(root_node->right, value);
        }
    }return root_node;
}void inOrderTraversalThruBST(Node* root_node) {
    if(root_node==NULL) {
        return;
    }else {
    inOrderTraversalThruBST(root_node->left);
    cout<<root_node->val<<" ";
    inOrderTraversalThruBST(root_node->right);
    }return;
}void levelOrderTraversalThruBST(Node* root_node) {
    if(root_node==NULL) {
        cout<<-1<<endl;
        return;
    }else {
        queue <Node*> q;
        q.push(root_node);
        while(!q.empty()) {
            int currentSize = q.size();
            while(currentSize--) {
                cout<<q.front()->val<<" ";
                if(q.front()->left) {
                    q.push(q.front()->left);
                }if(q.front()->right) {
                    q.push(q.front()->right);
                }q.pop();
            }cout<<endl;
        }
    }return;
}Node* findLargestNode(Node* root_node) {
    Node* current_node = root_node;
    while(current_node->right) {
        current_node = current_node->right;
    }return current_node;
}Node* deleteNodeInBst(Node* root_node, int value){
    if(root_node==NULL) {
        return root_node;
    }else {
        if(root_node->val < value) {
            root_node->right = deleteNodeInBst(root_node->right,value);
        }else if(root_node->val > value) {
            root_node->left = deleteNodeInBst(root_node->left, value);
        }else {
            if(root_node->left==NULL and root_node->right==NULL) {
                free(root_node);
                root_node = NULL;
            }else if(root_node->left!=NULL and root_node->right==NULL) {
                Node* temp = root_node->left;
                free(root_node);
                root_node = temp;
            }else if(root_node->left==NULL and root_node->right!=NULL) {
                Node* temp = root_node->right;
                free(root_node);
                root_node = temp;
            }else{
                Node* justSmallNode = findLargestNode(root_node->left);
                root_node->val = justSmallNode->val;
                root_node->left = deleteNodeInBst(justSmallNode,justSmallNode->val);
            }
        }
    }return root_node;
}
int main() {
    BST bst1; 
    bst1.root_node = insertNodeInBST(bst1.root_node, 1);
    insertNodeInBST(bst1.root_node, 4);
    insertNodeInBST(bst1.root_node, 3);
    insertNodeInBST(bst1.root_node, 5);
    insertNodeInBST(bst1.root_node, 2);
    // inOrderTraversalThruBST(bst1.root_node);
    levelOrderTraversalThruBST(bst1.root_node);
    cout<<endl;
    // bst1.root_node = deleteNodeInBst(bst1.root_node, 2);
    // bst1.root_node = deleteNodeInBst(bst1.root_node, 3);
    // bst1.root_node = deleteNodeInBst(bst1.root_node, 4);
    bst1.root_node = deleteNodeInBst(bst1.root_node, 1);
    levelOrderTraversalThruBST(bst1.root_node);
    return 0;
}*/


// create a balanced tree using the given values in an array:
/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    int val;
    Node* right;
    Node* left;
    Node(int value) {
        val = value;
        left = right = NULL;
    }
};class BST {
    public:
    Node* root_node;
    BST() {
        root_node = NULL;
    }
};void levelOrderTraversalThruBST(Node* root_node) {
    if(root_node==NULL) {
        cout<<-1<<endl;
        return;
    }else {
        queue <Node*> q;
        q.push(root_node);
        while(!q.empty()) {
            int currentSize = q.size();
            while(currentSize--) {
                cout<<q.front()->val<<" ";
                if(q.front()->left) {
                    q.push(q.front()->left);
                }if(q.front()->right) {
                    q.push(q.front()->right);
                }q.pop();
            }cout<<endl;
        }
    }return;
}Node* createBalancedTree(vector <int> vec,int start, int end) {
    Node* root_node;
    if(start>end) {
        return NULL;
    }else {
        int mid = (start + end)/2;
        root_node = new Node(vec[mid]);
        root_node->left = createBalancedTree(vec,start,mid-1);
        root_node->right = createBalancedTree(vec,mid+1,end);
    }return root_node;
}int main() {
    vector <int> vec = {1,2,3,4,5,6,7};
    BST bst;
    bst.root_node = createBalancedTree(vec,0,vec.size()-1);
    levelOrderTraversalThruBST(bst.root_node);
    return 0;
    // tc: O(n);
    // sc: O(h) = O(logn);
    // h = logn;
}*/

// finding lowest_common_ancestor recursivey in a BST:

/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    int val;
    Node* right;
    Node* left;
    Node(int value) {
        val = value;
        left = right = NULL;
    }
};class BST {
    public:
    Node* root_node;
    BST() {
        root_node = NULL;
    }
};void levelOrderTraversalThruBST(Node* root_node) {
    if(root_node==NULL) {
        cout<<-1<<endl;
        return;
    }else {
        queue <Node*> q;
        q.push(root_node);
        while(!q.empty()) {
            int currentSize = q.size();
            while(currentSize--) {
                cout<<q.front()->val<<" ";
                if(q.front()->left) {
                    q.push(q.front()->left);
                }if(q.front()->right) {
                    q.push(q.front()->right);
                }q.pop();
            }cout<<endl;
        }
    }return;
}Node* lowestCommonAncestorNode(Node* root_node,int n1,int n2) {
    if(root_node==NULL) {
        return NULL;
    }else {
        if(root_node->val<n1 and root_node->val<n2) {
            return lowestCommonAncestorNode(root_node->right,n1,n2);
        }else if(root_node->val>n1 and root_node->val>n2){
            return lowestCommonAncestorNode(root_node->left,n1,n2);
        }
    }return root_node;
}
int main() {
    BST bst;
    bst.root_node = new Node(3);
    bst.root_node->right = new Node(4);
    bst.root_node->right->right = new Node(6);
    bst.root_node->left = new Node(1);
    bst.root_node->left->right = new Node(2);
    Node* result = lowestCommonAncestorNode(bst.root_node,2,4);
    if(result){
        cout<<result->val<<endl;
    }else {
        cout<<-1<<endl;
    }return 0;
}
*/

// removing all leafNodes in a BST:
/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    int val;
    Node* right;
    Node* left;
    Node(int value) {
        val = value;
        left = right = NULL;
    }
};class BST {
    public:
    Node* root_node;
    BST() {
        root_node = NULL;
    }
};void preOrderTraversalThruBST(Node* root_node) {
    if(root_node==NULL) {
        return;
    }else {
       cout<<root_node->val<<" ";
       preOrderTraversalThruBST(root_node->left);
       preOrderTraversalThruBST(root_node->right);
    }return;
}Node* removeAllLeafNodes(Node* root_node) {
    if(root_node==NULL) {
        return NULL;
    }if(root_node->left==NULL and root_node->right==NULL) {
        return NULL;
    }
    else {
        if(root_node->left) {
            root_node->left = removeAllLeafNodes(root_node->left);
        }if(root_node->right) {
            root_node->right = removeAllLeafNodes(root_node->right);
        }
    }return root_node;
}
int main() {
    BST bst;
    bst.root_node = new Node(3);
    bst.root_node->right = new Node(4);
    bst.root_node->right->right = new Node(6);
    bst.root_node->left = new Node(1);
    bst.root_node->left->right = new Node(2);
    preOrderTraversalThruBST(bst.root_node);
    cout<<endl;
    removeAllLeafNodes(bst.root_node);
    preOrderTraversalThruBST(bst.root_node);
    return 0;
    // tc: O(n);
    // sc: O(h);
}*/

// finding the predecessor and successor nodes of a given dode in a BST:
/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    int val;
    Node* right;
    Node* left;
    Node(int value) {
        val = value;
        left = right = NULL;
    }
};class BST {
    public:
    Node* root_node;
    BST() {
        root_node = NULL;
    }
};void inOrderTraversalThruBST(Node* root_node) {
    if(root_node==NULL) {
        return;
    }else {
       inOrderTraversalThruBST(root_node->left);
       cout<<root_node->val<<" ";
       inOrderTraversalThruBST(root_node->right);
    }return;
}void getInorderPredSuccOfNodeInBST(Node* root_node, Node* &successor, Node* &predecessor, int value) {
    if(root_node==NULL) {
        return;
    }else {
     if(root_node->val == value) {
        Node* currentNode = root_node;
        if(currentNode->left) {
            currentNode = currentNode->left;
            while(currentNode->right) {
                currentNode = currentNode->right;
            }predecessor = currentNode;
        }
        currentNode = root_node;
        if(currentNode->right) {
            currentNode = currentNode->right;
            while(currentNode->left) {
                currentNode = currentNode->left;
            }successor = currentNode;
        }
     }else if(root_node->val<value) {
        predecessor = root_node;
        getInorderPredSuccOfNodeInBST(root_node->right,successor,predecessor,value);
     }else if(root_node->val>value) {
        successor = root_node;
        getInorderPredSuccOfNodeInBST(root_node->left,successor,predecessor,value);
     }
    }return;
}
int main() {
    BST bst;
    bst.root_node = new Node(3);
    bst.root_node->right = new Node(4);
    bst.root_node->right->right = new Node(6);
    bst.root_node->left = new Node(1);
    bst.root_node->left->right = new Node(2);
    inOrderTraversalThruBST(bst.root_node);
    cout<<endl;
    Node* successor = NULL;
    Node* predecessor = NULL;
    getInorderPredSuccOfNodeInBST(bst.root_node,successor,predecessor,1);
    if(predecessor!=NULL) {
        cout<<"predecessor: "<<predecessor->val<<endl;
    }else{
        cout<<"predecessor: NULL"<<endl;
    }if(successor!=NULL) {
        cout<<"successor: "<<successor->val<<endl;
    }else{
        cout<<"successor: NULL"<<endl;
    }return 0;
    // tc: O(h);
    // sc: O(h);
}*/

// Q1. Given an integer array of n elements. You need to check whether it represents the inorder
// traversal of a Binary Search Tree (BST) or not. [easy]:
/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    Node* left;
    Node* right;
    int val;
    Node(int value) {
          val = value;
          left = right = NULL;
    }
};
class BST {
    public:
    Node* root_node;
    BST() {
        root_node = NULL;
    }
};
Node* insertNodeInBST(Node* root_node,int value) {
    if(root_node == NULL) {
        root_node = new Node(value);
        return root_node;
    }else {
        if(root_node->val > value) {
            root_node->left = insertNodeInBST(root_node->left, value);
        }else if(root_node->val < value) {
            root_node->right = insertNodeInBST(root_node->right, value);
        }
    }return root_node;
}vector <int> inOrderTraversalThruBST(Node* root_node, vector <int> &vec) {
    if(root_node==NULL) {
        return vec;
    }else {
        inOrderTraversalThruBST(root_node->left,vec);
        vec.push_back(root_node->val);
        inOrderTraversalThruBST(root_node->right,vec);
    }return vec;
}
int main() {
    BST bst1;
    bst1.root_node = insertNodeInBST(bst1.root_node,6);
    insertNodeInBST(bst1.root_node,3);
    insertNodeInBST(bst1.root_node,10);
    insertNodeInBST(bst1.root_node,1);
    insertNodeInBST(bst1.root_node,15);
    vector <int> given = {1,6,3,10,15};
    vector <int> result;
    inOrderTraversalThruBST(bst1.root_node,result);
    for (int val: given) {
        cout<<val<<" ";
    }cout<<endl;
    for (int val: result) {
        cout<<val<<" ";
    }cout<<endl;
    if(given == result) {
        cout<<"yes"<<endl;
    }else {
        cout<<"no"<<endl;
    }
    return 0;
}
*/

// Q2. Consider the following values: 7, 22, 4, 6, 9, 3, 1, 13, 2, 5, 10, 8
// They are inserted into BST in the given order only. What will be the height of the BST?
/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    Node* left;
    Node* right;
    int val;
    Node(int value) {
          val = value;
          left = right = NULL;
    }
};
class BST {
    public:
    Node* root_node;
    BST() {
        root_node = NULL;
    }
};
Node* insertNodeInBST(Node* root_node,int value) {
    if(root_node == NULL) {
        root_node = new Node(value);
        return root_node;
    }else {
        if(root_node->val > value) {
            root_node->left = insertNodeInBST(root_node->left, value);
        }else if(root_node->val < value) {
            root_node->right = insertNodeInBST(root_node->right, value);
        }
    }return root_node;
}int getHeight(Node* root_node) {
    int height = -1;
    if(root_node==NULL) {
        return 0;
    }else {
        queue <Node*> q;
        q.push(root_node);
        while(!q.empty()) {
            int currentSize = q.size();
            while(currentSize--) {
                cout<<q.front()->val<<" ";
                if(q.front()->left) {
                    q.push(q.front()->left);
                }if(q.front()->right) {
                    q.push(q.front()->right);
                }q.pop();
            }height++;
            cout<<endl;
        }
    }return height;
}
int main() {
    BST bst1;
    vector <int> givenOrder = {7, 22, 4, 6, 9, 3, 1, 13, 2, 5, 10, 8};
    for(int val: givenOrder) {
        bst1.root_node = insertNodeInBST(bst1.root_node,val);
    }
    int height = getHeight(bst1.root_node);
    cout<<"Height of given BST = "<<height<<endl;
    return 0;
}
*/

// Q4. Given an integer n representing the number of nodes in a BST. Next are the values of nodes
// in BST. Find the node with the minimum value.
/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    Node* left;
    Node* right;
    int val;
    Node(int value) {
          val = value;
          left = right = NULL;
    }
};
class BST {
    public:
    Node* root_node;
    BST() {
        root_node = NULL;
    }
};
Node* insertNodeInBST(Node* root_node,int value) {
    if(root_node == NULL) {
        root_node = new Node(value);
        return root_node;
    }else {
        if(root_node->val > value) {
            root_node->left = insertNodeInBST(root_node->left, value);
        }else if(root_node->val < value) {
            root_node->right = insertNodeInBST(root_node->right, value);
        }
    }return root_node;
}int getMinimum(Node* root_node) {
    if(root_node==NULL) {
        return -1;
    }
    if(root_node->left==NULL) {
        return root_node->val;
    }else {
        return getMinimum(root_node->left);
    }
}
int main() {
    BST bst1;
    bst1.root_node = insertNodeInBST(bst1.root_node,4);
    insertNodeInBST(bst1.root_node,2);
    insertNodeInBST(bst1.root_node,7);
    insertNodeInBST(bst1.root_node,1);
    insertNodeInBST(bst1.root_node,3);
    cout<<getMinimum(bst1.root_node)<<endl;
    return 0;
}*/

// Q5. Given an integer n representing the number of nodes in a BST. Next are the values of nodes
// in BST. Find the node with the second-largest value in the BST.

/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    Node* left;
    Node* right;
    int val;
    Node(int value) {
          val = value;
          left = right = NULL;
    }
};
class BST {
    public:
    Node* root_node;
    BST() {
        root_node = NULL;
    }
};
Node* insertNodeInBST(Node* root_node,int value) {
    if(root_node == NULL) {
        root_node = new Node(value);
        return root_node;
    }else {
        if(root_node->val > value) {
            root_node->left = insertNodeInBST(root_node->left, value);
        }else if(root_node->val < value) {
            root_node->right = insertNodeInBST(root_node->right, value);
        }
    }return root_node;
}int getSecondMaximum(Node* root_node) {
    if(root_node==NULL) {
        return -1;
    }
    if(root_node->right->right==NULL) {
        return root_node->val;
    }else {
        return getSecondMaximum(root_node->right);
    }
}
int main() {
    BST bst1;
    bst1.root_node = insertNodeInBST(bst1.root_node,4);
    insertNodeInBST(bst1.root_node,2);
    insertNodeInBST(bst1.root_node,6);
    insertNodeInBST(bst1.root_node,1);
    insertNodeInBST(bst1.root_node,3);
    insertNodeInBST(bst1.root_node,5);
    insertNodeInBST(bst1.root_node,7);
    cout<<getSecondMaximum(bst1.root_node)<<endl;
    return 0;
}*/

// Q6) Given two BSTs. Check if they contain the same set of elements or not.
/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    Node* left;
    Node* right;
    int val;
    Node(int value) {
          val = value;
          left = right = NULL;
    }
};
class BST {
    public:
    Node* root_node;
    BST() {
        root_node = NULL;
    }
};
Node* insertNodeInBST(Node* root_node,int value) {
    if(root_node == NULL) {
        root_node = new Node(value);
        return root_node;
    }else {
        if(root_node->val > value) {
            root_node->left = insertNodeInBST(root_node->left, value);
        }else if(root_node->val < value) {
            root_node->right = insertNodeInBST(root_node->right, value);
        }
    }return root_node;
}vector <int> inOrderTraversalThruBST(Node* root_node, vector <int> &vec) {
    if(root_node==NULL) {
        return vec;
    }else {
        inOrderTraversalThruBST(root_node->left,vec);
        vec.push_back(root_node->val);
        inOrderTraversalThruBST(root_node->right,vec);
    }return vec;
}
int main() {
    BST bst1;
    BST bst2;
    int Bst1[] = {3,5,6,2,1};
    int Bst2[] = {4,2,1,5,6};
    vector <int> bSt1 = inOrderTraversalThruBST(bst1.root_node,bSt1);
    vector <int> bSt2 = inOrderTraversalThruBST(bst1.root_node,bSt2);
    for(int val: Bst1) {
        bst1.root_node = insertNodeInBST(bst1.root_node,val);
    }for(int val: Bst2) {
        bst1.root_node = insertNodeInBST(bst2.root_node,val);
    }if(bSt1 == bSt2) {
        cout<<"yes"<<endl;
    }else {
        cout<<"no"<<endl;
    }return 0;
}*/


// Q7) Given a binary search tree and two integers low and high. Print the sum of values of all
// nodes with values in the range [low, high].

/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    Node* left;
    Node* right;
    int val;
    Node(int value) {
          val = value;
          left = right = NULL;
    }
};
class BST {
    public:
    Node* root_node;
    BST() {
        root_node = NULL;
    }
};
Node* insertNodeInBST(Node* root_node,int value) {
    if(root_node == NULL) {
        root_node = new Node(value);
        return root_node;
    }else {
        if(root_node->val > value) {
            root_node->left = insertNodeInBST(root_node->left, value);
        }else if(root_node->val < value) {
            root_node->right = insertNodeInBST(root_node->right, value);
        }
    }return root_node;
}int SumInRange(Node* root_node, int low, int high) {
    int sum = 0;
    if(root_node==NULL) {
        return 0;
    }if(root_node->val>=low and root_node->val<=high) {
          sum += root_node->val;
    }sum += SumInRange(root_node->left,low,high)+SumInRange(root_node->right,low,high);
    return sum;
}
int main() {
    BST bst1;
    int Bst1[] = {9,10,2,3,5};
    for(int val: Bst1) {
        bst1.root_node = insertNodeInBST(bst1.root_node,val);
    }cout<<SumInRange(bst1.root_node,1,5)<<endl;
    return 0;
}*/

// Write a function to check if a BST is balanced:
/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    Node* right;
    Node* left;
    int val;
    Node(int value) {
        val = value;
        right = left = NULL;
    }
};
class BST {
    public:
    Node* root_node;
    BST() {
        root_node = NULL;
    }
};
Node* insertNodeInBST(Node* root_node, int value) {
    if(root_node==NULL) {
        root_node = new Node(value);
        return root_node;
    }else {
        if(root_node->val<value) {
            root_node->right = insertNodeInBST(root_node->right,value);
        }else if(root_node->val>value) {
            root_node->left = insertNodeInBST(root_node->left,value);  
        }
    }return root_node;
}int getHeight(Node* root_node) {
    int height = -1;
    if(root_node==NULL) {
        return height+1;
    }else {
        queue <Node*> q;
        q.push(root_node);
        while(!q.empty()) {
            int currentSize = q.size();
            while(currentSize--) {
                if(q.front()->left)  {
                    q.push(q.front()->left);
                }if(q.front()->right) {
                    q.push(q.front()->right);
                }q.pop();
            }height++;
        }
    }return height;
}
bool checkIsTreeBalanced(Node* root_node) {
    int ht_diff = getHeight(root_node->right)-getHeight(root_node->left);
    if(-1<=ht_diff and ht_diff<=1){
          if(root_node->right) {
            return checkIsTreeBalanced(root_node->right);
          }if(root_node->left) {
            return checkIsTreeBalanced(root_node->right);
          }
    }else {
        return false;
    }
    return true;
}
int main() {
    BST bst;
    bst.root_node = insertNodeInBST(bst.root_node,5);
    // insertNodeInBST(bst.root_node,3);
    // insertNodeInBST(bst.root_node,8);
    // insertNodeInBST(bst.root_node,2);
    // insertNodeInBST(bst.root_node,4);
    // insertNodeInBST(bst.root_node,1);
    if(checkIsTreeBalanced(bst.root_node)) {
        cout<<"Yes"<<endl;
    }else {
        cout<<"No"<<endl;
    }
    return 0;
}*/

// Given a postfix expression, convert it to BinaryTree:
/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    Node* left;
    Node* right;
    char chr;
    Node(char op) {
        left = right = NULL;
        chr = op;
    }
};
class BTree {
    public:
    Node* root_node;
    BTree() {
        root_node = NULL;
    }
};
void levelOrderTraversalThruBTree(Node* root_node) {
    if(root_node == NULL) {
        cout<<-1<<endl;
        return;
    }else {
        queue <Node *> q;
        q.push(root_node);
        while(!q.empty()) {
            int currentSize = q.size();
            while(currentSize) {
                if(q.front()->left) {
                    q.push(q.front()->left);
                }if(q.front()->right) {
                    q.push(q.front()->right);
                }cout<<q.front()->chr<<" ";
                q.pop();
                currentSize--;
            }cout<<endl;
        }
    }return;
}
Node* createPostFixBTree(string postfix) {
   stack <Node*> st;
   for(int i=0; i<postfix.size(); i++) {
       if(int(postfix[i]) >= 97 and int(postfix[i])<=122) {
           Node* new_node = new Node(postfix[i]);
           st.push(new_node);
       }else if(postfix[i]=='+' or postfix[i]=='-' or postfix[i]=='*' or  postfix[i]=='/' or postfix[i]=='%'){
           Node* new_node = new Node(postfix[i]);
           new_node->right = st.top();
           st.pop();
           new_node->left  = st.top();
           st.pop();
           st.push(new_node);
       }
   }return st.top();
}
int main() {
    BTree bt;
    string postfix  = "abcd+/-ef*-g%";
    bt.root_node = createPostFixBTree(postfix);
    // cout<<bt.root_node->chr<<endl;
    levelOrderTraversalThruBTree(bt.root_node);
    return 0;
}
*/

//Q) Write a function to find the successor of a given node in a BST:
/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    Node* left;
    Node* right;
    int val;
    Node(int value) {
          val = value;
          left = right = NULL;
    }
};
class BST {
    public:
    Node* root_node;
    BST() {
        root_node = NULL;
    }
};
Node* insertNodeInBST(Node* root_node,int value) {
    if(root_node == NULL) {
        root_node = new Node(value);
        return root_node;
    }else {
        if(root_node->val > value) {
            root_node->left = insertNodeInBST(root_node->left, value);
        }else if(root_node->val < value) {
            root_node->right = insertNodeInBST(root_node->right, value);
        }
    }return root_node;
}void inOrderTraversalThruBSTree(Node* root_node, vector <Node*> &vec) {
    if(root_node==NULL) {
        return;
    }else {
        inOrderTraversalThruBSTree(root_node->left,vec);
        vec.push_back(root_node);
        inOrderTraversalThruBSTree(root_node->right,vec);
    }return;
}
Node* findSuccessor(Node* root_node, int value){
  vector <Node*> vec;
   inOrderTraversalThruBSTree(root_node,vec);
   int i = 0;
   while(value!=vec[i]->val) {
       i++;
   }if(i!=vec.size()-1) {
       return vec[i+1];
   }Node* new_node = new Node(-1);
   return new_node;
}
int main() { 
    BST bst;
    bst.root_node = insertNodeInBST(bst.root_node,5);
    insertNodeInBST(bst.root_node,3);
    insertNodeInBST(bst.root_node,8);
    insertNodeInBST(bst.root_node,2);
    insertNodeInBST(bst.root_node,4);
    insertNodeInBST(bst.root_node,9);
    cout<<findSuccessor(bst.root_node,9)->val<<endl;
    return 0;
}*/

//Q) Write a function to find the predecessor of a given node in a BST.
/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    Node* left;
    Node* right;
    int val;
    Node(int value) {
          val = value;
          left = right = NULL;
    }
};
class BST {
    public:
    Node* root_node;
    BST() {
        root_node = NULL;
    }
};
Node* insertNodeInBST(Node* root_node,int value) {
    if(root_node == NULL) {
        root_node = new Node(value);
        return root_node;
    }else {
        if(root_node->val > value) {
            root_node->left = insertNodeInBST(root_node->left, value);
        }else if(root_node->val < value) {
            root_node->right = insertNodeInBST(root_node->right, value);
        }
    }return root_node;
}void inOrderTraversalThruBSTree(Node* root_node, vector <Node*> &vec) {
    if(root_node==NULL) {
        return;
    }else {
        inOrderTraversalThruBSTree(root_node->left,vec);
        vec.push_back(root_node);
        inOrderTraversalThruBSTree(root_node->right,vec);
    }return;
}
Node* findPredecessor(Node* root_node, int value){
   vector <Node*> vec;
   inOrderTraversalThruBSTree(root_node,vec);
   int i = 0;
   while(value!=vec[i]->val) {
       i++;
   }if(i!=0) {
       return vec[i-1];
   }Node* new_node = new Node(-1);
   return new_node;
}
int main() { 
    BST bst;
    bst.root_node = insertNodeInBST(bst.root_node,5);
    insertNodeInBST(bst.root_node,3);
    insertNodeInBST(bst.root_node,8);
    insertNodeInBST(bst.root_node,2);
    insertNodeInBST(bst.root_node,4);
    insertNodeInBST(bst.root_node,9);
    cout<<findPredecessor(bst.root_node,5)->val<<endl;
    return 0;
}*/

// Write a function to convert a BST into a sorted array:

/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    Node* left;
    Node* right;
    int val;
    Node(int value) {
          val = value;
          left = right = NULL;
    }
};
class BST {
    public:
    Node* root_node;
    BST() {
        root_node = NULL;
    }
};
Node* insertNodeInBST(Node* root_node,int value) {
    if(root_node == NULL) {
        root_node = new Node(value);
        return root_node;
    }else {
        if(root_node->val > value) {
            root_node->left = insertNodeInBST(root_node->left, value);
        }else if(root_node->val < value) {
            root_node->right = insertNodeInBST(root_node->right, value);
        }
    }return root_node;
}void inOrderTraversalThruBSTree(Node* root_node, vector <Node*> &vec) {
    if(root_node==NULL) {
        return;
    }else {
        inOrderTraversalThruBSTree(root_node->left,vec);
        vec.push_back(root_node);
        inOrderTraversalThruBSTree(root_node->right,vec);
    }return;
}Node* sortBTree(Node* root_node){
   vector <Node*> vec;
   inOrderTraversalThruBSTree(root_node,vec);
   for(int i=0; i<vec.size(); i++) {
       vec[i]->right = vec[i+1];
       vec[i]->left = NULL;
   }return vec[0];
}void displaySortedBinaryTree(Node* root_node) {
    Node* temp = root_node;
    while(temp!=NULL) {
        cout<<temp->val<<' ';
        temp = temp->right;
    }return;
}
int main() { 
    BST bst;
    bst.root_node = insertNodeInBST(bst.root_node,5);
    insertNodeInBST(bst.root_node,3);
    insertNodeInBST(bst.root_node,8);
    insertNodeInBST(bst.root_node,2);
    insertNodeInBST(bst.root_node,4);
    insertNodeInBST(bst.root_node,9);
    bst.root_node = sortBTree(bst.root_node);
    displaySortedBinaryTree(bst.root_node);
    return 0;
}*/

// Given a BTree, check if it is a BSTree or not:
/*#include <iostream>
using namespace std;
class Node {
    public:
    Node* left;
    Node* right;
    int val;
    Node(int value) {
          val = value;
          left = right = NULL;
    }
};
class BT {
    public:
    Node* root_node;
    BT() {
        root_node = NULL;
    }
};
bool checkBTree(Node* root_node) {
    bool result;
    if(root_node==NULL) {
        return true;
    }if(root_node->right!=NULL and root_node->val > root_node->right->val) {
        return false;
    }if(root_node->left!=NULL and root_node->val < root_node->left->val) {
        return false;
    }return checkBTree(root_node->right) and checkBTree(root_node->left);
}
int main() {
    BT bt;
    bt.root_node = new Node(4);
    bt.root_node->left = new Node(7);
    bt.root_node->right = new Node(5);
    bt.root_node->left->right = new Node(3);
    bt.root_node->left->left = new Node(1);
    if(checkBTree(bt.root_node)) {
        cout<<"Yes";
    }else {
        cout<<"No";
    }return 0;
}*/

// Aliter:
/*#include <iostream>
using namespace std;
class Node {
    public:
    Node* left;
    Node* right;
    int val;
    Node(int value) {
          val = value;
          left = right = NULL;
    }
};
class BT {
    public:
    Node* root_node;
    BT() {
        root_node = NULL;
    }
};
bool isValidBstHelper(Node* root_node, int min, int max) {
    if(root_node==NULL) {
        return true;
    }if(root_node->val > max or root_node->val < min) {
        return false;
    }return isValidBstHelper(root_node->left,-100000,root_node->val) and isValidBstHelper(root_node->right,root_node->val,100000);
}bool isValidBst(Node* root_node) {
    return isValidBstHelper(root_node,-100000,100000);
}
int main() {
    BT bt;
    bt.root_node = new Node(4);
    bt.root_node->left = new Node(2);
    bt.root_node->right = new Node(5);
    bt.root_node->left->right = new Node(3);
    bt.root_node->left->left = new Node(1);
    if(isValidBst(bt.root_node)) {
        cout<<"Yes";
    }else {
        cout<<"No";
    }return 0;
    // tc: O(n);
    // sc: O(n);
    // wsc: O(h);
}*/

// Aliter:
/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    Node* left;
    Node* right;
    int val;
    Node(int value) {
          val = value;
          left = right = NULL;
    }
};
class BT {
    public:
    Node* root_node;
    BT() {
        root_node = NULL;
    }
};
void inOrderTraversalThruBSTree(Node* root_node, vector <int> &vec) {
    if(root_node==NULL) {
        return;
    }else {
        inOrderTraversalThruBSTree(root_node->left,vec);
        vec.push_back(root_node->val);
        inOrderTraversalThruBSTree(root_node->right,vec);
    }return;
}bool isValidBst(Node* root_node) {
    vector <int> vec;
    inOrderTraversalThruBSTree(root_node,vec);
    vector <int> unsort_vec = vec;
    sort(vec.begin(),vec.end());
    if(unsort_vec==vec) {
        return true;
    }
    return false;
}
int main() {
    BT bt;
    bt.root_node = new Node(4);
    bt.root_node->left = new Node(7);
    bt.root_node->right = new Node(5);
    bt.root_node->left->right = new Node(3);
    bt.root_node->left->left = new Node(1);
    if(isValidBst(bt.root_node)) {
        cout<<"Yes";
    }else {
        cout<<"No";
    }return 0;
    // tc: O(n);
    // sc: O(n);
}*/

// Aliter:
/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    Node* left;
    Node* right;
    int val;
    Node(int value) {
          val = value;
          left = right = NULL;
    }
};
class BT {
    public:
    Node* root_node;
    BT() {
        root_node = NULL;
    }
};
bool isValidBst(Node* root_node, Node* prev) {
    if(root_node==NULL) {
        return true;
    }if(isValidBst(root_node->left,prev)==false) {
        return false;
    }if(prev!=NULL and prev->val>=root_node->val) {
        return false;
    }prev = root_node;
    return isValidBst(root_node->right,prev);
}
int main() {
    BT bt;
    bt.root_node = new Node(4);
    bt.root_node->left = new Node(2);
    bt.root_node->right = new Node(5);
    bt.root_node->left->right = new Node(3);
    bt.root_node->left->left = new Node(1);
    if(isValidBst(bt.root_node,NULL)) {
        cout<<"Yes";
    }else {
        cout<<"No";
    }return 0;
    // tc: O(n);
    // sc: O(n);
}*/

// If the arrays containing the keys of Binary_Search_Trees are given, check whether they are indentical or not:
/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int getNextFirstMinimum(vector<int> vec, int idx, vector <int> &check) {
    int min = vec[idx];
    for(int i=idx+1; i<vec.size(); i++){
        if(vec[i]<min and check[vec[i]]!=1) {
            min = vec[i];
            break;
        }
    }if(min==vec[idx]) {
        return -1;
    }return min;
}int getNextFirstMaximum(vector<int> vec, int idx, int lmt, vector <int> &check) {
    int max = vec[idx];
    for(int i=idx+1; i<vec.size(); i++){
        if(vec[i]>max and vec[i]<lmt and check[vec[i]]!=1) {
            max = vec[i];
            break;
        }
    }if(max==vec[idx]) {
        return -1;
    }return max;
}int getIdx(vector <int> vec, int ele) {
    for(int i=0; i<vec.size(); i++) {
        if(vec[i]==ele) {
            return i;
        }
    }return -1;
}
bool areBTreesIndentical(vector <int> vec_1, vector <int> vec_2, int min, int max, int ele, vector <int> &check) {
    bool flag = false;
    int v1_min = getNextFirstMinimum(vec_1,getIdx(vec_1,ele),check);
    int v1_max = getNextFirstMaximum(vec_1,getIdx(vec_1,ele),max,check);
    int v2_min = getNextFirstMinimum(vec_2,getIdx(vec_2,ele),check);
    int v2_max = getNextFirstMaximum(vec_2,getIdx(vec_2,ele),max,check);
    cout<<min<<" "<<max<<endl;
    cout<<v1_min<<" "<<v2_min<<" "<<v1_max<<" "<<v2_max<<endl;
    if(v1_min != v2_min or v1_max != v2_max) {
        return false;
    }if(v1_max == -1 and v1_min == -1 and v1_max == -1 and v2_max == -1) {
        return true;
    }if(v1_max >= min and v1_min <= max) {
        flag = true;
        check[ele] = 1;
    }return flag and (areBTreesIndentical(vec_1,vec_2,min,ele,v1_min,check) and areBTreesIndentical(vec_1,vec_2,ele,max,v1_max,check));
}
int main() {
   vector <int> vec_1 = {4,2,5,1,3};
   vector <int> vec_2 = {4,5,2,3,1};
   int max = -100000;
   vector <int> check;
   for(int i=0; i<vec_1.size(); i++) {
       if(max<vec_1[i]) {
           max = vec_1[i];
       }
   }for(int i=0; i<=max; i++) {
      check.push_back(0);
   }
   if(areBTreesIndentical(vec_1,vec_2,-100000,100000,vec_1[0],check)){
       cout<<"Yes";
   }else {
       cout<<"No";
   }return 0;
}
*/

















