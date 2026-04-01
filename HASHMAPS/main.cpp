// Implementation of hashtable using division method and opened hashing(closed addressing-->separate chaining): 
/*#include <iostream>
#include <vector> 
#include <list>
#include <algorithm>
using namespace std;
class Hashing {
    vector<list<int>> hashtable;
    int buckets;
    public:
        Hashing(int size) {
            hashtable.resize(size);
            buckets = size;
        }
        int hashvalue(int key) {
            return key%buckets;
        }
        void insertKey(int key) {
            int idx = hashvalue(key);
            hashtable[idx].push_back(key);
            return;
        }
        list<int> :: iterator findKey(int key) {
           int idx = hashvalue(key);
           return find(hashtable[idx].begin(),hashtable[idx].end(),key);
        }
        void removeKey(int key) {
            int idx = hashvalue(key);
            if(findKey(key)!=hashtable[idx].end()) {
                hashtable[idx].erase(findKey(key));
                cout<<key<<" has been deleted."<<endl;
            }
            else {
                cout<<key<<" is absent in the hashtable."<<endl;
            }
        }
};
int main() {
    Hashing h(10);
    h.insertKey(1);
    h.insertKey(2);
    h.insertKey(3);
    h.insertKey(4);
    h.insertKey(5);
    h.removeKey(3);
    h.removeKey(3);
    return 0;
}


// avg_tc_in_hashing : O(1);
// worse_tc_in_hashing : O(n);

// Methods Of Hashing:
// I) Division_Method: h(k) = k mod M where k is a key, M is the number of buckets in the hash_table(size_of_hashtable);
// II) Multiplication_Method: h(k) = floor(M*(kAmod1)); wher M is size_of_hashtable, 0<=A<=1, k is key;
// III) Digits_Fold_Method: if k=k1k2k3k4k5, h(k) = k1k2+k3k4+k5; where k1,k2,k3,k4,k5...are digits in k(key);
// IV) Mid_Squre_Method: h(k) = middle digits of k^2 where k is key;

// Methods Of Handling Collisions:
// I) opened_hashing_method(closed_addressing): Here linked list is used(separte_chaining);
// II) closed_hashing_method(opened_addressing):
// --->1)idx = h(k) mod M; where idx is the index at which item is to be stored;
// --->2)idx = (h(k) + i)%M where 0<=i<=M and M is the size_of_hashtable(linear_probing);
// ------>>disadvantage: clusters are created;
// --->3)idx = (h(k) + i^2)%M where o<=i<=M (quadratic_probing); here: clusters are prevented from being created;
// --->4)idx = (h1(k) + i*h2(k)) mod M where h1 and h2 are two distint hash_funtions(double_hashing);


// Maps in cpp STL:
// 1)STL containers stores key_value pairs;
// 2)The elements are stored in AO (OR) DO;
// 3)Maps cannot have duplicate keys;
// 4)Maps are implements through BST(binary_search_tree);

// Implementation_Of_HashMap:
/*#include <iostream>
#include <map>
using namespace std;
int main() {
    map <string,long int,greater <string>> phone_book = {{"mayya",9160388399},{"nenu",6300006765},{"nanna",8328462051}};
    // map <string,long int> phone_book = {{"mayya",9160388399},{"nenu",6300006765},{"nanna",8328462051}};
    phone_book.insert(make_pair("random",3487285934));  //tc:O(logN)-->BST;
    phone_book["unknown"]=8742348343;
    for(auto key_val: phone_book) {
        cout<<key_val.first<<":"<<key_val.second<<endl;;
    }cout<<endl;
    phone_book["unknown"]=3483438742;
    for(auto key_val: phone_book) {
        cout<<key_val.first<<":"<<key_val.second<<endl;;
    }cout<<endl;
    return 0;
}*/

// Iterators are used to traverse our STL containers;
// Illustration of funtions in STL allied to Maps;
/*#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main() {
    map <char,int> directory = {{'A',123},{'B',456},{'C',789},{'D',844},{'E',784}};
    // erase()(tc:O(n));
    map <char,int> :: iterator itr;
    for(itr = directory.begin(); itr!=directory.end(); itr++) {
        cout<<itr->first<<":"<<itr->second<<endl;
    }cout<<endl;
    directory.erase('A');
    auto itr1 = directory.begin();
    auto itr2 = directory.begin();
    advance(itr2,2);
    directory.erase(itr1,itr2);//-->tc: O(n);
    auto itr3 = directory.begin();
    itr3++;
    directory.erase(itr3);
    for(itr = directory.begin(); itr!=directory.end(); itr++) {
        cout<<itr->first<<":"<<itr->second<<endl;
    }cout<<endl;
    directory.clear();
    for(itr = directory.begin(); itr!=directory.end(); itr++) {
        cout<<itr->first<<":"<<itr->second<<endl;
    }cout<<endl;
    map <char,int> directory1 = {{'A',123},{'B',456},{'C',789},{'D',844},{'E',784}};
    // swap()
    swap(directory,directory1);
    for(itr = directory.begin(); itr!=directory.end(); itr++) {
        cout<<itr->first<<":"<<itr->second<<endl;
    }cout<<endl;
    // find()(tc:O(logN));
    cout<<directory.find('C')->first<<":"<<directory.find('C')->second<<endl;
    // count()(tc:O(logN));
    cout<<directory.count('A')<<endl;
    cout<<directory.count('F')<<endl;
    // empty();
    cout<<directory.empty()<<endl;
    cout<<directory1.empty()<<endl;
    // size();
    cout<<directory1.size()<<endl;
    cout<<directory.size()<<endl;
    //  max_size();
    cout<<directory1.max_size()<<endl;
    cout<<directory.max_size()<<endl;
    // begin(), end(), rbegin(), rend();
    auto itr4 = directory.begin();
    cout<<itr4->first<<":"<<itr4->second<<endl;
    itr4 = directory.end();
    itr4--;
    cout<<itr4->first<<":"<<itr4->second<<endl;
    map <char,int> :: reverse_iterator itr5;
    itr5 = directory.rbegin();
    cout<<itr5->first<<":"<<itr5->second<<endl;
    itr5 = directory.rend();
    itr5--;
    cout<<itr5->first<<":"<<itr5->second<<endl;
    cout<<endl;
    auto itr6 = directory.rbegin();
    cout<<itr6->first<<":"<<itr6->second<<endl;
    itr6 = directory.rend();
    itr6--;
    cout<<itr6->first<<":"<<itr6->second<<endl;
    return 0;
}*/

