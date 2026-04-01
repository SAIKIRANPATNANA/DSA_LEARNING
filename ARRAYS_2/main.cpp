#include <iostream>
#include <vector>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
/*void sortMyVector(vector <int> &us) {
    int j,k; 
    j = 0;
    k = us.size()-1;
    while (j<k) {
        if(us[j] == 1 && us[k] == 0) {
            us[j] = 0;
            us[k] = 1;
            j++;
            k--;
        }
        if(us[j] == 0) {
            j++;
        }
        if(us[k] == 1) {
            k--;
        }
        
    }
}
int main() {
    int i;
    int n;
    cout<<"enter n: ";
    cin>>n;
    vector <int> us;
    cout<<"enter the series: "<<endl;
    for (i=0;i<n;i++) {
        int l;
        cin>>l;
        us.push_back(l);
    }
    sortMyVector(us);
    cout<<"sorted series: ";
    for (i=0;i<n;i++) {
        cout<<us[i]<<" ";
    }
    return 0;
}*/
/*void sortMyVector(vector <int> &us) {
    int j,k,t; 
    j = 0;
    k = us.size()-1;
    while (j<k) {
        if(us[j]%2 == 1 && us[k]%2 == 0) {
            t = us[j];
            us[j] = us[k];
            us[k] = t;
            j++;
            k--;
        }
        if(us[j]%2  == 0) {
            j++;
        }
        if(us[k]%2  == 1) {
            k--;
        }
        
    }
}
int main() {
    int i;
    cout<<"enter n: ";
    int n;
    cin>>n;
    vector <int> us;
    cout<<"enter the series: "<<endl;
    for (i=0;i<n;i++) {
        int l;
        cin>>l;
        us.push_back(l);
    }
    cout<<"sorted series: ";
    sortMyVector(us);
    for (i=0;i<n;i++) {
        cout<<us[i]<<" ";
    }
    return 0;
}*/
/*void modula_operation(vector <int> &number) {
    int i;
    int n = number.size();
    for(i=0; i<n; i++) {
        if (number[i]<0) {
            int k = -(number[i]);
            number[i] = k;
        }
    }
}*/

//void arrange_in_ao() {
  //  if (int num)
//}
// void square_number(vector <int> &number ) {
//     int i;
//     int n = number.size();
//     for(i=0; i<n; i++) {
//         int k = number[i];
//         int result = k*k;
//         number[i] = (result);
//     }
// }
// void ao(vector <int> &number) {
//     int i = 0;
//     int j = number.size()-1;
//     while(i<j) {
//         if(number[i]>number[j]) {
//             int t = number[i];
//             number[i] = number[j];
//             number[j] = t;
//             i++;
//             j--;
//         }
//         else{
            
//         }
//     }
// }
/*int main() {
    vector <int> number;
    int i,j,k,n;
    cout<<"enter n: ";
    cin>>n; 
    cout<<"enter series: "<<endl;
    for(i=0; i<n; i++) {
        cin>>k;
        number.push_back(k);
    }
    square_number(number);
    ao(number);
    // reverse(number.begin(), number.end());
    cout<<"squared non-decreasing series:"<<endl;
    for(i=0;i<n;i++) {
        cout<<number[i]<<" ";
    }
return 0;
}*/
/*void prefix_sum(vector <int> &number) {
    int i,j,m;
    // m = sizeof(number)/sizeof(number[1]);
    m = number.size();
    for(i=0;i<m;i++) {
            number[i] += number[i-1];
    }
    
}
int main() {
    vector <int> number;
    int i,j,k,m;
    cout<<"enter m: ";
    cin>>m;
    cout<<"enter numbers: "<<endl;
    for(i=0;i<m;i++) {
        cin>>k;
        number.push_back(k);
    }
    prefix_sum(number);
    cout<<"prefix-sum series: "<<endl;
    for(i=0;i<m;i++) {
        cout<<number[i]<<" ";
    }
    return 0;
}
*/
//incomplete project; 
/*bool prefixSuffixSumSheck(vector <int> number) {
    int i,j,k,m;
    bool result;
    int prefix_sum;
    int suffix_sum;
    m = number.size();
    suffix_sum = 0;
    for(i=0; i<m; i++) {
        number[i] += number[i-1]; 
          prefix_sum = number[i];
            for(j=i+1; j<m; j++) {
                 suffix_sum += number[j];
            }
            
            if (suffix_sum == prefix_sum) {
        result = true;
        break;
        }
        else{
        result = false;
        }
    }
        
        return result;
    }
int main() {
    vector <int> number;
    int i,m,k;
    cout<<"enter m: ";
    cin>>m;
    cout<<"enter numbers: "<<endl;
    for(i=0; i<m; i++) {
        cin>>k;
        number.push_back(k);
    }
    bool output = prefixSuffixSumSheck(number);
    if (output == true) {
        cout<<"yes, it's possible";
    }
    else {
        cout<<"no, it's not possible";
    }
    return 0;
}*/

