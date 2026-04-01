//program to check palindrome using recursion;
/*#include <iostream>
using namespace std;
bool checkPalindrome(int k, int *n) {
    bool result;
    if(k>=0 && k<=9) {
        result = (k == ((*n)%10));
        (*n) /= 10;
        return result;
    }
    else{
        result = ((checkPalindrome(k/10, n) && (k%10 == (*n)%10)));
        (*n) /= 10;
        return result;
    }
}
int main() {
    int k;
    cin>>k;
    int duplicate_k = k;
    int *n = &duplicate_k;
    bool result = checkPalindrome(k,n);
    cout<<result;
    return 0;
}*/
//program to print sequence of natural numbers upto to the give number k;
//style_1;
/*#include <iostream>
using namespace std;
int print_sequence(int k){
    //base case:
    if(k==1) {
        cout<<k<<" ";
        return k;
    }
    else{
    //self work;
        int result = 1 + print_sequence(--k); //assumptional case;
        cout<<result<<" ";
        return result;

    }
}
int main() {
    int k;
    cin>>k;
    print_sequence(k);
    return 0;
}*/
//style_2;
/*#include <iostream>
using namespace std;
void print_sequence(int k){
    //base_case;
    if(k<1){
        return;
    }
    //self_work;
    else {
         print_sequence(k-1); //assumptional_case;
         cout<<k<<" ";
    }
}
int main() {
    int k;
    cin>>k;
    print_sequence(k);
    return 0;
}*/
//program to print multiple of a given number for k number of multiples using recursion;
/*#include <iostream>
using namespace  std;
int print_multiples(int n, int k){
    int ans;
    int result;
    if(k==1){
        result = k;
        ans = n*k;
        cout<<ans<<" ";;
        return k;
    }
    else{
        result = 1 + print_multiples(n,k-1);
        ans = n*result;
        cout<<ans<<" ";
        return result;
    }
}
int main() {
    int k,n;
    cin>>n>>k;
    print_multiples(n,k);
    return 0;
}*/
//style_2;
/*#include <iostream>
using namespace std;
void print_multiples(int n, int k) {
    if(k<1){
        return;
    }
    else {
        print_multiples(n,k-1);
        cout<<n*k<<",";
    }
}
int main() {
    int n,k;
    cin>>n>>k;
    print_multiples(n,k);
    return 0;
}*/
//style_3;
/*#include <iostream>
using namespace std;
void print_multiples(int n,int result) {
    int ans;
    if(result==0) {
        return;
    }
    else{
        ans = result;
        print_multiples(n,result-n);
        cout<<ans<<" ";
    }
}
int main() {
    int n,k;
    cin>>n>>k;
    int result = n*k;
    print_multiples(n,result);
    return 0;
}*/
//program to find the sum of the natural numbers till n but with alternative signs;
//style_1;
/*#include <iostream>
using namespace std;
int sum = 0;
int result(int k){
    int n;
    int ans;
    //base_case;
    if(k==1){
        n = k;
        ans = n;
        sum += ans;
        // cout<<ans<<endl;
        return (n);
    }
    else if(k%2==1){
        n = (1 + result(k-1));
        ans = n;
        sum += ans;
        // cout<<ans<<endl;
        return (n);
    }
    else {
        n = (1 + result(k-1));
        ans = -n;
        sum += ans;
        // cout<<ans<<endl;
        return (n);
    }
}
int main() {
    int k;
    cin>>k;
    result(k);
    cout<<sum<<endl;
    return 0;
}*/
//style_2;
/*#include <iostream>
using namespace std;
int result(int k) {
    //base_case;
    if(k==0) {
        return k;
    }
    //self_work;
    else {
        if(k%2==1) {
            return k + result(k-1); //assumptional_case;
        }
        else{
            return (-k) + result(k-1); //assumptional_case;
        }
    }
}
int main() {
    int k;
    cin>>k;
    cout<<result(k);
    return 0;
}*/
//#- Given a number n, print the following pattern without using any loop.
/*#include <iostream>
using namespace std;
void print_req_sequence(int k) {
    if(k<=0) {
        cout<<k<<" ";
        return;
    }
    else {
        cout<<k<<" ";
        print_req_sequence(k-5);
        cout<<k<<" ";
    }
}
int main() {
    int k;
    cin>>k;
    print_req_sequence(k);
    return 0;
}*/
//#- Find m-th summation of first n natural numbers where m-th summation of first n natural
// numbers is defined as following:
/*#include <iostream>
using namespace std;
int sumOfFirstnNaturals(int n) {
    if(n==1) {
        return 1;
    }
    else {
        return n + sumOfFirstnNaturals(n-1);
    }
}
int printReqSum(int n, int m) {
    //base_case;
    if(m==1) {
        return sumOfFirstnNaturals(n);
    }
    //self_work;
    else {
        return printReqSum(printReqSum(n,m-1),1); //assumptional_case;
    }
}
int main() {
    int n,m;
    cin>>n>>m;
    cout<<printReqSum(n,m);
    return 0;
}*/
//#- Given two numbers x and y find a product using recursion.
/*#include <iostream>
using namespace std;
int product(int m, int n) {
    if(n==1) {
        return m;
    }
    else {
        return m + product(m,n-1);
    }
}
int main() {
    int m,n;
    cin>>m>>n;
    cout<<product(m,n);
    return 0;
}*/
//#- Given a number n, check whether it's a prime number or not using recursion.
/*#include <iostream>
using namespace std;
bool checkPrime(int k, int n) {
    if(k<2) {
        return false; 
    }
    else if((k%n==0) and (n!=1)) {
        return false;
    }
    else if((k%n==0) and (n==1)){
        return true;
    }
    else{
    return checkPrime(k, n-1);
    }
}
int main() {
    int k,n;
    cin>>k;
    int num = k;
    n = k-1;
    bool result = checkPrime(k, n); 
    if(result == true) {
        cout<<num<<" is a prime number.";
    }
    else{
        cout<<num<<" is not a prime number.";
    }
    return 0;
}
*/
//#- Given a decimal number as input, we need to write a program to convert the given decimal
//number into its equivalent binary number.
/*#include <iostream>
using namespace std;
void convertDecToBin(int k) {
    if(k==0) {
        cout<<k;
        return;
    }
    else {
        convertDecToBin(k/2);
        cout<<k%2;
    }
}
int main() {
    int k;
    cin>>k;
    // cout<<convertDecToBin(k);
    convertDecToBin(k);
    return 0;
}*/
//#- Given the Binary code of a number as a decimal number, we need to convert this into its
//equivalent Gray Code. In gray code, only one bit is changed in 2 consecutive numbers.
/*#include <iostream>
using namespace std;
void convertBinToGray(int k) {
    int n;
    if(k==0 || k==1) {
        cout<<k;
        return;
    }
    else {
        convertBinToGray(k/10);
        n = k/10;
        cout<<((k%10) ^ (n%10));
    }
}
int main() {
    int bin_form;
    cin>>bin_form;
    int k = bin_form;
    convertBinToGray(k);
    return 0;
}*/
//Given two numbers x and y. Find the greatest common divisor of x and y using
//recursion.
//using iteration;
/*#include <iostream>
using namespace std;
int caluculte_gcf(int m, int n) {
    int gcf = 1;
    if(m<n) {
        swap(m,n);
    }
    for(int i=1;i<n;i++){
        if(m%i==0 and n%i==0) {
            if(gcf<i) {
                gcf = i;
            }
        }
    }
    return gcf;
}
int main() {
    int m,n; 
    cin>>m>>n;
    cout<<caluculte_gcf(m,n);
    return 0;
}*/
//above program using recursion;
/*#include <iostream>
using namespace std;
int caluculte_gcf(int m, int n) {
    if(m%n==0) {
        return n;
    }
    else {
        return caluculte_gcf(n,m%n);
    }
}
int main() {
    int m,n;
    cin>>m>>n;
    if (m<n) {
        swap(m,n);
    }
    cout<<caluculte_gcf(m,n);
    return 0;
}*/
//above program using euclids algorithm;
/*#include <iostream>
using namespace std;
int caluculte_gcf(int m, int n) {
    if (m<n) {
        swap(m,n);
    }
    if(m==n) {
        return n;
    }
    else {
         m -= n;
         return caluculte_gcf(m,n);
    }
}
int main() {
    int m,n;
    cin>>m>>n;
    cout<<caluculte_gcf(m,n);
    return 0;
}*/
//Given a number n. Print if it is an armstrong number or not.
//An armstrong number is a number if the sum of every digit in that number
//raised to the power of total digits in that number is equal to the number.
//above task using iteration;
/*#include <iostream>
using namespace std;
int power(int rem, int i) {
    if(i==0) {
        return 1;
    }
    else {
        return rem*power(rem,i-1);
    }
}
bool check_armstrong(int k) {
    int num_1 = k;
    int num_2 = k;
    int i = 0;
    int sum = 0;
    int rem;
    while(k!=0) {
        k/=10;
        i++;
    }
    for(int j=1; j<=i; j++) {
        rem = num_1%10;
        sum += power(rem,i);
        num_1 /= 10;
    }
    if(num_2 == sum) {
        return true;
    }
    else {
        return false;
    }
    
}
int main() {
    int k;
    cin>>k;
     int number = k;
    bool result = check_armstrong(k);
    if(result==true) {
        cout<<number<<" is an armstrong number.";
    }
    else { 
        cout<<number<<" is not an armstrong number.";
    }
    return 0;
}*/
//above program using recursion;
/*#include <iostream>
#include <math.h>
using namespace std;*/
/*int pow(int k, int i) {
    if(i==0) {
        return 1;
    }
    else {
        return k * power(k,--i);
    }
}*/
/*int pow(int k, int i) {
    if (i==0) {
        return 1;
    }
    if (i%2==1) {
        int ans = power(k,(i-1)/2);
        return ans * ans * k;
    }
    else {
        int ans = power(k,i/2);
        return ans*ans;
    }
}*/
/*int check_armstrong(int k, int i) {
    //base_case;
    if(k==0) {
        return 0;
    }
    else {
        //self_work;
        return pow(k%10,i) + check_armstrong(k/10,i); //assumptional_case;
    }
}
int main() {
    int k;
    cin>>k;
    int i = 0;
    int k_1 = k;
    int k_2 = k;
    while(k_1!=0) {
        k_1/=10;
        i++;
    }
    int result = check_armstrong(k,i);
    if(result == k_2) {
         cout<<k_2<<" is an armstrong number.";
    }
    else {
        cout<<k_2<<" is not an armstrong number.";
    }
    return 0;
}*/
//There are N stones, numbered 1,2,..,N. For each i (1≤i≤N), the height of Stone i is hi.There
//is a frog who is initially on Stone 1. He will repeat the following action some number of
//times to reach Stone N:
//If the frog is currently on Stone i, jump to Stone i+1 or Stone i+2. Here, a cost of |hi - hj|
//is incurred, where j is the stone to land on.
//Find the minimum possible total cost incurred before the frog reaches Stone N.
//above program using iteration;
//#*incomplete program;
/*#include <iostream>
using namespace std;
int main() {
   int array[] = {10, 30, 40, 20};
   int size = sizeof(array)/sizeof(array[0]);
   int sum = 0;
   int n;
   for (int i=0; i<size; i+=n) {
       int s1 = abs(array[i+1]-array[i]); 
       int s2 = abs(array[i+2]-array[i]); 
       if((s1)<(s2)) {
           sum += s1; 
           n = 1;
       }
       else {
           sum += s2;
           n = 2;
       }
   }
   cout<<sum;
   return 0;
}*/
//above program using recursion;
/*#include <iostream>
using namespace std;
int minPossibleHeight(int *array, int n, int i) {
    if (i==(n-1)) {
        return 0;
    }
    else if (i==(n-2)) {
        return minPossibleHeight(array,n,i+1)+abs(array[i+1]-array[i]);
    }
    else {
        return  min((minPossibleHeight(array,n,i+1)+abs(array[i+1]-array[i])), (minPossibleHeight(array,n,i+2)+abs(array[i+2]-array[i])));
    }
}
int main() {
    int array[] = {10, 30, 40, 20};
    int n = sizeof(array)/sizeof(array[0]);
    cout<<minPossibleHeight(array,n,0);
    return 0;
}*/
//Q) - Write a program to calculate the sum of the first and the second last digit of a 5 digit number.
/*#include <iostream>
using namespace std;
int main() {
    int k;
    cin>>k;
    int sum = 0;
    for(int i=1;i<=5;i++) {
        if (i==2 || i==5) {
            int rem = k%10;
            sum += rem;
        }
        k /= 10;
    }
    cout<<sum;
    return 0;
}*/
/*#include <iostream>
using namespace std;
int primeCheck(int n) {
    int result;
    for(int l=2; l<n; l++) {
        if (n%l==0) {
            return 0;
            break;
        }
    }
    return 1;
}
int main() {
    int i,j,k;
    int p = 2;
    cout<<"enter k: ";
    cin>>k;
    for(int i=1; i<=k; i++) {
        for(int j=1; j<=k-i; j++) {
            cout<<" ";
        }
        int n = p;
        int count = 0;
        while(count<i) {
            int result = primeCheck(n);
            if(result == 1) {
                cout<<n<<" ";
                n++;
                p = n;
                count++;
            }
            else {
                n++;
                p = n;
                primeCheck(n);
            }
            }
        cout<<endl;
        }
 }
*/
//Given an array arr of size N and a target value target The task is to find all the indices of the
//given target value in the array using recursion.
/*#include <iostream>
using namespace std;
void find_index(int array[], int k, int n) {
    if(n == 0) {
        if(array[n] == k) {
        cout<<n<<" ";
        }
        return;
    }
    else {
        find_index(array,k,n-1);
        if (array[n]==k) {
        cout<<n<<" ";
       }
    }
}
int main() {
    int array[] = {1,2,9,2,2,9};
    int k;
    int n = sizeof(array)/sizeof(array[0]);
    cout<<"enter k: ";
    cin>>k;
    find_index(array,k,n);
    return 0;
}*/
//incomplete program:
// #include <iostream>
// using namespace std;
// void sumTriange(int array[],int size) {
//     for(int i=0; i<(size-1);i++) {
//         int new_array[size-1];
//         for(int j=0; j<(size-1); i++) {
//         new_array[i] = array[i] + array[i+1];
//         cout<<newarray[i]+array[i+1];
//         size--;
//     }
//     memset(new_array, 0, sizeof(new_array));
//     }
//     return;
// }
// int main() {
//     int array[] = {5,4,3,2,1};
//     int size = sizeof(array)/sizeof(array[0]);
//     sumTriange(array,size);
//     return 0;
// }
//Print if x exists in the array or not. 
/*#include <iostream>
using namespace std;
string find_index(int n, int *array, int target) {
    string result;
    if (n<0) {
        result = "no";
        return result;
    }
    else if(array[n]==target) {
        result = "yes";
        return result;
    }
    else {
        return find_index(n-1,array,target);
    }
}
int main() {
    // cin>>n;
    int array[10] = {0,1,2,3,4,5,6,7,8,9};
    int n = sizeof(array)/sizeof(array[0]);
    int target;
    cin>>target;
    string ans = find_index(n-1,array,target);
    cout<<ans;
    return 0;
}
*/
//above program alliter;
/*#include <iostream>
using namespace std;
bool result(int *array, int n, int i, int target) {
    //base_case;
    if(i==n) {
        return false;
    }
    else {
    //self_work;
        return (array[i]==target) || result(array,n,i+1,target); //assumptional_case;
    }
}
int main() {
    int array[] = {0,1,2,3,4,5,6,7,8,9};
    int n = sizeof(array)/sizeof(array[0]);
    int target;
    cin>>target;
    bool ans = result(array,n,0,target);
    if(ans==true) {
        cout<<"yes";
    }
    else {
        cout<<"no";
    }
    return 0;
}*/
//incomplete program;
// void subset_sum(int *array, int i, int sum) {
//     if(i==n) {
//         sum = 0;
        
