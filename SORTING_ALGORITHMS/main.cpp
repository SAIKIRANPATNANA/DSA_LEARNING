/*#include <iostream>
using namespace std;
void sortArray(int *array, int n ) {
bool flag;
    for(int i=0;i<n-1;i++) {
        for(int j=0; j<n-1-i; j++) {
            if(array[j]>array[j+1]) {
                // array[j] = array[j] + array[j+1];
                // array[j+1] = array[j] - array[j+1];
                // array[j] = array[j] - array[j+1];
                swap(array[j],array[j+1]);
                //optimization for the case of nearly sorted array;
                flag = true;
            }
        }
        if(flag!=true) {
            break;
        }
    }
    for(int i=0; i<n; i++) {
        cout<<array[i]<<" ";
    }
    return;
}
int main() {
    int array[5] = {3,1,2,4,5};
    int n = sizeof(array)/sizeof(array[0]);
    sortArray(array,n);
    return 0;
    //time_complexity: 
    //total no. of swaps: n(n-1)/2 ~ n^2 in worst_case;
    //time_complexity = O(n^2);
    //space_complexity = O(1);
}*/
//bubble_sort_algorithm def: repeatedly swap 2 adj elements if in wrong order;
//bubble sort algorithm is a stable algorithm;
//stability: order of elements with the same value are not disturbed;
//for eg:  10  30 20 40 30*;
//after_sorting_thru_stable_algorithm : 10 20 30 30* 40 50;
//after_sorting_thru_unstable_algorithm : 10 20 30 30* 40 50 / 10 20 30* 30 40 50;
//selection_sort_algorithm;
//repeatedly find min element in unsorted array and place it at the beginning;
//or repeatedly find max element in unsorted array and place it at the ending;
/*#include <iostream>
using namespace std;
int main() {
    int array[] = {2,1,3,4,5};
    int n = sizeof(array)/sizeof(array[0]);
    //bubble_sort_algorithm;
    // for(int i=0; i<n-1; i++) {
    //     int count = 0;
    //     for(int j=0; j<n-1-i; j++) {
    //         if(array[j]>array[j+1]) {
    //             swap(array[j], array[j+1]);
    //             count++;
    //         }
    //     }
    //     if(count==0) {
    //         break;
    //     }
    // }
    //sellection_sort_algorithm;
    //It's an unstable algorithm;
    for(int i=0; i<n; i++) {
        int min_idx = i;
        for(int j=i+1; j<n; j++) {
            if(array[min_idx]>array[j]) {
               min_idx = j;
            }
        }
        if(i!=min_idx) {
             swap(array[min_idx],array[i]);
        }
    }
    //time_complexity(worst_case) = O(n^2);
    //time_complexity(best_case) = O(n^2);
    //space_complexity = O(1);
    //max_no_of_swaps = O(N);
    for(int i=0; i<n; i++) {
        cout<<array[i]<<" ";
    }
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main() {
    int array[] = {6,7,8,9,10};
    int n = sizeof(array)/sizeof(array[0]);
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-1-i; j++) {
            if(array[j]<array[j+1]) {
                swap(array[j],array[j+1]);
            }
        }
    }
    for(int i=0; i<n; i++) {
        cout<<array[i]<<" ";
    }
    return 0;
}*/
// #include <iostream>
// using namespace std;
// int main() {
//     string array[] = {"application", "applycable", "applying", "appliance", "appropriate"};
//     int n = sizeof(array)/sizeof(array[0]);
//     for(int i=0; i<n-1; i++) {
//         for(int j=0; j<n-i; j++) {
//             if(int(array[j][0])>int(array[j+1][0])) {
//                 swap(array[j],array[j+1]);
//             }
//             else {
//                 if(int(array[j][0])==int(array[j+1][0])) {
//                 int p = 0;
//                 int q = 0;
//                 while(int(array[j][p++])==int(array[j+1][q++])) {
//                   if(int(array[j][p++])>int(array[j+1][q++])){
//                       swap(array[j],array[j+1]);
//                       break;
//                   }
//                   else {
//                       p++;
//                       q++;
//                   }
//                 }
//                 }
//             }
//         }
//     }
//     for(int i=0; i<n; i++) {
//         cout<<array[i]<<" ";
//     }
//     return 0;
// }
/*#include <iostream>
using namespace std;
int main() {
    string str1 = "application";
    string str2 = "appliance";
    if(int(str1[0]) == int(str2[0])) {
        int p = 0;
        int q = 0;
        while(int(str1[++p])==int(str2[++q])) {
            if(int(str1[++p])>int(str2[++q])) {
                swap(str1,str2);
                break;
            }
            else{
                p++;
                q++;
            }
        }
    }
    cout<<str1;
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main() {
    int array[] = {25,76,93,100,1};
    int n = 5;
    for(int i=0; i<n; i++) {
        int max_idx = 0;
        for(int j=1; j<n-i; j++) {
            if(array[max_idx]<array[j]) {
                max_idx = j;
            }
       }
       if(max_idx!=n-1-i) {
           swap(array[max_idx],array[n-1-i]);
       }
    }
    for(int i=0; i<n; i++) {
        cout<<array[i]<<" ";
    }
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main() {
    int array[] = {6, 4, 3, 2, 8, 1};
    int n = sizeof(array)/sizeof(array[0]);
    int swap_count = 0;
    for(int i=0; i<n; i++) {
        // int ilc = 0;
        for(int j=0; j<n-i-1; j++) {
            if(array[j]>array[j+1]) {
                swap(array[j],array[j+1]);
                swap_count++;
                ilc++;
            }
        }
        // if(ilc == 0) {
        //     break;
        // }
    }
    for(int i=0; i<n; i++) {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    cout<<swap_count<<endl;;
    return 0;
}*/
// #include<iostream>
// using namespace std;
// int main() {
    
