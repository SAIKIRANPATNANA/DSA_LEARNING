// Trees:

// Tree is a non-linear data structure which stores heirarchial data.
// Elements are stored at different (multiple) levels.
// Elements are called Nodes and these are connected together to represent the heirarchy.

// Terminology:
// Root_Node: Top most Node (not a child_node and has no parent_node).
// Child_Node: Successor or descendent of any node.
// Parent_Node: Predecessor or ascendent of any node.
// Sibling_Nodes: Nodes with common parents.
// Leaf_Node: Node which has no child_node.
// Number_Of_Edges: No. of links b/w two nodes.
// Level: No. of edges from root_node.
// Height: Max no. of nodes b/w the root_node and the leaf_node.
// Size: No. of edges in a tree.
// Subtree: Tree which is child of a Node.

// Types of Trees:
// Generic_Tree: A Node can have any no. of child nodes.
// Binary_Tree: Tree in which a Node can have max no. of 2 child Nodes.
// ---> Here, It is composed of a data point and two address pointers for left and right child_nodes respectively.
// ---> If any child_node dne, pointer will point to null.
// Binary_Search_Tree: Binary_tree in which  all nodes in the left subtree will have a value less than the root_node and also all the nodes 
//                    in the right subtree will have a value more than the root_node.
// AVL(Adelson-Velsky and Landis)_Trees(self_balancing_trees): A tree in which difference b/w the heights of left and right subtrees can only be -1,0 and 1.

// Implementation_of_binary_tree:

/*#include <iostream>
using namespace std;
class Node {
    public:
    int val;
    Node* left;
    Node* right;
    Node(int value) {
        val = value;
        left = right = NULL;
    }
};
int main() {
    Node* root_node = new Node(1);
    root_node->left = new Node(2);
    root_node->right = new Node(3);
    root_node->left->left = new Node(4);
    root_node->left->right = new Node(5);
    root_node->right->left = new Node(6);
    root_node->right->right = new Node(7);
    root_node->right->right->right = new Node(8);
    root_node->right->right->right->left = new Node(9);
    root_node->right->right->right->right = new Node(10);
    cout<<root_node->val<<endl;
    cout<<root_node->left->val<<endl;
    cout<<root_node->right->val<<endl;
    return 0;
}*/

// Traversal through a BinaryTree using DFS(Depth_First_Search):
// preorder:

/*#include <iostream>
using namespace std;
class Node {
    public:
    int val;
    Node* left;
    Node* right;
    Node(int value) {
        val = value;
        left = right = NULL;
    }
};
void postOrderTraversal(Node* root_node) {
    if(root_node==NULL) {
        return;
    }else {
        cout<<root_node->val<<endl;
        postOrderTraversal(root_node->left);
        postOrderTraversal(root_node->right);
    }return;
}
int main() {
    Node* root_node = new Node(1);
    root_node->left = new Node(2);
    root_node->right = new Node(3);
    root_node->left->left = new Node(4);
    root_node->left->right = new Node(5);
    root_node->right->left = new Node(6);
    root_node->right->right = new Node(7);
    root_node->right->right->right = new Node(8);
    root_node->right->right->right->left = new Node(9);
    root_node->right->right->right->right = new Node(10);
    postOrderTraversal(root_node);
    return 0;
}*/

// Inorder:

/*#include <iostream>
using namespace std;
class Node {
    public:
    int val;
    Node* left;
    Node* right;
    Node(int value) {
        val = value;
        left = right = NULL;
    }
};
void postOrderTraversal(Node* root_node) {
    if(root_node==NULL) {
        return;
    }else {
        postOrderTraversal(root_node->left);
        cout<<root_node->val<<endl;
        postOrderTraversal(root_node->right);
    }return;
}
int main() {
    Node* root_node = new Node(1);
    root_node->left = new Node(2);
    root_node->right = new Node(3);
    root_node->left->left = new Node(4);
    root_node->left->right = new Node(5);
    root_node->right->left = new Node(6);
    root_node->right->right = new Node(7);
    root_node->right->right->right = new Node(8);
    root_node->right->right->right->left = new Node(9);
    root_node->right->right->right->right = new Node(10);
    postOrderTraversal(root_node);
    return 0;
}*/

// preorder:
/*#include <iostream>
using namespace std;
class Node {
    public:
    int val;
    Node* left;
    Node* right;
    Node(int value) {
        val = value;
        left = right = NULL;
    }
};
void postOrderTraversal(Node* root_node) {
    if(root_node==NULL) {
        return;
    }else {
        postOrderTraversal(root_node->left);
        postOrderTraversal(root_node->right);
        cout<<root_node->val<<endl;
    }return;
}
int main() {
    Node* root_node = new Node(1);
    root_node->left = new Node(2);
    root_node->right = new Node(3);
    root_node->left->left = new Node(4);
    root_node->left->right = new Node(5);
    root_node->right->left = new Node(6);
    root_node->right->right = new Node(7);
    root_node->right->right->right = new Node(8);
    root_node->right->right->right->left = new Node(9);
    root_node->right->right->right->right = new Node(10);
    postOrderTraversal(root_node);
    return 0;
}*/

// levelOrder(Breadth_first_search):
/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    int val;
    Node* left;
    Node* right;
    Node(int value) {
        val = value;
        left = right = NULL;
    }
};
void levelOrderTraversal(Node* root_node) {
    if(root_node==NULL) {
        return;
    }queue <Node*> q;
    q.push(root_node);
    while(!q.empty()){
        // int currentSize = q.size();
        // while(currentSize) {
            cout<<q.front()->val<<" ";
            if (q.front()->left) {
                q.push(q.front()->left);
            }
            if (q.front()->right) {
                q.push(q.front()->right);
            }q.pop();
            // currentSize--;
        }//cout<<endl;
    // }return;
}
int main() {
    Node* root_node = new Node(1);
    root_node->left = new Node(2);
    root_node->right = new Node(3);
    root_node->left->left = new Node(4);
    root_node->left->right = new Node(5);
    root_node->right->left = new Node(6);
    root_node->right->right = new Node(7);
    root_node->right->right->right = new Node(8);
    root_node->right->right->right->left = new Node(9);
    root_node->right->right->right->right = new Node(10);
    levelOrderTraversal(root_node);
    return 0;
}*/

// Max_Depth_Query:

/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    int val;
    Node* left;
    Node* right;
    Node(int value) {
        val = value;
        left = right = NULL;
    }
};
int maxDepth(Node* root_node) {
    if(root_node==NULL) {
        return 0;
    }queue <Node*> q;
    int max_depth = 0;
    q.push(root_node);
    while(!q.empty()){
        int currentSize = q.size();
        while(currentSize) {
            if (q.front()->left) {
                q.push(q.front()->left);
            }
            if (q.front()->right) {
                q.push(q.front()->right);
            }q.pop();
            currentSize--;
        }max_depth++;
    }return max_depth;
}
int main() {
    Node* root_node = new Node(1);
    root_node->left = new Node(2);
    root_node->right = new Node(3);
    root_node->left->left = new Node(4);
    root_node->left->right = new Node(5);
    root_node->right->left = new Node(6);
    root_node->right->right = new Node(7);
    root_node->right->right->right = new Node(8);
    root_node->right->right->right->left = new Node(9);
    root_node->right->right->right->right = new Node(10);
    int result = maxDepth(root_node);
    cout<<result<<endl;
    return 0;
}*/

// Above_query_aliter:
/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    int val;
    Node* left;
    Node* right;
    Node(int value) {
        val = value;
        left = right = NULL;
    }
};
int maxDepth(Node* root_node) {
    if(root_node==NULL) {
        return 0;
    }
    int leftMaxDepth = maxDepth(root_node->left);
    int rightMaxDepth = maxDepth(root_node->right);
    return max(leftMaxDepth,rightMaxDepth)+1;
}
int main() {
    Node* root_node = new Node(1);
    root_node->left = new Node(2);
    root_node->right = new Node(3);
    root_node->left->left = new Node(4);
    root_node->left->right = new Node(5);
    root_node->right->left = new Node(6);
    root_node->right->right = new Node(7);
    root_node->right->right->right = new Node(8);
    root_node->right->right->right->left = new Node(9);
    root_node->right->right->right->right = new Node(10);
    int result = maxDepth(root_node);
    cout<<result<<endl;
    return 0;
}*/

// leaf_node_count_query:

/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    int val;
    Node* left;
    Node* right;
    Node(int value) {
        val = value;
        left = right = NULL;
    }
};
int leafNodeCount(Node* root_node) {
    if(root_node==NULL) {
        return 0;
    }
    else if(root_node->left==NULL and root_node->right==NULL) {
    return 1;
    }
    int leftLeafNodes = leafNodeCount(root_node->left);
    int rightLeafNodes = leafNodeCount(root_node->right);
    return leftLeafNodes+rightLeafNodes;
}
int main() {
    Node* root_node = new Node(1);
    root_node->left = new Node(2);
    root_node->right = new Node(3);
    root_node->left->left = new Node(4);
    root_node->left->right = new Node(5);
    root_node->right->left = new Node(6);
    root_node->right->right = new Node(7);
    root_node->right->right->right = new Node(8);
    root_node->right->right->right->left = new Node(9);
    root_node->right->right->right->right = new Node(10);
    int result = leafNodeCount(root_node);
    cout<<result<<endl;
    return 0;
}*/

// query to print the values of all the nodes which are present in the right most:
/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    int val;
    Node* left;
    Node* right;
    Node(int value) {
        val = value;
        left = right = NULL;
    }
};
vector <int> rightMostNodes(Node* root_node, vector <int> ans) {
    if(root_node==NULL) {
        return ans;
    }else {
        ans.push_back(root_node->val);
    }return rightMostNodes(root_node->right,ans);
}
int main() {
    Node* root_node = new Node(1);
    root_node->left = new Node(2);
    root_node->right = new Node(3);
    root_node->left->left = new Node(4);
    root_node->left->right = new Node(5);
    root_node->right->left = new Node(6);
    root_node->right->right = new Node(7);
    root_node->right->right->right = new Node(8);
    root_node->right->right->right->left = new Node(9);
    root_node->right->right->right->right = new Node(10);
    vector <int> ans;
    ans = rightMostNodes(root_node,ans);
    for(int val: ans) {
        cout<<val<<" ";
    }cout<<endl;
    return 0;
}*/

// Given a binary_tree, imagine yourself standing on the right side of it, return the values of the nodes that you can see from top to the bottom?

/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    int val;
    Node* left;
    Node* right;
    Node(int value) {
        val = value;
        left = right = NULL;
    }
};
vector <int> rightViewNodes(Node* root_node, vector <int> ans) {
    if(root_node==NULL) {
        ans.push_back(-1);
        return ans;
    }
    queue <Node*> q;
    q.push(root_node);
    while(!q.empty()) {
        int currentSize = q.size();
        while(currentSize){
        if(q.front()->left){q.push(q.front()->left);}
        if(q.front()->right){q.push(q.front()->right);}
        if(currentSize==1) {
            ans.push_back(q.front()->val);
        }currentSize--;
        q.pop();
        }
    }return ans;
}
int main() {
    Node* root_node = new Node(1);
    root_node->left = new Node(2);
    root_node->right = new Node(3);
    root_node->left->left = new Node(4);
    root_node->left->right = new Node(5);
    root_node->left->right->left = new Node(11);
    root_node->left->right->right = new Node(12);
    root_node->left->right->left->right = new Node(13);
    root_node->left->right->left->left = new Node(14);
    root_node->left->right->left->left->left = new Node(15);
    root_node->right->left = new Node(6);
    root_node->right->right = new Node(7);
    root_node->right->right->right = new Node(8);
    root_node->right->right->right->left = new Node(9);
    root_node->right->right->right->right = new Node(10);
    vector <int> ans;
    ans = rightViewNodes(root_node,ans);
    for(int val: ans) {
        cout<<val<<" ";
    }cout<<endl;
    return 0;
}*/