/*#include <iostream>
#include <map>
using namespace std;
int main() {
    map <int,int> n_k;
    n_k.insert({1,10});
    n_k.insert({1,20}); //likewise updation is not allowed for a duplicate key;
    n_k.insert({3,30});
    n_k[1] = 20; //likewise updation is allowed for a duplicate key;
    n_k[4] = 40;
    map <int,int> :: iterator itr;
    for(itr=n_k.begin(); itr!=n_k.end(); itr++) {
        cout<<itr->first<<":"<<itr->second<<endl;
    }cout<<endl;
    for(auto itr=n_k.begin(); itr!=n_k.end(); itr++) {
        cout<<itr->first<<":"<<itr->second<<endl;
    }cout<<endl;
    // using for_each loop;
    for(auto itr: n_k) {
        cout<<itr.first<<":"<<itr.second<<endl;
    }cout<<endl;
    return 0;
}
*/

// Sum of Repetitive elements:
/*#include <iostream>
#include <map>
using namespace std;
int main() {
    int n;
    cout<<"enter n: ";
    cin>>n;
    map <int,int> num_count;
   
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
    if(num_count.count(x)==0) {
       num_count.insert({x,1});
    }
    else {
        map <int,int>::iterator itr = num_count.find(x);
        num_count[x] = itr->second+1;
    }
    }
    for(auto itr: num_count) {
        cout<<itr.first<<":"<<itr.second<<endl;
    }cout<<endl;
    int sum = 0;
    for(auto itr: num_count) {
        if(itr.second>1) {
        sum += itr.first;
        }
    }
    cout<<sum<<endl;
    return 0;
}
*/

// Unordered_Map:
// 1)STL containers store key_value pairs;
// 2)Elements in a map are unodered;
// 3)Keys in a map are unique;
// Here;
// -->insertion : tc=O(1);
// -->deletion : tc=O(1);
// -->retrieval : tc=O(1);
// above three worse_case_tc = O(n);
// unodered_map is implemented through hashing;

// Implementation_Of_Unoredered_HashMap:
/*#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    unordered_map <int,string> roll_name;
    roll_name.insert(make_pair(1,"sai"));
    roll_name.insert({2,"kiran"});
    roll_name[3] = "patnana";
    roll_name.insert({2,"gowtham"}); //won't update;
    // roll_name[2] = "gowtham"; //will_update
    for(auto key_val: roll_name) {
        cout<<key_val.first<<":"<<key_val.second<<endl;
    }cout<<endl;
    // cout<<roll_name["sai"]<<endl; -->won't work;
    return 0;
}*/

// Multi_Map:
// 1) STL container which stores key_value pairs;
// 2) Elements are stored in an order;
// 3) Duplicate keys can exist;
// Here;
// -->insertion : tc=O(logN);
// -->deletion : tc=O(logN);
// -->retrieval : tc=O(logN);
// unodered_map is implemented through BST(binary_search_tree);

// Implementation_Of_Mulit_Map:
/*#include <iostream>
#include <map>
using namespace std;
int main() {
    multimap <char,int> directory = {{'A',223},{'B',456},{'C',780}};
    directory.insert({'A',134});
    // directory['A'] = 322;-->won't possible;
    directory.insert(make_pair('C',678));
    for(auto key_val: directory) {
        cout<<key_val.first<<":"<<key_val.second<<endl;
    }cout<<endl;
    auto itr = directory.find('A'); //will return first_occurence;
    cout<<itr->first<<":"<<itr->second<<endl; 
    cout<<directory.count('C')<<endl;
    return 0;
}*/

// unodered_Multi_Map:
// 1)STL containers store key_value pairs;
// 2)Elements in a map are unodered;
// 3)Duplicate Keys are allowed;
// Here;
// -->insertion : tc=O(1);
// -->deletion : tc=O(1);
// -->retrieval : tc=O(1);
// above three worse_case_tc = O(n);
// unodered_multi_map is implemented through hashing;