/*bool prefixSuffixSumSheck(vector <int> number) {
    int i,j,k,m;
    bool result;
    int prefix_sum;
    int suffix_sum;
    int total_sum = 0;
    m = number.size();
    for(i=0; i<m; i++) {
        total_sum += number[i];
    }
    for(i=0; i<m; i++) {
        number[i] += number[i-1];
        prefix_sum = number[i];
        suffix_sum = total_sum - prefix_sum;
        if(prefix_sum == suffix_sum) {
            result = true;
            break;
        }
        else {
            result = false;
        }
    }
        
        return result;
    }
int main() {
    vector <int> number;
    int i,m,k;
    cout<<"enter m: ";
    cin>>m;
    cout<<"enter numbers: "<<endl;
    for(i=0; i<m; i++) {
        cin>>k;
        number.push_back(k);
    }
    bool output = prefixSuffixSumSheck(number);
    if (output == true) {
        cout<<"yes, it's possible";
    }
    else {
        cout<<"no, it's not possible";
    }
    return 0;
}
*/
// int sum(vector <int> &numbers) {
//     int r;
//     cout<<"enter l: "<<endl;
//     int l;
//     cin>>l;
//     cout<<"enter r: "<<endl;
//     cin>>r;
//     int result = 0;
//     for(int j=l-1;j<=r-1;j++) {
//          result += numbers[j];
//     }
//     return result;
// }
// int main() {
//   vector <int> numbers;
//     int i,m,k;
//     cout<<"enter m: ";
//     cin>>m;
//     cout<<"enter numbers: "<<endl;
//     for(i=0; i<m; i++) {
//         cin>>k;
//         numbers.push_back(k);
//     }
//     int outcome = sum(numbers);
//     cout<<"sum: "<<outcome<<endl;
//     return 0;
// }
/*int main() {
  int  number[] = {1,3,4,2,6,7,5,0,10,11,8,9};
  int i,j,high;
  int high_but_1 = 0; 
  int high_but_2 = 0;
  
  int  m = sizeof(number)/sizeof(number[1]);
  high = 0;
      for (j=0; j<m; j++) {
          if (high < number[j]) {
          high_but_2 = high_but_1;
          high_but_1 = high;
          high = number[j];
          }
          else if(high_but_1<number[j]){
             high_but_2 = high_but_1;
             high_but_1 = number[j];
          }
          else if(high_but_2<number[j]){
             high_but_2 = number[j];
          }
}
  cout<<"high: "<< high<<endl;
  cout<<"high_but_1: "<< high_but_1<<endl;
  cout<<"high_but_2: "<< high_but_2<<endl;
}*/
// int main() {
//     int i,j,k;
//     int high = 0; int high_but_1 =0;
//     int num[] = {7, 12, 9, 15, 19, 32, 56, 70};
//     int m = sizeof(num)/sizeof(num[1]);
//     for (i=0;i<m;i++ ) {
//         if(high<num[i]) {
//             high_but_1 = high;
//             high = num[i];
            
//         }
    
//     }
//     cout<<high_but_1;   
//     return 0;
//     }
// int main() {
//   int  number[] = {1,3,4,2,6,7,5,0,10,11,8,9};
//   int i,j,high;
//   int high_but_1 = 0; 
//   int high_but_2 = 0;
  
