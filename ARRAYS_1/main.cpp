// #include <iostream>
// using namespace std;
// int main() {
    //int array[] = {1,2,3,4,5};
    // cout<<array;
    //int k = (sizeof(array)/sizeof(array[1]));
    /*cout<<sizeof(array)<<endl;
    cout<<(sizeof(array)/sizeof(array[1]))<<endl;
    int array_1[5];
    cout<<array_1[0]<<endl;*/
    /*for(int i=0; i<k; i++) {
        // cout<<array[i]<<endl;
    }
    // for each item;
    for(int item: array) {
        // cout<<item<<endl;
    }
    int i = 0;
    while(i<k) {
        // cout<<array[i]<<endl;
        i++;
    }
    char alfa;
    char vowels[5];
    int sigma = sizeof(vowels)/sizeof(vowels[0]);
    for(i=0; i<sigma; i++) {
    
    // cout<<"entervowel"<<endl;
    // cin>>alfa;
    vowels[i] = alfa;
}
   for(i=0;i<sigma;i++) {
   // cout<<vowels[i]<<endl;
}
   for (char &item: vowels) {
    //   cin>>item;
   }
   for(char element: vowels) {
    // cout<<element<<endl;
   }
   int j=0;
   while(j<sigma ) {
    // cout<<"entervowel"<<endl;
    // cin>>alfa;
    vowels[i] = alfa;
    j++; } 
   for(j=0;j<sigma;j++) {
   //cout<<vowels[i]; 
   }*/
//task-1:
  /* int number[] = {3,4,10,11};
   int omega = sizeof(number) / sizeof(number[2]);
   int sum = 0 ;
   for(i=0; i<omega; i++){
       sum += number[i];
   }*/
//   cout<<sum;
   /*int max[] = {3,7,18,9,11};
   int beta = sizeof(max)/sizeof(max[0]);
   int high = max[0];
   for(int l=1; l<beta; l++) { 
           if (max[l] > high) {
               high = max[l];
           }
   } 
   cout<<beta<<endl;
   cout<<high<<endl; }*/
   /*int x[] = {1,2,3,4,5};
   int gamma = sizeof(x)/sizeof(x[0]);
   int y;
   cin>>y;
   int k;
   int i;
   for( i=0; i<gamma; i++) {
       if ( y == x[i] ) {
           k = 1;
           break;
       }
   }
   if  (k==1) {
       cout<<i;
   }
   else {
       cout<<-1;
   }
   return 0;
}*/
   
   
   
   
   
   
   
   
   

// arrays in c++;
// what is an array?
// data structures which stores a collections of items;....
//  it stores homogeneous items
// int , chaar, bool all items are of same type 
// contiguous memory 
// index: locations of every element;
// arrays are zero indexed;
//  datatypeofanarray arrayname[array size]
// eg: int array[5]
// int array[] = {1,2,3,4,5} #no need of defining size of an array in this case;
// contiguous memory allocation;
// for eg: int array[5];
// consecutive blocks of memory;
// int size: 4bytes; float size: 4bytes; char size: 1byte; double size: 8bytes;
// 1st element at 100...2nd element at 104; 3rd element at 108.........
// char alphabets[26] size: 26*1 = 26;
// int my_num[4] size: 4*4=16;
// array types...
// single dimensional and multidimensional...
// single dimensional arrays are 0 based indexing...
// int array[1]=2;
// size opetation in arryas
 /*#include <iostream>
using namespace std;
int main() {
    int array[] = {1,2,3,4,5};
    cout<<sizeof(array)<<endl;
    cout<<(sizeof(array)/sizeof(array[1]));
}
*/
// Traversing through the array;
// for loop 
/*#include <iostream>
using namespace std;
int main() {
    int array[] = {1,2,3,4,5};
    int k = (sizeof(array)/sizeof(array[1]));
    cout<<sizeof(array)<<endl;
    cout<<(sizeof(array)/sizeof(array[1]))<<endl;
    int array_1[5];
    cout<<array_1[0]<<endl;
    for(int i=0; i<k; i++) {
        cout<<array[i]<<endl;
    }
}*/
// for each loop:
/*for(int item: array) {
     cout<<item<<endl;
    }*/