// Implementation_Of_Unordered_Mulit_Map;
/*#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    unordered_multimap <char,int> directory = {{'B',456},{'A',223},{'C',780}};
    directory.insert({'A',134});
    // directory['A'] = 322;-->won't be possible;
    directory.insert(make_pair('C',678));
    for(auto key_val: directory) {
        cout<<key_val.first<<":"<<key_val.second<<endl;
    }cout<<endl;
    auto itr = directory.find('A'); //will return first_occurence;
    cout<<itr->first<<":"<<itr->second<<endl; 
    cout<<directory.count('C')<<endl;
    return 0;
}*/

// equal_range() --> return bounds of range of equal elements with key passed;
// let's see this in code:
/*#include <iostream>
#include <map>
using namespace std;
int main() {
    multimap <int,int> m;
    m.insert({1,1});
    m.insert({2,4});
    m.insert({3,9});
    m.insert({4,16});
    m.insert({4,20});
    m.insert({4,30});
    auto a = m.equal_range(4);
    // here a.first will be {4,16} and a.second will be {4,30};
    for(auto it = a.first; it!=a.second; it++) {
        cout<<it->first<<"=>"<<it->second<<endl;
    }
    return 0;
}*/

/*#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    unordered_multimap <int,int> m;
    m.insert({1,1});
    m.insert({2,4});
    m.insert({4,16});
    m.insert({4,20});
    m.insert({3,9});
    m.insert({4,30});
    auto a = m.equal_range(4);
    for(auto it = a.first; it!=a.second; it++) {
        cout<<it->first<<"=>"<<it->second<<endl;
    }
    return 0;
}*/

// First repeating character in a string;
/*#include <iostream>
#include <map>
using namespace std;
int main() {
    map <char,int> char_freq;
    string s = "saikiranpatnana";
    for(int i=0; i<s.size(); i++) {
        char c = s[i];
        if(char_freq.count(c)==0) {
            char_freq.insert({c,1});
        }
        else {
            auto itr = char_freq.find(c);
            char_freq[c] = itr->second+1;
        }
    }
    // for (auto key_val: char_freq) {
    //     cout<<key_val.first<<":"<<key_val.second<<endl;
    // }cout<<endl;
    // cout<<char_freq.count('l')<<endl;
    for(int i=0; i<s.size(); i++) {
        char c = s[i];
        auto itr = char_freq.find(c);
        if(itr->second>1) {
            cout<<itr->first<<":"<<itr->second<<endl;
            break;
        }
    }
    return 0;
} 
*/

// Q1) Can you make the strings equal?
/*#include <iostream>
#include <map>
using namespace std;
bool areStringsEqual(string array[], int n) {
    map <char,int> string_map;
    for(int i=0; i<n; i++) {
        for(int j=0; j<array[i].length(); j++) {
          if(string_map.find(array[i][j])==string_map.end()) { 
              string_map.insert(make_pair(array[i][j],1));
          }
          else {
              string_map[array[i][j]] += 1;
          }
        }
    }
    for(auto key_val: string_map) {
        if(key_val.second%n!=0) {
            return false;
        }
    }
    return true;
}
int main() {
    // string array[] = {"collegeee", "coll", "collegge"};
    string array[] = {"wall", "ah", "wallahah"};
    int n = sizeof(array)/sizeof(array[0]);
    cout<<(areStringsEqual(array,n)?"yes":"No")<<endl;
    return 0;
}
// tc: O(n) where n--> total num of characters;
// sc: O(m) where m--> total num of unique characters;
*/

// cheching whether two strings are anagrams or not?
// approach_1:
/*#include <iostream>
#include <map>
using namespace std;
bool areStringsEqual(string word_1, string word_2) {
    if(word_1.size()!=word_2.size()) {
        return false;
    }
    map <char,int> word_map1;
    for(auto chr: word_1) {
        word_map1[chr]++;
    }
    map <char,int> word_map2;
    for(auto chr: word_2) {
        word_map2[chr]++;
    }
    auto itr1 = word_map1.begin();
    auto itr2 = word_map2.begin();
    while(itr1!=word_map1.end() and itr2!=word_map2.end()) {
        if(itr1->second!=itr2->second) {
            return false;
        }
        itr1++;
        itr2++;
    }
    return true;
}
int main() {
    cout<<(checkAnagram("triangle","integrai")?"yes":"No")<<endl;
    return 0;
}*/
// 

// approach_2:
/*#include <iostream>
#include <map>
using namespace std;
bool checkAnagram(string word_1, string word_2) {
    if(word_1.size()!=word_2.size()) {
        return false;
    }
    map <char,int> word_map1;
    for(auto chr: word_1) {
      word_map1[chr]++;
    }
    for(auto chr: word_2) {
        if(word_map1.find(chr)==word_map1.end()) {
            return false;
        }
        auto itr = word_map1.find(chr);
        if(itr->second==0) {
            return false;
        }
        else {
            word_map1[chr]--;
        }
    }
    return true;
}
int main() {
    cout<<(checkAnagram("triangle","integral")?"yes":"No")<<endl;
    return 0;
    // tc: O(n) where n is the total number of strings in both of the of the strings;
    // sc: O(m) where m is the length of the word_1;
}*/