//     }
// }
// #include <iostream>
// using namespace std;
// int main() { 
//     int array[] = {3,2,5};
//     int sum = 0;
//     int i = 0;
//     subset_sum(array,i,sum);
//     return 0;
// }
//program to prints sum's of elements in all the possible subsets of a given set using recursion;
/*#include <iostream>
#include <vector> 
using namespace std;
void subset_sum(int *array, int n, int i, int sum, vector <int> &result) {
    if(i==n) {
        result.push_back(sum);
        return;
    }
    else {
        subset_sum(array,n,i+1,sum+array[i],result);
        subset_sum(array,n,i+1,sum,result);
    }
}
int main() {
    int array[] = {4,5,6};
    int n = 3;
    int i = 0;
    int sum = 0;
    vector <int> result;
    subset_sum(array,n,i,sum,result);
    for(int i=0; i<result.size(); i++) {
        cout<<result[i]<<" ";
    }
    return 0;
}*/
//program to be understanding: 
// #include <iostream>
// using namespace std;

// void printSubsets(int set[], int set_size) {
//     for (int i = 0; i < (1<<set_size); i++) {
//         for (int j = 0; j < set_size; j++) {
//             if (i & (1<<j)) {
//                 cout << set[j] << " ";
//             }
//         }
//         cout << endl;
//     }
// }

