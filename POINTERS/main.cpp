/*
storing the address of an object in a pointer:
address-of operator;
if  we want to access the address of a memory bucket then we can make use of address-of operator (&x, x-->identifier/variable_name);
like:
int x = 10;
cout<<&x;
//concept of storing addresses is nothing but the pointers;
--pointers are special type of variables to store addresses;
//declaration of pointers: 
data_type*pointers_name;
let's say int x = k; int y = l;
//the data_type of the pointer should match with the data_type of variable of which we want to store in it;
int*ptr_1 = &x;  is an eg using which we can store address of an integer type variable;
float*ptr_2  = &y; is an eg using which we can store address of a float type variable;
*/
/*#include <iostream>
using namespace std;
//program-1:
int main() {
    int x = 10;
    int y = 1.5;
    cout<<"address of x : "<<&x<<"\n";
    cout<<"address of y : "<<&y<<"\n";
    int *ptrint = &x;
    int *ptrfloat = &y;
    cout<<"ptrint : "<<ptrint<<"\n";
    cout<<"ptrfloat :"<<ptrfloat;
    return 0;
}*/
//program-2:
/*#include <iostream>
using namespace std;
int main() {
    int x = 10;
    cout<<x<<"\n";
    int *ptr;
    cout<<ptr<<"\n";
    ptr = &x;
    cout<<ptr<<"\n";
    return 0;
}*/
//Accessing data through a pointer;
//using dereference operator;
//we can use *ptr to actually access value stored on address pointed by the pointer;
/*#include <iostream>
using namespace std;
int main() {
    int x = 10;
    int *ptrint = &x;
    cout<<"x :"<<x<<"\n";
    cout<<"ptrint :"<<ptrint<<"\n";
    cout<<"value in ptrint :"<<*ptrint<<"\n";
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main() {
    int x = 10;
    int *ptrint = &x;
    cout<<"x : "<<x<<"\n";
    cout<<"ptrint: "<<ptrint<<"\n";
    cout<<"*ptrint: "<<*ptrint<<"\n";
    x = 15;
    cout<<"x : "<<x<<"\n";
    cout<<"ptrint: "<<ptrint<<"\n";
    cout<<"*ptrint: "<<*ptrint<<"\n";
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main() {
    int x = 10; 
    // int *ptr = &x;
    int *ptr;
    ptr = &x;
    cout<<ptr<<"\n";
    cout<<*ptr<<"\n";
    *ptr = 15;
    cout<<*ptr<<"\n";
    return 0;
}
*/ 
/*#include <iostream>
using namespace std;
int main() {
    int x,y;
    int result;
    cin>>x>>y;
    int *ptr_x = &x;
    int *ptr_y = &y;
    int *ptr_result;
    ptr_result = &result;
    *ptr_result = *ptr_x + *ptr_y;
    cout<<"result : "<<result<<"\n";
    cout<<"ptr_result : "<<*ptr_result<<"\n";
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main() {
    int x,y;
    int result;
    cin>>x>>y;
    int *ptr_x = &x;
    int *ptr_y = &y;
    int *ptr_result;
    *ptr_result = *ptr_x + *ptr_y;
    ptr_result = &result;
    cout<<"result : "<<result<<"\n";
    cout<<"ptr_result : "<<*ptr_result<<"\n";
    return 0; //throws false and undesired result;
}*/
//common errors:
/*#include <iostream>
using namespace std;
int main() {
    int x = 10;
    int *ptr;
    
    //ptr = 10 is an incorrect statement bcoz here ptr is an address storable variable, 
    //anything else other than a reference operation 
    //i.e address of operated can't be assigned to pointer...=> int *ptr = &x ==> ptr = &x;
  
    //ptr = &x is an incorrect statement bcoz here *ptr is a dereference operator 
    //which can only take here integer values (since we defined an int ptr and int x) but it can't take reference operator => *ptr = x; 
    //if there is asterisk(*)  in lhs of ptr then rhs should have data_type declared values only i.e; here interger values;
    
    //if there is ampersand(&) in rhs of ptr then lhs should only have ptr but not *ptr;
    //lhs lo star(*) vunte, rhs lo value vundaali;
    //rhs lo and(&) vunte, lhs lo only ptr name matrame vundaali;
   
   ptr = &x;
   cout<<"x: "<<x<<"\n";
   cout<<"&x: "<<&x<<"\n";
   cout<<"ptr: "<<ptr<<"\n";
   cout<<"*ptr: "<<*ptr<<"\n";
   cout<<"&ptr: "<<&ptr<<"\n";
   return 0;
    
}*/
//pass by reference using pointers;
/*#include <iostream>
using namespace std;
void swap(int *x, int *y) {
    int k = *x;
    *x = *y;
    *y = k;
return;
}
int main() {
    int x = 10;
    int y = 15;
    int *ptr_x = &x;
    int *ptr_y = &y;
    swap(ptr_x,ptr_y);
    cout<<"x: "<<x<<"\n"<<"y: "<<y<<"\n";
    return 0;
}
*/
/*#include <iostream>
using namespace std;
void findingFirstNLastOccurrence(string my_name, char to_find, int *ptr_F_t, int *ptr_L_t) {
    int i,j,k;
    for(i=0; i<my_name.size();i++) {
        if(to_find == my_name[i]) {
            *ptr_F_t = i;
            break;
        }
    }
    for(i=my_name.size()-1; i>=0; i--){
        if(to_find == my_name[i]) {
            *ptr_L_t = i;
            break;
        }
    }
    return;
}
int main() {
    string my_name = "saikiran";
    int first_time = -1;
    int last_time = -1;
    char to_find = 'a';
    int *ptr_F_t = &first_time;
    int *ptr_L_t = &last_time;
    findingFirstNLastOccurrence(my_name, to_find, ptr_F_t, ptr_L_t);
    cout<<"ptr_F_t: "<<*ptr_F_t<<"\n";
    cout<<"ptr_L_t: "<<*ptr_L_t<<"\n";
    cout<<"first_time: "<<first_time<<"\n";
    cout<<"second_time: "<<last_time<<"\n";
    return 0;
}*/
//pointer_arithmetic(powerful concept);
//--->increment;
//--->decrement;
//increment/decrement : here increment of a pointer value refers to shift in memory
//to that pointer i.e. pointing to;    and shift is dependent on size of data_type of variable;
/*#include <iostream>
using namespace std;
int main() {
    int x = 10;
    float y = 1.5;
    double z = 17.8;
    int *ptr_x = &x;
    float *ptr_y = &y;
    double *ptr_z = &z;
    cout<<"int_ptr_x: "<<ptr_x<<"\n";
    cout<<"int_ptr_x-1: "<<ptr_x - 1<<"\n";
    cout<<"int_ptr_x+1: "<<ptr_x + 1<<"\n";
    cout<<"float_ptr_y: "<<ptr_y<<"\n";
    cout<<"float_ptr_y-1: "<<ptr_y - 1<<"\n";
    cout<<"float_ptr_y+1: "<<ptr_y + 1<<"\n";
    cout<<"double_ptr_z: "<<ptr_z<<"\n";
    cout<<"double_z-1: "<<ptr_z - 1<<"\n";
    cout<<"double_z+1: "<<ptr_z + 1<<"\n";
    return 0;
}*/
/*#include <iostream> 
using namespace std;
int main() {
    int number;
    float decimal;
    double big_decimal;
    char letter;
    string name;
    cout<<"size of int number: "<<sizeof(number)<<"\n";
    cout<<"size of float decimal: "<<sizeof(decimal)<<"\n";
    cout<<"size of double big_decimal: "<<sizeof(big_decimal)<<"\n";
    cout<<"size of char letter: "<<sizeof(letter)<<"\n";
    cout<<"size of string name: "<<sizeof(name)<<"\n";
    return 0;
}
*/
/*#include <iostream>
using namespace std;
int main() {
    int array[] = {1,2,3};
    int *ptr_1 = &array[0];
    int *ptr_2 = &array[1];
  //  cout<<*ptr_1<<" "<<*ptr_2;
   // cout<<*(ptr_1+1)<<"\n";
//   cout<<*ptr_1<<"\n";
//   cout<<*(++ptr_1)<<"\n";
//   cout<<*(ptr_1++)<<"\n";
//   cout<<*ptr_1<<"\n";
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main() {
    int array[] = {1,2,3};
    int *ptr = &array[0];
    //working with prefix case:
    cout<<*ptr++;
    cout<<*ptr
    //working with postfix case:
    cout<<*++ptr;
    cout<<*(++ptr);
    cout<<++(*ptr);
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main() {
    int array[] = {1,2,3,4};
    int *ptr = &array[0];
    cout<<array<<endl;
    return 0;
}*/
/*#include <iostream>
using namespace std;
void process(int *array, int k) {
    for(int i=0; i<k; i++) {
        cout<<*array++<<" ";
    }
   
   return ;
}
int main() {
    int array[] = {1,2,3,4,5};
    int n = sizeof(array)/sizeof(array[0]);
    process(array, n);
    cout<<endl;
    for(int i = 0; i<n; i++) {
        cout<<array[i]<<" ";
    }
    
    return 0;
}
    */