// while loop: 
/*int i = 0;
    while(i<k) {
        cout<<array[i]<<endl;
        i++;
    }*/
/*dynamic arrays---resize when and delete elements..
contiguous memory allocation 
#include <vector> 
1)declaration: 
vector<datatype> vector-name;
vector<datatype> vector-name(size);
vector <int> v;
2)size:
    v.size() ---- length;
    vsize() = 4;
3)resize:
    v.resize(new size);
    v.resize(8)
    v.size = 8; 
4) capacity: 
    v.capacity() 
    capacity>=size;
    v.resize(8)..capacity = 16; 
    vector<int> v; size = 0;
                   capacity = 0;
    size = 1;       size = 2;        size = 3;       size = 4;.............
    capacity =1;    capacity = 2;    capacity = 4;   size = 8;..............
5) add elements;
                -v.push-back(element)
                v.push-back(5)
                -v.insert(position, element)
                -----relative to the position of first element;
                position: -v.begin();____v.insert(v.begin()+2, 5);
                
                          -v.end();_____v.insert(v.end()-3, 5);
6)delete elements;
                -v.pop-back()
                -v.erase(positon)
                -----relative to the position of starting and ending elements...
                -v.erase(v.begin()+2);
                -v.erase(v.end()-2);
                -to deleta all: v.clear();
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// int main() {
    // vector <int> v;
    /*cout<<"size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;
    v.push_back(4);
    cout<<"size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;
    v.push_back(5);
    cout<<"size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;
    v.push_back(6);
    cout<<"size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;
    v.pop_back();
    cout<<"size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;
    v.pop_back();
    cout<<"size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;
    v.resize(8);
    cout<<"size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;
    v.resize(10);
    cout<<"size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;
    v.pop_back();
    cout<<"size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;
    v.pop_back();
    cout<<"size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;
    */
    // for loop in vectors...
    // for(int i=0; i<5; i++){
    //     int k;
    //     cin>>k;
    //     v.push_back(k);
    // }
    // for(int j=0;j<5; j++) {
    //     cout<<v[j]<<" ";
    // }
    // for each loop in vectors...
    /*for(int i=0; i<5; i++){
        int k;
        cin>>k;
        v.push_back(k);
    }
    for(int element: v) {
        cout<<element<<" ";
    }*/
    // while loop in vectors....
   /* int i = 0;
    while(i<5) {
        int k;
        cin>>k;
        v.push_back(k);
        i++;
    }
    int j = 0;
    while(j<5) {
        cout<<v[j]<<" ";
        j++;
    }*/
    /*vector<int> A;
    A.resize(5);
    A.push_back(1);
    cout<<"size of A:"<<A.size()<<endl;
    cout<<"capacity of A"<<A.capacity()<<endl;
    A.insert(A.begin()+2, 9);
    cout<<A[2]<<endl;
    cout<<"size of A:"<<A.size()<<endl;
    cout<<"capacity of A: "<<A.capacity()<<endl;
    
    A.erase(A.end()-5);
    cout<<A[2]<<endl;*/
    /*int numerical[] = {1,2,3,2,4,2,6,2,2,5};
    int rank = sizeof(numerical) / sizeof(numerical[1]);
    int k;
    cin>>k;
    int i;
    cout<<rank<<endl;
    int ans;
    for (i=0; i<rank; i++) {
        if (numerical[i] == k) {
            ans = i;
        }
        
    }
        cout<<ans<<endl;
   
}*/
    /*vector <int> numerical;
    int i;
    for(i=0; i<10; i++) {
        int k;
        cin>>k;
        numerical[i] = k;
    }
    int ans;
    int u;
    cin>>u;
    for(i=0;i<numerical.size();i++) {
        if (numerical[i] == u) {
            
            ans = i;
        }
    }
    cout<<ans;
 }*/
/* int number[] = {3,4,6,7,1};
 int i,j,k,l,m,n;
 cin>>k;
 n = 0;
 m = sizeof(number) / sizeof(number[1]);
 for(i=0;i<m;i++) {
     for(j=i+1;j<m;j++){
         if (number[i]+number[j]==k) {
             n++;
             l = n;
         }
     }
 }
     cout<<l;
     return 0;
 }*/