//   int  m = sizeof(number)/sizeof(number[1]);
//   high = 0;
//       for (j=0; j<m; j++) {
//           if (high < number[j]) {
//           high_but_2 = high_but_1;
//           high_but_1 = high;
//           high = number[j];
//           }
//           else if(high_but_1<number[j]){
//              high_but_2 = high_but_1;
//              high_but_1 = number[j];
//           }
//           else if(high_but_2<number[j]){
//              high_but_2 = number[j];
//           }
// }
//   cout<<"high: "<< high<<endl;
//   cout<<"high_but_1: "<< high_but_1<<endl;
//   cout<<"high_but_2: "<< high_but_2<<endl;
// }
// int main() {
//     int i,j,k;
//     // cout<<"enter k: ";
//     // cin>>k;
//     int number[] = {29,5580,92,805,211,512};
//     int m = sizeof(number)/sizeof(number[i]);
//     sort(number,number+m);
//     for(i=0; i<m; i++) {
//         cout<<number[i]<<" ";
//     }
//     /*sort(number,number+m,greater<int>());
//     for(i=0; i<m; i++) {
//         cout<<number[i]<<" ";
//     }
//     reverse(begin(number),end(number));
//     for(i=0; i<m; i++) {
//         cout<<number[i]<<" ";
//     }*/
//     // for(i=0; i<k; i++) {
//     //     cout<<"high_but_"<<i<<":"<<number[i]<<endl;
//     // }
//     return 0;
    
// }
/*int main() {
    int i,k,j;
    bool ans;
    ans = true;
    cout<<"enter K: ";
    cin>>k;
    if (k==1 || k==0) {
        ans = false;
    }
    for(i=2; i<k/2; i++)  {
        if (k%i==0) {
           ans = false;
           break;
        }
    }
if(ans==true) {
    cout<<k<<" is a prime number.";
}
else{
    cout<<k<<" is not a prime number.";
}
}*/
/*int main() {
    int i,j,k;
    int array[] = {29,5580,92,805,211,512};
    int m = sizeof(array)/sizeof(array[1]);
    int low = 10000000;
    int low_but_one = 10000000;
    for(i=0; i<m; i++) {
        if(low > array[i]) {
            low_but_one = low;
            low = array[i];
        }
        else if(low_but_one>array[i]) {
            low_but_one = array[i];
        }
        
    }
    // cout<<"low: "<<low<<endl;
    cout<<"low_but_one: "<<low_but_one<<endl;
}
*/
// int main()  {
//     int i,j,k;
//     j = -1;
//     k = -1;
//     int high = 0;
//     int high_but_one = 0;
//     int numbers[] = {1,3,4,2,6,7,5,0,10,11,8,9};
//     int m = sizeof(numbers)/sizeof(numbers[1]);
//     for(i=0; i<m; i++) {
//         if (high<numbers[i]) {
//             k = j;
//             j = i;
//             high_but_one = high;
//             high = numbers[i];
            
//         }
//     }
//     for(i=0;i<m;i++) {
//         // if(numbers[i] != numbers[j] && numbers[i]!= numbers[k]) {
//         if (i!=j && i!=k) {
//             cout<<numbers[i]<<" ";
//         }
//     }
//     return 0;
    
// }
/*int main() {
    int i,j,k,r;
    int count = 0;
    int occur;
    // int array[] = {2,3,7,2,8,6,2,8,3,2,5,4,2,7,6,2,8,7,2,9,8,7,2,9,5,2,6,2,5,2};
    int array[] = {4, 5, 9, 12, 9, 22, 45, 7};
    int m = sizeof(array) / sizeof(array[1]);
    for(i=0;i<m;i++) {
        occur = 0;
        for(j=0;j<m;j++) {
            if(array[i] == array[j]) {
            occur ++;
        }
        if(count<occur) {
            count = occur;
            r = i;
        }
    }
}
cout<<array[r]<<endl;
// cout<<m<<endl
// cout<<count;
    return 0;
}*/

