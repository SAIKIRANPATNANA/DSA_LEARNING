// SET'S:

// 1) Ordered_Set;
// -->It's an STL used to store unique values;
// -->In it, values are stored in ordered fashion either ascending or descending;
//--> Set is Unindexed;
// -->Elements are identified by their own values;
// -->Once value is inserted in a set, it can't be modified(firstly the inserted values are to be removed and then new values are to be inserted in the same order);
// Advantages Of Sets:
// --> To store unique values;
// --> To store values in ordered manner;
//-->Sets contribute dynamic size or memory location(no overflowing error will be encountered);
//-->Possess O(LogN) Time Complexity(insertion, deletion(binary_search_tree(red_black tree) and search(binary search)));
// Disadvantages Of Sets:
// -->We can't access elements through indexing;
// -->Huge Memory Allocation and Consumption;
// -->It's not suitable for larger datasets;

// Declaration of set in cpp:
// #include <set>
// set <datatype> set_name = {x,y,z,.....}; (By default, it follows A.O);
// set <datatype, greater <datatype>> set_name = {x,y,z,.....}; (It follows D.O);

// Insertion of elements in a set:
// s.insert(a);
// s.insert(b);....
// It returns a iterator to the inserted value;

// Implementation_of_a_set:
/*#include <iostream>
#include <set>
using namespace std;
int main() {
    set <int> s1;
    s1.insert(2);
    s1.insert(1);
    s1.insert(3);
    cout<<s1.size()<<endl;
    s1.insert(2); //adding alredy occurred elements in a set won't be successful bcoz elements in a set are unique;
    cout<<s1.size()<<endl;
    return 0;
}
*/

// Traversal of a set:
// insert function would return a iterator to the inserted value;
// set_name.begin()-->iterator pointing to the first/starting element of my set;
// set_name.end()-->iterator point to the position next to my last element;

// let's see this in the code:
// #include <iostream>
/*#include <set>
using namespace std;
int main() {
    // set <int, greater<int>> set1 = {1,2,3};
    set <int> set1 = {1,2,3};
    // method_1(using for loop):
//   { // set <int> :: iterator itr;
//     for(auto itr=set1.begin(); itr!=set1.end(); itr++) {
//         cout<<*itr<<" ";
//     }cout<<endl;
//   }
    // method_2(using for_each loop):
  { for (auto value: set1) {
        cout<<value<<" ";
    }cout<<endl;
  }
    return 0;
}*/

// deleting a element from a set:
// method_1: set_name.erase(value) (tc:log(N));
// method_2: set_name.erase(position) (tc:log(N));
// method_3: set_name.erase(start_position, end_position) (tc:O(N));
// --> In this method element at start position is included while element at endposition is excluded;
/*#include <iostream>
#include <set>
using namespace std;
int main() {
    // set <int, greater<int>> set1 = {1,2,3};
    set <int> set1 = {1,2,3,4,5};
    // set1.erase(4); //method_1;
    // method_2:
    //  {set <int> :: iterator itr;
    // itr = set1.begin();
    // advance(itr,3);
    // set1.erase(itr); }
    // method_2(aliter):
    // {auto itr = set1.begin();
    // advance(itr,3);
    // set1.erase(itr);}
    // method_3:
    // {set <int> :: iterator itr1;
    // itr1 = set1.begin();
    // advance(itr1,1);
    // set <int> :: iterator itr2;
    // itr2 = set1.begin();
    // advance(itr2, 3);
    // set1.erase(itr1,itr2);
    // }
    // method_3(aliter):
    // {auto itr1 = set1.begin();
    // advance(itr1,1);
    // auto itr2 = set1.begin();
    // advance(itr2,3);
    // set1.erase(itr1,itr2);}
  { for (auto value: set1) {
        cout<<value<<" ";
    }cout<<endl;
  }
    return 0;
}*/