// printing the top view of a binary_tree:
/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    int val;
    Node* left;
    Node* right;
    Node(int value) {
        val = value;
        left = right = NULL;
    }
};
vector <int> topViewNodes(Node* root_node, vector <int> ans) {
    if(root_node==NULL) {
        ans.push_back(-1);
        return ans;
    }
    queue <pair<Node*,int>> q;
    q.push(make_pair(root_node,0));
    map <int,int> col_ans;
    while(!q.empty()) {
        int currentSize = q.size();
        while(currentSize){
        if(q.front().first->left){q.push(make_pair(q.front().first->left,q.front().second-1));}
        if(q.front().first->right){q.push(make_pair(q.front().first->right,q.front().second+1));}
        currentSize--;
        if(col_ans.find(q.front().second)==col_ans.end()) {
            col_ans[q.front().second] = q.front().first->val;
        }
        q.pop();
        }
    }for(auto key_val: col_ans) {
        ans.push_back(key_val.second);
    }return ans;
}void printNodesInLevelOrder(Node* root_node) {
    if(root_node==NULL) {
        cout<<-1<<endl;
        return;
    }else {
        queue <Node*> q;
        q.push(root_node);
        while(not q.empty()) {
            int currentSize = q.size();
            while(currentSize) {
                cout<<q.front()->val<<" ";
                if(q.front()->left) {q.push(q.front()->left);}
                if(q.front()->right) {q.push(q.front()->right);}
                currentSize--;
                q.pop();
        }cout<<endl;
       }
    }return;
}
int main() {
    Node* root_node = new Node(1);
    root_node->left = new Node(2);
    root_node->right = new Node(3);
    root_node->left->left = new Node(4);
    root_node->left->right = new Node(5);
    root_node->left->right->left = new Node(11);
    root_node->left->right->right = new Node(12);
    root_node->left->right->left->right = new Node(13);
    root_node->left->right->left->left = new Node(14);
    root_node->left->right->left->left->left = new Node(15);
    root_node->right->left = new Node(6);
    root_node->right->right = new Node(7);
    root_node->right->right->right = new Node(8);
    root_node->right->right->right->left = new Node(9);
    root_node->right->right->right->right = new Node(10);
    printNodesInLevelOrder(root_node);
    vector <int> ans;
    ans = topViewNodes(root_node,ans);
    for(int val: ans) {
        cout<<val<<" ";
    }cout<<endl;
    return 0;
}*/

// printing the bottom view of a binary_tree:
/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    int val;
    Node* left;
    Node* right;
    Node(int value) {
        val = value;
        left = right = NULL;
    }
};
vector <int> bottomViewNodes(Node* root_node, vector <int> ans) {
    if(root_node==NULL) {
        ans.push_back(-1);
        return ans;
    }
    queue <pair<Node*,int>> q;
    q.push(make_pair(root_node,0));
    map <int,int> col_ans;
    while(!q.empty()) {
        int currentSize = q.size();
        while(currentSize){
        if(q.front().first->left){q.push(make_pair(q.front().first->left,q.front().second-1));}
        if(q.front().first->right){q.push(make_pair(q.front().first->right,q.front().second+1));}
        currentSize--;
        if(col_ans.find(q.front().second)==col_ans.end()) {
            col_ans[q.front().second] = q.front().first->val;
        }else{
            col_ans[q.front().second] = q.front().first->val;
        }
        q.pop();
        }
    }for(auto key_val: col_ans) {
        ans.push_back(key_val.second);
    }return ans;
}void printNodesInLevelOrder(Node* root_node) {
    if(root_node==NULL) {
        cout<<-1<<endl;
        return;
    }else {
        queue <Node*> q;
        q.push(root_node);
        while(not q.empty()) {
            int currentSize = q.size();
            while(currentSize) {
                cout<<q.front()->val<<" ";
                if(q.front()->left) {q.push(q.front()->left);}
                if(q.front()->right) {q.push(q.front()->right);}
                currentSize--;
                q.pop();
        }cout<<endl;
       }
    }return;
}
int main() {
    Node* root_node = new Node(1);
    root_node->left = new Node(2);
    root_node->right = new Node(3);
    root_node->left->left = new Node(4);
    root_node->left->right = new Node(5);
    root_node->left->right->left = new Node(11);
    root_node->left->right->right = new Node(12);
    root_node->left->right->left->right = new Node(13);
    root_node->left->right->left->left = new Node(14);
    root_node->left->right->left->left->left = new Node(15);
    root_node->right->left = new Node(6);
    root_node->right->right = new Node(7);
    root_node->right->right->right = new Node(8);
    root_node->right->right->right->left = new Node(9);
    root_node->right->right->right->right = new Node(10);
    printNodesInLevelOrder(root_node);
    vector <int> ans;
    ans = bottomViewNodes(root_node,ans);
    for(int val: ans) {
        cout<<val<<" ";
    }cout<<endl;
    return 0;
}*/

// printing the levelOrder in reverse order:
/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    int val;
    Node* left;
    Node* right;
    Node(int value) {
        val = value;
        left = right = NULL;
    }
};
vector <vector <int> > printNodesInLevelOrder(Node* root_node, vector<vector <int>>ans) {
    if(root_node==NULL) {
       cout<<-1<<endl;
        return ans;
    }else {
        queue <Node*> q;
        q.push(root_node);
        while(not q.empty()) {
            vector <int> vec;
            int currentSize = q.size();
            while(currentSize) {
                vec.push_back(q.front()->val);
                if(q.front()->left) {q.push(q.front()->left);}
                if(q.front()->right) {q.push(q.front()->right);}
                currentSize--;
                q.pop();
        }ans.push_back(vec);
       }
    }return ans;
}
int main() {
    Node* root_node = new Node(1);
    root_node->left = new Node(2);
    root_node->right = new Node(3);
    root_node->left->left = new Node(4);
    root_node->left->right = new Node(5);
    root_node->left->right->left = new Node(11);
    root_node->left->right->right = new Node(12);
    root_node->left->right->left->right = new Node(13);
    root_node->left->right->left->left = new Node(14);
    root_node->left->right->left->left->left = new Node(15);
    root_node->right->left = new Node(6);
    root_node->right->right = new Node(7);
    root_node->right->right->right = new Node(8);
    root_node->right->right->right->left = new Node(9);
    root_node->right->right->right->right = new Node(10);
    vector <vector <int>> ans;
    ans = printNodesInLevelOrder(root_node,ans);
    reverse(ans.begin(),ans.end());
    for(auto vec: ans) {
        for(int val: vec) {
            cout<<val<<" ";
        }
    }cout<<endl;
    return 0;
}*/