/*int main() {
    int i,j,k;
    int array[] = {4, 1, 5, 9, 12, 9, 22, 45, 7};
    int m = sizeof(array) / sizeof(array[1]);
    int numbers[m];
    for(i=0;i<m;i++) {
        numbers[i] = array[i];
    }
    sort(array,array+m);
    for(i=0; i<m; i++) {
        for(j=0;j<m;j++) {
            if(numbers[i]<array[j]) {
                numbers[i] = array[j];
                break;
            }
        }
    }
    for(i=0;i<m;i++) {
    cout<<numbers[i]<<" ";
}
return 0;
}
*/
/*int main() {
    int i,j,k;
    bool flag;
    int array[] = {4, 1, 5, 9, 12, 9, 22, 45, 7};
    int m = sizeof(array) / sizeof(array[1]);
    int numbers[m];
    for(i=0;i<m;i++) {
        numbers[i] = array[i];
    }
    cout<<"modified series: "<<endl;
    for(i=0;i<m;i++) {
        for(j=i+1;j<m;j++) {
            if(array[i]<array[j]) {
                array[i] = array[j];
                flag = true;
                cout<<numbers[i]<<":"<<array[i]<<endl;
                break;
            }
            else if(array[i]>=array[j]) {
                flag = false;
            }
        }
    }
     for(i=0;i<m;i++) {
    cout<<array[i]<<" ";
    }
    return 0;
    
}*/
/*int main() {
    int i,j,k;
    int t;
    int array[] =  {4, 1, 5, 9, 12, 9, 22, 45, 7};
    int m = sizeof(array) / sizeof(array[1]);
    for(i=0; i<m; i++) {
        if (i%2 == 0) {
            if(array[i]<array[i+1]) {
               t = array[i];
                array[i] = array[i+1];
                array[i+1] = t;
            }
    else {
        if (i%2 != 0) {
            if(array[i]>array[i+1]) {
                t = array[i];
                array[i] = array[i+1];
                array[i+1] = t;
            }
       }
    }
}
}
for(i=0;i<m;i++) {
    cout<<array[i]<<" ";
}
return 0;
}*/
/*int main() {
    int array[] =  {4, 0, 5, 9, 12, -20, 22, 45, 7};
    int i,j,k;
    int small = 10000000;
    int m = sizeof(array) / sizeof(array[1]);
    for(i=0; i<m; i++) {
        if(small>array[i]) {
            small = array[i];
        }
    }
    cout<<small;
        return 0;
        
    }*/
/*int main() {
    int i,j,k;
    int ans;
    int array[]  = {4, 0, 5, 9, 12, -20, 22, 45, 7};
    int m = sizeof(array) / sizeof(array[1]);
    sort(array, array+m);
    for(i=0; i<m; i++) {
        if(array[i+1]-array[i]>1) {
            array[i+1] = array[i] + 1;
            ans = array[i+1];
            break;
        }
    }
    cout<<ans;
}*/
/*int main() {
    int i,j,k;
    int array[] = {0, 1, 3, 4, 5, 6, 7, 8, 10};
    int m = sizeof(array) / sizeof(array[1]);
    int numbers[m];
    // for(i=0;i<m;i++) {
    //      numbers[i] = array[i];
    // }
    for(i=0;i<m;i++) {
        if(i!=0 && i!=m-1) {
        numbers[i] = (array[i-1]) * (array[i+1]);
        }
        else if(i==0) {
            numbers[i] = array[i]*array[i+1];
        }
        else if(i==m-1) {
            numbers[i] = array[i]*array[i-1];
        }
    }
    for(i=0; i<m; i++) {
        cout<<numbers[i]<<" ";
    }
    
}
*/
// program incomplete.....;
// int main() {
//     int i,j,k,t;
//     int array[] = {0,1,2,3,4,5,6,7,8,9};
//     int m = sizeof(array)/sizeof(array[1]);
//     sort(array,array+m);
//     for(i=1;i<m;i+=2) {
//           swap(array[i],array[i+1]);
//         }
//     for(i=0;i<m;i++) {
//         cout<<array[i]<<" ";
//     }
//     return 0;
//     }
/*int main() {
    int array[] = {0, 1, 3, 4, 5, 6, 7, 8, 10};
    int i,j,k,m;
    m = sizeof(array)/sizeof(array[1]);
    i = 0;
    j = m-1;
    while(i<j) {
        if(array[i]%2!=0 && array[j]%2==0) {
            swap(array[i],array[j]);
            i++;
            j--;
        }
        else if(array[i]%2==0) {
            i++;
        }
        else if(array[j]%2!=0) {
            j--;
        }
    }
    for(i=0;i<m;i++) {
        cout<<array[i]<<" "; 
    }
    return 0;
}*/
    
/*int main() {
    int i,j,k,value;
   int high = 0;
    cout<<"enter k: ";
    cin>>k;
    int array[] = {2,4,1,5,7,3,9,10,6};
    int m = sizeof(array)/sizeof(array[1]);
    int array_1[m];
    for(i=0;i<m;i++) {
       value = k-array[i];
       if(value<0) {
           value *= -1;
       }
       if (high<value) {
           high = value;
       }
       array_1[i] = value;
    }
    for(i=0;i<m;i++) {
        cout<<array_1[i];
    }
    return 0;
    
}*/