/* int number[] = {3,4,6,7,1};
 int i,j,k,l,m,n,p;
 cin>>k;
 n = 0;
 m = sizeof(number) / sizeof(number[1]);
 for(i=0;i<m;i++) {
     for(j=i+1;j<m;j++){ 
         for(p=j+1;p<m;p++){
         if (number[i]+number[j]+number[p]==k) {
             n++;
             l = n;
         }
        }
     }
 }
     cout<<l;
     return 0;
 }*/
/*int number[] = {3,4,6,7,1};
 int i,j,k,l,m,n;
 cin>>k;
 n = 0;
 m = sizeof(number) / sizeof(number[1]);
 for(i=0;i<m;i++) {
     for(j=0;j<m;j++){
         if (number[i]+number[j]==k) {
             n++;
             l = n;
         }
     }
 }
     cout<<l/2;
     return 0;
 }*/
 //incomplete program to find unique number;....
 /*int number[] = {1,2,1,3,4,3,4,5,8,6,5,7,7,6,2};
 int i,j,k,l,m,n,p;
 n = 0;
 bool ans;
 m = sizeof(number) / sizeof(number[1]);
 for(i=0;i<m;i++) {
     for(j=0,n=0;j<m;j++) {
         if (number[i]==number[j] && i!=j) {
             ans = true;
             n++;
             if (n==0) {
             ans = false;
             k = number[i]; }
             break;if (n <1) {
                  ans = false;
                  k = i;
                 
              }
  
              }  }   }
     cout<<number[k];
     return 0;
 }*/
/* int number[] = {1,1,2,3,4,4,5,5,8,6,7,8,7,2,6};
 int i,j,k,m,n,ans;
 n = sizeof(number)/sizeof(number[2]);
 for(i=0;i<n;i++) {
     for(j=i+1;j<n;j++) {
         if (number[i]==number[j]) {
             number[i] = number[j] = -2;
         }
     }
 }
     for(i=0;i<n;i++) {
         if(number[i]>0) {
             cout<<number[i];
         }
     }
 
    return 0;
 }*/
 /*int number[] = {2,5,4,7,3,8,9,9};
 int i,high,size,high_but_one;
 high = 0;
 size = sizeof(number)/sizeof(number[2]);
 for(i=0;i<size;i++){
   
    if (high<number[i])  {
        
        high_but_one = high;
        high = number[i];

    }
    
    if (high_but_one<number[i] && high>number[i] ) {
     high_but_one = number[i];
    }
 }
 cout<<high_but_one;
 return 0;
 }*/
/* int series[] = {1,2,3,4,5};
 int i,j,k,l,m;
 m = sizeof(series) / sizeof(series[1]);
 cout<<"enter k: ";
 cin>>k;
 
 for(j=1;j<=k;j++) {
 series[5] = series[0];
 for(i=0;i<m;i++) {
    series[i] = series[i+1];
 }
 }
 for(i=0;i<m;i++) {
 cout<<series[i]<<endl;
 }
 return 0;
 } */
/* int series[] = {1,2,3,4,5};
 int i,j,k,l,m;
 m = sizeof(series) / sizeof(series[1]);
 cout<<"enter k: ";
 cin>>k;
 int ans_series[m];
 for(j=1;j<=k;j++) {
 m = sizeof(series) / sizeof(series[1]);
 series[-1] = series[m-1];
 //cout<<series[m-1]<<endl;
 for(i=m-1;i>=0;--i) {
    ansseries[i] = series[i-1];
    ans_series[i] = series[i];
 }
// cout<<series[4]<<endl;
 }
for(l=0;l<5;l++) {
 cout<<ans_series[l]<<endl;
 }
 
 return 0;
 } */
 /*int series[] = {1,2,3,4,5};
 int m = sizeof(series) / sizeof(series[1]);
 int i,j,k;
 j = 0;
 cin>>k;
 int ans_series[m];
 for(i=m-k;i<m;i++) {
     ans_series[j] = series[i];
     j++;
 }
 for(i=0;i<=k;i++) {
     ans_series[j] = series[i];
     j++;
 }
 cout<<"ANSWER SERIES :"<<endl;
 for(i=0;i<m;i++) {
   cout<<ans_series[i]<<endl;
 }
 return 0;
 }*/
 /*#include <iostream>
 #include <vector>
 using namespace std;
 int main() {
 int i;
 vector <int> N;
 N.push_back(1);
 N.push_back(2);
 N.push_back(3);
 N.push_back(4);
 N.push_back(5);
 reverse(N.begin(),N.end());
 reverse(N.begin(),N.begin()+1);
 reverse(N.begin()+2,N.end());
 for(i=0;i<N.size();i++) {
     cout<<N[i]<<" ";
 }
 } */
