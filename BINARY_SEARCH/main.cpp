//bubble_sort_algorithm:
// #include<iostream>
// using namespace std;
// int main() {
//     int array[] = {3,1,5,2,4};
//     int n = sizeof(array)/sizeof(array[0]);
//     for(int i=0; i<n-1; i++) {
//         int count = 0;
//         for(int j=0; j<n-i-1;j++) {
//             if(array[j]>array[j+1]) {
//                 array[j] = array[j] - array[j+1];
//                 array[j+1] = array[j] + array[j+1];
//                 array[j] = array[j+1] - array[j];
//                 count += 1;
//             }
//         }
//         if(count==0) {
//                 break;
//             }
//     }
//     for(int i=0; i<n; i++) {
//         cout<<array[i]<<" ";
//     }
//     return 0;
// }
//using selectionsort algorithm;
// #include <iostream>
// using namespace std;
// int main() {
//     int array[] = {3,1,5,2,4};
//     int n = sizeof(array)/sizeof(array[0]);
//     for(int i=0; i<n-1; i++) {
//         int min_idx = i;
//         for(int j=i+1; j<n; j++) {
//             if(array[min_idx]>array[j]) {
//                 min_idx = j;
//             }
//         }
//     if(min_idx!=i) {
//             swap(array[i],array[min_idx]);
//         }
//     }
//     for(int i=0; i<n; i++) {
//         cout<<array[i]<<" ";
//     }
//     return 0;
// }
//using insertion sort algorithm:
// #include <iostream>
// using namespace std;
// int main() {
//     int array[] = {3,1,5,2,4};
//     int n = sizeof(array)/sizeof(array[0]);
//     for(int i=1; i<n; i++) {
//         int trend = array[i];
//         for(int j=i-1; j>=0; j--) {
//             if(trend<array[j]) {
//                 array[j+1] = array[j];
//                 array[j] = trend;
//         }
//         }
//     }
//     for(int i=0; i<n; i++) {
//         cout<<array[i]<<" ";
//     }
//     return 0;
// }
//using mergesort algorithm;
// #include<iostream>
// using namespace std;
// void mergearrays(int array[], int l, int m, int r) {
//     int a = m-l+1;
//     int b = r-m;
//     int A[a];
//     int B[b];
//     for(int i=0; i<a; i++) {
//         A[i] = array[l+i];
//     }
//     for(int i=0; i<b; i++) {
//         B[i] = array[m+i+1];
//     }
//     int k = l;
//     int i = 0;
//     int j = 0;
//     while(i<a && j<b) {
//         if(A[i]<B[j]) {
//             array[k++] = A[i++];
//         }
//         else {
//             array[k++] = B[j++];
//         }
//     }
//     while(i<a) {
//         array[k++] = A[i++];
//     }
//     while(j<b) {
//         array[k++] = B[j++];
//     }
// }
// void mergesort(int array[], int l, int r) {
//     if(l>=r) {
//         return;
//     }
//     else {
//         int m = (l+r)/2;
//         mergesort(array,l,m);
//         mergesort(array,m+1,r);
//         mergearrays(array,l,m,r);
//     }
// }
// int main() {
//     int array[] = {3,1,2,5,4};
//     int n = sizeof(array)/sizeof(array[0]);
//     mergesort(array,0,n-1);
//     for(int i=0; i<n; i++) {
//         cout<<array[i]<<" ";
//     }
//     return 0;
// }
//sorting using quicksort algorithm;
// #include <iostream>
// using namespace std;
// int findpivot(int array[],int start,int end) {
//     int pi = end;
//     int i = start-1;
//     int j = start;
//     while(j<end) {
//         if(array[end]>array[j]) {
//             i++;
//             swap(array[i],array[j]);
//         }
//         j++;
//     }
//     swap(array[i+1],array[pi]);
//     return ++i;
// }
// void quicksort(int array[], int start, int end) {
//     if(start>=end) {
//         return;
//     }
//     else {
//         int pivot = findpivot(array,start,end);
//         quicksort(array,start,pivot-1);
//         quicksort(array,pivot+1,end);
//     }
// }
// int main() {
//     int array[] = {8,0,9,2,4,5,7};
//     int n = sizeof(array)/sizeof(array[0]);
//     quicksort(array,0,n-1);
//     for(int i=0; i<n; i++) {
//         cout<<array[i]<<" ";
//     }
//     return 0;
// }
//mergesort__repractice:
// #include <iostream>
// using namespace std;
// void mergearrays(int array[], int m, int mid, int n) {
//     int a = mid-m+1;
//     int b = n-mid;
//     int A[a];
//     int B[b];
//     for(int i=0; i<a; i++) {
//         A[i] = array[m+i];
//     }
//     for(int i=0; i<b; i++) {
//         B[i] = array[mid+i+1];
//     }
//     int k = m;
//     int i = 0;
//     int j = 0;
//     while(i<a and j<b) {
//         if(A[i]<B[j]) {
//             array[k++] = A[i++];
//         }
//         else{ 
//             array[k++] = B[j++];
//         }
//     }
//     while(i<a) {
//         array[k++] = A[i++];
//     }
//     while(j<b) {
//         array[k++] = B[j++];
//     }
    