/*int main() {
    int i,j,k;
    int array[] = {1,-2,3,-4,0,7,8,-6,-9}; 
    int m = sizeof(array)/sizeof(array[i]);
    int array_1[m];
    j = 0;
    for(i=0;i<m;i++) {
        if(array[i]>=0) { 
            array_1[j] = array[i];
            j++;
        }
    }
    for(i=0;i<m;i++) {
        if(array[i]<0) { 
            array_1[j] = array[i];
            j++;
        }
    }
    for(i=0;i<m;i++) {
        cout<<array_1[i]<<" ";
    }
    return 0;
}*/
//incomplete;
/*int main() {
    int i,j,k,ans;
    int array[] = {5, 7, 8, 8, 5, 8, 7, 7};
    int m = sizeof(array)/sizeof(array[1]);
    for(i=0;i<m;i++) {
        int count = 0;
        for(j=0;j<m;j++) {
            if (array[i] == array[j]) {
                count++;
            }
        }
        if(count%2==1 && array[i]!=ans) {
                ans = array[i];
                cout<<array[i]<<" ";
                break;
              }
    }
    return 0;
}*/
/*int main() {
    int i,j,k;
    cout<<"enter k: ";
    cin>>k;
    int array[] = {5, 7, 8, 8, 5, 8, 7, 7}; 
    int m = sizeof(array)/sizeof(array[1]);
    sort(array, array+m);
    int count = 0;
    for(i=0; i<m; i++) {
        if(k==array[i]) {
            count++;
        }
    }
    cout<<count;
    return 0;
}
*/
//incomplete;
/*int main() {
    int i,j,k;
    int array[] = {1, 2, 3, 5, 5, 7, 8, 8, 9, 9, 2}; 
    int m = sizeof(array)/sizeof(array[1]);
    for(i=0;i<m;i++) {
        int count = 0;
        for(j=i+1;j<m;j++) {
            if(array[i] == array[j]) {
            count++;
            }
        }
        if(count>1) {
            cout<<array[i]<<" ";
        }
    }
    return 0;
}
*/
/*int main() {
    int i,j,k,count;
    int array[] = {3, 1, 5, 1, 5, 7, 9, 7, 9};
    int m = sizeof(array) / sizeof(array[1]);
    for(i=0;i<m;i++) {
        count = 0;
        for(j=0;j<m;j++) {
            if(array[i]==array[j]) {
            count++;
            }
        }
        if (count<2) {
            cout<<array[i];
        }
    }
    return 0;
}*/
/*int main() {
    int i,j,k,count;
    int array[] = {45, 46, 87, 98, 100};
    int array_1[] = {100, 46, 45, 87};
    int m = sizeof(array) / sizeof(array[1]);
    for(i=0;i<m;i++) {
        count = 0;
        for(j=0;j<m-1;j++) {
            if (array[i] == array_1[j]) {
                count++;
                break;
            }
        }
        if(count<1) {
            cout<<array[i];
        }
    }
    return 0;
}*/
/*int main() {
    int i,j,k,count;
    int array[] = {3, 1, 5, 1, 5, 7, 9, 7, 9};
    int m = sizeof(array) / sizeof(array[1]);
    for(i=0;i<m;i++) {
        count = 0;
        for(j=0;j<m;j++) {
            if (array[i] == array[j]) {
                count++;
            }
        }
        if(count>1) {
            cout<<array[i];
            break;
        }
    }
    return 0;
}*/
/*int main() {
    int i,j,k,l,count,ans,output;
    output = 0;
    int array_1[] = {1, 5, 7, 8, 9, 11};
    int m = sizeof(array_1)/sizeof(array_1[1]);
    int array_2[] = {6, 8, 10, 11, 12, 16};
    int n = sizeof(array_2)/sizeof(array_2[1]);
    int array_3[] = {1, 3, 5, 6, 8, 10, 11, 17}; 
    int p = sizeof(array_3)/sizeof(array_3[1]);
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++) {
            if(array_1[i] == array_2[j]) {
                ans = array_1[i];
            }
        }
        for(l=0;l<p;l++) {
            if (ans == array_3[l] && ans!=output) {
                output = ans;
                cout<<ans<<" ";
            }
        }
    }
    return 0;
}*/
/*int main() {
    int i,j;
    bool output;
    int array[] = {1, 5, 7, 5, 8, 9, 11, 11, 2, 5, 6};
    int m = sizeof(array)/sizeof(array[1]);
    for(i=0;i<m;i++){
        for(j=0;j<m;j++) {
        if(array[i]==array[j] && i!=j){
            output = true;
            break;
        }
      }
    if(output!=true){
        cout<<array[i]<<" ";
        }
    }
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main() {
    int i,j,k,p,n;
    int count = 0;
    cin>>k;
    int array[] = {1,5,7,5,8,9,11,12};
    int m = sizeof(array)/sizeof(array[m]);
    for(i=0;i<m;i++){
        for(j=i;j<m;j++){
            if(array[i]+array[j]==k ) {
                p = array[i];
                n = array[j];
                cout<<p<<","<<n<<endl;
                count = count+1;
        }
    }
}
    cout<<count<<endl;
    return 0;
}
*/
/*int main() {
  int i,j,k;
  int sum = 0;
  int large = -100;
  int array[] = {1, 1, 1, 1, 1, 0, 5};
  int m = sizeof(array)/sizeof(array[m]);
  for(i=0;i<m;i++) {
      if(array[i] > large) {
              large = array[i]; 
          }
      }
    cout<<"large = "<<large<<endl;
    for(j=0;j<m;j++) {
        if(array[j]!=large) {
            sum += array[j];
        }
    }
    cout<<"sum = "<<sum<<endl;
    if(sum==large) {
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
  }
*/
// int main() {
//     int array[] = { 1, 12, 122, 9 };
//     int m = sizeof(array)/sizeof(array[m]);
//     sort(array, array+m);
//     cout<<"second-high-number: "<<array[1]<<endl;
//     cout<<"second-low-number: "<<array[m-2]<<endl;
//     return 0;
// }
/*int main() {
    int i,j,k,q;
    q = 0;
    int second_large = 0;
    int second_small = 0;
    int small = 10000;
    int large = -10000;
    int array[] = {9, 12, 12, 1};
    int array_1[3];
    int m = sizeof(array)/sizeof(array[m]);
    for(i=0;i<m;i++) {
        for(j=0;j<i;j++) {
            if(array[i]==array[j]) { 
                break;
            }
        }
    if(i==j) {
        k = array[i];
        array_1[q] = k;
    cout<<array_1[q]<<" ";
    }
    
    q += 1;
    }
    cout<<endl;
    for(i=0;i<3;i++) {
        if(large<array_1[i]) {
            second_large = large;
            large = array_1[i];
        }
        else if(second_large<array_1[i]) {
            second_large = array_1[i];
        }
    }
    for(j=0;j<m;j++) {
        if(small>array_1[j]) {
            second_small = small;
            small = array_1[j];
        }
        else if(second_small>array_1[j]) {
            second_small = array_1[j];
        }
    }
    cout<<"second-high-number: "<<second_large<<endl;
    cout<<"second-small-number: "<<second_small<<endl;
    return 0;
}
*/
/*int main() {
    int i,j,k;
    k = 0;
    int count;
    int ans;
    int array[] = {1, 5, 7, 5, 8, 9, 11, 11, 2, 5, 6};
    int m = sizeof(array)/sizeof(array[m]);
    for(i=0;i<m;i++) {
        ans  = 0;
        for(j=0;j<0;j++) {
            if((array[i]==array[j]) && (i!=j) && array[i]!=k) {
                ans  = 1;
                k = array[i];
                break;
            }
        }
    if(ans!=1) {
        cout<<array[i]<<" ";
    }
    }
    
}
*/
// int main() {
//     int i,j,k;
//     k = 0;
//     int count;
//     int ans;
//     int array[] = {1, 5, 7, 5, 8, 9, 11, 11, 2, 5, 6};
//     int m = sizeof(array)/sizeof(array[m]);
//     for(i=0;i<m;i++) {
//         ans  = 0;
//         for(j=0;j<i;j++) {
//             if(array[i]==array[j]) { 
//                 break;
//             }
//         }
//     if(i==j) {
//         cout<<array[i]<<" ";
//     }
//     }
    
// }