// cheching whether two strings are isomorphic or not?
// #include <iostream>
// #include <map>
// using namespace std;
// bool checkIsomorphic(string word_1, string word_2) {
//     if(word_1.size()!=word_2.size()) {
//         return false;
//     }
//     map <char,char> word_map1;
//     map <char,char> word_map2;
//     int i = 0;
//     for(auto chr: word_1) {
//       if(word_map1.find(chr)==word_map1.end()) {
//           word_map1[chr] = word_2[i];
//       }
//       else {
//          if(word_map1[chr]!=word_2[i]) {
//              return false;
//          }
//       }
//       i++;
//     }
//     for(auto key_val: word_map1) {
//         cout<<key_val.first<<":"<<key_val.second<<endl;
//     }cout<<endl;
//     i = 0;
//     for(auto chr: word_2) {
//       if(word_map2.find(chr)==word_map2.end()) {
//           word_map2[chr] = word_1[i];
//       }
//       else {
//          if(word_map2[chr]!=word_1[i]) {
//              return false;
//          }
//       }
//       i++;
//     }
//     for(auto key_val: word_map2) {
//         cout<<key_val.first<<":"<<key_val.second<<endl;
//     }cout<<endl;
//     for(auto key_val: word_map1) {
//         if(key_val.first!=word_map2[key_val.second]) {
//             return false;
//         }
//     }
//     return true;
// }
// int main() {
//     cout<<(checkIsomorphic("abcdex","viouog")?"yes":"No")<<endl;
//     return 0;
// }
// #include <iostream>
// #include <map>
// using namespace std;
// bool checkIsomorphic(string word_1, string word_2) {
//     if(word_1.size()!=word_2.size()) {
//         return false;
//     }
//     map <char,char> word_map;
//     int i = 0;
//     for(auto chr: word_1) {
//       if(word_map.find(chr)==word_map.end()) {
//           word_map[chr] = word_2[i];
//       }
//       else {
//          if(word_map[chr]!=word_2[i]) {
//              return false;
//          }
//       }
//       i++;
//     }
//     i = 0;
//     word_map.clear();
//     for(auto chr: word_2) {
//       if(word_map.find(chr)==word_map.end()) {
//           word_map[chr] = word_1[i];
//       }
//       else {
//          if(word_map[chr]!=word_1[i]) {
//              return false;
//          }
//       }
//       i++;
//     }
//     return true;
// }
// int main() {
//     cout<<(checkIsomorphic("triangle","integral")?"yes":"No")<<endl;
//     return 0;
// }

// #include <iostream>
// #include <map>
// using namespace std;

// bool checkIsomorphic(string word_1, string word_2) {
//     if (word_1.size() != word_2.size()) {
//         return false;
//     }
    
//     map<char, char> word_map;
//     int i = 0;
    
//     for (auto chr : word_1) {
//         if (word_map.find(chr) == word_map.end()) {
//             word_map[chr] = word_2[i];
//         } else {
//             if (word_map[chr] != word_2[i]) {
//                 return false;
//             }
//         }
//         i++;
//     }
    
//     i = 0;
//     word_map.clear();
    
//     for (auto chr : word_2) {
//         if (word_map.find(chr) == word_map.end()) {
//             word_map[chr] = word_1[i];
//         } else {
//             if (word_map[chr] != word_1[i]) {
//                 return false;
//             }
//         }
//         i++;
//     }
    
//     return true;
// }

// int main() {
//     cout << (checkIsomorphic("triangle", "integral") ? "yes" : "No") << endl;
//     return 0;
// }

// #include <iostream>
// #include <unordered_map>
// using namespace std;

// bool areWordsIsomorphic(const string& word1, const string& word2) {
//     if (word1.length() != word2.length())
//         return false;

//     unordered_map<char, char> mapping;
//     unordered_map<char, bool> mapped;

//     for (size_t i = 0; i < word1.length(); i++) {
//         char c1 = word1[i];
//         char c2 = word2[i];

//         if (mapping.find(c1) != mapping.end()) {
//             if (mapping[c1] != c2)
//                 return false;
//         } else {
//             if (mapped[c2])
//                 return false;

//             mapping[c1] = c2;
//             mapped[c2] = true;
//         }
//     }

//     return true;
// }

// int main() {
//     string word1 = "triangle";
//     string word2 = "integral";

//     if (areWordsIsomorphic(word1, word2))
//         cout << "The words are isomorphic." << endl;
//     else
//         cout << "The words are not isomorphic." << endl;

//     return 0;
// }

// #include <iostream>
// #include <unordered_map>
// using namespace std;

// bool areWordsIsomorphic(const string& word1, const string& word2) {
//     if (word1.length() != word2.length())
//         return false;

//     unordered_map<char, char> mapping1;
//     unordered_map<char, char> mapping2;

//     for (size_t i = 0; i < word1.length(); i++) {
//         char c1 = word1[i];
//         char c2 = word2[i];