// }
// void mergesort(int array[], int m, int n) {
//     if(m>=n) {
//         return;
//     }
//     else {
//         int mid = (m+n)/2;
//         mergesort(array,m,mid);
//         mergesort(array,mid+1,n);
//         mergearrays(array,m,mid,n);
//     }
// }
// int main() {
//     int array[] = {5,4,3,2,1};
//     int n = sizeof(array)/sizeof(array[0]);
//     mergesort(array,0,n-1);
//     for(int i=0; i<n; i++) {
//         cout<<array[i]<<" ";
//     }
//     return 0;
// }

//quicksort__repractice;
// #include <iostream>
// using namespace std;
// int findpi(int array[], int first, int last) {
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
//     swap(array[i],array[last]);
//     return i;
// }
// void quicksort(int array[], int first, int last) {
//     if(first>=last) {
//         return;
//     }
//     else{
//         int pi = findpi(array,first,last);
//         quicksort(array,first,pi-1);
//         quicksort(array,pi+1,last);
//     }
// }
// int main() {
//     int array[] = {5,4,3,2,1};
//     int n = sizeof(array)/sizeof(array[0]);
//     quicksort(array,0,n-1);
//     for(int i=0; i<n; i++) {
//         cout<<array[i]<<" ";
//     }
//     return 0;
// }
//quicksort_practice:
// #include <iostream>
// using namespace std;
// int findpi(int array[], int first, int last) {
//     int i = first-1;
//     int j = first;
//     while(j<last){
//         if(array[j]<array[last]) {
//             i++;
//             swap(array[i],array[j]);
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
// void quick_sort(int array[], int first, int last) {
//     if(first>=last) {
//         return;
//     }
//     else {
//         int pi = findpi(array,first,last);
//         quick_sort(array,first,pi-1);
//         quick_sort(array,pi+1,last);
//     }
// }
// int main() {
//     int array[] = {5,4,3,2,1};
//     int n = sizeof(array)/sizeof(array[0]);
//     quick_sort(array,0,n-1);
//     for(int i=0; i<n; i++) {
//         cout<<array[i]<<" ";
//     }
//     return 0;
// }

//merge_sort practice:
// #include<iostream>
// using namespace std;
// void mergearrays(int array[], int m, int mid, int n) {
//     int a = mid-m+1;
//     int b = n-mid;
//     int A[a];
//     int B[b];
//     for(int i=0; i<a; i++) {
//         A[i] = array[i+m];
//     }
//     for (int i=0; i<b; i++) {
//         B[i] = array[i+mid+1];
//     }
//     int k = m;
//     int i = 0;
//     int j = 0;
//     while (i<a and j<b) {
//         if(A[i]>B[j]) {
//             array[k++] = B[j++];
//         }
//         else {
//             array[k++] = A[i++];
//         }
//     }
//     while (i<a) {
//         array[k++] = A[i++];
//     }
//     while (j<b) {
//         array[k++] = B[j++];
//     }
// }
// void mergesort(int array[], int m, int n) {
//     if(m>=n) {
//         return;
//     }
//     else {
//         int mid = (m+n)/2;
//         mergesort(array,m,mid);
//         mergesort(array,mid+1,n);
//         mergearrays(array,m,mid,n);
//     }
// }
// int main() {
//     int array[] = {5,4,3,2,1};
//     int n = sizeof(array)/sizeof(array[0]);
//     mergesort(array,0,n-1);
//     for(int i=0; i<n; i++) {
//         cout<<array[i]<<" ";
//     }
//     return 0;
// }