// }
//ipynb: interactive python notebook
/*#include <iostream>
using namespace std;
int main() {
    int array[] = {1,3,2,5,4};
    int n = sizeof(array)/sizeof(array[0]);
    //bubble_sort_algorithm_practice:
    // for(int i=0; i<n-1; i++) {
    //     int count = 0;
    //     for(int j=0; j<n-1-i; j++) {
           
    //         if(array[j]>array[j+1]) {
    //             swap(array[j],array[j+1]);
    //         }
    //     }
    //     if(count==0) {
    //         break;
    //     }
    // }
    //selection_sort_algorithm:
    // for(int i=0; i<n; i++) {
    //     int min_idx = i;
    //     for(int j=i+1; j<n; j++) {
    //         if(array[min_idx]>array[j]) {
    //             min_idx = j;
    //         }
    //     }
    //     if(min_idx!=i) {
    //         swap(array[i],array[min_idx]);
    //     }
    // }
    //aliter_in_selection_sort_algorithm;
    // for(int i=0; i<n; i++) {
    //     int max_idx = i;
    //     for(int j=0; j<n-i; j++) {
    //         if(array[max_idx]<array[j]) {
    //             max_idx = j;
    //         }
    //     }
    //     if(max_idx!=i){
    //         swap(array[n-i-1],array[max_idx]);
    //     }
    // }
    // for(int i=0; i<n; i++) {
    //     cout<<array[i]<<" ";
    // }
    return 0;
}
*/
//insertion_sort_algorithm:
//repeatedly take elements from unsorted sub_array and insert it in sorted  sub_array(correct position);
/*#include <iostream>
#include <vector>
using namespace std;
int main() {
    // int array[] = {11,8,5,9,4};
    vector <int> v = {11,8,5,9,4};
    // int n = sizeof(array)/sizeof(array[0]);
    int n = v.size();
    for(int i=1; i<n; i++) {
        int trend = v[i];
        int j = i-1;
        while(j!=-1 and v[j]>trend) {
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = trend; //j_is_changing;
    }
    for(int i=0; i<n; i++) {
        cout<<v[i]<<" ";
    }
    return 0;
}*/
/*#include <iostream>
#include <vector>
using namespace std;
int main() {
    int array[] = {11,8,5,9,4};
    int n = sizeof(array)/sizeof(array[0]);
    for(int i=1; i<n; i++) {
        int trend = array[i]; //trend is current element;
        int j = i-1;
        while(j!=-1 and array[j]>trend) {
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = trend; //j_is_changing;
    }
    for(int i=0; i<n; i++) {
        cout<<array[i]<<" ";
    }
    //worst_case_time_comeplexity = n(n-1)/2 ==>O(n^2);
    //best_case_time_complexity = omega(n);
    //space_complexity = O(1);
    //it's stable_algorithm;
    return 0;
}*/
//problem_1: 
/*#include <iostream>
using namespace std;
int main() {
    // int array[] = {3,0,2,0,1,5};
    int array[] = {0,5,0,3,4,2};
    int n = sizeof(array)/sizeof(array[0]);
    for(int i=0; i<n-1; i++) {
        int count = 0;
        for(int j=0; j<n-1-i; j++) {
            if((array[j]==0 && array[j+1]!=0)) //or (array[j+1]==0 && array[j]==0)) {
                swap(array[j],array[j+1]);
                count++;
            }
            if(count == 0 ) {
                break;
            }
        }
        
        for(int i=0; i<n; i++) {
        cout<<array[i]<<" ";
    }
    //time_complexity: O(n^2);
    //space_complexity: O(n);
     return 0;
    }
*/
// #include <iostream>
// using namespace std;
// int main() {
//     // int array[] = {3,0,2,0,1,5};
//     int array[] = {0,5,0,3,4,2};
//     int n = sizeof(array)/sizeof(array[0]);
//     for(int i=n-1; i>=0; i--) {
//         int count = 0;
//         for(int j=0; j<i; j++) {
//             if((array[j]==0 && array[j+1]!=0)) {
//                 swap(array[j],array[j+1]);
//                 count++;
//             }
//         }
//         if(count == 0 ) {
//                 break;
//      }
//     }
//         for(int i=0; i<n; i++) {
//         cout<<array[i]<<" ";
//     }
//      return 0;
//     }
// #include <iostream>
// using namespace std;
// int main() {
//     int array[] = {3,0,2,0,1,5};
//     int n = sizeof(array)/sizeof(array[0]);
//     for(int i=n-1; i>=0; i--) {
//         bool flag = false;
//         int j = 0;
//       while(j!=i) {
//             if((array[j]==0 && array[j+1]!=0)) {
//                 swap(array[j],array[j+1]);
//                 flag = true;
//             }
//             j++;
//         }
//         if(flag==false) {
//                 break;
//         }
//     }
//         for(int i=0; i<n; i++) {
//         cout<<array[i]<<" ";
//     }
//      return 0;
//     }
/*#include <iostream>
#include <cstring>
using namespace std;
int main() {
    string array[] = {"papaya","lime","watermelon","apple","mango","kiwi"};
    int n = sizeof(array)/sizeof(array[0]);
    for(int i=0; i<n-1; i++) {
        int min_idx = i;
        for(int j=i+1; j<n; j++) {
        if(array[min_idx][0]>array[j][0]) {
            min_idx = j;
        }
        }
        if(min_idx!=i) {
            swap(array[min_idx],array[i]);
        }
    }
    for(int i=0; i<n; i++) {
        cout<<array[i]<<" ";
    }
    //space_complexity: O(1);
    //time_complexity: O(n^2);
    return 0;
}*/
/*#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char array[][60] = {"application", "applycable", "applying", "appliance", "appropriate"};
    int n = sizeof(array)/sizeof(array[0]);
    for(int i=0; i<n-1; i++) {
        bool flag = false;
        for(int j=0; j<n-i-1; j++) {
            // string word_1 = array[j];
            // string word_2 = array[j+1];
           if(strcmp(array[j],array[j+1])>0) {
               swap(array[j],array[j+1]);
               flag = true;
           }
    }
    if(!flag) {
        break;
    }
    }
    for(int i=0; i<n; i++) {
        cout<<array[i]<<" ";
    }
    return 0;
}*/