//         if (mapping1.find(c1) != mapping1.end()) {
//             if (mapping1[c1] != c2)
//                 return false;
//         } else {
//             mapping1[c1] = c2;
//         }

//         if (mapping2.find(c2) != mapping2.end()) {
//             if (mapping2[c2] != c1)
//                 return false;
//         } else {
//             mapping2[c2] = c1;
//         }
//     }

//     return true;
// }

// int main() {
//     string word1 = "triangle";
//     string word2 = "integral";

//     if (areWordsIsomorphic(word1, word2))
//         cout << "The words are isomorphic." << endl;
//     else
//         cout << "The words are not isomorphic." << endl;

//     return 0;
// }

// above all three solutions won't work properly to pass all the test cases;
// Ultimate_Approach:
/*#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;
bool checkIsomorphic(string s1, string s2) {
    if(s1.size()!=s2.size()) {
        return false;
    }
    map <char,char> string_map;
    for(int i=0; i<s1.size(); i++) {
        if(string_map.find(s1[i])!=string_map.end()) {
            if(string_map[s1[i]]!=s2[i]) {
                return false;
            }
        }else{
            vector <char> vecMap;
            for(auto key_val: string_map) {
                vecMap.push_back(key_val.second);
            }if(find(vecMap.begin(),vecMap.end(),s2[i])!=vecMap.end()) {
                return false;
            }vecMap.clear();
            for(auto key_val: string_map) {
                vecMap.push_back(key_val.first);
            }if(find(vecMap.begin(),vecMap.end(),s2[i])!=vecMap.end()) {
                if(string_map[s2[i]]!=s1[i]) {
                return false;
                }
            }else {
                string_map[s1[i]] = s2[i];
            }
        }
    }
    return true;
}
int main() {
     cout<<(checkIsomorphic("aac","xxy")?"yes":"No")<<endl;
    return 0;
}*/

// Given an array of length n and a target, return a pair of indices whose elements sum is equal to the target.If the is no pair present, return -1;
// bruteForce_approach;
// tc: O(n^2);
/*#include <iostream>
using namespace std;
int main() {
    int array[] = {1,4,5,11,13,10,2};
    int target = 13;
    int n = sizeof(array)/sizeof(array[0]);
    for(int i=0; i<n; i++) {
        bool flag = false;
        for(int j=0; j<n; j++) {
            if((i!=j) and ((array[i]+array[j])==target)) {
                cout<<"{"<<i<<","<<j<<"}"<<endl;
                flag = true;
                break;
            }
        }
        if(flag) {
                break;
        }
    }
    return 0;
}*/

// tc: O(logN);
/*#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int main() {
    int array[] = {1,4,5,11,13,10,2};
    int target = 13;
    int n = sizeof(array)/sizeof(array[0]);
    for(int i=0; i<n; i++) {
        cout<<array[i]<<" ";
    }cout<<endl;
    map <int,int> arrayMap;
    for(int i=0; i<n; i++) {
        arrayMap[array[i]] = i;
    }
    sort(array,array+n);
    int i = 0; int j = n-1;
    while(i!=j) {
        if(array[i]+array[j]==target) {
            cout<<"{"<<arrayMap[array[j]]<<","<<arrayMap[array[i]]<<"}"<<endl;
            break;
        }
        else if(array[i]+array[j]>target) {
            j--;
        }
        else if(array[i]+array[j]<target){
            i++;
        }
    }
    return 0;
}*/

// tc: O(n);
/*#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    int array[] = {1,4,5,11,13,10,2};
    int target = 13;
    int n = sizeof(array)/sizeof(array[0]);
    unordered_map <int,int> arrayMap;
    for(int i=0; i<n; i++) {
        arrayMap[array[i]] = i;
    }
    for(auto key_val: arrayMap) {
    if(arrayMap.find(target-key_val.first)!=arrayMap.end()) {
        auto itr = arrayMap.find(target-key_val.first);
        cout<<"{"<<key_val.second<<","<<itr->second<<"}"<<endl;
        break;
    }
    }
    return 0;
}*/

//Given an array[] of length N, find the length of teh longest subarray with a sum equal to 0;

// bruteForce_approach:
/*#include <iostream>
using namespace std;
int main() {
    // int array[] = {5,-2,2,-8,1,7,10,23};
    int array[] = {1,2,3};
    int n = sizeof(array)/sizeof(array[0]);
    int ans = 0;
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            int startIdx = i;
            int sum = 0;
            for(int k=startIdx; k<=j; k++) {
                sum += array[k];
            }
            if(sum==0 and ans<=j-startIdx+1) {
                ans = j-startIdx+1;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}*/

// using_prefixsum:
/*#include <iostream>
using namespace std;
int main() {
    int array[] = {5,-2,2,-8,1,7,10,23};
    int n = sizeof(array)/sizeof(array[0]);
    int ans = 0;
    int sum = 0;
    for(int i=0; i<n; i++) {
       sum += array[i];
       array[i] = sum;
    }
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(array[j]==array[i] and j-i>=ans) {
                ans = j-i;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}*/