// Membership functions  of a set:
// -->size(): returns the size of the set_name;
// -->max_size(): returns the maximum number of elements that a set can hold;
// -->clear(): removes all elements from the set;
// -->find() : returns the position(iterator) of the element if present else returns the end_iterator of that set;
// -->count() : returns 1 if element is present else returns 0;
// -->lower_bound: returns itr of that element if that is present else it returns just greater value itr;
// -->upper_bound: always returns the itr of just greater value;

/*#include <iostream>
#include <set>
using namespace std;
void printSet( set <int> set1) {
  for (auto value: set1) {
        cout<<value<<" ";
    }cout<<endl; 
  return;
}
int main() {
  set <int> set1 = {1,2,3,4,5};
//   cout<<set1.size()<<endl;
//   cout<<set1.max_size()<<endl;
//   set1.insert(6);
//   cout<<set1.max_size()<<endl;
//   printSet(set1);
//   set1.clear();
//   printSet(set1);
//   set1 = {1,2,3,4,5};
//   if(set1.find(4)!=set1.end()) {
//       cout<<*(set1.find(4))<<endl;
//   }
//   else {
//       cout<<-1<<endl;
//   }
//   set <int> set2 = {10,20,30,40,50};
//   cout<<set2.count(4)<<endl;
//   cout<<set1.count(7)<<endl;
//   cout<<*(set2.lower_bound(40))<<endl;
//   cout<<*(set2.lower_bound(45))<<endl;
//   cout<<*(set2.lower_bound(50))<<endl;
//   cout<<*(set2.upper_bound(40))<<endl;
//   cout<<*(set2.upper_bound(50))<<endl;
//   cout<<*(set1.rbegin())<<endl;
//   auto itr = set1.rend();
//   itr--;
//   cout<<*itr<<endl;
  return 0;
}*/

// BirthDayInviteList:
/*#include <iostream>
#include <set>
using namespace std;
int main() {
    int n;
    cout<<"no of invitees: ";
    cin>>n;
    set <string> invite_list;
    while(n--) {
        string name;
        cout<<"enter name: ";
        cin>>name;
        invite_list.insert(name);
    }
    cout<<"your invitees are "<<endl;
    for(auto name: invite_list) {
        cout<<name<<endl;
    }
    return 0;
}*/

// Sum of the common elements present in two different vectors:
/*#include <iostream>
#include <set>
#include <vector>
using namespace std;
int main() {
    // vector <int> v1 = {1,1,2,3,3,3};
    // vector <int> v2 = {5,6,7,5,2,3,6};
    vector <int> v1 = {1,1,2,3,3,3};
    vector <int> v2 = {1,1,2,3,3,3};
    set <int> set1;
    set <int> set2;
    for(int i=0; i<v1.size();i++) {
        set1.insert(v1[i]);
    }
    for(int i=0; i<v2.size();i++) {
        set2.insert(v2[i]);
    }
    int sum = 0;
    for(auto set2_val: set2) {
        // for(auto set1_val: set1) {
        //     if(set1_val==set2_val) {
        //         sum+=set1_val;
        //     }
        // }
        if(set1.find(set2_val)!=set1.end()) {
               sum+=set2_val;
        }
    }
    cout<<sum<<endl;
    // tc: logn(set2)+logn(set1)+nlogt;
    return 0;
}*/

// Checking the presence of all alphabets:
/*#include <iostream>
#include <set>
#include <string>
#include <algorithm>
using namespace std;
bool checkPresenceOfAllAlpha(string &alpha) {
    if(alpha.size()<26) {
        return false;
    }
    set <char> Alpha;
    transform(alpha.begin(),alpha.end(),alpha.begin(),::tolower);
    for(auto ch: alpha) {
        Alpha.insert(ch);
    }
    if(Alpha.size()==26) {
        return true;
    }
    return false;
}
int main() {
    string alpha = "abcdEfGHIJKLmnopqrstuvWXYZ";
    if(checkPresenceOfAllAlpha(alpha)) {
        cout<<"The input string contains all alphabets";
    }
    else {
        cout<<"No, The input string is devoid of some alphabets";
    }
    return 0;
}*/