/* int array[] = { 1,2,3,3,2,5,3,4,2,7,8,4,9,5 };
 int i,j,m,query;
 cin>>query;
 j = 0;
 m = sizeof(array) / sizeof(array[1]);
 for(i=0;i<=m;i++) {
     if(query == array[i]) {
         j++;
     }
 }
 cout<<j<<endl;
 }
 */
 /*int sort[] = {1,1,0,1,0,1,1,0,0,1,0,0,1,0 };
 vector <int>  sort_zero;
 vector <int> sort_one;
 int i,j,k;
 m = sizeof(sort) / sizeof(sort[1]);
 for(i=0;i<m;i++) {
     if (sort[i] == 0) {
         sort_zero.push_back(0);
     }
     else {
         sort_one.push_back(1);
     }
 }
 int sorted[] = sort_zero + sort_one;
 for (i=0;i<m;i++) {
     cout<<sorted[i]<<" ";
 }
*/
/*vector <int> zeroes_ones;
int i,j,k,l,m;
cout<<"enter the size of the vector: "<<endl;
cin>>m;
cout<<"enter zeroes_ones vector: "<<endl;
for(i=0;i<m;i++) {
    cin>>k;
    zeroes_ones.push_back(k);
}
j = 0;
for(i=0;i<m;i++) {
    if (zeroes_ones[i]==0) {
        j++;
    }
}
zeroes_ones.clear();
cout<<"sorted_vector: "<<endl;
for(i=0;i<m;i++) {
if (i<j) {
    zeroes_ones.push_back(0);
}
else {
    zeroes_ones.push_back(1);
}
}
for(i=0;i<m;i++) {
    cout<<zeroes_ones[i]<<endl;
}
}
*/
/*int array[] = {1,0,1,1,0,1,1,0,1,1,0,1,1};
int m = sizeof(array) / sizeof(array[0]);
int i,j,k;
for(i=0,j=m-1;i<m/2,j>m/2;i++,j--) {
    if(array[i]==1 && array[j]==0) {
      array[i] = 0;
      array[j] = 1;
    }
    if (array[i]==0 && array[j]==0) {
        i++;
      if(array[i]==1 && array[j]==0) {
      array[i] = 0;
      array[j] = 1;
    }
    }
    if (array[i]==1 && array[j]==1) {
        j++;
        if(array[i]==1 && array[j]==0) {
        array[i] = 0;
        array[j] = 1;
    }
    }
}
for (i=0;i<m;i++) {
    cout<<array[i]<<" ";
}
}*/
/*int number[] = {7,8,2,3,55,65,72,89,10256};
int i,j,k;
int m = sizeof(number) / sizeof(number[1]);
vector <int> even_Number;
vector <int> odd_Number;
for(i=0;i<m;i++) {
    if (number[i]%2==0) {
       even_Number.push_back(number[i]);
    }
    else {
        odd_Number.push_back(number[i]);
    }
}
for(i=0;i<odd_Number.size();i++) {
    even_Number.push_back(odd_Number[i]);
}
for(i=0;i<even_Number.size();i++) {
    cout<<even_Number[i]<<" ";
}
}*/
/*void sortmyvector(vector <int> &us) {
int j = 0;
int k = us.size()-1;
while (j<k) {
    if(us[j]==0 && us[k]==1) {
        us[j] = 1;
        us[k] = 0;
        j++;
        k--;
    }
    if(us[j]==0) {
        j++;
    }
    if(us[k]==1) {
        k--;
    }
}

}
int main() {
vector <int> us;
//vector <int> S;
int i,j,k,n;
cout<<"enter n: ";
cin>>n;
cout<<"enter unsorted series of zeroes and ones: "<<endl;
for(i=0;i<n;i++) {
   int l;
   cin>>l;
   us.push_back(l);
}
sortmyvector(us);
for(i=0;i<n;i++) {
    cout<<us[i]<<" ";
}
return 0;
}*/