// using_map(optimized_solution-->tc:O(n)):
/*#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    // int array[] = {5,-2,2,-8,1,7,10,23};
      int array[] = {1,2,3};
    int n = sizeof(array)/sizeof(array[0]);
    unordered_map <int,int> arrayMap;
    int ans = 0;
    int sum = 0;
    for(int i=0; i<n; i++) {
        sum += array[i];
        if(sum==0) {
            ans++;
        }
        if(arrayMap.find(sum)!=arrayMap.end()) {
            ans = max(arrayMap[sum], i-arrayMap[sum]);
        }
        else {
            arrayMap[sum] = i;
        }
    }
    cout<<ans<<endl;
    return 0;
}*/

// Write a program to count the frequency of each element in an array using a map.
// Test case input: {1, 2, 1, 3, 2, 4, 1, 5, 2, 3}
/*#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    int array[] = {1, 2, 1, 3, 2, 4, 1, 5, 2, 3};
    int n = sizeof(array)/sizeof(array[0]);
    unordered_map <int,int> arrayMap;
    for(int i=0; i<n; i++) {
        if(arrayMap.find(array[i])!=arrayMap.end()) {
            arrayMap[array[i]]++;
        }
        else{
            arrayMap[array[i]] = 1;
        }
    }
    for(auto key_val: arrayMap) {
        cout<<key_val.first<<":"<<key_val.second<<endl;
    }cout<<endl;
    return 0;
}*/

// Given a string, find the frequency of each character and store it in a map.
// Test case input: "hello world"
/*#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    string word = "hello world";
    unordered_map <char,int> stringMap;
    for(int i=0; i<word.size(); i++) {
        if(stringMap.find(word[i])!=stringMap.end()) {
            stringMap[word[i]]++;
        }
        else if(word[i]!=' '){
            stringMap[word[i]] = 1;
        }
    }
    for(auto key_val: stringMap) {
        cout<<key_val.first<<":"<<key_val.second<<endl;
    }cout<<endl;
    return 0;
}
 */
 
//  Write a program to find the second most frequent element in an array using a map.
// Test case input: {5, 2, 1, 3, 2, 4, 1, 5, 2, 3}
/*#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    int array[] = {5, 2, 1, 3, 2, 4, 1, 5, 2, 3};
    int n = sizeof(array)/sizeof(array[0]);
    unordered_map <int,int> arrayMap;
    for(int i=0; i<n; i++) {
        if(arrayMap.find(array[i])!=arrayMap.end()) {
            arrayMap[array[i]]++;
        }
        else{
            arrayMap[array[i]] = 1;
        }
    }
    int secondFreq = -1000;
    int freq = -1000;
    auto freq_itr = arrayMap.begin();
    auto secondFreq_itr = arrayMap.begin();
    for(auto itr=arrayMap.begin(); itr!=arrayMap.end(); itr++) {
        if(itr->second>=freq) {
            secondFreq_itr = freq_itr;
            secondFreq = freq;
            freq_itr = itr;
            freq = itr->second;
        }
        else if(freq>itr->second and secondFreq<itr->second) {
            secondFreq_itr = itr;
            secondFreq = itr->second;
        }
    }
    // cout<<freq_itr->first<<endl;
    cout<<secondFreq_itr->first<<endl;
    return 0;
}*/

// Implement a phonebook using a map where you can store names and corresponding phone numbers. Allow users to add, delete, and search for contacts.
// Test case input:
// Add contact: Name: "John Doe", Phone number: "1234567890"
// Delete contact: Name: "Jane Smith"
// Search contact: Name: "Alice Johnson"
/*
#include<iostream>
#include <unordered_map>
#include <string>
using namespace std;
class phoneBook {
    unordered_multimap <string,string> directory;
    public:
    phoneBook() {
    }
    void addContact(string name, string phoneNumber) {
        directory.insert(make_pair(name,phoneNumber));
        cout<<"contact name "<<name<<" with the phonenumber "<<phoneNumber<<" has been saved to the directory."<<endl;
        return;
    }
    void deleteContact(string name) {
        if(directory.count(name)>1) {
            for(auto key_val: directory) {
                if(key_val.first==name) {
                    cout<<key_val.first<<":"<<(key_val.second).substr(7,3)<<endl;
                }
            }
            cout<<"enter the particular contact number you want ending with those last 3 digits for deletion: ";
            string number;
            cin>>number;
            for(auto itr = directory.begin(); itr!=directory.end(); itr++) {
                if((itr->second).substr(7,3)==number) {
                    directory.erase(itr);
                    break;
                }
            }
            cout<<"Your selected contact has been deleted...!"<<endl;
        }
        else {
        auto itr = directory.find(name);
        cout<<"contact name "<<name<<" with the phonenumber "<<itr->second<<" has been deleted from the directory."<<endl;;
        directory.erase(name);
        }
        return;
    }
    void searchContact(string name){
        if(directory.count(name)>1) {
            for(auto key_val: directory) {
                if(key_val.first==name) {
                    cout<<key_val.first<<":"<<(key_val.second).substr(7,3)<<endl;
                }
            }
            cout<<"enter the particular contact number you want ending with those last 3 digits for fetching: ";
            string number;
            cin>>number;
            for(auto itr = directory.begin(); itr!=directory.end(); itr++) {
                if((itr->second).substr(7,3)==number) {
                    cout<<"Your required contact is "<<itr->first<<":"<<itr->second<<endl;
                    break;
                }
            }
            
        }
        else {
        auto itr = directory.find(name);
        if(itr==directory.end()) {
            cout<<"Your required contact is not available in the directory."<<endl;
        }
        else {
        cout<<"Your required contact number with the name "<<itr->first<<" is "<<itr->second<<endl;
        }
        }
        return;
    }
};
int main() {
    phoneBook dir;
    dir.addContact("Sai","6300006765");
    dir.addContact("Sai","9949581279");
    dir.searchContact("Sai");
    dir.deleteContact("Sai");
    dir.searchContact("Sai");
    return 0;
}

*/