// 2) Unordered_Set;
// -->Values are stored in unordered fashion;
//-->Unique values are stored;
// -->Values will be identified by themselves;
// -->Values can't be modified in a set;
// Advantages:
// -->avg tc:O(1) for search,inserion and deletion;(possible using hashing);

// tc in case of inserion:
// single_element: avg=O(1), worse=O(n)->if size>=capacity(rehashing);
// multiple_elements: avg=O(n), worse=O(n*(N+1)) where n is no. of elements inserted while N is the size of set then;
// tc in case of deletion:
// single_element: avg=O(1), worse=O(n)->if size>=capacity(rehashing);
// multiple_elements: avg=O(n), worse=O(n*(N+1)) where n is no. of elements inserted while N is the size of set then;
// tc in case of find(): avg=O(1), worse=O(n)->if size>=capacity(rehashing);
// tc in case of count(): avg=O(1), worse=O(n)->if size>=capacity(rehashing);

// Implementation_of_an_unordered_set:
/*#include <iostream>
#include <unordered_set>
using namespace std;
int main() {
    unordered_set <int> set;
    set.insert(2);
    set.insert(1);
    set.insert(3);
    set.insert(3);
    set.insert(4);
    for(auto val: set) {
        cout<<val<<" ";
    }cout<<endl;
    return 0;
}
*/

// load_factor() --> (size_of_unordered_set/no_of_buckets);
// rehash(x) --> sets the no. of buckets to x or more; 
// --->tc: avg=O(N), worse=O(N^2);

// 3) Multi_Set:
// --> It can contain duplicate's;
// --> In it, values are stored in ordered fashion either ascending or descending;
// -->Elements are identified by their own values;
// --> Values can't be modified;
// --> There is no separate directory for multiset;

// Implementation_of_an_Multi_set:
/*#include <iostream>
#include <set>
using namespace std;
int main() {
    // multiset <int> set;
    multiset <int, greater <int>>set;
    set.insert(2);
    set.insert(1);
    set.insert(3);
    set.insert(3);
    set.insert(4);
    for(auto val: set) {
        cout<<val<<" ";
    }cout<<endl;
    return 0;
}*/

// tc in case of inserion:
// single_element: O(logN);
// tc in case of deletion:
// single_element: O(logN);
// tc in case of find(): O(LogN);
// tc in case of count():O(Logn);

// In case of erase function:
// -->First_occurence will get deleted;
/*#include <iostream>
#include <set>
using namespace std;
int main() {
    // multiset <int> set;
    multiset <int, greater <int>>set;
    set.insert(2);
    set.insert(1);
    set.insert(3);
    set.insert(3);
    set.insert(4);
    for(auto val: set) {
        cout<<val<<" ";
    }cout<<endl;
    set.erase(3);
    for(auto val: set) {
        cout<<val<<" ";
    }cout<<endl;
    return 0;
}*/

// In case of find function(tc: O(logN));
// #include <iostream>
// #include <set>
// using namespace std;
// int main() {
//     multiset <int> set;
//     set.insert(2);
//     set.insert(1);
//     set.insert(3);
//     set.insert(3);
//     set.insert(4);
//     multiset <int> :: iterator itr;
//     itr = set.find(3); //lower_bound of element searched will be returned else end iterator will be returned;
//     cout<<*itr<<endl;
//     itr++;
//     cout<<*itr<<endl;
//     return 0;
// }

// In case of count function(tc: O(logN+k);

// lower_bound and upper_bound functionalities are retained same;

// 4) Unordered_MultiSet:
// --> neither ordered nor unique;
// -->values are identified by themselves and can't be modified;

// Implementation_of_an_Unordered_Multi_set:
/*#include <iostream>
#include <unordered_set>
using namespace std;
int main() {
    unordered_multiset <int> set;
    set.insert(2);
    set.insert(1);
    set.insert(3);
    set.insert(3);
    set.insert(4);
    for(auto val: set) {
        cout<<val<<" ";
    }cout<<endl;
    return 0;
}*/