/*#include <iostream>
using namespace std;
string checkAlphaOrder(string word_1, string word_2, int i) {
if (i<=word_1.length() and i<=word_2.length()) {
    if((int(word_1[i])>int(word_2[i]))) {
        return word_1;
    }
    else if(int(word_1[i])<int(word_2[i])) {
        return word_2;
    }
    else {
     return checkAlphaOrder(word_1,word_2,i+1);
    }
}
if(word_1.length()>word_2.length()) {
    return word_1;
}
else {
    return word_2;
}
}
int main() {
    string array[] = {"application", "applycable", "applying", "appliance", "appropriate"};
    int n = sizeof(array)/sizeof(array[0]);
    for(int i=0; i<n-1; i++) {
        int count = 0;
        for(int j=0; j<n-i-1; j++) {
            if(checkAlphaOrder(array[j],array[j+1],0) == array[j]) {
                swap(array[j],array[j+1]);
                count ++;
            }
        }
        if(count==0) {
            break;
        }
    }
    for(int i=0; i<n; i++) {
        cout<<array[i]<<" ";
    }
    return 0;
}*/
// #include <iostream>
// using namespace std;
// int main() {
//     float array[] = {3.14, 1.41, 2.72, 4.67, 5.0};
//     int n = sizeof(array)/sizeof(array[0]);
//     //using insertion_sort_algorithm;
//     for(int i=1; i<n; i++) {
//         float temp = array[i];
//     for(int j=i-1; j>=0; j--) {
//         if(array[j]>temp) {
//             array[j+1] = array[j];
//             array[j] = temp;
//           }
//         // else{
//         //     array[i] = temp;
//         // }
//     }
//     }
//     for(int i=0; i<n; i++) {
//         cout<<array[i]<<" ";
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main() {
//     float array[] =  {3.14, 1.41, 2.72, 4.67, 5.0};
//     int n = sizeof(array)/sizeof(array[0]);
//     for(int i=1; i<n; i++) {
//         float temp = array[i];
//         int j = i-1;
//         while(/*(j!=1)*/j>=0 && temp<array[j]){
//             array[j+1] = array[j];
//             j--;
//         }
//         array[j+1] = temp;
//     }
//     for(int i=0; i<n; i++) {
//         cout<<array[i]<<" ";
//     }
//     return 0;
// }
/*#include <iostream>
using namespace std;
int main() {
    int array[] =  {5, 1, 4, 2, 8};
    int n = sizeof(array)/sizeof(array[0]);
    for(int i=0; i<n; i++) {
        int min_idx = i;
        for(int j=i+1; j<n; j++) {
            if(array[j]<array[min_idx]) {
                min_idx = j;
            }
        }
        if(min_idx!=i) {
            swap(array[i],array[min_idx]);
        }
    }
    for(int i=0; i<n; i++) {
        cout<<array[i]<<" ";
    }
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main() {
    int array[] =  {5, 1, 4, 2, 8};
    int n = sizeof(array)/sizeof(array[0]);
    for(int i=0; i<n; i++) {
        int max_idx = i;
        for(int j=i+1; j<n; j++) {
            if(array[j]>array[max_idx]) {
                max_idx = j;
            }
        }
        if(max_idx!=i) {
            swap(array[i],array[max_idx]);
        }
    }
    for(int i=0; i<n; i++) {
        cout<<array[i]<<" ";
    }
    return 0;
}*/
// #include <iostream>
// using namespace std;
// string checkAlphaOrder(string word1, string word2, int i) {
//     while(i<word1.length() && i<word2.length()) {
//         if(word1[i]<word2[i]) {
//             return word2;
//         }
//         else if(word1[i]>word2[i]) {
//             return word1;
//         }
//         else i++;
//     }
//     if(word1.length()>word2.length()) {
//         return word1;
//     }
//     else {
//         return word2;
//     }
// }
// int main() {
//     string array[] = {"dog", "cat", "apple", "banana"};
//     int n = sizeof(array)/sizeof(array[0]);
//     for(int i=1; i<n; i++) {
//         string temp = array[i];
//         for(int j=i-1; j>=0; j--) {
//             if(checkAlphaOrder(array[j],array[j+1],0)==array[j]) {
//                 array[j+1] = array[j];
//                 array[j] = temp;
//             }
//         }
//     }
//     for(int i=0; i<n; i++) {
//         cout<<array[i]<<" ";
//     }
//     return 0;
// }
/*#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char array[][80] = {"dog", "cat", "apple", "banana"};
    int n = sizeof(array)/sizeof(array[0]);
    for(int i=1; i<n; i++) {
        string temp = array[i];
        for(int j=i-1; j>=0; j--) {
            if(strcmp(array[j],array[j+1])>0) {
                swap(array[j+1],array[j]);
            }
        }
    }
    for(int i=0; i<n; i++) {
        cout<<array[i]<<" ";
    }
    return 0;
}*/
/*//sorting_using_bubbleSort_Algorithm;
#include <iostream>
using namespace std;
int main() {
    float array[] =  {5.7, 1.2, 4.6, 2.1, 8.3};
    int n = sizeof(array)/sizeof(array[0]);
    for(int i=0; i<n-1; i++) {
      bool flag = false;
        for(int j=0; j<n-i-1; j++) {
            if(array[j]>array[j+1]) {
                swap(array[j],array[j+1]);
                flag = true;
            }
        }
        if(flag==false) {
            break;
        }
    }
    for(int i=0; i<n; i++) {
        cout<<array[i]<<" ";
    }
    return 0;
}*/
//sorting_using_Selection_Sort_Algorithm;
/*#include <iostream>
using namespace std;
int main() {
    float array[] =  {5.7, 1.2, 4.6, 2.1, 8.3};
    int n = sizeof(array)/sizeof(array[0]);
    for(int i=0; i<n; i++) {
      int min_idx = i;
        for(int j=i+1; j<n; j++) {
            if(array[j]<array[min_idx]) {
                min_idx = j;
            }
        }
        
        if(min_idx!=i) {
            swap(array[i],array[min_idx]);
        }
    }
    for(int i=0; i<n; i++) {
        cout<<array[i]<<" ";
    }
    return 0;
}*/
//sorting_using_Insertion_Sort_Algorithm;
/*#include <iostream>
using namespace std;
int main() {
    float array[] =  {5.7, 1.2, 4.6, 2.1, 8.3};
    int n = sizeof(array)/sizeof(array[0]);
    for(int i=1; i<n; i++) {
      float trend = array[i];
      int j = i-1;
        while(j!=-1 and array[j]>trend) {
         array[j+1] = array[j];
         j--;
        }
    array[j+1] = trend;
   }
    for(int i=0; i<n; i++) {
        cout<<array[i]<<" ";
    }
    return 0;
}*/
/*#include <iostream>
using namespace std;
void mergeArray(int array[],int l,int mid_idx,int r) {
    int n_arrayA = mid_idx-l+1;
    int n_arrayB = r-mid_idx;
    int array_A[n_arrayA];
    int array_B[n_arrayB];
    for(int i=0; i<n_arrayA; i++) {
        array_A[i] = array[i+l];
    }
    for(int j=0; j<n_arrayB; j++) {
        array_B[j] = array[j+mid_idx+1];
    }
    int i = 0;
    int j = 0;
    int k = l;
    while(i<n_arrayA and j<n_arrayB) {
        if(array_A[i]<array_B[j]) {
            array[k++] = array_A[i++];
        }
        else {
            array[k++] = array_B[j++];
        }
    }
    while(i<n_arrayA) {
        array[k++] = array_A[i++];
    }
    while(j<n_arrayB) {
        array[k++] = array_B[j++];
    }
}
void mergeSort(int array[], int l, int r) {
    if(l==r) {
        return;
    }
    else {
        int mid_idx = (l+r)/2;
        mergeSort(array,l,mid_idx);
        mergeSort(array,mid_idx+1,r);
        mergeArray(array,l,mid_idx,r);
    }
}
int main() {
    int array[] = {9,8,7,6,5};
    int n = sizeof(array)/sizeof(array[0]);
    int l = 0;
    int r = n-1;
    mergeSort(array, l, r);
    for(int i=0; i<n; i++) {
        cout<<array[i]<<" ";
    }
    return 0;
    //tume_comlexity: O(nlogn);
    //space_complexity: O(n);
    //It's a stable_algorithm;
    //applications: large datasets, linked lists;
    //drawbacks: 1)slower for smaller tasks;
    //           2)O(n) extra space;
    //           3)goes thru whole process even thought our array is sorted;
}*/
/*#include <iostream>
using namespace std;
void mergeSort(int array[], int o, int mi, int p) {
    int A_size = mi-o+1;
    int B_size = p-mi;
    int A_array[A_size];
    int B_array[B_size];
    for(int i=0; i<A_size; i++) {
        A_array[i] = array[i+o];
    }
    for(int j=0; j<B_size; j++) {
        B_array[j] = array[mi+j+1];
    }
    int i = 0;
    int j = 0;
    int k = o;
    while(i<A_size and j<B_size) {
       if(A_array[i]>B_array[j]) {
           array[k++] = B_array[j++];
       }
       else {
           array[k++] = A_array[i++];
       }
    }
    while(i<A_size) {
        array[k++] = A_array[i++];
    }
    while(j<B_size) {
        array[k++] = B_array[j++];
    }
    return;
}
void sortArray(int array[], int o, int p) {
    if(o==p) {
        return;
    }
    else {
        int mi = (o+p)/2;
        sortArray(array,o,mi);
        sortArray(array,mi+1,p);
        mergeSort(array,o,mi,p);
    }
}
int main() {
    int array[] = {10,9,8,7,6,5,4,3,2,1};
    int n = sizeof(array)/sizeof(array[0]);
    int o = 0; 
    int p = n-1;
    sortArray(array,o,p);
    for(int i=0; i<n; i++) {
        cout<<array[i]<<" ";
    }
    return 0;
}*/
// #include <iostream>
// using namespace std;
//merge_sort_algorithm;
/*void mergearray(int array[], int l, int mid_idx, int r) {
    int a = mid_idx - l + 1;
    int b = r - mid_idx;
    int A[a];
    int B[b];
    for(int i=0; i<a; i++) {
        A[i] = array[i+l];
    }
    for(int j=0; j<b; j++) {
        B[j] = array[mid_idx+j+1];
    }
    int i = 0;
    int j = 0; 
    int k = l;
    while(i<a and j<b) {
        if(A[i]>B[j]) {
            array[k++] = B[j++];
        }
        else {
            array[k++] = A[i++];
        }
    }
    while(i<a) {
        array[k++] = A[i++];
    }
    while(j<b) {
        array[k++] = B[j++];
    }
}

void mergesort(int array[], int l, int r) {
    if(l==r) {
        return;
    }
    else {
        int mid_idx = (l+r)/2;
        mergesort(array,l,mid_idx);
        mergesort(array,mid_idx+1,r);
        mergearray(array,l,mid_idx,r);
    }
}*/
//int main() {
 //   int array[] = {1,3,4,2,5};
 //   int n = sizeof(array)/sizeof(array[0]);
    //bubble_sort_algorithm:
    /*for(int i=0; i<n-1; i++ ) {
        bool flag = false;
        for(int j=0; j<n-1-1; j++) {
            if(array[j]>array[j+1]) {
                swap(array[j],array[j+1]);
                flag = true;
            }
    }
    if(flag==false) {
        break;
    }
}*/
   //selection_sort_algorithm:
   /*for(int i=0; i<n; i++) {
       int min_idx = i;
       for(int j=i+1;j<n; j++) {
           if(array[j]<array[min_idx]) {
               min_idx = j;
           }
       }
       if(i!=min_idx) {
           swap(array[min_idx],array[i]);
       }
   }*/
   //insertion_sort_algorithm:
   /*for(int i=1; i<n; i++) {
       int trend = array[i];
       int j = i-1;
       while(j!=-1 and array[j]>trend) {
          array[j+1] = array[j];
          j--;
       }
       array[j+1] = trend;
   }*/
   //mergeSort_algorithm;
 /*  mergesort(array,0,n-1);
for(int i=0; i<n; i++) {
    cout<<array[i]<<" ";
}*/
// return 0;
// }
/*#include <iostream>
using namespace std;
int findPiThruPartition(int array[], int firstIdx, int lastIdx) {
    int i=firstIdx-1; 
    int j=firstIdx;
    int pivot = array[lastIdx];
    while(j<lastIdx) {
        if(array[j]<pivot) {
            i++;
            if(i!=j) {
            swap(array[i],array[j]);
            }
            j++;
        }
        else {
            j++;
        }
    }
    swap(array[i+1],array[lastIdx]);
    return i+1;
}
void quickSort(int array[], int firstIdx, int lastIdx) {
    if(firstIdx>=lastIdx) {
        return;
    }
    else {
        int piIdx = findPiThruPartition(array,firstIdx,lastIdx);
        // cout<<piIdx<<" ";
        quickSort(array,firstIdx,piIdx-1);
        quickSort(array,piIdx+1,lastIdx);
        }
}
int main() {
    int array[] = {10, 3, 7, 9, 1, 8};
    int n = sizeof(array)/sizeof(array[0]);
    quickSort(array,0,n-1);
    for(int i=0; i<n; i++) {
        cout<<array[i]<<" ";
    }
    return 0;
    //best_case_time_complexity: theta(n);
    //worst_case_time_complexity: O(n);
    //worst_case_time_complexity: O(n);
    //It's not a stable algorithm;
    //applications:
    //memory is a concern;
    //in_built algorithms;
    //smaller datasets;
//mergesort: largedatasets; linked lists; stable;
//quickSort: smaller datasets; unstable; if new_memory is costly;
}*/
//practice;
/*#include <iostream>
using namespace std;
int findPiThruPartition(int array[], int firstIdx, int lastIdx) {
    int i = firstIdx-1;
    int j = firstIdx;
    while(j<lastIdx) {
        if(array[j]<array[lastIdx]) {
            i++;
            if(i!=j) {
            swap(array[i],array[j]);
            }
            j++;
        }
        else {
            j++;
        }
    }
    i++;
    swap(array[i],array[lastIdx]);
        return i;
}
void quickSort(int array[], int firstIdx, int lastIdx) {
    if(firstIdx>=lastIdx) {
        return;
    }
    else {
        int piIdx = findPiThruPartition(array,firstIdx,lastIdx);
        quickSort(array,firstIdx,piIdx-1);
        quickSort(array,piIdx+1,lastIdx);
    }
}
int main() {
    int array[] = {10,9,8,7,6,5,4,3,2,1};
    int n = sizeof(array)/sizeof(array[0]);
    quickSort(array,0,n-1);
    for(int i=0; i<n; i++) {
        cout<<array[i]<<" ";
    }
    return 0;
}*/
//problem_1:based_on_quick_sort_algorithm;
// #include <iostream>
// using namespace std;
// void mergeArrays(int array[], int p, int mid_idx, int q) {
//     int size_A = mid_idx - p + 1;
//     int size_B = q - mid_idx;
//     int array_A[size_A];
//     int array_B[size_B];
//     for(int i=0; i<size_A; i++) {
//         array_A[i] = array[i+p];
//     }
//     for(int j=0; j<size_B; j++) {
//         array_B[j] = array[mid_idx+j+1];
//     }
//     int i = 0;
//     int j = 0;
//     int k = p;
//     while(i<size_A && j<size_B) {
//         if(array_A[i]<array_B[j]) {
//             array[k++] = array_A[i++];
//         }
//         else {
//             array[k++] = array_B[j++];
//         }
//     }
//     while(i<size_A) {
//         array[k++] = array_A[i++];
//     }
//     while(j<size_B) {
//         array[k++] = array_B[j++];
//     }
// }
// void mergeSort(int array[], int p, int q) {
//     if(p>=q) {
//         return;
//     }
//     else {
//         int mid_idx = (p+q)/2;
//         mergeSort(array,p,mid_idx);
//         mergeSort(array,mid_idx+1,q);
//         mergeArrays(array,p,mid_idx,q);
//     }
// }
// int main() {
//     int array[] = {6, 4, 1, 3, 9, 2};
//     int n = sizeof(array)/sizeof(array[0]);
//     mergeSort(array,0,n-1);
//     for(int i=0; i<n; i++) {
//         cout<<array[i]<<" ";
//     }
//     return 0;
// }
//problem_2:based_on_quick_sort_algorithm;
// #include <iostream>
// using namespace std;
// int find_pi(int array[], int p, int q) {
//   int i = p-1;
//   int j = p;
//   while(j<q){
//       if(array[j]<array[q]) {
//           i++;
//           swap(array[i],array[j]);
//           j++;
//       }
//       else {
//           j++;
//       }
//   }
//   i++;
//   swap(array[i],array[q]);
//   return i;
// }
// void quickSort(int array[], int p, int q) {
//     if(p>=q) {
//         return;
//     }
//     else {
//         int pi = find_pi(array,p,q);
//         quickSort(array,p,pi-1);
//         quickSort(array,pi+1,q);
        
//     }
// }
// int main() {
//     int array[] = {6, 8, 3, 9, 1, 5};
//     int n = sizeof(array)/sizeof(array[0]);
//     quickSort(array,0,n-1);
//     for(int i=0; i<n; i++) {
//         cout<<array[i]<<" ";
//     }
//     return 0;
// }
//problem_3 based on insertion_sort_algorithm;
/*#include<iostream>
using namespace std;
int main() {
    int array[] = {3, 1, 4, 5, 2};
    int n = sizeof(array)/sizeof(array[0]);
    for(int i=1; i<n; i++) {
        int temp = array[i];
        for(int j=i-1; j>=0; j--) {
            if(array[j]>temp) {
                array[j+1] = array[j];
                array[j] = temp;
            }
            
        }
      
    }
    for(int i=0; i<n; i++) {
        cout<<array[i]<<" ";
    }
    return 0;
}
*/
//problem_4 based_on_selection_sort_algorithm;
/*#include <iostream>
using namespace std;
int main() {
    int array[] = {5, 3, 2, 4, 1};
    int n = sizeof(array)/sizeof(array[0]);
    for(int i=0; i<n; i++) {
        int min_idx = i;
        for(int j=i+1; j<n; j++) {
        if(array[min_idx]>array[j]) {
            min_idx = j;
        }
    }
    if(min_idx!=i) {
        swap(array[i],array[min_idx]);
    }
    }
    for(int i=0; i<n; i++) {
        cout<<array[i]<<" ";
    }
    return 0;
}
*/
//problem_5 based_on_bubble_sort_algorithm
/*#include <iostream>
using namespace std;
int main() {
    int array[] = {4, 2, 5, 1, 3};
    int n = sizeof(array)/sizeof(array[0]);
    for(int i=0; i<n-1; i++){
        int count  = 0;
        for(int j=0; j<n-i-1; j++) {
            if(array[j]>array[j+1]) {
                swap(array[j],array[j+1]);
                count++;
            }
        }
        if(count==0) {
                break;
            }
    }
    for(int i=0; i<n; i++) {
        cout<<array[i]<<" ";
    }
    return 0;
}*/
/*#include <iostream>
using namespace std;
int findpi(int array[], int first, int last) {
    int i = first-1;
    int j = first;
    while(j<last) {
        if(array[j]<array[last]) {
            i++;
            if(i!=j) {
            array[i] = array[j];
            }
            j++;
        }
        else {
            j++;
        }
    }
    i++;
    swap(array[i],array[last]);
    return i;
}
void quickSort(int array[], int first, int last) {
    if(first >= last) {
        return;
    }
    else {
        int pi = findpi(array,first,last);
        quickSort(array,first,pi-1);
        quickSort(array,pi+1,last);
    }
}
int main() {
    int array[] = {10,8,6,4,2};
    int n = sizeof(array)/sizeof(array[0]);
    quickSort(array,0,n-1);
    for(int i=0; i<n; i++) {
        cout<<array[i]<<" ";
    }
    return 0;
}
*/
//merge_sort_algorithm_practice and offline_dry_run;
// #include <iostream>
// using namespace std;
// void mergeArrays(int array[], int l, int mid_idx, int r) {
//     int A_size = mid_idx-l+1;
//     int B_size = r-mid_idx;
//     int A_array[A_size];
//     int B_array[B_size];
//     for(int i=0; i<A_size; i++) {
//         A_array[i] = array[l+i];
//     }
//     for(int j=0; j<B_size; j++) {
//         B_array[j] = array[mid_idx+j+1];
//     }
//     int i = 0;
//     int j = 0;
//     int k = l;
//     while(i<A_size and j<B_size) {
//         if(A_array[i]<B_array[j]) {
//             array[k++] = A_array[i++];
//         }
//         else  {
//             array[k++] = B_array[j++];
//         }
//     }
//     while(i<A_size) {
//         array[k++] = A_array[i++];
//     }
//     while(j<B_size) {
//         array[k++] = B_array[j++];
//     }
// }
// void mergeSort(int array[], int l, int r) {
//     if(l>=r) {
//         return;
//     }
//     else {
//         int mid_idx = (l+r)/2;
//         mergeSort(array,l,mid_idx);
//         mergeSort(array,mid_idx+1,r);
//         mergeArrays(array,l,mid_idx,r);
//     }
// }
// int main() {
//     int array[] = {5,2,1,3,8,9,7,0};
//     int n = sizeof(array)/sizeof(array[0]);
//     mergeSort(array,0,n-1);
//     for(int i=0; i<n; i++) {
//         cout<<array[i]<<" ";
//     }
//     return 0;
// }
//quick_sort_algorithm_practice and offline_dry_run;
// #include <iostream>
// using namespace std;
// int findPi(int array[], int first, int last) {
//     int i = first-1;
//     int j = first;
//     while(j<last) {
//         if(array[j]<array[last]) {
//             i++;
//             if(i!=j) {
//             swap(array[j],array[i]);
//             }
//             j++;
//       }
//       else {
//           j++;
//         }
//     }
//     i++;
//     swap(array[i],array[last]);
//     return i;
// }

// void quickSort(int array[], int first, int last) {
//     if(first>=last) {
//         return;
//     }
//     else {
//         int pi = findPi(array, first, last);
//         quickSort(array, first, pi-1);
//         quickSort(array, pi+1, last);
//     }
// }
// int main() {
//     int array[] = {1,4,3,2,0};
//     int n = sizeof(array)/sizeof(array[0]);
//     quickSort(array,0,n-1);
//     for(int i=0; i<n; i++) {
//         cout<<array[i]<<" ";
//     }
//     return 0;
// }
//bubble_sort_algorithm practice;
// #include <iostream>
// using namespace std;
// int main() {
//     int array[] = {1,4,3};
//     int n = sizeof(array)/sizeof(array[0]);
//     for(int i=0; i<n-1; i++) {
//         bool flag = false;
//         for(int j=0; j<n-1-i; j++) {
//             if(array[j]>array[j+1]) {
//                 swap(array[j],array[j+1]);
//                 flag = true;
//             }
//         }
//         if(flag==false) {
//                 break;
//             }
//     }
//     for(int i=0; i<n; i++) {
//         cout<<array[i]<<" ";
//     }
//     return 0;
// }
//selection_sort_algorithm practice;
// #include <iostream>
// using namespace std;
// int main() {
//     int array[] = {1,4,3};
//     int n = sizeof(array)/sizeof(array[0]);
//     for(int i=0; i<n-1; i++) {
//         int min_idx = i;
//         for(int j=i+1; j<n; j++) {
//             if(array[j]<array[min_idx]) {
//                 min_idx = j ;
//             }
//         }
//         if(min_idx!=i) {
//             swap(array[i],array[min_idx]);
//         }
//     }
//     for(int i=0; i<n; i++) {
//         cout<<array[i]<<" ";
//     }
//     return 0;
// }
//above_prgrm_in_do:
// #include <iostream>
// using namespace std;
// int main() {
//     int array[] = {7,9,0,1,2,4,3,8,6,5};
//     int n = sizeof(array)/sizeof(array[0]);
//     for(int i=0; i<n; i++) {
//         int max_idx = 0;
//         for(int j=0; j<n-i; j++) {
//             if(array[max_idx]<array[j]) {
//                 max_idx = j;
//             }
//         }
//         if(max_idx!=n-i-1) {
//             swap(array[max_idx],array[n-1-i]);
//         }
//     }
//     for(int i=0; i<n; i++) {
//         cout<<array[i]<<" ";
//     }
//     return 0;
// }
//insertion_sort_algorithm practice;
// #include <iostream>
// using namespace std;
// int main() {
//     int array[] = {7,9,0,1,2,4,3,8,6,5};
//     int n = sizeof(array)/sizeof(array[0]);
//     for(int i=1; i<n; i++) {
//         int temp = array[i];
//         for(int j=i-1;j>=0;j--) {
//             if(array[j]>temp) {
//                 array[j+1] = array[j];
//                 array[j] = temp;
//             }
//         }
//     }
//     for(int i=0; i<n; i++) {
//         cout<<array[i]<<" ";
//     }
//     return 0;
// }
//divide_and_conquer approached algorithms: mergeSort and quickSort;
//count_Sort, radix Sort and bucket Sort;
/*#include <iostream>
using namespace std;
int main() {
    int array[] = {7,9,0,1,2,4,3,8,6,5};
    int n = sizeof(array)/sizeof(array[0]);
    int max = 0;
    for(int i=0; i<n; i++ ) {
        if(max<array[i]) {
        max = array[i];
        }
    }
    int array_1[max+1];
    for(int i=0; i<n; i++) {
        int f = 0;
        for(int j=0; j<n; j++) {
            if(array[i]==array[j]) {
                f++;
            }
        }
        array_1[array[i]] = f;
    }
    for(int i=0; i<max+1; i++) {
        bool check = false;
        for(int j=0; j<n; j++) {
            if(i==array[j]) {
            check = true;
            break;
            }
        }
        if(check==false) {
            array_1[i] = 0;
        }
    }
    for(int i=1; i<max+1; i++) {
        array_1[i] += array_1[i-1];
        }
    int array_2[n];
    for(int i=n-1; i>=0; i--) {
        int j = array_1[array[i]]-1;
        array_1[array[i]] = j;
        array_2[j] = array[i];
    }
    for(int i=0; i<n; i++) {
        array[i] = array_2[i];
    }
    for(int i=0; i<n; i++) {
        cout<<array[i]<<" ";
    }
    return 0;
    //time_complexity: O(3n+max)-->O(n) If(max<<n)
    //drawbacks: for float numbers, negative numbers and completely unlike numbers, uncomparable numbers etc..
    
}*/
//merge_sort_algorithm_practice;
// #include <iostream>
// using namespace std;
// void mergeArrays(int array[], int start, int mid, int end) {
//     int a = mid-start+1;
//     int b = end-mid;
//     int A[a];
//     int B[b];
//     for(int i=0; i<a; i++) {
//         A[i] = array[i+start];
//     }
//     for(int j=0; j<b; j++) {
//         B[j] = array[j+mid+1];
//     }
//     int i=0;
//     int j=0;
//     int k=start;
//     while(i<a && j<b ) {
//         if(A[i]>B[j]) {
//             array[k++] = B[j++];
//         }
//         else {
//             array[k++] = A[i++];
//         }
//     }
//     while(i<a) {
//         array[k++] = A[i++];
//     }
//     while(j<b) {
//         array[k++] = B[j++];
//     }
// }
// void mergeSort(int array[], int start, int end) {
//     if(start>=end) {
//         return;
//     }
//     else{
//         int mid = (start+end)/2;
//         mergeSort(array,start,mid);
//         mergeSort(array,mid+1,end);
//         mergeArrays(array,start,mid,end);
//     }
// }
// int main() {
//     int array[] = {7,9,0,1,2,4,3,8,6,5};
//     int n = sizeof(array)/sizeof(array[0]);
//     mergeSort(array,0,n-1);
//     for(int i=0; i<n; i++) {
//         cout<<array[i]<<" ";
//     }
//     return 0;
// }

//quick_sort_algorithm_practice;
// #include <iostream>
// using namespace std;
// int findPivotIdx(int array[], int first, int last) {
//     int i = first-1;
//     int j = first;
//     while(j<last) {
//         if(array[j]<array[last]) {
//             i++;
//             if(i!=j){
//             swap(array[i],array[j]);
//             }
//             j++;
//         }
//         else {
//             j++;
//         }
//     }
//     i++;
//     swap(array[i],array[last]);
//     return i;
// }
// void quickSort(int array[], int first, int last) {
//     if(first>=last) {
//         return;
//     }
//     else {
//         int pivot = findPivotIdx(array,first,last);
//         quickSort(array,first,pivot-1);
//         quickSort(array,pivot+1,last);
//     }
// }
// int main() {
//     int array[] = {7,9,0,1,2,4,3,8,6,5};
//     int n = sizeof(array)/sizeof(array[0]);
//     quickSort(array,0,n-1);
//     for(int i=0; i<n; i++) {
//         cout<<array[i]<<" ";
//     }
//     return 0;
// }
//radix_sort Algorithm;
// #include <iostream>
// using namespace std;
/*void countSort(int array[], int place, int max, int n) {
    int array_1[10]; 
    for(int i=0; i<10; i++) {
        int count = 0; 
        for(int j=0; j<n; j++) {
        if (i==(array[j]/place)%10) {
            count++;
        }
        }
        array_1[i] = count;
    }
    for(int i=0; i<10; i++) {
        bool flag = false;
        for(int j=0; j<n; j++) {
        if(i==(array[j]/place)%10) {
            flag = true;
            break;
        }
        }
        if(flag==false){
            array_1[i] == 0;
        }
    }
    for(int i=1; i<10; i++) {
        array_1[i] += array_1[i-1];
    }
    int array_2[n];
    for(int i=n-1; i>=0; i--) {
        int j = array_1[((array[i]/place)%10)]-1;
        array_2[j] = array[i];
        array_1[((array[i]/place)%10)] = j;
    }
    for(int i=0; i<n; i++) {
        array[i] = array_2[i];
    }
return;
}
int main() {
    int array[] = {170, 45, 75, 90, 802, 2};
    // int array[] = {7,9,0,1,2,4,3,8,6,5};
    int n = sizeof(array)/sizeof(array[0]);
    int max = 0;
    for(int i=0; i<n; i++) {
        if(max<array[i]) {
            max = array[i];
        }
    }
   for(int place = 1; (max/place)>0; place *= 10) {
       countSort(array,place,max,n);
   }
  for(int i=0; i<n; i++) {
      cout<<array[i]<<" ";
  }
    return 0;
    //time_complexity: O(n+k) --> O(n);
}*/
//scatter and gather approach:
//bucket_sort_algorithm;
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// void bucketSort(float array[], int n) {
//     vector <vector <float>> bucket(n, vector<float>());
//       //if the values of array are floating and discontinuous form;
//         /*float max = 0;
//         float min = 100;
//         for(int i=0; i<n; i++) {
//             if(max<array[i]) {
//                 max = array[i];
//             }
//             if(min>array[i]) {
//                 min = array[i];
//             }
//         }
//         float range = (max-min)/n;
//         for(int i=0; i<n; i++) {
//             int idx = (array[i]-min)/range; 
//             float sub = (array[i]-min)/range - idx; 
//             if(sub == 0 and array[i]!=min)  { //boundary_value of idx;
//             bucket[idx-1].push_back(array[i]);
//             }
//             else{
//             bucket[idx].push_back(array[i]);
//             }
//         }*/
//         //if the values of array continuous and uniform;
//         /*for(int i=0; i<n; i++) {
//             int idx = array[i]*n;
//             bucket[i].push_back(array[i]);
//         }*/
//         for(int i=0; i<n; i++) {
//             sort(bucket[i].begin(),bucket[i].end());
//         }
//         int k = 0;
//         for(int i=0; i<n; i++) {
//             for(int j=0; j<bucket[i].size() ;j++){
//                 array[k++] = bucket[i][j];
//             }
//         }
//     }

// int main() {
//     float array[] = {0.13,0.45,0.12,0.89,0.75,0.63,0.85,0.39};
 
//     int n = sizeof(array)/sizeof(array[0]);
//     bucketSort(array, n);
//     for(int i=0; i<n; i++) {
//         cout<<array[i]<<" ";
//     }
//     //worst_case_time_complexity: O(n^2);
//     //avg_case_time_complexity: O(n+k);
//     //space_complexity: O(n+k);
//     return 0;
// }
//pratice: 
//Implement a selection sort algorithm to sort an array of integers in ascending order.
/*#include <iostream>
using namespace std;
int main() {
    int array[] = {8, 5, 2, 9, 5, 6, 3};
    int n = sizeof(array)/sizeof(array[0]);
    for(int i=0; i<n; i++) {
        int min = i;
        for(int j=i+1; j<n; j++) {
            if(array[j]<array[min]) {
                min = j;
            }
        }
        if(i!=min) {
          swap(array[i], array[min]);
        }
    }
    for(int i=0; i<n; i++) {
        cout<<array[i]<<" ";
    }
    return 0;
}*/
//Write a bubble sort algorithm to sort an array of floating-point numbers in descending order.
/*#include <iostream>
using namespace std;
int main() {
    float array[] = {3.14, 1.41, 4.67, 1.73, 5.89};
    int n = sizeof(array)/sizeof(array[0]);
    for(int i=0; i<n-1; i++) {
        int count = 0;
        for(int j=0; j<n-1-i; j++) {
            if(array[j]<array[j+1]) {
                array[j] = array[j] - array[j+1] ;
                array[j+1] = array[j] + array[j+1] ;
                array[j] = array[j+1] - array[j];
                count ++;
            }
        }
    if(count==0) {
        break;
    }
    }
    for(int i=0; i<n; i++) {
        cout<<array[i]<<" ";
    }
    return 0;
}*/
//Implement the quicksort algorithm to sort a linked list of strings in alphabetical order.
/*#include <iostream>
#include <cstring>
using namespace std;
string alpha(string word_1, string word_2, int i) {
    while(i<word_1.length() and i<word_2.length()){
        if(word_1[i]<word_2[i]) {
            return word_1;
        }
        else if(word_1[i]>word_2[i]){
            return word_2;
        }
        else {
        i++;
        }
    }
    if(word_1.length()<word_2.length()) {
        return word_1;
    }
    else {
        return word_2;
    }
}
int findPi(string array[], int first, int last) {
    int i = first-1;
    int j = first;
    while(j<last) {
        if(alpha(array[j],array[last],0)==array[j]) {
            i++;
            if(i!=j) {
            swap(array[i],array[j]);
            }
    
            j++;
        }
        else {
            j++;
        }
    }
    i++;
    swap(array[i],array[last]);
    return i;
}
void quickSort(string array[], int first, int last) { 
    if(first>=last) {
        return ;
    }
    else {
        int pi = findPi(array, first, last);
        quickSort(array, first , pi-1);
        quickSort(array, pi+1, last);
    }
}
int main() {
    string array[]= {"apple", "banana", "cherry", "date", "elderberry"};
    int n = sizeof(array)/sizeof(array[0]);
    quickSort(array, 0, n-1);
    for(int i=0; i<n; i++) {
        cout<<array[i]<<" ";
    }
    return 0;
}*/
//using insertion sort a dynamic array of characters, for example, {'c', 'a', 't', 'd', 'o', 'g'}
/*#include <iostream>
using namespace std;
int main() {
    char array[] = {'c', 'a', 't', 'd', 'o', 'g'};
    int n = sizeof(array)/sizeof(array[0]);
    for(int i=1; i<n; i++) {
        char trend = array[i];
    for(int j=i-1; j>=0; j--) {
        if(array[j]>trend) {
            array[j+1] = array[j];
            array[j] = trend;
        }
    }
    }
    for(int i=0; i<n; i++) {
        cout<<array[i]<<" ";
    }
    return 0;
}*/
//sorting an array using count_sort algorithm;
/*#include <iostream>
using namespace std;
void countSort(int array[], int max, int n, int k) {
    int array_1[10];
    for(int j=0; j<10; j++) {
        array_1[j] = 0;
        int count = 0;
        for(int i=0; i<n; i++) {
            if((array[i]/k)%10 == j) {
                count++;
                array_1[j] += 1;
            }
        }
        if(j!=0) {
            array_1[j] += array_1[j-1];
        }
    }
    int ans_array[n];
    for(int i=n-1; i>=0; i--) {
        int j = array_1[(array[i]/k)%10] - 1;
        array_1[(array[i]/k)%10] = j;
        ans_array[j] = array[i];
    }
    for(int i=0; i<n; i++) {
        array[i] = ans_array[i];
    }
}

int main() {
    int array[] = {38, 572, 9, 128, 54, 763, 3};
    int n = sizeof(array)/sizeof(array[0]);
    //using radix_sort Algo;
    int max = 0;
    for(int i=0; i<n; i++) {
        if(max<array[i]) {
            max = array[i];
        }
  }
  for(int i=1; max/i>0; i*=10) {
      countSort(array, max, n, i);
  }
  for(int i=0; i<n; i++) {
      cout<<array[i]<<" ";
  }
  return 0;
}
*/
//finding kth largest element in an array using quickSort();
// #include<iostream>
// using namespace std;
// int finding_pi(int array[],int first, int last) {
//     int i = first-1;
//     int j = first;
//     while(j<last) {
//         if(array[j]<array[last]) {
//             i++;
//             swap(array[i],array[j]);
//         }
//         j++;
//     }
//     i++;
//     swap(array[last],array[i]);
//     return i;
// }
// int finding_kth_smallest_element(int array[], int first, int last, int k) {
//  if(k>0 and k<=last-first+1) {
//      int pi = finding_pi(array,first,last);
//      if(pi-first == k-1) {
//          return array[pi];
//      }
//      else if((pi-first)>(k-1)) {
//          return finding_kth_smallest_element(array,first,pi-1,k);
//      }
//      else {
//          return finding_kth_smallest_element(array,pi+1,last,k-(pi-first+1));
//      }
//  }
//  else{
//      return 0;
//  }
    
// }
// int main() {
//     int array[] = {3,1,2,4,5};
//     int n = sizeof(array)/sizeof(array[0]);
//     int k;
//     cout<<"enter k:";
//     cin>>k;
//     int result = finding_kth_smallest_element(array,0,n-1,k);
//     cout<<result;
//     return 0;
// }
//worst_case_time_complexity: O(n^2);
//avg_case_time_complexity: O(n);
//given two sorted arrays, program to merge them in a sorted manner;
//approach_1:
// #include <iostream>
// using namespace std;
// int main() {
//     int array_1[] = {5,8,10};
//     int array_2[] = {2,7,8};
//     int n1 = sizeof(array_1)/sizeof(array_1[0]);
//     int n2 = sizeof(array_2)/sizeof(array_2[0]);
//     int n3 = n1+n2;
//     int array_3[n3];
//     for(int i=0; i<n1; i++){
//         array_3[i] = array_1[i];
//     }
//     int j = 0;
//     for(int i=n1; i<n3; i++){
//         array_3[i] = array_2[j];
//         j++;
//     }
//     // using bubble_sort_algorithm;
//     for(int i=0; i<n3-1; i++) {
//         bool flag = false;
//         for(int j=0; j<n3-1; j++) {
//             if(array_3[j]>array_3[j+1]) {
//                 swap(array_3[j],array_3[j+1]);
//                 flag = true;
//             }
//         }
//         if(flag==false) {
//           break; 
//         }
//     }
//     for(int i=0; i<n3; i++) {
//         cout<<array_3[i]<<" ";
//     }
//     return 0;
// }
//approach_2:
// #include <iostream>
// using namespace std;
// void merge_sorted_arrays(int array_1[], int n1, int array_2[], int n2, int array_3[], int n3) {
//     int i = 0;
//     int j = 0;
//     int k = 0;
//     while(i<n1 && j<n2) {
//         if(array_1[i]<array_2[j]) {
//         array_3[k++] = array_1[i++];
//         }
//         else {
//         array_3[k++] = array_2[j++];
//         }
//     }
//         while(i<n1) {
//             array_3[k++] = array_1[i++];
//         }
//         while(j<n2) {
//             array_3[k++] = array_2[j++];
//         }
// }
// int main() {
//     int array_1[] = {5,8,10};
//     int array_2[] = {2,7,8};
//     int n1 = sizeof(array_1)/sizeof(array_1[0]);
//     int n2 = sizeof(array_2)/sizeof(array_2[0]);
//     int n3 = n1+n2;
//     int array_3[n3];
//     merge_sorted_arrays(array_1,n1,array_2,n2,array_3,n3);
//     for(int i=0; i<n3; i++) {
//         cout<<array_3[i]<<" ";
//     }
//     return 0;
// }