// Given two arrays, find the intersection of the two arrays and store the result in a map.
// Test case input:
// Array 1: {1, 2, 3, 4, 5}
// Array 2: {3, 4, 5, 6, 7}
/*#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    int array_1[] =  {1, 2, 3, 3, 4, 5};
    int array_2[] =  {3, 4, 5, 6, 7};
    unordered_map <int,int> array1Map;
    unordered_map <int,int> array2Map;
    unordered_map <int,int> intersectionOfArrays;
    for(int val: array_1) {
        array1Map[val]++;
    }
    for(int val: array_2) {
        array2Map[val]++;
    }
    for(auto key_val:array1Map) {
        if(array2Map.find(key_val.first)!=array2Map.end()) {
            intersectionOfArrays[key_val.first]++;
        }
    }
    for(auto key_val: intersectionOfArrays) {
        cout<<key_val.first<<" : "<<key_val.second<<endl;
    }cout<<endl;
    return 0;
}
*/

// Write a program to find the number of occurrences of each word in a text document using a map.
// Test case input: "The quick brown fox jumps over the lazy dog. The dog sees the fox and barks."
/*#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    string text = "The quick brown fox jumps over the lazy dog. The dog sees the fox and barks.";
    unordered_map <string,int> word_freq;
    int i=0;
    while(i<text.size()) {
        string word  = "";
        while(text[i]!=' ' and text[i]!='.') {
            word += text[i];
            i++;
        }
        if(word!="") {
        word_freq[word]++;
        }
        i++;
    }
    for(auto key_val: word_freq) {
        cout<<key_val.first<<" : "<<key_val.second<<endl;
    }
    return 0;
}
*/

// Implement a program to count the frequency of words in a sentence using a map. 
// Ignore punctuation and consider case-insensitive comparisons.
// Test case input: "The quick brown fox jumps over the lazy dog."
/*#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;
void lowercaseTransform(string &text) {
    string trans_text = "";
    for(char chr: text) {
        if(int(chr)>=65 and int(chr)<=90) {
            trans_text += char(int(chr)+32);
        }
        else {
            trans_text += chr;
        }
    }
    text = trans_text;
    return ;
}
int main() {
    string text = "The quick brown fox jumps over the lazy dog. The dog sees the fox and barks.";
    lowercaseTransform(text);
    unordered_map <string,int> word_freq;
    int i=0;
    while(i<text.size()) {
        string word  = "";
        while(text[i]!=' ' and text[i]!='.') {
            word += text[i];
            i++;
        }
        if(word!="") {
        word_freq[word]++;
        }
        i++;
    }
    for(auto key_val: word_freq) {
        cout<<key_val.first<<" : "<<key_val.second<<endl;
    }
    return 0;
}
*/

// Given an array of integers, find the pair of elements with the maximum sum using a map.
// Test case input: {1, 4, 2, 6, 3, 9}

/*#include <iostream>
#include <map>
using namespace std;
int main() {
    int array[] = {1, 4, 2, 6, 3, 9, 9};
    map <int,int> num_freq;
    for(int val: array) {
        num_freq[val]++;
    }
    map <int,int> :: iterator itr = num_freq.end();
    itr--;
    if((itr->second)>1) {
        cout<<2*itr->first<<endl;
    }
    else{
       int high = itr->first;
       itr--;
       int high_one = itr->first;
       cout<<high*high_one<<endl;
    }
    return 0;
}*/

// Write a program to find the first non-repeated character in a string using a map.
// Test case input: "hello world"

/*#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;
int main() {
    string word = "hello world";
    reverse(word.begin(),word.end());
    unordered_map <char,int> char_freq;
    for(char chr: word) {
      char_freq[chr]++;
    }
    for(auto key_val: char_freq) {
        if(key_val.second==1) {
            cout<<key_val.first<<endl;
            break;
        }
    }
    return 0;
}
*/

// Implement a program to find the maximum occurring character in a string using a map.
// Test case input: "hello world"
/*#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;
int main() {
    string word = "hello world";
    reverse(word.begin(),word.end());
    unordered_map <char,int> char_freq;
    for(char chr: word) {
      char_freq[chr]++;
    }
    int max = -100000;
    auto max_itr = char_freq.begin();
    for(auto key_val=char_freq.begin(); key_val!=char_freq.end(); key_val++) {
        if(key_val->second>max) {
            max = key_val->second;
            max_itr = key_val;
        }
    }
    cout<<max_itr->first<<" : "<<max_itr->second<<endl;
    return 0;
}
*/