// Above_query_aliter:
/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    int val;
    Node* left;
    Node* right;
    Node(int value) {
        val = value;
        left = right = NULL;
    }
};
vector <int> printNodesInLevelOrder(Node* root_node, vector<int>ans) {
    if(root_node==NULL) {
       cout<<-1<<endl;
        return ans;
    }else {
        stack <Node*> st;
        queue <Node*> q;
        q.push(root_node);
        while(not q.empty()) {
            int currentSize = q.size();
            while(currentSize) {
                if(q.front()->right) {q.push(q.front()->right);}
                if(q.front()->left) {q.push(q.front()->left);}
                currentSize--;
                st.push(q.front());
                q.pop();
        }
       }while(not st.empty()) {
           ans.push_back(st.top()->val);
           st.pop();
       }
    }return ans;
}
int main() {
    Node* root_node = new Node(1);
    root_node->left = new Node(2);
    root_node->right = new Node(3);
    root_node->left->left = new Node(4);
    root_node->left->right = new Node(5);
    root_node->left->right->left = new Node(11);
    root_node->left->right->right = new Node(12);
    root_node->left->right->left->right = new Node(13);
    root_node->left->right->left->left = new Node(14);
    root_node->left->right->left->left->left = new Node(15);
    root_node->right->left = new Node(6);
    root_node->right->right = new Node(7);
    root_node->right->right->right = new Node(8);
    root_node->right->right->right->left = new Node(9);
    root_node->right->right->right->right = new Node(10);
    vector <int> ans;
    ans = printNodesInLevelOrder(root_node,ans);
    for(int val: ans) {
        cout<<val<<" ";
    }cout<<endl;
    return 0;
}*/

// printing leftView nodes:
/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    int val;
    Node* left;
    Node* right;
    Node(int value) {
        val = value;
        left = right = NULL;
    }
};
vector <int> leftViewNodes(Node* root_node, vector <int> ans) {
    if(root_node==NULL) {
        ans.push_back(-1);
        return ans;
    }
    queue <Node*> q;
    q.push(root_node);
    while(!q.empty()) {
        int i = 0;
        int currentSize = q.size();
        while(currentSize){
        if(i==0) {
            ans.push_back(q.front()->val);
            i++;
        }
        if(q.front()->left){q.push(q.front()->left);}
        if(q.front()->right){q.push(q.front()->right);}
        currentSize--;
        q.pop();
        }
    }return ans;
}
int main() {
    Node* root_node = new Node(1);
    root_node->left = new Node(2);
    root_node->right = new Node(3);
    root_node->left->left = new Node(4);
    root_node->left->right = new Node(5);
    root_node->left->right->left = new Node(11);
    root_node->left->right->right = new Node(12);
    root_node->left->right->left->right = new Node(13);
    root_node->left->right->left->left = new Node(14);
    root_node->left->right->left->left->left = new Node(15);
    root_node->right->left = new Node(6);
    root_node->right->right = new Node(7);
    root_node->right->right->right = new Node(8);
    root_node->right->right->right->left = new Node(9);
    root_node->right->right->right->right = new Node(10);
    // Node* root_node = new Node(4);
    // root_node->right = new Node(2);
    // root_node->left = new Node(5);
    // root_node->right->right = new Node(1);
    // root_node->right->left = new Node(3);
    // root_node->right->left->right = new Node(7);
    // root_node->right->left->left = new Node(6);
    // Node* root_node = new Node(5);
    // root_node->right = new Node(10);
    // root_node->left = new Node(7);
    // root_node->right->right = new Node(15);
    // root_node->right->left = new Node(30);
    // root_node->right->right->right = new Node(25);
    // root_node->left->right = new Node(19);
    // root_node->left->left = new Node(14);
    vector <int> ans;
    ans = leftViewNodes(root_node,ans);
    for(int val: ans) {
        cout<<val<<" ";
    }cout<<endl;
    return 0;
}*/

// Q8. Check if two nodes are cousins in a Binary Tree:
/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    int val;
    Node* left;
    Node* right;
    Node(int value) {
        val = value;
        left = right = NULL;
    }
};
bool checkCousinNodes(Node* root_node, int x, int y) {
    if(root_node==NULL) {
       cout<<-1<<endl;
       return false;
    }
    queue <pair<Node*,Node*>> q;
    q.push(make_pair(root_node,root_node));
    while(!q.empty()) {
        int currentSize = q.size();
        unordered_map <int,Node*> required;
        while(currentSize){
        if(q.front().first->left){q.push(make_pair(q.front().first->left,q.front().first));}
        if(q.front().first->right){q.push(make_pair(q.front().first->right,q.front().first));}
        currentSize--;
        required.insert(make_pair(q.front().first->val,q.front().second));
        q.pop();
        }auto itr_x = required.find(x);
        auto itr_y = required.find(y);
        if(itr_x!=required.end()) {
            if(itr_y!=required.end()) {
                if(itr_x->second!=itr_y->second) {
                    return true;
                }
            }
        }
    }return false;
}
int main() {
    // Node* root_node = new Node(1);
    // root_node->left = new Node(2);
    // root_node->right = new Node(3);
    // root_node->left->left = new Node(4);
    // root_node->left->right = new Node(5);
    // root_node->left->right->left = new Node(11);
    // root_node->left->right->right = new Node(12);
    // root_node->left->right->left->right = new Node(13);
    // root_node->left->right->left->left = new Node(14);
    // root_node->left->right->left->left->left = new Node(15);
    // root_node->right->left = new Node(6);
    // root_node->right->right = new Node(7);
    // root_node->right->right->right = new Node(8);
    // root_node->right->right->right->left = new Node(9);
    // root_node->right->right->right->right = new Node(10);
    // Node* root_node = new Node(4);
    // root_node->right = new Node(2);
    // root_node->left = new Node(5);
    // root_node->right->right = new Node(1);
    // root_node->right->left = new Node(3);
    // root_node->right->left->right = new Node(7);
    // root_node->right->left->left = new Node(6);
    // Node* root_node = new Node(5);
    // root_node->right = new Node(10);
    // root_node->left = new Node(7);
    // root_node->right->right = new Node(15);
    // root_node->right->left = new Node(30);
    // root_node->right->right->right = new Node(25);
    // root_node->left->right = new Node(19);
    // root_node->left->left = new Node(14);
    Node* root_node = new Node(1);
    root_node->right = new Node(2);
    root_node->right->right = new Node(6);
    root_node->right->left = new Node(5);
    root_node->left = new Node(3);
    root_node->left->left = new Node(4);
    int x,y; 
    cout<<"enter x: ";
    cin>>x;
    cout<<"enter y: ";
    cin>>y;
    bool result = checkCousinNodes(root_node,x,y);
    if(result) {
        cout<<"Yes"<<endl;
    }else {
        cout<<"No"<<endl;
    }return 0;
}*/