//printing array(it is equivalent to ptr of zeroth indexed element) returns the address of zeroth indexed element in that array;
/*#include <iostream>
using namespace std;
int main() {
    int array[] = {1,2,3,4};
    int (*ptr)[3] = &array;
    cout<<ptr<<" "<<array<<" "<<*ptr<<" "<<*array;
    return 0;
}*/
//types of pointers:
//1)null pointer --> stores zero as it's address;
//2)wild pointer --> stores any garbage value;
//3)dangling pointer;
//4)void pointer;
//wild pointer:
// A wild pointer is a type of the pointer where user declares the pointer but will not define(initialise) it;
//Due to this it ends up pointing a some random memory location;
//Due to this we might get some undefined bahaviour and crashes;
//In some cases we might get segmentation fault;
//a wild pointer will be having some random garbage address in it and also pointing to some random garbage value stored in it;

//eg:
  /*#include <iostream>
  using namespace std;
  int main() {
      int *ptr;
      cout<<ptr<<" "<<*ptr;
      return 0;
  }*/
//null pointer: 
//if we want to have a pointer variable, which is just declared  but will get address later to store then we make use of null pointer;
//null pointer syntax:  int *ptr = NULL; 
//eg:
/*#include <iostream>
using namespace std;
int main() {
    int *ptr_1 = NULL;
    int *ptr_2 = 0; //zero is mostly special reserved memory address in many of the os's;
    // int *ptr_3 = '\0';
    cout<<ptr_1<<" "<<ptr_2;
    // cout<<*ptr_1<<endl; //actually returns segmentation fault;
    //runtime might occur while dereferencing null pointe;
    return 0;
}*/
//if I want to get my pointer stored with any random value without initialising it then 
//I will make use of wild pointer and if I do not want my pointer to be stored with any 
// random address and pointing to a random value then I will assign my pointer with the NULL as it's value;
//dangling pointer:
//It's a type of pointer that points to a memory loacation that is not valid; 
//eg:
/*#include <iostream>
using namespace std;
int main() {
    int *ptr = NULL;
    {
        int x = 10;
        ptr = &x;
        cout<<ptr;
        cout<<endl;
    }
    cout<<ptr; //returns some random address of the variable i.e is not actually existing;
    return 0;
}
*/
//void pointer(generic pointer):
//These are special pointers than any point to any data_type value;
//void pointers cannot be dereferenced;
//eg:
 /*#include <iostream>
 using namespace std;
 int main() {
     int x = 10;
     float f = 3.14;
     void *ptr = &x;
     ptr = &f;
     int *int_ptr = (int*) ptr;
     float *float_ptr = (float*) ptr;
     cout<<*int_ptr<<"\n";
     cout<<*float_ptr<<"\n";
    //values stored in the address stored in the void pointers can be accessed using typecasting 
    //by declaring another new pointer variable of the required data_type and assigning that 
    //with type of the value we want to access that has already been strord in the pointer;
     return 0;
 }*/
  /*#include <iostream>
  using namespace std;
  int main() {
      int i = 9;
      float f = 2.23;
      void *ptr = &i;
      ptr = &f;
      int *i_ptr = (int *)ptr;
      float *f_ptr = (float *)ptr;
      cout<<i_ptr<<"\n";
      cout<<&i<<"\n";
      cout<<&f<<"\n";
      cout<<*i_ptr<<"\n";
      cout<<*f_ptr<<"\n";
      return 0;
  }*/
 //recursions: 
 
 /*a little child could't sleep, so her mother told her a story of a little frog;
 who couldn'y sleep, so the little frogs mother told a story of a little bear who couldn't sleep; 
 so the little bear's mother told her a story of a little weasel- who fell asleep 
 and the little fell asleep and the little frog fell asleep and finally the child fell asleep;*/
 //In recursions we try to find the solution of a large probmlem by trying to solve solve the small sub problem; 
 //We represent these problems in the form of function and this function calls itself to solve the smaller sub problem;  
 //PMI(principle of mathematical induction): 
 //1)base case --> take n = 1;
 //2)assumptional case --> take n = k;
 //3)self work (lastcase) --> take n = k+1;
 //factorial program:
 //here;
 // base case is k==1, f(k) = 1;
 //assumptional case is f(k-1);
 //self work is k==n; f(k) = k*f(k-1);
 //stack call and stack frames are creating while recursive function is running;
 /*#include <iostream>
 using namespace std; 
 int factorial(int k) {
     if(k<=1) {
         return 1;
     }
     else{
     return k*factorial(k-1); 
 }
 }
 int main() {
     int i,j,k,l;
     cout<<"enter k: ";
     cin>>k;
     cout<<factorial(k);
     return 0;
     //space_complexity: o(n);
     //space gets introduced due to call stack;
     //space_complexity of iteration is better than that of recursion;
     //time_complexity: o(n);
     //time_complexity = no. of times a function is called / time taken for one single function call;
     //number of funtiion calls in / no. of instructions that are processed in single funtiion call; 
 }*/
 /*#include <iostream>
 using namespace std;
 int factorial(int k) {
     int ans = 1; 
     for(int i=1; i<=k; i++) {
         ans *= i;
     }
     return ans;
 }
 int main() {
     int k; 
     cin>>k;
     int result = factorial(k);
     cout<<result;
     return 0;
 }*/