// tc in case of inserion:
// single_element: avg=O(1), worse=O(n)->if size>=capacity(rehashing);
// multiple_elements: avg=O(n), worse=O(n*(N+1)) where n is no. of elements inserted while N is the size of set then;
// tc in case of deletion:
// single_element: avg=O(1), worse=O(n)->if size>=capacity(rehashing);
// multiple_elements: avg=O(n), worse=O(n*(N+1)) where n is no. of elements inserted while N is the size of set then;
// tc in case of find(): avg=O(1), worse=O(n)->if size>=capacity(rehashing);
// tc in case of count(): avg=O(1), worse=O(n)->if size>=capacity(rehashing);

// printing secondsmallest number in a given set of n integers:
/*#include <iostream>
#include <set>
using namespace std;
int main() {
    set <int> set1;
    int n;
    cout<<"enter n: ";
    cin>>n;
    for (int i=0; i<n; i++) {
        int x;
        cin>>x;
        set1.insert(x);
    }
    // set <int>:: iterator itr = set1.begin();
    auto itr = set1.begin();
    itr++;
    if(set1.size()>0 and set1.size()!=1) {
         cout<<*itr<<endl;
    }
    else {
         cout<<-1;
    }
    return 0;
}
*/

// n Question's and  p & q marks problem:
/*#include <iostream>
#include <unordered_set>
using namespace std;
int main() {
    int n,p,q;
    cout<<"enter n,p,q respectively: ";
    cin>>n;
    
    
    cin>>p;
    
    cin>>q;
    unordered_set <int> set;
    for(int i=0; i<=n; i++) {
        for(int j=0; j<=n; j++) {  
          set.insert((i*p)+(j*q)+((n-i-j)*0));
        }
    }
    for(auto val: set) {
        cout<<val<<" ";
    }cout<<endl;
    cout<<set.size()<<endl;
    return 0;
    // tc: O(n^2);
    // sc: O(n);
}*/

// 132_pattern:
/*#include <iostream>
using namespace std;
int main() {
    int array[] = {-1,3,2,0};
    vector <int> <vector <int> > vec;
    int n = sizeof(array)/sizeof(array[0]);
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            for(int k=j+1; k<n; k++) {
                if(array[j]>array[k] and array[i]<array[k]) {
                    cout<<array[i]<<" "<<array[j]<<" "<<array[k]<<endl;
                    vec
                }
            }
        }
    }
    return 0;
}
*/

// Accessing an element in a set using indexing;
/*#include <iostream>
#include <set>
using namespace std;
int ele_at_idx(set<int> &set1, int idx) {
    if(set1.size()==0 or idx == set1.size() or idx>set1.size()) {
        return -1;
    }
    auto itr = set1.begin();
    advance(itr,idx);
    return *itr;
}
int main() {
    set <int> set1;
    set1.insert(1);
    set1.insert(2);
    set1.insert(3);
    set1.insert(4);
    int idx;
    cout<<"enter idx: ";
    cin>>idx;
    cout<<ele_at_idx(set1,idx);
    return 0;
}*/


// Given two sets, A and B, write a program to find their union:
/*#include <iostream>
#include <set>
using namespace std;
int main() {
   set <int> set1 = { 1,2,3,4};
   set <int> set2 = { 3,4,5,6};
   set <int> set3;
   for(auto val: set1) {
       set3.insert(val);
   }
   for(auto val: set2) {
       set3.insert(val);
   }
   for(auto val: set3) {
       cout<<val<<" ";
   }
   return 0;
}*/

//  Write a program to find the intersection of two sets, A and B:
/*#include <iostream>
#include <set>
using namespace std;
int main() {
   set <int> set1 = {1,2,3,4};
   set <int> set2 = {3,4,5,6};
   set <int> set3;
   for(auto val: set1) {
       if(set2.find(val)!=set2.end()) {
           set3.insert(val);
       }
   }
   for (auto val: set3) {
       cout<<val<<" ";
   }
   return 0;
}
*/