// Write a program to count the total number of nodes in a binary tree:
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
};
int totalNoOfNodes(Node* root_node) {
    queue <Node*> q;
    int size = 0;
    q.push(root_node);
    size++;
    while(!q.empty()) {
            if(q.front()->left) {
                q.push(q.front()->left);
                size++;
            }if(q.front()->right) {
                q.push(q.front()->right);
                size++;
            }q.pop();
    }return size;
}
int main() {
    Node* root_node = new Node(1);
    root_node->right = new Node(2);
    root_node->right->right = new Node(6);
    root_node->right->left = new Node(5);
    root_node->left = new Node(3);
    root_node->left->left = new Node(4);
    cout<<totalNoOfNodes(root_node)<<endl;
    return 0;
}*/

// Implement a function to calculate the height of a binary tree:
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
};
int heightOfTrees(Node* root_node) {
    queue <Node*> q;
    int height = -1;
    q.push(root_node);
    while(!q.empty()) {
        int currentSize = q.size();
        while(currentSize) {
            if(q.front()->left) {
                q.push(q.front()->left);
            }if(q.front()->right) {
                q.push(q.front()->right);
            }q.pop();
            currentSize--;
        }height++;
    }return height;
}
int main() {
    Node* root_node = new Node(1);
    root_node->left = new Node(2);
    root_node->right = new Node(3);
    root_node->left->left = new Node(4);
    root_node->left->right = new Node(5);
    root_node->left->right->left = new Node(11);
    root_node->left->right->right = new Node(12);
    root_node->left->right->left->right = new Node(13);
    root_node->left->right->left->left = new Node(14);
    root_node->left->right->left->left->left = new Node(15);
    root_node->right->left = new Node(6);
    root_node->right->right = new Node(7);
    root_node->right->right->right = new Node(8);
    root_node->right->right->right->left = new Node(9);
    root_node->right->right->right->right = new Node(10);
    cout<<heightOfTrees(root_node)<<endl;
    return 0;
}*/

// Write a function to find the maximum value in a binary tree:
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
};
int maxNodeOfBinaryTree(Node* root_node) {
    queue <Node*> q;
    q.push(root_node);
    int max = q.front()->val;
    while(!q.empty()) {
            if(q.front()->left) {
                q.push(q.front()->left);
            }if(q.front()->right) {
                q.push(q.front()->right);
            }if(max<q.front()->val){
                max = q.front()->val;
            }q.pop();
    }return max;
}
int main() {
    Node* root_node = new Node(1);
    root_node->left = new Node(2);
    root_node->right = new Node(3);
    root_node->left->left = new Node(4);
    root_node->left->right = new Node(5);
    root_node->left->right->left = new Node(11);
    root_node->left->right->right = new Node(12);
    root_node->left->right->left->right = new Node(13);
    root_node->left->right->left->left = new Node(14);
    root_node->left->right->left->left->left = new Node(15);
    root_node->right->left = new Node(6);
    root_node->right->right = new Node(7);
    root_node->right->right->right = new Node(8);
    root_node->right->right->right->left = new Node(9);
    root_node->right->right->right->right = new Node(10);
    cout<<maxNodeOfBinaryTree(root_node)<<endl;
    return 0;
}*/

// Write a program to find the lowest common ancestor (LCA) of two nodes in a binary tree.
/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    int val;
    Node* left;
    Node* right;
    Node(int value) {
        val = value;
        left = right = NULL;
    }
};
int lca(Node* root_node, int x, int y) {
    if(root_node==NULL) {
       cout<<-1<<endl;
       return -1;
    }
    queue <pair<Node*,Node*>> q;
    unordered_map <int,Node*> required;
    q.push(make_pair(root_node,root_node));
    required.insert(make_pair(q.front().first->val,q.front().second));
    while(!q.empty()) {
        if(q.front().first->left){q.push(make_pair(q.front().first->left,q.front().first));}
        if(q.front().first->right){q.push(make_pair(q.front().first->right,q.front().first));}
        required.insert(make_pair(q.front().first->val,q.front().second));
        q.pop();
    }auto itr_x = required.find(x);
    auto itr_y = required.find(y);
    if(itr_x->second->val==y) {
        return y;
    }else if(itr_y->second->val==x){
        return x;
    }else {
    while(itr_x->second!=itr_y->second) {
        itr_x = required.find(itr_x->second->val);
        itr_y = required.find(itr_y->second->val);
        }
    }return itr_x->second->val;
}
int main() {
    Node* root_node = new Node(1);
    root_node->right = new Node(2);
    root_node->right->right = new Node(6);
    root_node->right->left = new Node(5);
    root_node->left = new Node(3);
    root_node->left->left = new Node(4);
    int x,y; 
    cout<<"enter x: ";
    cin>>x;
    cout<<"enter y: ";
    cin>>y;
    int result = lca(root_node,x,y);
    if(result!=-1) {
        cout<<result<<endl;
    }else {
        cout<<"NULL"<<endl;
    }return 0;
}*/

// Implement a function to check if a binary tree is balanced (the heights of the two subtrees of any node differ by at most one):
/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    int val;
    Node* left;
    Node* right;
    Node(int value) {
        val = value;
        left = right = NULL;
    }
};
int getBTreeHeight(Node* root_node) {
    queue <Node*> q;
    q.push(root_node);
    int ht = -1;
    while(!q.empty()){
        int currentSize = q.size();
        while(currentSize) {
            if(q.front()->right){
                q.push(q.front()->right);
            }if(q.front()->left){
                q.push(q.front()->left);
            }currentSize--;
            q.pop();
        }ht++;
    }return ht;
}
bool isBTreeBalanced(Node* root_node) {
        bool result = false;
        int right_ht = 0;
        int left_ht = 0;
        if(root_node->right){
            right_ht += getBTreeHeight(root_node->right);
        }if(root_node->left){
            left_ht += getBTreeHeight(root_node->left);
        }if(right_ht-left_ht<2 and right_ht-left_ht>-2) {
            result = true;
        }if(result==false){
            return result;
        }else{
            if(root_node->right) {
                result = isBTreeBalanced(root_node->right);
            }if(root_node->left){
                result = isBTreeBalanced(root_node->left);
            }
        }return result;
}
int main() {
    Node* root_node = new Node(1);
    root_node->left = new Node(2);
    root_node->left->left = new Node(3);
    root_node->right = new Node(4);
    bool result = isBTreeBalanced(root_node);
    if(result){
        cout<<"yeah, BTree is Balanced."<<endl;
    }else{
        cout<<"No, BTree is not Balanced."<<endl;
    }return 0;
}*/