// Given two arrays, find the union of the two arrays and store the result in a map.
// Test case input:
// Array 1: {1, 2, 3, 4, 5}
// Array 2: {4, 5, 6, 7, 8}

/*#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    int array_1[] = {1, 2, 3, 4, 5};
    int array_2[] = {4, 5, 6, 7, 8};
    unordered_map <int,int> unionOfArrays;
    for(int val: array_1) {
       if(unionOfArrays.find(val)==unionOfArrays.end()) {unionOfArrays[val]++;}
    }
    for(int val: array_2) {
       if(unionOfArrays.find(val)==unionOfArrays.end()) {unionOfArrays[val]++;}
    }
    for(auto key_val: unionOfArrays) {
        cout<<key_val.first<<" ";
    }cout<<endl;
    return 0;
}*/

// Write a program to find the top K frequent elements in an array using a map.
// Test case input:
// Array: {1, 2, 1, 3, 2, 4, 1, 5, 2, 3}
// Value of K: 3

/*#include<iostream>
#include<unordered_map>
using namespace std;
int main() {
    int array[] = {1, 2, 1, 3, 2, 4, 1, 5, 2, 3};
    unordered_map <int,int> arrayMap;
    int k = 3;
    for(int val: array) {
        arrayMap[val]++;
    }
    int i=0;
    while(i<k) {
        int max = -100000;
        auto max_itr = arrayMap.begin();
       for(auto key_val=arrayMap.begin(); key_val!=arrayMap.end(); key_val++) {
          if((key_val->second)>max) {
            max = key_val->second;
            max_itr = key_val;
         }
        }
        cout<<max_itr->first<<" : "<<max_itr->second<<endl;
        arrayMap.erase(max_itr);
        i++;
    }
    return 0;
}
*/

// Implement a program to find the median of an array using a map.
// Test case input:
// Array: {2, 4, 1, 5, 3}

/*#include <iostream> 
#include <map>
using namespace std;
int main() {
    int array[] = {2, 4, 1, 5, 3,6};
    multimap <int,int> arrayMap;
    int i=0;
    for(int val: array) {
        arrayMap.insert({val,1});
        i++;
    }
    auto itr = arrayMap.begin();
    if(i%2==0) {
        advance(itr,i/2-1);
        int ans = itr->first;
        itr++;
        cout<<(ans+(itr->first))/2.0;
    }
    else {
        advance(itr,i/2);
        cout<<itr->first;
    }
    return 0;
}*/

// Given a string, check if it is a palindrome using a map.
// Test case input: "racecar"

/*#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    string word = "racecar";
    unordered_multimap <char,int> char_map1;
    unordered_multimap <char,int> char_map2;
    if(word.size()%2==0) {
        for(int i=0; i<word.size()/2; i++) {
            char_map1.insert({word[i],1});     
        }for(int i=word.size()-1; i>=word.size()/2; i--) {
            char_map2.insert({word[i],1});     
        }
        auto itr1 = char_map1.begin();
        auto itr2 = char_map2.begin();
        int result;
        while(itr1!=char_map1.end() and itr2!=char_map2.end()) {
            result = 0;
            if(itr1->first!=itr2->first) {
                break;
            }
            else {
                result = 1;
                itr1++;
                itr2++;
            }
        }
        if(result == 1) {
            cout<<"Yes";
        }else {
            cout<<"No";
        }
    }
    else {
        for(int i=0; i<word.size()/2; i++) {
            char_map1.insert({word[i],1});     
        }for(int i=word.size()-1; i>word.size()/2; i--) {
            char_map2.insert({word[i],1});     
        }
        auto itr1 = char_map1.begin();
        auto itr2 = char_map2.begin();
        int result;
        while(itr1!=char_map1.end() and itr2!=char_map2.end()) {
            result = 0;
            if(itr1->first!=itr2->first) {
                break;
            }
            else {
                result = 1;
                itr1++;
                itr2++;
            }
        }
        if(result == 1) {
            cout<<"Yes";
        }else {
            cout<<"No";
        }
        
    }
    return 0;
}*/


#include <iostream>
#include <bits/stdc++.h>
#include <climits>
using namespace std;
vector <int> book;
unordered_map <int,vector<int>> book_idx;
vector <int> flag;
vector <int> getResult(int idx) {
    vector <int> result;
    while(true){
        flag[idx] = 0;
        result.push_back(idx);
        if(book_idx.find(book[idx]+1)!=book_idx.end()){
            int check = 1;
            for(int i: book_idx[book[idx]+1]){
                if(i>idx){
                    idx = i;
                    check = 0;
                    break;
                }
            }if(check){
                break;
            }
        }else{
            break;
        }
    }return result;
}int main() {
    int n;
    cin>>n;
    book.resize(n);
    for(int i=0; i<n; i++){
        cin>>book[i];
        book_idx[i].push_back(i);
    }vector <int> result;
    flag.resize(n,1);
    for(int i=0; i<n; i++){
        if(flag[i]){
            vector <int> temp = getResult(i);
            if(temp.size()>result.size()){
                result = temp;
            }
        }
    }cout<<result.size()<<endl;
    for(int val: result){
        cout<<val<<endl;
    }return 0;
}