/*#include <iostream>
using namespace std;
int fibonacci(int k) {
    int a,b,c;
    a = 0;
    b = 1;
    for(int i=2; i<k; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}
int main() {
    int k;
    cin>>k;
    int result = fibonacci(k);
    cout<<result;
    return 0;
}*/
//printing kth fibonacci sequency term;
/*//base case:
fib(0) = 0;
fib(1) = 1;
 //assumptional case:
 finding fin(k-1) and fib(k-2); 
 //self work:
 fib(k) = fib(k-1) + fib(k-2);
*/

/*#include <iostream>
using namespace std;
int fibonacci(int k) {
    if(k==1) {
        return 0;
    }
    else if(k==2) {
        return 1;
    }
    else{
        return fibonacci(k-1)+fibonacci(k-2);
    }
}
int main() {
    int k 
    cin>>k;
    int result = fibonacci(k);
    cout<<result;
    return 0;
}*/
//fibonacci using recursion starting with zero index;
/*#include<iostream>
using namespace std;
int fibonacci(int k) {
    if(k==0 || k==1) {
        return k;
    }
    return fibonacci(k-1)+fibonacci(k-2);
}
int main() {
    int k;
    cin>>k;
    int result = fibonacci(k);
    cout<<result;
    return 0;
    //space_complexity: O(n);
    //time_complexity: O(2^n);
}*/
/*#include <iostream>
using namespace std;
int main() {
    int k;
    int ans = 0;
    cin>>k;
    while(k!=0) {
        ans += k%10;
        k /= 10;
    }
    cout<<ans;
    return 0;
}*/
//program incomplete;
// #include <iostream>
// #include <string>
// using namespace std;
// int main() {
//     int k;
//     // cin>>k;
//     int ans= 0;
    // string int_str = to_string(k);
    // cout<<int_str<<"\n";
    // cout<<sizeof(int_str)<<"\n";
    // cout<<sizeof(k);
    // string my_name = "saikiran";
    // cout<<sizeof(my_name);
    // cout<<my_name[0];
    // cout<<my_name.length();
    // string num_str = to_string(k);
    // for(int i=0; i<num_str.length(); i++) {
    //     ans += stoi(num_str[i]);
    // }
    // cout<<ans;