// Given a set A, write a program to find its complement with respect to a universal set U:
/*#include <iostream>
#include <set>
using namespace std;
int main() {
   set <int> set1 = {1, 2, 3, 4, 5};
   set <int> set2 = {2, 4};
   set <int> set3;
   for(auto val: set1) {
       if(set2.find(val)==set2.end()) {
           set3.insert(val);
       }
   }
   for (auto val: set3) {
       cout<<val<<" ";
   }
   return 0;
}*/

// Write a program to check if a given set A is a subset of another set B:
/*#include <iostream>
#include <set>
using namespace std;
int main() {
   set <int> set1 = {1, 2, 3 ,6};
   set <int> set2 = {1, 2, 3, 4, 5};
   int result;
   for(auto val: set1) {
       result = 1;
       if(set2.find(val)==set2.end()) {
           result = 0;
           break;
       }
   }
   if(result==1) {
       cout<<"set1 is a subset of set2";
   }
   else {
       cout<<"set1 is not a subset of set2";
   }
   return 0;
}*/

// Given two sets, A and B, write a program to find their symmetric difference:
/*#include <iostream>
#include <set>
using namespace std;
int main() {
   set <int> set1 = {1, 2, 3, 4};
   set <int> set2 = {3, 4, 5, 6};
   set <int> set3;
   set <int> set4;
   for(auto val: set1) {
      set3.insert(val);
   }
   for(auto val: set2) {
      set3.insert(val);
   }
   for(auto val: set1) {
       if(set2.find(val)!=set2.end()) {
           set4.insert(val);
       }
   }
   for(auto val: set4) {
       set3.erase(val);
   }
   for(auto val: set3) {
       cout<<val<<" ";
   }
   return 0;
}*/

// aliter:
/*#include <iostream>
#include <set>
using namespace std;
int main() {
   set <int> set1 = {1, 2, 3, 4};
   set <int> set2 = {3, 4, 5, 6};
   set <int> set3;
   set <int> set4;
   for(auto val: set2) {
       if(set1.find(val)==set1.end()) {
           set3.insert(val);
       }
   }
   for(auto val: set1) {
       if(set2.find(val)==set2.end()) {
           set3.insert(val);
       }
   }
   for(auto val: set3) {
       cout<<val<<" ";
   }
   return 0;
}*/

//  Write a program to find the maximum and minimum elements in a set:
/*#include <iostream>
#include <set>
using namespace std;
int main() {
   set <int> set1 = {5,8,2,11,3};
   cout<<"min: "<<*set1.begin()<<endl;
   cout<<"max: "<<*(--set1.end());
   return 0;
}*/

// Given a set A, write a program to sort its elements in ascending order:
/*#include <iostream>
#include <set>
using namespace std;
int main() {
   set <int> set1 = {4, 2, 1, 5, 3};
   for(auto val: set1) {
       cout<<val<<" ";
   }cout<<endl;
   return 0; 
}*/