//binary_search_algorithm:
//firstly_let_us_deal_with_linear_search_algorithm:
/*#include <iostream>
#include<vector>
using namespace std;
int linearSearch(vector <int> &vec, int target) {
    for (int i=0; i<vec.size(); i++) {
        if(vec[i] == target) {
            return i;
        }
    }
    return -1;
}
int main() {
    vector <int> vec;
    int n;
    cout<<"enter n: ";
    cin>>n;
    cout<<"vector: ";
    int x;
    for (int i=0; i<n; i++) {
        cin>>x;
        vec.push_back(x);
    }
    int target;
    cout<<"enter target: ";
    cin>>target;
    cout<<linearSearch(vec,target);
    return 0;
    // space_complexity: O(n);
}
*/
// above program using binary_search_algorithm;
/*#include <iostream>
#include<vector>
using namespace std;
int binarySearch(vector <int> &vec, int target) {
    int low = 0;
    int high = vec.size()-1;
    int mid;
    while (low<=high) {
        mid = (low+high)/2;
        if(vec[mid] == target) {
            return mid;
        }
        else if (vec[mid]<target) {
            low = mid+1;
        }
        else {
            high = mid-1;
        }
    }
    return -1;
}
int main() {
    vector <int> vec;
    int n;
    cout<<"enter n: ";
    cin>>n;
    cout<<"vector: ";
    int x;
    for (int i=0; i<n; i++) {
        cin>>x;
        vec.push_back(x);
    }
    int target;
    cout<<"enter target: ";
    cin>>target;
    cout<<binarySearch(vec,target);
    return 0;
    // space_complexity: O(1);
    // time_complexity: O(logN);
}
*/
//  recursiveBinarySearch;
/*#include <iostream>
#include <vector>
using namespace std;
int recursiveBinarySearch(vector <int> &vec, int low, int high, int target) {
    // int mid = (low+high)/2;
    // modified mid = (low+high+low-low)/2 = low + ((high-low)/2);
    int mid = low + ((high-low)/2);
    if(low>=high) {
        return -1;
    }
    else if(vec[mid]==target) {
        return mid;
    }
    else if(vec[mid]>target) {
        return recursiveBinarySearch(vec, low, mid-1, target);
    }
    else {
        return recursiveBinarySearch(vec, mid+1, high, target);
    }
}
int main() {
    vector <int> vec;
    int n;
    cout<<"enter n: ";
    cin>>n;
    cout<<"enter vector: ";
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        vec.push_back(x);
    }
    int target;
    cout<<"enter target: ";
    cin>>target;
    cout<<recursiveBinarySearch(vec,0,n-1,target);
    return 0;
}*/
// recursiveBinarySearch practice;
/*#include <iostream>
#include <vector>
using namespace std;
int recursiveBinarySearch(vector <int> &vec, int low, int high, int target, int ans) {
    int mid = low + ((high-low)/2);
    if(low>=high) {
      return
    }
    else if(vec[mid]==target) {
        ans = mid;
        return recursiveBinarySearch(vec, low, mid-1, target, ans);
    }
    else if(vec[mid]>target) {
        return recursiveBinarySearch(vec, low, mid-1, target, ans);
    }
    else {
        return recursiveBinarySearch(vec, mid+1, high, target, ans);
    }
int main() {
    vector <int> vec;
    int n;
    cout<<"enter n: ";
    cin>>n;
    cout<<"enter vector: ";
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        vec.push_back(x);
    }
    int target;
    cout<<"enter target: ";
    cin>>target;
    cout<<recursiveBinarySearch(vec,0,n-1,target,-1);
    return 0;
}*/
// above program using linear search;
// #include <iostream>
// using namespace std;
// int main() {
//     int array[] = {1, 2, 3, 4, 4, 5, 6, 7, 8 ,9};
//     int n = sizeof(array)/sizeof(array[0]);
//     int target;
//     cout<<"enter target: ";
//     cin>>target;
//     for (int i=0; i<n; i++) {
//         if((array[i]) == target) {
//         cout<<i;
//         break;
//         }