//     string num = "2023";
//     int str_num = stoi(num[0]);
//     cout<<str_num;
//     return 0;
// }
//program to find sumOfDigits of a given number: 
// base_case = if (k belogns to [0,9]) ==> return k;
//assumptional_case = it is assumed to be true for f(k/10);
//self_work = sumOfDigits(k/10) + k%10;
/*#include <iostream>
using namespace std;
int sumOfDigits(int k) {
    if (k>=0 && k<=9) {
        return k;
    }
    else{
    return sumOfDigits(k/10) +  k%10;
}
}
int main() {
    int k;
    cin>>k;
     int count = 0;
    //while(k!=0){
    //    count++; //cout: no. of digits in the given number;
     //   k /= 10;
    //} //time_complexity: O(count); //space_complexity: O(count);
    cout<<sumOfDigits(k);
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main() { 
    int k;
    cin>>k;
    int count = 0;
    while(k!=0){
        count++;
        k /= 10;
    }
    cout<<count;
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main() {
int m,n;
int k = m;
int ans = 1;
cin>>m>>n;
for(int i=0; i<n; i++) {
    ans *= m;
}
cout<<ans;
return 0;
}*/
//recusive program to print p^q:
//base case: if (q==0) ==> p^q = 1; ==>(p,0) = 1;
//assumptional_case:  for p,q-1; f(p, q-1) exist;
//self_work: f(p,q) = p*f(p,q-1);
/*#include <iostream>
using namespace std;
int power(int m, int n) {
    if(n==0) {
        return 1;
    }
    else{
        return m*power(m, n-1);
    }
}
int main() {
    int m,n;
    cin>>m>>n;
    int result = power(m,n);
    cout<<result;
    return 0;
    //space_complexity: O(q); (no. of functional calls);
    //time_complexity:  q*constant ==> O(q); (no. of instructions passed in each funtionnal call);
}*/
//factorial
//fibonacci
//power
//sum of digits in a number
// #include <iostream>
// using namespace std;
// int factorial(int k) {
//     if (k==1) {
//         return 1;
//     }
//     else{
//         return k*factorial(k-1);
//     }
// }
// int main() {
//     int i,j,k;
//     cin>>k;
//     cout<<factorial(k);
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int fibonacci(int k) {
//     if (k==1) {
//         return 0;
//     }
//     else if(k==2){
//         return 1;
//     }
//     else {
//         return fibonacci(k-1) + fibonacci(k-2);
//     }
// }
// int main() {
//     int i,j,k;
//     cin>>k;
//     cout<<fibonacci(k);
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int sumOfDigits(int k) {
//     if (k==0) {
//         return 0;
//     }
//     else{
//         return sumOfDigits(k/10) + k%10;
//     }
    
// }
// int main() {
//     int i,j,k;
//     cin>>k;
//     cout<<sumOfDigits(k);
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int power(int k, int n) {
//     if (n==0) {
//         return 1;
//     }
//     else{
//         return k * power(k, n-1);
//     }
    
// }
// int main() {
//     int i,j,k,n;
//     cin>>k>>n;
//     cout<<power(k, n);
//     return 0;
// }
/*#include <iostream>
using namespace std;
int power(int k, int n) {
    int result;
    if(n==0) {
        return 1;
    }
    else if(n%2==0){
        result = power(k,n/2);
        return result * result;
    }
    else {
        result = power(k,((n-1)/2));
        return k * result * result;
    }
}
int main() {
    int k,n;
    cin>>k>>n; 
    cout<<power(k,n);
    return 0;
    //space_complexity: O(logq);
}*/
// #include <iostream>
// using namespace std;
// int printing_array(int array[5], int i) {
//     return array[i];
// }
// int main() {
//     int array[5] = {1,2,3,4,5}; 
//     for(int i=0; i<5; i++) {
//          cout<<printing_array(array,i)<<endl;
//     }
//   return 0;
// }

//recursions in case of strings and arrays;
//printing elements of an array using recursive method;
/*#include <iostream>
using namespace std;
void printing_array(int array[5], int i, int n) {
    if(i == n) {
        return; //base case;
    }
    else {
        cout<<array[i]<<"\n"; //self_work
        return printing_array(array, ++i, n); //assumptional_case 
    }
}
int main() {
    int array[5] = {1,2,3,4,5};
    printing_array(array, 0, 5);
    return 0;
    //time_complexity: O(n);
    //space_complexity: O(n); //where n is size of array;
}*/
/*#include <iostream>
using namespace std;
int main() {
    int i,j,k;
    int max = 0;
    int array[5] = {1,2,10,4,5};
    for(i=0; i<5; i++) {
        if (max<array[i]) {
            max = array[i];
        }
    }
    cout<<max;
    return 0;
}*/
//program to print highest value of an array using recursion;
/*#include<iostream>
using namespace std;
int finding_max(int array[5], int i, int n, int max) {
    if (i==n) {
        return max; //base case;
    }
    else{
        if(max<=array[i]) {
            max = array[i]; //self_work;
        }
        return finding_max(array, ++i, 5, max); //assumptional_case
    }
}
int main() {
    int i,j,k;
    int max = 0;
    int array[5] = {3,10,3,2,5};
    cout<<finding_max(array, 0, 5, max);
    return 0;
    //time_complexity: O(n); 
    //space_complexity: O(n); //where is size of declared array;
}*/
//max ans min predefined functions in c++;
/*#include <iostream>
using namespace std;
int main() {
    cout<<max(2,4)<<"\n";
    cout<<min(2,4);
    //max and min predefined functions are there in c++;
    return 0;
}*/
/*#include <iostream>
using namespace std;
int finding_max(int array[5], int i, int n) {
    if(i==n-1) {
        return array[i];
    }
    else{
        return max(array[i], finding_max(array, ++i, n));
    }
}
int main() {
    int i,j,k;
    int array[5] = {1,2,10,4,5};
    cout<<finding_max(array, 0, 5);
    return 0;
    //space_complexity: O(n);
    //time_complexity: O(n);
}*/
/*#include <iostream>
using namespace std;
int sumOfElements(int array[5], int i, int n, int sum) {
    if(i==n) {
        return sum;
    }
    else{
        sum += array[i];
        return sumOfElements(array,i+1,5,sum);
    }
}
int main() {
    int i,j,k;
    int sum = 0;
    int array[5] = {2,3,5,20,1};
    cout<<sumOfElements(array, 0, 5, sum);
    return 0;
}*/
/*#include <iostream>
using namespace std;
int sumOfElements(int array[5], int i, int n) {
    if(i==n-1){
        return array[i]; //base_case;
    }
    else {
       //self_work;
       return array[i] + sumOfElements(array, i+1, n); //assumptional_case;
    }
}
int main() {
    int i,j,k;
    int array[5] = {2,3,5,20,1};
    cout<<sumOfElements(array, 0, 5);
    return 0;
}*/
//program to reverse a number using recursion;
/*#include <iostream>
using namespace std;
int reverse(int k) {
    int reverse_number = 0;
    while(k!=0) {
    reverse_number = reverse_number*10 + k%10;
    k /= 10;
    }
    return reverse_number;
}
int main() {
    int i,j,k;
    cin>>k;
    cout<<reverse(k);
    return 0;
}*/
/*#include <iostream>
#include <math.h>
using namespace std;
int reverseNumber(int k, int n) {
    if(k==0) {
        return 0;
    }
    else{
    return (((k%10)*(pow(10,n-1))) + (reverseNumber(k/10, n-1)));
    }
}
int main() {
    int k,num;
    int n = 0;
    cin>>k;
    num = k;
    while(num!=0) {
        num /= 10;
        n++;
    }
    cout<<reverseNumber(k,n);
    return 0;
}
*/
//program to check a number is prime or not;
/*#include <iostream>
using namespace std;
int main() {
    int k;
    bool ans = true;
    cin>>k;
    if(k==1 || k==0) {
        ans = false;
        
    }
    if(k>1) {
    for(int i=2; i<k/2; i++) {
        if(k%i==0) {
           ans = false;
           break;
        }
    }
    }
    if(ans==true) {
        cout<<k<<" is a prime number.";
    }
    else{
        cout<<k<<" is not a prime number.";
    }
    return 0;
}
*/
//above program using recursion;
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
}*/
// recursion in strings;
//remove all occurrences of 'a' from string s = "abcax";
//using iteration:
/*#include <iostream>
using namespace std;
int main() {
string s = "abcax";
string ans = "";
for(int i=0; i<s.length(); i++) {
    if(s[i] != 'a') {
        ans += s[i];
    }
}
cout<<ans;
    return 0;
}*/
//using recursion;
/*#include <iostream>
using namespace std;
string req_string(string &s, int i, int n){
    string ans = "";
    if (i == n) {
        //base_case;
        ans += "";
        return ans;
    }
    else if (s[i]=='a') {
        ans += "";
        //self_work;
        return ans + (req_string(s,++i,n)); //assumptional_case;
    }
    else {
        ans += s[i];
        //self_work;
        return ans + (req_string(s,++i,n)); //assumptional_case; 
    }
}
int main() {
    string s = "jhsdaajhaskjasa";
    int n = s.length();
    cout<<req_string(s,0,n);
    return 0;
    //time_complexity: O(n);
    //space_complexity: O(n);
}*/
/*#include <iostream>
using namespace std;
int main() {
    int k;
    cin>>k;
    int num = k;
    int reverse = 0;
    int rem;
    while(num!=0) {
        rem = num%10;
        reverse = reverse*10 + rem;
        num /= 10;
    }
    if(reverse == k) {
        cout<<k<<" is a palindrome.";
    }
    else{
        cout<<k<<" is not a palindrome.";
    }
    return 0;
}*/
/*#include <iostream>
#include <math.h>
using namespace std;
int reverse_number(int k, int n) {
    if (k==0) {
        return 0;
    }
    else{
        return ((k%10) * pow(10, n-1)) + reverse_number(k/10, n-1);
    }    
}
int main() {
  int i,j,k;
  cin>>k;
  int num_1 = k;
  int num_2 = k;
  int n = 0;
  while(num_1!=0) {
      num_1 /= 10;
      n++;
  }
  int result = reverse_number(k, n);
  if (result == num_2) {
        cout<<num_2<<" is a palindrome.";
  }
  else{
        cout<<num_2<<" is not a palindrome.";
  }
  return 0;
}
*/
//program to remove  characters from a string;
//eg: a and i from saikiran;
/*#include <iostream>
using namespace std;
string remove_char(string &s, int i, int n) {
    //base_case;
    string req = "";
    if(i==n) {
        req = "";
        return req;
    }
    //self_work;
    else if(s[i] == 'a' || s[i] == 'i') {
        req = "";
        return req + remove_char(s, ++i, n); //assumptional_case;
    }
    //self_work;
    else {
        req = s[i];
        return req + remove_char(s, ++i, n); //assumptional_case;
    }
}
int main() {
    int i,j,k;
    string s;
    cin>>s;
    int n = s.length();
    string ans = remove_char(s, 0, n);
    cout<<ans;
    return 0;
}*/
//practicing reversing a number using recursion;
/*#include <iostream>
using namespace std;
int power(int k, int n) {
    if (n==0) {
        return 1;
    }
    else if(n%2==1) {
        int ans = power(k,(n-1)/2);
        return ans*ans*k;
    }
    else {
         int ans = power(k,n/2);
         return ans*ans;
    }
}
int reverse_number(int k, int n) {
    if(k==0) {
        return k;
    }
    else {
        return (k%10 * power(10,n-1)) + reverse_number(k/10, n-1);
    }
}
int main() {
    int k;
    cin>>k;
    int n = 0;
    int num = k;
    while(num!=0) {
        num/=10;
        n++;
    }
    cout<<reverse_number(k,n);
    return 0;
}*/
    