// int main() {
//     int set[] = {1, 2, 3};
//     int set_size = sizeof(set)/sizeof(set[0]);
//     printSubsets(set, set_size);
//     return 0;
// }
//practice...
/*#include <iostream>
#include <vector>
using namespace std;
void f(int *arr, int n, int i, int sum, vector <int> &v) {
    if(i==n) {
        v.push_back(sum);
    }
    else {
        f(arr,n,i+1,sum+arr[i],v);
        f(arr,n,i+1,sum,v);
    }
}
int main() {
    vector <int> v;
    int arr[] = {4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    f(arr,n,0,0,v);
    for(int i=0; i<v.size(); i++) {
        cout<<v[i]<<" ";
    }
    return 0;
}*/
//Count all the possible paths on an m*n grid:
/*#include <iostream>
using namespace std;
int findNumOfways(int m, int n, int i, int j) { 
    if(i==(m-1) && j==(n-1)) {
        return 1;
    }
    else if(i==m || j==n) {
        return 0;
    }
    else {
        return (findNumOfways(m,n,i+1,j) + findNumOfways(m,n,i,j+1));
    }
}
int main() {
    int m = 2;
    int n = 2;
    int i = 0;
    int j = 0;
    cout<<findNumOfways(m,n,i,j);
    return 0;
}*/
//practice:
/*#include <iostream>
using namespace std;
int f(int m, int n, int i, int j) {
    if (i==m-1 and j==n-1) {
        return 1;
    }
    else if(i==m or j==n) {
        return 0;
    }
    else {
        return f(m,n,i+1,j) + f(m,n,i,j+1);
    }
}
int main() {
    int m = 2 ;
    int n = 3 ;
    cout<<f(m,n,0,0);
    return 0;
}*/
//#q1)
/*#include <iostream>
using namespace std;
void find_index(int *array, int k, int n, int i) {
    if(i==n) {
        return;
    }
    else if(array[i] == k) {
        cout<<i<<" ";
        find_index(array,k,n,i+1);
    }
    else {
        find_index(array,k,n,i+1);
    }
}
int main() {
    int array[] = {1,2,3,4,2,3,2};
    int k = 2;
    int n = sizeof(array)/sizeof(array[0]);
    int i = 0;
    find_index(array,k,n,i);
    return 0;
}*/
//has to be rechecked;
/*#include <iostream>
using namespace std;
void SumTriange(int *array, int n, int i, int j) {
    if(j==n) {
        array[j-1] = 0;
        cout<<endl;
        if(n>=1) {
        SumTriange(array,n-1,0,1); 
        return;
        }
    }
    else {
        int temp = array[i]+array[j];
        cout<<temp<<" ";
        array[i] = temp;
        SumTriange(array,n,i+1,j+1);
    }
}
int main() {
    int array[] = {5,4,3,2,1};
    int n = sizeof(array)/sizeof(array[0]);
    int i = 0;
    int j = 1;
    for(int q=0; q<n; q++) {
        cout<<array[q]<<" ";
    }
    cout<<endl;
    SumTriange(array,n,i,j);
    return 0;
}*/
/*#include <iostream>
#include <vector>
using namespace std;
void findSubsetSum(int *set, int n, int i, vector <int> v1, vector <int> v2) {
    if(i==n) {
      for(int j=0; j<v1.size();j++) {
          cout<<v1[i]<<" ";
      }
      cout<<endl;
      v1.clear();
    }
    else{
        v1.push_back(i);
        findSubsetSum(set,n,i+1,v1,v2);
        findSubsetSum(set,n,i+1,v1,v2);
    }
} 
int main() {
int set[] = {1,4,3};
int n = sizeof(set)/sizeof(set[0]);
vector <int> v1;
vector <int> v2;
findSubsetSum(set,n,0,v1,v2);
// for(int i=0; i<v.size(); i++) {
//     cout<<v[i]<<" ";
// }
return 0;
}*/
//function to print subsets of set using loop;
/*#include <iostream>
using namespace std;
int power(int k, int j) {
    if(j==0) {
        return 1;
    }
    else {
        return k*power(k,--j);
    }
}
int main() {
    int array[] = {1,2};
    int n = sizeof(array)/sizeof(array[0]);
    for(int i=0; i<power(2,n); i++) {
        cout<<"{ ";
        for(int j=0; j<n; j++) {
            if(i & power(2,j)) {
                cout<<array[j]<<" ";
            }
        }
        cout<<"}";
        cout<<"\n";
    }
    return 0;
}*/