//     }
// }
// finding_first_occurence_of_an_element_using_binary_search:
/*#include <vector>
#include <iostream>
using namespace std;
int firstOccurrence(vector <int> &vec, int target) {
    int ans = -1;
    int low = 0;
    int high = vec.size()-1;
    while(low<=high) {
        int mid = low + ((high-low)/2); 
        if(vec[mid]==target) {
            ans = mid;
            high = mid-1;
        }
        else if(vec[mid]>target) {
            high = mid-1;
        }
        else {
            low = mid+1;
        }
    }
    return ans;
}
int main() {
    vector <int> vec;
    int n;
    cout<<"enter n: ";
    cin>>n;
    cout<<"enter vector: ";
    for (int i=0; i<n; i++) {
        int x;
        cin>>x;
        vec.push_back(x);
    }
    int target;
    cout<<"enter target: ";
    cin>>target;
    cout<<firstOccurrence(vec,target);
    return 0;
}
// finding floor of square root using binary search algorithm;
/*#include <iostream>
using namespace std;
int findingFloorOfSquareRoot(int square_number) {
    int m = 0;
    int n = square_number;
    int ans;
    while(m<=n) {
        int mid = (m+n)/2;
        int trend = mid*mid;
        if(trend==square_number) {
            ans = mid;
            break;
        }
        else if(trend>square_number) {
            n = mid-1;
        }
        else {
            ans = mid;
            m = mid+1;
        }
  }
  return ans;
}
int main() {
    int square_number;
    cout<<"enter square_number: ";
    cin>>square_number;
    cout<<findingFloorOfSquareRoot(square_number);
    return 0;
}
*/
// finding_first_occurence_of_an_element;
/*#include <iostream>
#include <vector>
using namespace std;
int firstOccurrence(vector <int> &vec, int target) {
    int ans = -1;
        int low = 0;
        int high = vec.size();
        while(low<=high) {
            int mid = (low+high)/2;
            if(vec[mid]==target) {
             ans = mid;
             high = mid-1;
            }
            else if(vec[mid]<target) {
                low = mid+1;
            }
            else {
                high = mid-1;
            }
        }
    return ans;
}
int main() {
    vector <int> vec;
    int n;
    cout<<"enter_n: ";
    cin>>n;
    cout<<"enter_vector: ";
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        vec.push_back(x);
    }
    int target;
    cout<<"enter_target: ";
    cin>>target;
    cout<<firstOccurrence(vec,target);
    return 0;
    //time_complexity : O(logn);
    //space_complexity : O(1)
    }
*/
// binary-_search_practice;
/* #include <iostream>
using namespace std;
int binarySearch(int array[], int target, int size) {
    int low = 0;
    int high = size-1;
    int ans;
    while(low<=high) {
        int mid = low + ((high-low)/2);
        if(array[mid]==target) {
        ans = mid;
        break;
        }
        else if(array[mid]>target) {
            high = mid-1;
        }
        else {
            low = mid+1;
        }
    }
    return ans;
}
int main() {
    int n;
    cout<<"enter_n: ";
    cin>>n;
    int array[n];
    cout<<"enter_array: ";
    for(int i=0; i<n; i++ ) { 
        int x;
        cin>>x;
        array[i] = x;
    }
    int target;
    cout<<"target: ";
    cin>>target;
    cout<<binarySearch(array,target,n);
    return 0;
}*/
// binarySearch using recursion;
/*#include <iostream>
using namespace std;
int binarySearchThurRecursion(int array[], int target, int low, int high) {
    int mid = (low+high)/2;
    if(array[mid]==target) {
        return mid;
    }
    else if(array[mid]<target) {
        return binarySearchearchThruRecursion(array, target, mid+1, high);
    }
    else {
        return binarySearchThruRecursion(array, target, low , mid-1);
    }
}
int main() {
    int n; 
    cout<<"enter_n: ";
    cin>>n;
    int array[n];
    cout<<"enter array: ";
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        array[i] = x;
    }
    int target;
    cout<<"enter target: ";
    cin>>target;
    cout<<binarySearchThruRecursion(array,target,0,n-1);
    return 0;
}*/
// program to find floor of square using binarySearch;
/*#include <iostream>
using namespace std;
int floorOfSqurareRoot(int number) {
    int m = 0;
    int n = number;
    int ans = -1;
    while(m<=n) {
        int mid = (m+n)/2;
        int trend = mid*mid;
        if(trend==number) {
          ans = mid;
          break;
        }
        else if(trend<number) {
            ans = mid;
            m = mid+1;
        }
        else {
            n = mid-1;
        }
    }
    return ans;
}
int main() {
    int number;
    cout<<"enter_number: ";
    cin>>number;
    cout<<floorOfSqurareRoot(number);
    return 0;
// time_complexity: log(number);
 // space_complexity: O(1);
}*/
// program_incomplete....
// finding first and last occurence of an element in a sorted_array;
// #include <vector>
// #include <iostream>
// using namespace std;
// void findFirstAndLastOccurence(vector <int> &vec, int target, int &first_occurence, int &last_occurence) {
//     int m = 0;
//     int n = vec.size()-1;
//     int l = 0;
//     int r = vec.size()-1;
//     while(l<=r or m<=n) {
//         int mid_first = l + ((r-l)/2);
//         int mid_last = m + ((n-m)/2);
//         if(vec[mid_first]==target or vec[mid_last]==target) {
//         if(l<=r) {
//         if(vec[mid_first]==target) {
//             first_occurence = mid_first;
//             r = mid_first - 1;
//         }
//         }
//         if(m<=n) {
//         if(vec[mid_last]==target){ 
//             last_occurence = mid_last;
//             m = mid_last + 1;
//         }
//         }
//         }
//         else { 
//         if(vec[mid_first]>target){
//             r = mid_first - 1;
//         }
//         if(vec[mid_first]<target) {
//              l = mid_first + 1;
//         }
//         if(vec[mid_last]<target) {
//             m = mid_last + 1;
//         }
//         if(vec[mid_last]>target) {
//             n = mid_last - 1;
//         }
//             }
//     }
//     return;
// }
// int main() {
//     vector <int> vec;
//     int n;
//     cout<<"enter_size: ";
//     cin>>n;
//     cout<<"enter_vector: ";
//     for(int i=0; i<n; i++) {
//         int x;
//         cin>>x;
//         vec.push_back(x);
//     }
//     int target;
//     cout<<"enter_target: ";
//     cin>>target;
//     int first_occurence = -1;
//     int last_occurence = -1;
//     findFirstAndLastOccurence(vec, target, first_occurence, last_occurence);
//     cout<<"first_occurence: "<<first_occurence<<endl<<"last_occurence : "<<last_occurence;
//     return 0;
// }
// fining_min_element in a rotated_sorted_array;
/*#include <iostream>
#include <vector>
using namespace std;
int findMinElementIdxInRotatedSorted(vector <int> &vec) {
  if(vec.size()==1) { return 0 ;}
  if(vec[0]<vec[vec.size()-1]) { return 0;}
  int low = 0;
  int high = vec.size()-1;
  while(low<=high) {
      int mid = low + ((high-low)/2);
      if(vec[mid]>vec[mid+1]) { return mid+1; }
      if(vec[mid]<vec[mid-1]) { return mid; }
      if(vec[mid]<vec[low]) {
          low = mid + 1;
      }
      else {
          high = mid - 1;
      }
  }
    return -1;
}
int main() {
    vector <int> vec;
    int n;
    cout<<"enter n: ";
    cin>>n;
    cout<<"enter vector: ";
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        vec.push_back(x);
    }
    cout<<findMinElementIdxInRotatedSorted(vec);
    return 0;
    // time_complexity: O(logn);
    // space_complexity: O(1);
}*/
// finding index of target element in rotated sorted array;
// incomplete program;
/*#include <iostream>
#include <vector>
using namespace std;
int findIdxOfTarget(vector <int> &vec, int target) {
    int low = 0;
    int high = vec.size()-1;
    while(low<=high) {
        int mid = low + ((high-low)/2);
        if(vec[mid]==target) {
            return mid;
        }
        else if(target<vec[mid]) {
            if (vec[mid]>vec[low]) {
                high = mid-1;
            }
            else {
                low = mid+1;
            }
        }
        else {
            if(vec[mid]<target) {
              low = mid+1;
            }
            else {
              high = mid-1;
            }
        }
    }
    return -1;
}
int main() {
    vector <int> vec;
    int n;
    cout<<"enter n: ";
    cin>>n;
    cout<<"enter vector: ";
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        vec.push_back(x);
    }
    int target;
    cout<<"enter target: ";
    cin>>target;
    cout<<findIdxOfTarget(vec, target);
    return 0;
}*/
//above program aliter;
/*#include <iostream>
#include <vector>
using namespace std;
int findIdxOfTarget(vector <int> &vec, int target) {
    int low = 0;
    int high = vec.size()-1;
    int min_idx;
    int ans;
    // let's find out idx of min_element in sorted rotated;
    while(low<=high) {
    int mid = low + ((high-low)/2);
    if(vec[mid]>vec[mid+1]) {min_idx = mid+1;}
    if(vec[mid]<vec[mid-1]) {min_idx = mid;}
    if(vec[mid]>vec[low]) {
        low = mid + 1;
    }
    else {
        high = mid - 1;
    }
    }
    int sep = min_idx;
    if(vec[sep]==target) {return sep;}
    int l1 = 0;
    int h1 = sep - 1;
    while(l1<=h1) {
        int mid_1 = l1 + ((h1-l1)/2);
        if(vec[mid_1] == target) {
            return mid_1;
        }
        else if (vec[mid_1]>target) {
            h1 = mid_1 - 1;
        }
        else {
            l1 = mid_1 + 1;
        }
    }
    int l2 = sep + 1;
    int h2 = vec.size()-1;
    while(l2<=h2) {
        int mid_2 = l2 + ((h2-l2)/2);
        if(vec[mid_2] == target) {
            return mid_2;
        }
        else if (vec[mid_2]>target) {
            h2 = mid_2 - 1;
        }
        else {
            l2 = mid_2 + 1;
        }
    }
    return -1;
}
int main() {
    vector <int> vec;
    int n;
    cout<<"enter n: ";
    cin>>n;
    cout<<"enter vector: ";
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        vec.push_back(x);
    }
    int target;
    cout<<"enter target: ";
    cin>>target;
    cout<<findIdxOfTarget(vec, target);
    return 0;
 //time_complexity : O(logn);
//space_complexity: 
}*/
/*above program aliter by binary search for one time;
#include <vector>
#include <iostream>
using namespace std;
int findIdxOfTarget(vector <int> &vec, int target) {
    int low = 0;
    int high = vec.size()-1;
    while(low<=high) {
        int mid = low + ((high-low)/2);
        if (vec[mid]==target) { return mid; };
        if(vec[low]<vec[mid]) {
            if(target <=vec[mid] && target >= vec[low]) {
                high = mid - 1;
            }
            else { //target >= vec[mid] && target >= vec[low];
                low = mid + 1;
            }
        }
        else { //vec[mid]<vec[low];
            if(target<=vec[high] && target >= vec[mid]) {
                low = mid + 1;
            } 
            else { //target <= vec[mid] and target <= vec[high];
                high = mid - 1;
            }
        }
    }
    return -1;
}
int main() {
    vector <int> vec;
    int n;
    cout<<"enter n: ";
    cin>>n;
    cout<<"enter vector: ";
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        vec.push_back(x);
    }
    int target;
    cout<<"enter target: ";
    cin>>target;
    cout<<findIdxOfTarget(vec, target);
  // time_complexity: O(logn);
  // space_complexity: O(1);
    return 0;
}*/
//search  element in rotated sorted array with duplicate elements. Return true if element is found else return -1;
// #include <iostream>
// #include <vector> 
// using namespace std;
// int isElemetnPresent(vector <int> &vec, int element) {
//     if(vec[0] == element) return 1;
//     if(vec[vec.size()-1] == element) return 1;
//     int p = 0;
//     int q = vec.size();
//     while(true) {
//         if(vec[p] == vec[q]) {
//             --p;
//             --q;
//         }
//         else {
//             break;
//         }
//     }
//     cout<<p<<" "<<q;
//     int m = p;
//     int n = q;
//     while(m<=n) {
//         int mid = m + ((n-m)/2);
//         if(element == vec[mid]) {
//             return 1;
//         }
//         else if(vec[mid]>vec[m]) {
//             if(vec[mid]>element) {
//                 n = mid - 1;
//             }
//             else { //vec[mid]<element;
//                 m = mid + 1;
//             }
//         }
//         else { //vec[mid]<vec[m];
//             if (vec[mid]>element) {
//                 m = mid + 1;
//             }
//             else {
//                 n = mid - 1;
//             }
//         }
//     }
//     return -1;
// }
// int main() {
//     vector <int> vec;
//     int n; 
//     cout<<"enter n: ";
//     cin>>n;
//     cout<<"enter vector: ";
//     for(int i=0; i<n; i++) {
//         int x;
//         cin>>x;
//         vec.push_back(x);
//     }
//     cout<<"enter element: ";
//     int element;
//     cin>>element;
//     cout<<isElemetnPresent(vec, element);
//     return 0;
// }