// Given a binary tree, write a program to find the diameter of the tree (the longest path between any two nodes):
/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    int val;
    Node* left;
    Node* right;
    Node(int value) {
        val = value;
        left = right = NULL;
    }
};
int getBTreeHeight(Node* root_node) {
    queue <Node*> q;
    q.push(root_node);
    int ht = -1;
    while(!q.empty()){
        int currentSize = q.size();
        while(currentSize) {
            if(q.front()->right){
                q.push(q.front()->right);
            }if(q.front()->left){
                q.push(q.front()->left);
            }currentSize--;
            q.pop();
        }ht++;
    }return ht;
}
int getDiameter(Node* root_node, int dia) {
        int right_ht = 1;
        int left_ht = 1;
        if(root_node->right){
            right_ht += getBTreeHeight(root_node->right);
        }if(root_node->left){
            left_ht += getBTreeHeight(root_node->left);
        }if(right_ht+left_ht+1>dia) {
            dia = right_ht+left_ht+1;
        if(root_node->left){return getDiameter(root_node->left,dia);}
        if(root_node->right){return getDiameter(root_node->right,dia);}
        }return dia;
}
int main() {
    Node* root_node = new Node(1);
    root_node->left = new Node(2);
    root_node->right = new Node(3);
    root_node->left->left = new Node(4);
    root_node->left->right = new Node(5);
    root_node->left->right->left = new Node(11);
    root_node->left->right->right = new Node(12);
    root_node->left->right->left->right = new Node(13);
    root_node->left->right->left->left = new Node(14);
    root_node->left->right->left->left->left = new Node(15);
    root_node->right->left = new Node(6);
    root_node->right->right = new Node(7);
    root_node->right->right->right = new Node(8);
    root_node->right->right->right->left = new Node(9);
    root_node->right->right->right->right = new Node(10);
    cout<<getDiameter(root_node,0)<<endl;
    return 0;
}*/

// Implement a function to perform a mirror reflection of a binary tree (swap the left and right children of each node):

/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    int val;
    Node* left;
    Node* right;
    Node(int value) {
        val = value;
        left = right = NULL;
    }
};
void levelOrderTraversal(Node* root_node){
    queue <Node*> q;
    q.push(root_node);
    while(!q.empty()){
        int currentSize = q.size();
        while(currentSize){
            if(q.front()->right){
                q.push(q.front()->right);
            }if(q.front()->left){
                q.push(q.front()->left);
            }cout<<q.front()->val<<" ";
            currentSize--;
            q.pop();
        }cout<<endl;
    }return;
}
void getMirrorReflectionOfBTree(Node* root_node) {
    queue <Node*> q;
    q.push(root_node);
    while(!q.empty()){
            if(q.front()->right){
                q.push(q.front()->right);
            }if(q.front()->left){
                q.push(q.front()->left);
            }swap(q.front()->right,q.front()->left);
            q.pop();
    }return;
}
int main() {
    Node* root_node = new Node(1);
    root_node->left = new Node(2);
    root_node->right = new Node(3);
    root_node->left->left = new Node(4);
    root_node->left->right = new Node(5);
    root_node->left->right->left = new Node(11);
    root_node->left->right->right = new Node(12);
    root_node->left->right->left->right = new Node(13);
    root_node->left->right->left->left = new Node(14);
    root_node->left->right->left->left->left = new Node(15);
    root_node->right->left = new Node(6);
    root_node->right->right = new Node(7);
    root_node->right->right->right = new Node(8);
    root_node->right->right->right->left = new Node(9);
    root_node->right->right->right->right = new Node(10);
    levelOrderTraversal(root_node);
    getMirrorReflectionOfBTree(root_node);
    cout<<endl;
    levelOrderTraversal(root_node);
    return 0;
}*/

// Returning the no. of paths of given target_sum are present in a given BTree:
/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    int val;
    Node* left;
    Node* right;
    Node(int value) {
        val = value;
        left = right = NULL;
    }
};
int countPathHelper(Node* root_node,int targetSum,int currentSum,unordered_map <long int, int>countPath) {
    if(root_node==NULL) {
        return 0;
    }
    currentSum += root_node->val;
    int countAns = countPath[currentSum-targetSum];
    countPath[currentSum]++;
    countAns += countPathHelper(root_node->left,targetSum,currentSum,countPath)+countPathHelper(root_node->right,targetSum,currentSum,countPath);
    countPath[currentSum]--;
    return countAns;
}
int targetSumPaths(Node* root_node, int targetSum) {
    unordered_map <long int, int> countPath;
    countPath[0] = 1;
    int currentSum = 0;
    return countPathHelper(root_node,targetSum,currentSum,countPath);
}
int main() {
    Node* root_node = new Node(10);
    root_node->left = new Node(5);
    root_node->right = new Node(-3);
    root_node->left->left = new Node(3);
    root_node->left->right = new Node(2);
    root_node->left->left->left = new Node(3);
    root_node->left->left->right = new Node(-2);
    root_node->left->right->right = new Node(1);
    root_node->right->right = new Node(11);
    int targetSum = 8;
    cout<<targetSumPaths(root_node,targetSum)<<endl;
    return 0;
    // tc: O(N);
    // sc: O(N);
}
*/

// Return the maximum in b/w any two nodes:

/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    int val;
    Node* left;
    Node* right;
    Node(int value) {
        val = value;
        left = right = NULL;
    }
};
int maxSumHelper(Node* root_node, int &maxSum) {
    if(root_node==NULL) {
        return 0;
    }int leftMaxSum = max(0,maxSumHelper(root_node->left, maxSum));
    int rightMaxSum = max(0,maxSumHelper(root_node->right, maxSum));
    maxSum = max(maxSum, root_node->val+leftMaxSum+rightMaxSum);
    return root_node->val + max(leftMaxSum,rightMaxSum);
}
int getMaxSum(Node* root_node) {
    int maxSum = -100000;
    maxSumHelper(root_node,maxSum);
    return maxSum;
}
int main() {
    Node* root_node = new Node(10);
    root_node->left = new Node(2);
    root_node->right = new Node(6);
    root_node->right->left = new Node(4);
    root_node->right->right = new Node(5);
    cout<<getMaxSum(root_node)<<endl;
    return 0;
    
    // tc: O(N);
    // sc: O(N);
}*/

// Building a BinaryTree using the given preorder and inorder:

/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    int val;
    Node* left;
    Node* right;
    Node(int value) {
        val = value;
        left = right = NULL;
    }
};
void levelOrderTraversal(Node* root_node) {
    if(root_node==NULL) {
        cout<<-1<<endl;
        return;
    }else {
        queue <Node*> q;
        q.push(root_node);
        while(!q.empty()) {
            int currentSize = q.size();
            while(currentSize) {
                cout<<q.front()->val<<" ";
                if(q.front()->left) {
                    q.push(q.front()->left);
                }if(q.front()->right) {
                    q.push(q.front()->right);
                }currentSize--;
                q.pop();
            }cout<<endl;
        }
    }return;
}
Node* getRootNodeHelper(vector <int> &preorder, int prestart, int preend, vector <int> &inorder, int instart, int inend, unordered_map <int,int> &inmap) {
    if(prestart>preend or instart>inend) {
        return NULL;
    }Node* root_node = new Node(preorder[prestart]);
    int inRootIdx = inmap[root_node->val];
    int leftSubtreeSize = inRootIdx-instart;
    root_node->left = getRootNodeHelper(preorder,prestart+1,prestart+leftSubtreeSize,inorder,instart,inRootIdx-1,inmap);
    root_node->right = getRootNodeHelper(preorder,prestart+leftSubtreeSize+1,preend,inorder,inRootIdx+1,inend,inmap);
    return root_node;
}
Node* getRootNode(vector <int> preorder, vector <int> inorder) {
    unordered_map <int,int> inmap;
    for(int i=0; i<inorder.size(); i++) {
        inmap[inorder[i]] = i;
    }int instart = 0;
    int inend = inorder.size()-1;
    int prestart = 0;
    int preend = preorder.size()-1;
    return getRootNodeHelper(preorder,prestart,preend,inorder,instart,inend,inmap);
}
int main() {
    vector <int> preorder = {3,9,20,15,7};
    vector <int> inorder = {9,3,15,20,7};
    Node* root_node = getRootNode(preorder,inorder);
    levelOrderTraversal(root_node);
    return 0;
    // tc: O(N);
    // sc: O(N);
}*/
    
// Building a BinaryTree using the given postorder and inorder:
    
/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    int val;
    Node* left;
    Node* right;
    Node(int value) {
        val = value;
        left = right = NULL;
    }
};
void levelOrderTraversal(Node* root_node) {
    if(root_node==NULL) {
        cout<<-1<<endl;
        return;
    }else {
        queue <Node*> q;
        q.push(root_node);
        while(!q.empty()) {
            int currentSize = q.size();
            while(currentSize) {
                cout<<q.front()->val<<" ";
                if(q.front()->left) {
                    q.push(q.front()->left);
                }if(q.front()->right) {
                    q.push(q.front()->right);
                }currentSize--;
                q.pop();
            }cout<<endl;
        }
    }return;
}
Node* getRootNodeHelper(vector <int> &postorder, int poststart, int postend, vector <int> &inorder, int instart, int inend, unordered_map <int,int> &inmap) {
    if(poststart>postend or instart>inend) {
        return NULL;
    }Node* root_node = new Node(postorder[postend]);
    int inRootIdx = inmap[root_node->val];
    int leftSubtreeSize = inRootIdx-instart;
    root_node->left = getRootNodeHelper(postorder,poststart,poststart+leftSubtreeSize-1,inorder,instart,inRootIdx-1,inmap);
    root_node->right = getRootNodeHelper(postorder,leftSubtreeSize+1,postend-1,inorder,inRootIdx+1,inend,inmap);
    return root_node;
}
Node* getRootNode(vector <int> postorder, vector <int> inorder) {
    unordered_map <int,int> inmap;
    for(int i=0; i<inorder.size(); i++) {
        inmap[inorder[i]] = i;
    }int instart = 0;
    int inend = inorder.size()-1;
    int poststart = 0;
    int postend = postorder.size()-1;
    return getRootNodeHelper(postorder,poststart,postend,inorder,instart,inend,inmap);
}
int main() {
    vector <int> postorder = {9,20,7,15,3};
    vector <int> inorder = {9,3,15,20,7};
    Node* root_node = getRootNode(postorder,inorder);
    levelOrderTraversal(root_node);
    return 0;
    // tc: O(N);
    // sc: O(N);
}
*/

// Building a BinaryTree using preorder and postorder Traversals:

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//     Node* left;
//     Node* right;
//     int val;
//     Node(int value) {
//         left = right = NULL;
//         val = value;
//     }
// };
// void levelOrderTraversal(Node* root_node) {
//     if(root_node==NULL) {
//         cout<<-1<<endl;
//         return;
//     }else {
//         queue <Node*> q;
//         q.push(root_node);
//         while(!q.empty()) {
//             int currentSize = q.size();
//             while(currentSize) {
//                 cout<<q.front()->val<<" ";
//                 if(q.front()->left) {
//                     q.push(q.front()->left);
//                 }if(q.front()->right) {
//                     q.push(q.front()->right);
//                 }currentSize--;
//                 q.pop();
//             }cout<<endl;
//         }
//     }return;
// }
// Node* getRootNodeHelper(vector <int> &preorder, int prestart, int preend, vector <int> &postorder , int poststart, int postend, unordered_map <int, int> &postmap) {
//     if (prestart>preend or poststart>postend) {
//         return NULL;
//     }Node* root_node = new Node(preorder[prestart]);
//     int leftchildval = preorder[prestart+1];
//     int leftchildidx = postmap[leftchildval];
//     int leftSubtreeSize = leftchildidx-poststart+1;
//     if(prestart==preend) {
//         return root_node;
//     }else{
//         root_node->left = getRootNodeHelper(preorder,prestart+1,prestart+leftSubtreeSize,postorder,poststart,leftchildidx,postmap);
//         root_node->right = getRootNodeHelper(preorder,prestart+leftSubtreeSize+1,preend,postorder,leftchildidx+1,postend-1,postmap);
//     }return root_node;
// }
// Node* getRootNode(vector <int> &preorder, vector <int> &postorder) {
//     unordered_map <int,int> postmap;
//     for(int i=0; i<postorder.size(); i++) {
//         postmap[postorder[i]] = i;
//     }int poststart = 0;
//     int postend = postorder.size()-1;
//     int prestart = 0;
//     int preend = preorder.size()-1;
//     return getRootNodeHelper(preorder,prestart,preend,postorder,poststart,postend,postmap);
// }
// int main() {
//     vector <int> preorder = {3,9,20,15,7};
//     vector <int> postorder = {9,20,7,15,3};
//     Node* root_node = getRootNode(preorder,postorder);
//     levelOrderTraversal(root_node);
//     return 0;
//     // sc: O(N);
//     // tc: O(N);
// }