/*#include <iostream>
#include <vector>
#include<cmath>
using namespace std;
void print_subSet_sum(int *array, int n, int i, int sum, vector <int> &v) {
    if(i==n) {
        v.push_back(sum);
    }
    else {
        print_subSet_sum(array,n,i+1,sum+array[i],v);
        print_subSet_sum(array,n,i+1,sum,v);
    }
    return;
}
int main() {
    int array[] = {1,2,3};
    int n = sizeof(array)/sizeof(array[0]);
    vector <int> v;
    print_subSet_sum(array,n,0,0,v);
    cout<<"{ ";
    for(int i=0; i<pow(2,n); i++) {
        cout<<v[i]<<" ";
    }
    cout<<"}";
    return 0;
}*/
/*#include <iostream>
using namespace std;
// int power(int k, int n) {
//     int ans;
//     if(n==0) {
//         return 1;
//     }
//     else if(n%2==1) {
//         ans = power(k,(n-1)/2);
//         return k*ans*ans;
//     }
//     else {
//         ans = power(k,n/2);
//         return ans*ans;
//     }
// }
/*void print_subSets(int array[], int n, int subSet[], int i, int j) {
    if(i==n) {
        // int subSet_size = sizeof(subSet)/sizeof(subSet[0]);
        int subSet_size = j;
        // if(subSet_size==2) {
        cout<<"{ ";
        for(int q=0; q<subSet_size; q++) {
            cout<<subSet[q]<<" ";
        } 
        cout<<"}";
        cout<<endl;
        // }
        
    }
    else {
        print_subSets(array, n, subSet, i+1, j);
        subSet[j] = array[i];
        print_subSets(array, n, subSet, i+1, j+1);
    }
return;
}
int main() {
    int array[] = {1,2};
    int n = sizeof(array)/sizeof(array[0]);
    // int subSet[power(2,n)];
    int subSet[1<<n];
    print_subSets(array,n,subSet,0,0);
    return 0;
}*/
//above program practice;
/*#include <iostream>
#include <math.h>
using namespace std;
void print_subSets(int set[], int subSet[], int set_size, int set_pointer, int subSet_size) {
    if(set_pointer == set_size) {
        cout<<"{ ";
        for(int p=0; p<subSet_size; p++){
            cout<<subSet[p]<<" ";
        }
        cout<<"}";
        cout<<endl;
    }
    else{
        print_subSets(set,subSet,set_size,set_pointer+1,subSet_size);
        subSet[subSet_size] = set[set_pointer];
        print_subSets(set,subSet,set_size,set_pointer+1,subSet_size+1);
    }
}
int main() {
   cout<<"enter size of set: ";
   int set_size;
   cin>>set_size;
   int set[set_size];
   for(int i=0; i<set_size; i++) {
    int k;
    cin>>k;
    set[i] = k;
   }
   int subSet[set_size];
   int subSet_size = 0;
   int set_pointer = 0;
   print_subSets(set,subSet,set_size,set_pointer,subSet_size);
   return 0;
}
*/
/*#include <iostream> 
using namespace std;
int findNumOfways(int m, int n, int i, int j) {
    if(i==m-1 and j==n-1) {
        return 1;
    }
    else if(i==m or j==n) {
        return 0;
    }
    else {
        return findNumOfways(m,n,i+1,j) + findNumOfways(m,n,i,j+1);
    }
} 
int main() {
    int m = 2;
    int n = 2;
    int i = 0;
    int j = 0;
    cout<<findNumOfways(m,n,i,j);
    return 0;
}*/
/*#include <iostream>
#include <string>
using namespace std;
void print_subsequences(string sequence, int n, string subSequence, int sequence_ptr, int subSequence_size) {
    if(sequence_ptr == n) {
        cout<<subSequence.substr(0,subSequence_size)<<endl;
    }
    else {
        print_subsequences(sequence,n,subSequence+sequence[sequence_ptr],sequence_ptr+1,subSequence_size+1);
        print_subsequences(sequence,n,subSequence,sequence_ptr+1,subSequence_size);
     //   subSequence += sequence[sequence_ptr];
    }
    return;
} 
int main() {
    string sequence = "abc";
    int n = sequence.length();
    string subSequence = "";
    int sequence_ptr = 0;
    int subSequence_size = 0;
    print_subsequences(sequence,n,subSequence,sequence_ptr,subSequence_size);
    return 0;
}*/
// #include <iostream>
// using namespace std;
// int main() {
//     string sai = "kiran";
//     string kiran;
//     kiran[0] = sai[2];
//     cout<<kiran[0];
//     return 0;
// }
/*#include <iostream>
#include <string>
using namespace std;
// void printLetterStr(string s, string req, int s_size, int s_ptr, int r_ptr) {
//     if(s_ptr == s_size) {
//         if(req.length()==2) {
//         cout<<req<<" ";
//     }
//     }
//     else {
//         printLetterStr(s,req+s[s_ptr],s_size,s_ptr+1,r_ptr);
//         printLetterStr(s,req,s_size,s_ptr+1,r_ptr+1);
//     }
//  }
void printLetterStr(string )
string num_letter(int r) {
    switch(r) {
        case 2 :
            return "abc";
            break;
        
        case 3 : 
            return "def";
            break;
    
        case 4 :
            return "ghi";
            break;
        
        case 5 :
            return "jkl";
            break;
        
        case 6 :
            return "mno";
            break;
        
        case 7 :
            return "pqrs";
            break;
        
        case 8 :
            return "tuv";
            break;
        
        case 9 :
            return "wxyz";
            break;
        default :
        return "000";
    }
}
int main() {
    int num;
    cout<<"enter number: ";
    cin>>num;
    int r;
    string s = "";
    // while(num!=0) {
    //     r = num%10;
    //     s = num_letter(r);
    //     num /= 10;
    // }
    // cout<<s;
    // cout<<s.length();
    int s_size = s.length();
    int s_ptr = 0;
    int r_ptr = 0;
    string req = "";
    printLetterStr(s,req,s_size,s_ptr,r_ptr);
    return 0;
} */
/*#include <iostream>
#include <string>
using namespace std;
string num_letter(int r) {
    switch(r) {
        case 2 :
            return "abc";
            break;
        
        case 3 : 
            return "def";
            break;
    
        case 4 :
            return "ghi";
            break;
        
        case 5 :
            return "jkl";
            break;
        
        case 6 :
            return "mno";
            break;
        
        case 7 :
            return "pqrs";
            break;
        
        case 8 :
            return "tuv";
            break;
        
        case 9 :
            return "wxyz";
            break;
        default :
        return "000";
    }
}
void print_req_strs(string s1, string s2, int n1, int n2, int i, int j) {
    if(j==n2) {
        if(i<(n1-1)) {
         print_req_strs(s1,s2,n1,n2,i+1,0);
        }
    }
    else {
        cout<<s1[i]<<s2[j]<<" ";
        print_req_strs(s1,s2,n1,n2,i,j+1);
    }
    return;
}
int main() {
    int num = 79;
    int r1 = num%10;
    int r2 = ((num/10))%10;
    string s1 = num_letter(r2);
    string s2 = num_letter(r1);
    int n1 = s1.length();
    int n2 = s2.length();
    int i = 0;
    int j = 0;
    print_req_strs(s1,s2,n1,n2,i,j);
    return 0;
}*/
/*#include <iostream>
#include <string>
using namespace std;
void removeSameChar(string word, string new_word, int n, int i) {
    if(i==n) {
        cout<<new_word;
    }
    else {
        int count = 0;
        for(int j = 0; j<new_word.length(); j++) {
             if (word[i]==new_word[j]) {
                 count++;
             }
        }
        if(count==0) {
                new_word += word[i] ;
             }
        removeSameChar(word,new_word,n,i+1);
    }
    return;
}
int main() {
    string word = "aabbbbcdd";
    string new_word = "";
    int n = word.length();
    removeSameChar(word, new_word, n , 0);
    return 0;
}*/
/*#include <iostream>
#include <string>
using namespace std;
void removeSameChar(string word, string new_word, int n, int i) {
    if(i==n) {
        cout<<new_word;
    }
    else {
        if(new_word[new_word.length()-1]!=word[i]) {
                new_word += word[i] ;
             }
        removeSameChar(word,new_word,n,i+1);
    }
    return;
}
int main() {
    string word = "abbcddaaaerr";
    string new_word = "";
    int n = word.length();
    removeSameChar(word, new_word, n , 0);
    return 0;
}*/
// #include <iostream>
// #include <string>
// using namespace std;
// int main() {
//     string kiran = "kiran";
//     string sai = "";
//     cout<<kiran.substr(1,3);
// }
/*#include <iostream>
using namespace std;
void reverseMyWord(string word, string reverse_word, int n, int i) {
    if(i==n) {
        cout<<reverse_word;
    }
    else {
        reverse_word += word[n-1];
        reverseMyWord(word, reverse_word, n-1 , i);
    }
    return;
}
int main() {
    string word = "Sai Kiran";
    string reverse_word = "";
    int n = word.length();
    reverseMyWord(word, reverse_word, n , 0);
    return 0;
}*/
// #include <iostream>
// #include <string>
// using namespace std;
// int count = 0;
// void reverseMyWord(string word, string reverse_word, int n, int i) {
//     if(i==n) {
//         if (reverse_word==word) {
//           cout<<reverse_word;
//         }
//     }
//     else {
//         reverse_word += word[n-1];
//         reverseMyWord(word, reverse_word, word.length()-1, i);
//     }
// }
// void rotateCheckPalindromeString(string original_string, string duplicate_string, int n, int i) {
//     if (i==n & count==0) {
//         cout<<"It's not a palindrome string.";
//     }
//     else if (i==0) {
//         duplicate_string =  original_string.substr(1,original_string.length()-1) + original_string[0];
//         reverseMyWord(duplicate_string,"",duplicate_string.length(), 0);
//         if(count>0) {
//             cout<<duplicate_string;
//         }
//         else {
//             rotateCheckPalindromeString(original_string, duplicate_string, n, i+1);
//         }
        
