 //get bit:
// #include <iostream>
// using namespace std;
// int getBit(int n, int i) {
//     return ((n & (1<<i))!=0);
// }
// int main() {
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     int i;
//     cout<<"enter i: ";
//     cin>>i;
//     cout<<getBit(n, i);
//     return0;
// }
//setBit
/*#include <iostream>
using namespace std;
int setBit(int n, int i) {
    return ((n | (1<<i)));
}
int main() {
    int n;
    cout<<"enter n: ";
    cin>>n;
    int i;
    cout<<"enter i: ";
    cin>>i;
    cout<<setBit(n, i);
    return 0;
}*/
// clearBit;
/*#include <iostream>
using namespace std;
int clearBit(int n, int i) {
    int m = (1<<i);
    return (n & (~m));
}
int main() {
    int n;
    cout<<"enter n: ";
    cin>>n;
    int i;
    cout<<"enter i: ";
    cin>>i;
    cout<<clearBit(n,i);
    return 0;
}*/
/*updateBit:
#include <iostream>
using namespace std;
int updateBit(int n, int i, int u) {
      int m = (n & (~(1<<i)));
      if(u==0) {
          return m;
      }
      else {
          return(m | (1<<i));
      }
}
int main() {
    int n;
    cout<<"enter n: ";
    cin>>n;
    cout<<"enter i: ";
    int i;
    cin>>i;
    cout<<"enter u: ";
    int u;
    cin>>u;
    cout<<updateBit(n, i, u);
    return 0;
}*/
/*#include <iostream>
using namespace std;
int getBit(int n, int i) {
    return ((n & (1<<i)) !=0);
}
int clearBit(int n, int i) {
    int m = ~(1<<i);
    return (n & m);
}
int main() {
    int n;
    cout<<"enter n: ";
    cin>>n;
    int num = n;
    int i = 0;
    int sum = 0;
    while(n!=0) {
        sum += getBit(n, i);
        n = clearBit(n, i);
        i += 1;
    }
    if(sum==1) {
        cout<<num<<" is a power of 2."<<endl;
    }
    else {
        cout<<num<<" is not a powr of 2."<<endl;
    }
    cout<<"number of ones in binary form of "<<num<<" : "<<sum<<endl;
    return 0;
}*/
// isPowerOf2_check:
/*#include <iostream>
using namespace std;
bool isPowerOf2(int n) {
    return n && (!(n&n-1));
}
int main() {
    int n;
    cout<<"enter n: ";
    cin>>n;
    cout<<isPowerOf2(n);
    return 0;
}*/
//findingNumberOfOnes in a given number:
/*#include <iostream>
using namespace std;
int findingNumberOfOnes(int n) {
int count = 0;
while(n!=0) {
    n = (n & n-1);
    count += 1;
}
return count;
}
int main() {
    int n;
    cout<<"enter n: ";
    cin>>n;
    cout<<findingNumberOfOnes(n);
    return 0;
}*/
/*#include <iostream>
using namespace std;
int getBit(int k, int j) {
    return ((k&(1<<j))!=0);
}
int clearBit(int k, int j) {
    int l = ~(1<<j);
    return  (k & l);
}
int main() {
    int n;
    cout<<"enter n: ";
    cin>>n;
    cout<<"enter array: ";
    char array[n];
    for(int i=0; i<n; i++) {
        char x;
        cin>>x;
        array[i] = x;
    }
    for(int i=0; i<((1<<n)); i++) {
        int k = i;
        cout<<"{ ";
        int j = 0;
        while(k!=0) {
            if(getBit(k,j)==1) {
                    cout<<array[j]<<" ";
            }
            k = clearBit(k, j);
            j += 1;
        }
        cout<<"}";
        cout<<endl;
    }
    return 0;
}
*/
//finding a unique number in a set of numbers;
/*#include <iostream>
using namespace std;
int findUniqueNumber(int array[], int n) {
    int xor_sum = 0;
    int i = 0;
    while(i<n) {
        xor_sum = xor_sum^array[i];
        i++;
    }
    return xor_sum;
}
int main() {
    int array[] = {1,2,1,2,3,4,5,4,5};
    int n = sizeof(array)/sizeof(array[0]);
    cout<<findUniqueNumber(array, n);
    return 0;
}*/
//finding a unique number in a set of numbers such every number is present twice except two numbers;
/*#include <iostream>
using namespace std;
int checkBit(int m, int n) {
    return((m & (1<<n))!=0);
}
void findingUniqueNumbers(int array[], int n) {
    int xor_sum = 0;
    for(int i=0; i<n; i++) {
        xor_sum = xor_sum ^ array[i];
    }
    int temp_xor_sum = xor_sum;
    int p = 0;
    while(checkBit(xor_sum,p)!=1) {
        p++;
    }
    int new_xor_sum = 0;
    for(int i=0; i<n; i++) {
        if(checkBit(array[i],p)==1) {
            new_xor_sum = new_xor_sum ^ array[i];
        }
    }
    cout<<new_xor_sum<<endl;
    cout<<(new_xor_sum^temp_xor_sum)<<endl;
}
int main() {
    int array[] = {1,2,1,2,8,4,5,4,5,10};
    int n = sizeof(array)/sizeof(array[0]);
    findingUniqueNumbers(array, n);
    return 0;
}
*/
// finding a unique number in a list such that every number if present for thrice except the one number.
/*#include <iostream>
#include <cmath>
using namespace std;
int findMax(int array[], int n) {
    int max = array[0];
    for(int i=1; i<n; i++) {
        if(max<array[i]) {
            max = array[i];
        }
    }
    return max;
}
int findMaxNumberOfbits(int max) {
    int count=0;
    while(max!=0) {
        max = (max>>1);
        count++;
    }
    return count;
}
int getBit(int number, int p) {
    return ((number&(1<<p))!=0);
}
int findingUniqueNumber(int array[], int n) {
    int max = findMax(array, n);
    int m = findMaxNumberOfbits(max);
    int bit_array[m];
    for(int i=0; i<m; i++) {
        bit_array[i] = 0;
        for(int j=0; j<n; j++) {
            if(getBit(array[j],i)) {
                bit_array[i] += 1;
            }
            bit_array[i] %= 3;
        }
    }
    int ans = 0;
    for(int i=0; i<m; i++) {
        ans += (pow(2,i) * bit_array[i]);
    }
    return ans;
}
int main() {
    int array[] = {1,3,2,3,4,2,1,1,3,2};
    int n = sizeof(array)/sizeof(array[0]);
    cout<<findingUniqueNumber(array, n);
    return 0;
}*/
// optimized code for printing primenumbers using sieve of erosthenes...!
/*#include <iostream>
using namespace std;
int countPrime(int n) {
    int prime_array[n];
    int count = 0;
    prime_array[0] = prime_array[1] = 0;
    for(int i=2; i<n; i++) {
        prime_array[i] = 1;
    }
    for(int i=0; i<n; i++) {
        if(prime_array[i]==1) {
            // cout<<i<<endl;
            count++;
            for(int j=i*2; j<n; j+=i) {
                prime_array[j] = 0;
            }
        }
    }
    return count;
}
int main() {
    int n;
    cout<<"enter n: ";
    cin>>n;
    cout<<countPrime(n);
    return 0;
    // time_complexity: O(n*nlog(n));
}*/
/*#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n1,n2;
    cout<<"n1: ";
    cin>>n1; 
    cout<<"n2: ";
    cin>>n2;
    if(n1>n2) {
        swap(n1,n2);
    }
    while(n2%n1!=0) {
        int temp = n2;
        n2 = n1;
        n1 = temp%n1;
    }
    cout<<"hcf: "<<n1;
    return 0;
}*/
/*#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n1,n2;
    cout<<"n1: ";
    cin>>n1; 
    cout<<"n2: ";
    cin>>n2;
    if(n1<n2) {
        swap(n1,n2);
    }
    while((n1-n2)!=0) {
        if(n1<n2) {
            swap(n1,n2);
        }
        n1 = n1-n2;
    }
    cout<<"hcf: "<<n1;
    return 0;
}
*/
// binary_search_practice;
/*#include <iostream>
using namespace std;
int checkMid(int array[], int mid_ele, int s, int n) {
    int st = 0;
    int i = 0;
    while(st<s) {
        int current_sum = 0;
        while(current_sum+array[i]<=mid_ele and i<n and st<s) {
            current_sum += array[i];
            i++;
        }
        st += 1;
    }
    if (st!=s) {
        return -1;
    }
    if (i-1!=n-1) {
        return 0;
    }
    return 1;
}
int main() {
    int array[] = {12,34,67,90};
    int n  = sizeof(array)/sizeof(array[0]);
    int low = array[0];
    int high = 0;
    for (int i=0; i<n; i++) {
        high += array[i];
    }
    int s = 2;
    int ans;
    while(low<=high) {
        int mid_ele = (low + high)/2;
        int r = checkMid(array,mid_ele,s,n);
        if (r==1) {
            ans = mid_ele;
            high = mid_ele - 1;
        }
        else if(r==-1) {
            high = mid_ele-1;
        }
        else if(r==0){
            low = mid_ele+1;
        }
    }
    cout<<ans;
    return 0;
    // time_complexity: O(nlog(sigma(ai));
}*/
// binary_search_pracice;
/*#include <iostream>
using namespace std;
int main() {
    int array[] = {1,2,4,8,9};
    int n = sizeof(array)/sizeof(array[0]);
    int low = array[0];
    int high = array[n-1];
    int s = 3;
    int ans = -1;
    while(low<=high) {
        int mid_ele = (high+low)/2;
        int m = 0;
        int l = 0;
        int r = 0;
        int count = 1;
        while(m<(n-1)) {
        int p =  array[m+1];
        int q = array[l];
        if(p-q>=mid_ele) {
            count ++;
            l = m+1;
            if(count==s) {
                r = 1;
                break;
            }     
        }
        m++;
        }
        if(r==1) {
          ans = mid_ele;
          low = mid_ele+1;
        }
        else {
          high = mid_ele-1;
        }
      }
      cout<<"ans: "<<ans;
      return 0;
    //   time_complexity: o(nlog(xn-x1));
}*/