// flattening a BinaryTree in reverse preorder traversal manner:
/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    int val;
    Node* left;
    Node* right;
    Node(int value) {
        val = value;
        left = right = NULL;
    }
};
void printBTreeInLList(Node* root_node) {
    if(root_node==NULL) {
        return;
    }else {
        Node* temp = root_node;
        while(temp!=NULL) {
            cout<<temp->val<<"->";
            temp = temp->right;
        }cout<<"NULL"<<endl;
    }return;
}
void levelOrderTraversal(Node* root_node) {
    if(root_node==NULL) {
        cout<<-1<<endl;
        return;
    }else {
        queue <Node*> q;
        q.push(root_node);
        while(!q.empty()) {
            int currentSize = q.size();
            while(currentSize) {
                cout<<q.front()->val<<" ";
                if(q.front()->left) {
                    q.push(q.front()->left);
                }if(q.front()->right) {
                    q.push(q.front()->right);
                }currentSize--;
                q.pop();
            }cout<<endl;
        }
    }return;
}

Node* lastNode = NULL;
void flattenBTree(Node* root_node) {
    if(root_node==NULL) {
        return;
    }else {
        flattenBTree(root_node->right);
        flattenBTree(root_node->left);
        root_node->right = lastNode;
        root_node->left = NULL;
        lastNode = root_node;
    }return;
}
int main() {
    Node* root_node = new Node(3);
    root_node->left = new Node(9);
    root_node->right = new Node(15);
    root_node->right->right = new Node(7);
    root_node->right->left = new Node(20);
    flattenBTree(root_node);
    printBTreeInLList(root_node);
    return 0;
    // tc: O(N);
    // sc: O(N);
}
*/

// Infection Time problem:

/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    int val;
    Node* left;
    Node* right;
    Node(int value) {
        val = value;
        left = right = NULL;
    }
};
void levelOrderTraversal(Node* root_node) {
    if(root_node==NULL) {
        cout<<-1<<endl;
        return;
    }else {
        queue <Node*> q;
        q.push(root_node);
        while(!q.empty()) {
            int currentSize = q.size();
            while(currentSize) {
                cout<<q.front()->val<<" ";
                if(q.front()->left) {
                    q.push(q.front()->left);
                }if(q.front()->right) {
                    q.push(q.front()->right);
                }currentSize--;
                q.pop();
            }cout<<endl;
        }
    }return;
}Node* makeParentMap(Node* root_node,  unordered_map <Node*, Node*> &parentMap, int startVal) {
    Node* startNode;
    if(root_node==NULL) {
        startNode = NULL;
    }else{
         queue <Node*> q;
         q.push(root_node);
         while(!q.empty()) {
            int currentSize = q.size();
            while(currentSize) {
                if(q.front()->left) {
                    parentMap[q.front()->left] = q.front();
                    q.push(q.front()->left);
                }if(q.front()->right){
                    parentMap[q.front()->right] = root_node;
                    q.push(q.front()->right);
                }if(startVal==q.front()->val){
                    startNode = q.front();
                }
            q.pop();
            currentSize--;
            }
         }
    }return startNode;
}int getInfectionTime(Node* startNode, unordered_map <Node*, Node*> &parentMap) {
    int infectionTime = 0;
    unordered_set <Node*> infectedSet;
    if(startNode==NULL) {
        return 0;
    }else {
        queue <Node*> q;
        q.push(startNode);
        while(!q.empty()) {
            int currentSize = q.size();
            bool infectedFlag = false;
            while(currentSize) {
                if(q.front()->left and !infectedSet.count(q.front()->left)) {
                    infectedSet.insert(q.front()->left);
                    q.push(q.front()->left);
                    infectedFlag = true;
                }if(q.front()->right and !infectedSet.count(q.front()->right)) {
                    infectedSet.insert(q.front()->right);
                    q.push(q.front()->right);
                    infectedFlag = true;
                }if(parentMap[q.front()] and !infectedSet.count(parentMap[q.front()])) {
                    infectedSet.insert(parentMap[q.front()]);
                    q.push(parentMap[q.front()]);
                    infectedFlag = true;
                }q.pop();
                currentSize--;
            }if(infectedFlag) {
                infectionTime++;
            }
        }
    }return infectionTime;
}
int main() {
    // Node* root_node = new Node(3);
    // root_node->left = new Node(9);
    // root_node->right = new Node(15);
    // root_node->right->right = new Node(7);
    // root_node->right->left = new Node(20);
    Node* root_node = new Node(1);
    root_node->left = new Node(2);
    root_node->right = new Node(3);
    root_node->left->left = new Node(4);
    root_node->left->right = new Node(5);
    root_node->left->right->left = new Node(11);
    root_node->left->right->right = new Node(12);
    root_node->left->right->left->right = new Node(13);
    root_node->left->right->left->left = new Node(14);
    unordered_map <Node*,Node*> parentMap;
    Node* startNode = makeParentMap(root_node,parentMap,5);
    cout<<getInfectionTime(startNode, parentMap)<<endl;
    return 0;
    // tc: O(N);
    // sc: O(N);
}*/
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



void zigzagTraversal(Node* root) {
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
}