//     } 
//     else {
//         duplicate_string =  duplicate_string.substr(1,duplicate_string.length()-1) + duplicate_string[0];
//         reverseMyWord(duplicate_string, "" , duplicate_string.length(), 0);
//         rotateCheckPalindromeString(original_string, duplicate_string, n, i+1);
//     }
//     return;
// }
// int main() {
//     string original_string = "baabcc";
//     string duplicate_string = "";
//     string new_string = "";
//     rotateCheckPalindromeString(original_string, duplicate_string, original_string.length(), 0);
//     return 0;
// }
//Q3)- Given a string, check if it is a rotated palindrome or not using recursion. “baabcc” is a
//rotated palindrome as it is a rotation of palindrome “abccba”.
/*#include <iostream>
#include <string>
using namespace std;
void checkPalindrome(string ow, string dw, string tw, int oW_ptr, int tW_ptr) {
    if(oW_ptr == tW_ptr) {
        cout<<ow<<" is not a palindromic word;";
    }
    else {
        tw = dw.substr(1,oW_ptr-1)+dw[0];
        string trw = "";
        string orw = "";
        for(int i=tw.length()-1; i>=0; i--) {
            trw += tw[i];
        }
        for(int i=dw.length()-1;i>=0;i--) {
            orw += dw[i];
        }
        if (dw == orw) {
            cout<<orw<<endl;
            cout<<0<<endl;
        }
        else if (trw==tw) {
            cout<<trw<<endl;
            cout<<tW_ptr<<endl;
        }
        else {
            dw = tw;
            checkPalindrome(ow, dw, tw, oW_ptr, tW_ptr+1);
        }
    }
}
int main() {
    string ow = "abcdedca";
    string tw = "";
    string dw = ow;
    checkPalindrome(ow, dw, tw, ow.length(), 1);
    return 0;
}*/
//Q)Write a program to merge 2 strings alternately using recursion;
/*#include <iostream>
#include <string>
using namespace std;
void merge_str(string str_1, string str_2, string merge, int i, int j) {
    if(merge.length() == str_1.length()+str_2.length()) {
        cout<<merge;
    }
    else if(i==str_1.length()) {
        merge += str_2[j];
        merge_str(str_1,str_2, merge, i, j+1);
    }
    else if(j==str_2.length()) {
        merge += str_1[i];
        merge_str(str_1,str_2, merge, i+1, j);
    }
    else {
        merge += str_1[i];
        merge += str_2[j];
        merge_str(str_1,str_2, merge, i+1, j+1);
    }
    return;
}
int main() { 
    string str_1 = "abfkskdj";
    string str_2 = "piour";
    string merge = "";
    merge_str(str_1,str_2,merge,0,0);
    return 0;
}*/
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
    //time_complexity = O(n^2);
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
}
*/
// Tower of Hanoi:
/*#include <iostream>
using namespace std;
long long int getResult(int n, int src, int destiny, int aux){
    if(n==0){
        return n;
    }int result = getResult(n-1,src,aux,destiny);
    cout<<"move disk "<<n<<" from rod "<<src<<" to rod "<<destiny<<endl;
    result += getResult(n-1,aux,destiny,src);
    return result+1;
}int main() {
    int src = 1;
    int destiny = 3;
    int aux = 2;
    int n;
    cin>>n;
    cout<<getResult(n,src,destiny,aux);
    return 0;
}*/

// Generating Parenthesis:
/*#include <iostream>
#include <vector>
using namespace std;
vector <string> ans;
int n;
void getResult(int i, int open, int close, string result){
    if(i==n*2){
        ans.push_back(result);
    }if(open<n){
        getResult(i+1,open+1,close,result+'(');
    }if(close<n and open>close){
        getResult(i+1,open,close+1,result+')');
    }return;
}int main(){
    cin>>n;
    getResult(0,0,0,"");
    for(auto str: ans){
        cout<<str<<endl;
    }
}*/