/*vector <int> us;
int i,j,k,n;
cout<<"enter n: ";
cin>>n;
cout<<"enter unsorted series of zeroes and ones: "<<endl;
for(i=0;i<n;i++) {
   int l;
   cin>>l;
   us.push_back(l);
}
}*/
/*int main() {
    vector <int> v(7);
    int count = 0;
    // cout<<v.size();
    int i,j,k,ans;
    for(i=0;i<v.size();i++) {
        cin>>k;
        v[i]=k;
    }
    for(i=0;i<v.size();i++) {
        ans = 0;
        for(j=0;j<i;j++) {
            if(v[i]==v[j] && i!=j) {
                ans = 1;
                break;
            }
        }
    if(ans==1) {
        count += 1;
    }
    }
    if(count!=0) {
        cout<<"false";
    }
    else {
        cout<<"true";
    }
return 0;
} */
/*int main() {
    int i,j,k,m;
    bool result = true;
    cout<<"enter size of the vector: ";
    cin>>m;
    vector<int> v(m);
    for(i=0;i<v.size();i++) {
        cin>>k;
        v[i] = k;
    }
    sort(v.begin(), v.end());
    for(i=0;i<m;i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    for(i=0;i<m;i++) {
        if((v[i+1]-v[i])>1) {
            result = false;
            break;
        }
    }
    if(result==false) {
        cout<<"false";
    }
    else{
        cout<<"true";
    }
   return 0;
} */
/*int main() {
    int i,j,k,m;
    int result = false;
    cout<<"enter size: ";
    cin>>m;
    vector <int> v(m);
    for(i=0; i<v.size(); i++) {
        cin>>k;
        v[i] = k;
    }
    for(i=0; i<v.size(); i++) {
        if(v[i-1]>v[i] && v[i]<v[i+1]) {
            result = true;
            cout<<v[i]<<" ";
        }
    }
    return 0;
} */
#include <iostream>
#include <vector>
#include <cstring>
/*int main() {
    int i,j,k,m;
    string color;
    string mod_color;
    cout<<"enter the number of colors: ";
    cin>>m;
    vector <string> colors(m); 
    for(i=0; i<colors.size(); i++) {
        cin>>color;
        colors[i] = color;
    }
    for(i=0; i<colors.size(); i++) {
        for(j=0; j<colors[i].size(); j++) {
            colors[i][j] = tolower(colors[i][j]);
        }
            colors[i][0] = toupper(colors[i][0]);
        cout<<colors[i]<<" ";
        
    }
  return 0;
}*/
/*int main() {
    int i,j,k,m;
    int ans = 0;
    string str;
    // string str_1;
    // string str_2;
    vector <string> strings(2);
    for(i=0; i<2; i++ ) {
        cin>>str;
        strings[i] = str;
    }
    for(i=0;i<strings[1].size();i++) {
        for(j=0; j<strings[0].size(); j++) {
            if(strings[1][i] == strings[0][j]) {
                ans += 1;
                break;
            }
        }
    }
    if(ans == strings[1].size()) {
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}
*/
/*int main() {
    int i,j,k,m;
    int count;
    cout<<"enter the number of string you want to insert: ";
    cin>>k;
    vector <string> strings(k);
    string alphanumber;
    for(i=0;i<k;i++) {
        cin>>alphanumber;
        strings[i] = alphanumber;
    }
    // cout<<strings.size();
    string numbers = "0123456789";
    for(i=0;i<strings.size();i++) {
        count = 0;
        for(j=0;j<strings[i].size();j++) {
            for(m=0;m<numbers.size();m++) {
            if(strings[i][j] == numbers[m]) {
                count += 1;
                break;
            }
    }
    }
    if(count>0) {
        cout<<strings[i]<<" ";
    }
    }
    return 0;
}
*/

