// Write a program to find the difference between two sets, A and B (i.e., elements present in A but not in B):
/*#include <iostream>
#include <set>
using namespace std;
int main() {
   set <int> set1 = {1, 2, 3, 4};
   set <int> set2 = {3, 4, 5, 6};
   cout<<"set1-set2: ";
   for(auto val: set1) {
       if(set2.find(val)==set2.end()) {
           cout<<val<<" ";
       }
   }cout<<endl;
   cout<<"set2-set1: ";
   for(auto val: set2) {
       if(set1.find(val)==set1.end()) {
           cout<<val<<" ";
       }
   }cout<<endl;
   return 0; 
}
*/
// several assignments of initiaisation of sets;
/*#include <iostream>
#include <bits/stdc++.h>
#include <set>
#include <algorithm>
using namespace std;
int main() {
    {set <int> s1({1,2,3,4,5,6,7,8});
    for( auto i: s1) {
        cout<<i<<" ";
    }cout<<endl;}
    {// int a[] = {6,7,8,9};
    // set <int> s2(a.begin(),a.end());
    // for( auto i: s2) {
    //     cout<<i<<" ";
    // }cout<<endl;
    }
    {// int a[4] = {6,7,8,9};
    // set <int> s3(a.begin(),a.end());
    // for( auto i: s3) {
    //     cout<<i<<" ";
    // }cout<<endl;
    }
    {int a[5] = {6,7,8,9};
    set <int> s4(a,a+4);
    for( auto i: s4) {
        cout<<i<<" ";
    }cout<<endl;
    }
    {vector <int> v = {4,5,6};
    set <int> s5(v.begin(),v.end());
    for( auto i: s5) {
        cout<<i<<" ";
    }cout<<endl;
    }
    {vector <int> v = {4,5,6};
    set <int> s5(v.begin(),v.end());
    set <int> s6(s5);
    for( auto i: s6) {
        cout<<i<<" ";
    }cout<<endl;
    }
    {set <int> s1({1,2,3,4,5,6,7,8});
    set <int> s7(begin(s1),end(s1));
    for( auto i: s7) {
        cout<<i<<" ";
    }cout<<endl;
    }
    {
    // set <int> s1({1,2,3,4,5,6,7,8});
    // set <int> s7(begin(s1),end(s1));
    // set <int, greater<int>> s7;
    // for( auto i: s7) {
    //     cout<<i<<" ";
    // }cout<<endl;
    }
    { // set <int> s1({1,2,3,4,5,6,7,8});
    // set <int, greater<int>> s8(s1);
    // for( auto i: s8) {
    //     cout<<i<<" ";
    // }cout<<endl;
    }
    return 0;
}
*/
/*#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
set<string>s;
string str = "coding is the best";
for(int i = 0; i < str.size(); i++){
string temp;
while(str[i] != ' ' && i != str.size()){
temp += str[i];
i++;
}
s.insert(temp);
}
for(auto it : s)
cout<<it<<"*";
return 0;
}*/

/*#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
set<int>s = {615, 67, 4, 19, 10, 89};
auto it = s.begin();
cout<<*it<<" ";
it = s.end();
it--;
cout<<*it;
}*/

/*#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    // set <int> s = {1,2,3,4,5,6,7,8};
    // auto start = s.begin();
    // start++;
    // auto end = s.end();
    // end--;
    // s.erase(start, end);
    // for(auto i: s) {
    //     cout<<i<<" ";
    // }cout<<endl;
set<int> s = {22, 34, 78, 99, 3, 23, 15, 1, 89};
auto it1 = s.begin();
auto it2 = s.end();
it2--;
auto it3 = s.rbegin();
auto it4 = s.rend();
it4--;
cout<<"it1 :"<<*it1<<endl;
cout<<"it2 :"<<*it2<<endl;
cout<<"it3 :"<<*it3<<endl;
cout<<"it4 :"<<*it4<<endl;
    return 0;
}*/

// Given an array of size n filled with natural numbers in random order. The array has only one repeating
// element. The task is to find that repeating element.
/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int array[] = {4, 5, 9, 2, 3, 4, 89, 11, 15};
    set <int> s;
    for(int i: array) {
        if(s.find(i)==s.end()) {
            s.insert(i);
        }
        else {
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}*/

// Q5. There is a person who is at current_pos position and a binary string path which is the moves the person
// took, if path[i] = ‘0’ then the person moved one step left, and if path[i] = ‘1’ then the person moved one step
// to the right. The task is to find the count of distinct positions the person visited.
/*#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    set <int> s;
    string path = "110100";
    int current_pos = 3;
    s.insert(current_pos);
    for (char i: path) {
        if(i=='0') {
            current_pos--;
            s.insert(current_pos);
        }
        else {
             current_pos++;
             s.insert(current_pos);
        }
    }
    cout<<s.size()<<endl;
    return 0;
}
*/























