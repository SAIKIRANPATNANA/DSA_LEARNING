// eg:
/*#include <iostream>
using namespace std;
int main() {
    int i,j;
    int array[3][3];
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            cin>>array[i][j];
        }
    }
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            cout<<array[i][j];
        }
        cout<<endl;
    }
    return 0;
}
*/
/*why multidimensional arrays: 
--> representing in grids;
--> faster access;  
--> predefined size; */
// #include <iostream>
// using namespace std;
// initialization methods in arrays;
// int main() {
//     int array[2][2] = { 1, 2, 3 ,4};
//     int i,j;
//     for(i=0;i<2;i++) {
//         for(j=0;j<2;j++) {
//             cout<<array[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main() {
//     int array[2][2] = { {1, 2},  {3 ,4} };
//     int i,j;
//     for(i=0;i<2;i++) {
//         for(j=0;j<2;j++) {
//             cout<<array[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
/*#include <iostream>
using namespace std;
int main() {
    int i,j,k,l;
    int m,n,o,p;
    // int array_1[2][2] = {1 , 2, 3, 4};
    // int array_2[2][2] = {5, 6, 7, 8};
    cout<<"enter-m: "<<endl;
    cin>>m;
    cout<<"enter-n: "<<endl;
    cin>>n;
    cout<<"enter-o: "<<endl;
    cin>>o;
    cout<<"enter-p: "<<endl;
    cin>>p;
    int array_1[m][n];
    int array_2[o][p];
    cout<<"enter array_1: "<<endl;
    for(i=0; i<m; i++) {
        for(j=0; j<n; j++) {
         cin>>array_1[i][j];
        }
    }
    cout<<"enter array_2: "<<endl;
    for(i=0; i<o; i++) {
        for(j=0; j<p; j++) {
            cin>>array_2[i][j];
        }
    }
    int ans_array[o][n];
    for(i=0; i<o; i++) {
        for(j=0; j<n; j++) {
            ans_array[i][j] = 0;
            for(k=0;k<n;k++) {
                ans_array[i][j] += array_1[i][k] * array_2[k][j];
            }
             
         }
    }
    cout<<endl;
    for(i=0; i<2; i++) {
        for(j=0; j<2; j++) {
            cout<<ans_array[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/
/*#include <iostream>
using namespace std;
int main() {
    int i,j,k;
    int m,n;
    cout<<"enter m: ";
    cin>>m;
    cout<<"enter n: ";
    cin>>n;
    cout<<endl;
    int array_1[m][n];
    int array_2[n][m];
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++) {
             cin>>array_1[i][j];
        }
    }
    cout<<endl;
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++) {
            cout<<array_1[i][j]<<" ";
        }
        cout<<endl;
    }
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++){
        array_2[i][j] =  array_1[j][i];
        }
    }
    cout<<endl;
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            cout<<array_2[i][j]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}
*/
// points to be remembered;
/*in matrices mutiplication;
let array_1 and array_2 be names of two arrays;
int array_1[r1][c1];
int array_2[r2][c2];
and c1 must be equals to r2;
in the resultant matrix of these two arrays;
there should be r1*c2 number of elements(r1 rows and c2 cols);
int ans_array[r1][c2];

//2d vectors...
vector of vector data_type;
declaring: vector <vector <data_type> > vector_name;
defining: 
          eg: 
          vector <vector <int>> vector1(n(*rows), vector<int>(m)(*cols));
          vector1 = { {1, 2, 3}, {4, 5, 6, 7}, {8, 9} };
          vector <vector <int>> vector1(3, vector<int>(4));
          }
*/
/*#include <iostream>
using namespace std;
int factorial(int k) {
    int i;
    int ans = 1;
    for(i=1;i<=k;i++) {
         ans *= i;
    }
    return ans;
}   
    int main() {
    int n;
    cin>>n;
    int i,j,k;
    for(i=0;i<n;i++) {
        for(j=0;j<i;j++) {
            cout<<((factorial(i))/((factorial(j))*(factorial(i-j))))<<" ";
        }
        cout<<1;
        cout<<endl;
    }
    return 0;
    }*/
// very very complex 2d vector problem(pascal_triangle);
/*#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> pascal_triangle(int n) {
    int i,j;
    vector<vector<int>> pascal(n);
    for(i=0; i<n; i++) {
        pascal[i].resize(i+1);
        for(j=0; j<=i; j++) {
            if(j==0 || j==i) {
                pascal[i][j] = 1;
            }
            else{
                pascal[i][j] = pascal[i-1][j] + pascal[i-1][j-1];
            }
        }
        
    }
    return pascal;
}
int main() {
    int i,j;
    int n;
    cout<<"enter n: ";
    cin>>n;
    vector<vector<int>> result;
    result = pascal_triangle(n);
    for(i=0; i<result.size(); i++) {
        for(j=0; j<result[i].size(); j++) {
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/

// #include <iostream>
// using namespace std;
// int main() {
// char sai = 'p';
// cout<<int(sai);
// return 0;
// }
/*#include <iostream>
#include <cstring>
using namespace std;
int factorial(int k) {
    int i;
    int ans = 1;
    for(i=1;i<=k;i++) {
         ans *= i;
    }
    return ans;
}   
int main() {
// int m;
// cout<<"enter size of string: ";
// cin>>m;
string str;
cout<<"enter string: ";
cin>>str;
// cout<<str;
int i,j,k;
int count;

int length = str.size();
int rank = 0;
    // cout<<int(str[0]);
for(i=0; i<str.size(); i++) {
    str[i] = toupper(str[i]);
}
cout<<str<<endl;
for(i=0;i<str.size()-1;i++) {
    length --;
    count = 0;
    for(j=i+1;j<str.size();j++) {
        if (int(str[i]) > int(str[j])){
            count++;
        }
    }
    rank +=  (count*factorial(length));
}
cout<< (rank+1);
return 0;
}*/
/*#include <iostream>
using namespace std;
// int check_num_ones(int i)
int main() {
    int i,j,k,m,n;
    int value;
    int count;
    int high_1;
    int result;
    cout<<"enter name of rows and cols: ";
    cin>> m;
    cin>> n;
    int array[m][n];
    int ans[m];
    for(i=0; i<m; i++) {
        for(j=0; j<n; j++) {
            cin>>value;
            array[i][j] = value;
        }
    }
    for(i=0; i<m; i++) {
        for(j=0; j<n; j++) {
            value = array[i][j] ;
            cout<<value<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(i=0; i<m; i++) {
        count = 0;
        for(j=0; j<n; j++) {
            value = array[i][j];
            if(value == 1 ) {
                count++;
            }
        }
        ans[i] = count;
    }
    for(i=0; i<m; i++) {
        cout<<ans[i]<<" ";
    }
    high_1 = 0;
    for(i=0; i<m; i++) {
        if (high_1<ans[i]) {
            high_1 = ans[i];
            result = i;
        }
    }
    cout<<endl;
    cout<<endl;
    cout<<"your required row with high number of ones i.e;"<<high_1<<" is "<<result;
    return 0;
}*/
//shortened and modified code of above code;
/*int main() {
    int i,j,k,m,n;
    int value;
    int count;
    int high_1;
    int result;
    cout<<"enter name of rows and cols: ";
    cin>> m;
    cin>> n;
    int array[m][n];
    int ans[m];
    for(i=0; i<m; i++) {
        for(j=0; j<n; j++) {
            cin>>value;
            array[i][j] = value;
        }
    }
    // for(i=0; i<m; i++) {
    //     for(j=0; j<n; j++) {
    //         value = array[i][j] ;
    //         cout<<value<<" ";
    //     }
    //     cout<<endl;
    // }
    cout<<endl;
    // for(i=0; i<m; i++) {
    //     count = 0;
    //     for(j=0; j<n; j++) {
    //         value = array[i][j];
    //         if(value == 1 ) {
    //             count++;
    //         }
    //     }
    //     ans[i] = count;
    // }
    // observation: if the given is sorted i.e all zeroes followed by ones (or) all ones followed by zeroes;
    high_1 = 0;
    for(i=0; i<m; i++) {
        count = 0;
        for(j=0; j<n; j++) {
             if(array[i][j] == 1) {
                 count = (n - j);
                 break;
             }
        }
        if (high_1<count) {
            high_1 = count;
            result = i;
        }
    }
    // for(i=0; i<m; i++) {
    //     cout<<ans[i]<<" ";
    // }
   
    // for(i=0; i<m; i++) {
    //     if (high_1<ans[i]) {
    //         high_1 = ans[i];
    //         result = i;
    //     }
    // }
    cout<<endl;
    cout<<"your required row with high number of ones i.e; "<<high_1<<" is "<<result;
    return 0;
}*/
// above program using vectors;
/*#include <iostream>
#include <vector>
using namespace std;
int maxNumOnesRow(vector <vector<int>> &v) {
    int maxNumOnes = 0;
    int result;
    int i,j;
    int count;
    for(i=0; i<v.size(); i++) {
        count = 0;
        for(j=0; j<v[0].size(); j++) {
            if(v[i][j] == 1) {
                count = v[0].size() - j;
            }
        }
        if (maxNumOnes<count) {
            maxNumOnes = count;
            result = i;
        }
    }
    return result;
}
int main() {
    int m,n;
    cin>>m>>n;
    int i,j;
    vector <vector <int>> v(m, vector <int>(n));
    for(i=0; i<m; i++) {
        for(j=0; j<n; j++) {
            cin>>v[i][j];
        }
    }
    int ans = maxNumOnesRow(v);
    cout<<ans;
    return 0;
}
*/
// another approach for the above code;
/*#include <iostream>
#include <vector>
using namespace std;
int maxNumOnesRow(vector <vector<int>> &v) {
    int maxNumOnes = 0;
    int result;
    int i,j;
    int count;
        for(j=v[0].size()-1,i=0; j>=0; j--) {
            if(v[i][j] == 0) {
                // count = v[0].size() - j;
                count = j+1;
                result = i;
                break;
            }
        }
      for(i=1; i<v.size(); i++) {
            if(v[i][count-1] == 1) {
                result = i;
                count --;
            }
        }
        // if (maxNumOnes<count) {
        //     maxNumOnes = count;
        //     result = i;
        // }
    return result;
}
int main() {
    int m,n;
    cin>>m>>n;
    int i,j;
    vector <vector <int>> v(m, vector <int>(n));
    for(i=0; i<m; i++) {
        for(j=0; j<n; j++) {
            cin>>v[i][j];
        }
    }
    int ans = maxNumOnesRow(v);
    cout<<ans;
    return 0;
}
*/
// #include <iostream>
// #include <vector>
// using namespace std;
// vector <vector <int>> resultant_vector(int n) 
// int main() {
//     int i,j;
//     int m,n;
//     vin>>m>>n;
//     vector <vector <int>> v(m, vector<int>(n));
//     for(i=0; i<m; i++) {
//         for(j=0; j<n; j++) {
//             cin>>v[i][j];
//         }
//     }
    
// }
/*#include <iostream>
using namespace std;
int main() {
    int array[3][3];
    int new_array[3][3];
    int i,j,k,q;
    int value;
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++){
            cin>>value;
            array[i][j] = value;
        }
    }
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
          new_array[i][j] = array[j][i];
        }
    }
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
          array[i][j] = new_array[i][j];
        }
    }
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            for(k=0; k<3; k++) {
                  if (j==0&&k==2) {
                      q = array[i][j];
                      array[i][j] = array[i][k];
                      array[i][k] = q;
                  }
            }
        }
    }
    cout<<endl;
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
 return 0;
}*/
/*#include <iostream>
#include <algorithm>
using namespace std;
void resultant_array(int array[3][3]) {
    int i,j;
    for(i=0; i<3; i++) {
        for(j=0; j<i; j++) {
            swap(array[i][j], array[j][i]);
        }
    }
    for(i=0; i<3; i++) {
        reverse(array[i], array[i]+3);
    }
    return ;
}
int main() {
    int array[3][3];
    int new_array[3][3];
    int i,j,k,q,p;
    int value;
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++){
            cin>>value;
            array[i][j] = value;
        }
    }
    // for(i=0; i<3; i++) {
    //     for(j=0; j<i; j++) {
        //   new_array[i][j] = array[j][i];
        // p = array[i][j];
        // array[i][j] = array[j][i];
        // array[j][i] = p;
    //     swap(array[i][j], array[j][i]);
    //     }
    // }
    // for(i=0; i<3; i++) {
    //     for(j=0; j<3; j++) {
    //       array[i][j] = new_array[i][j];
    //     }
    // }
    // for(i=0; i<3; i++) {
    //     for(j=0; j<3; j++) {
    //         for(k=0; k<3; k++) {
    //               if (j==0&&k==2) {
    //                   q = array[i][j];
    //                   array[i][j] = array[i][k];
    //                   array[i][k] = q;
    //               }
    //         }
    //     }
    // }
    resultant_array(array);
    cout<<endl;
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
 return 0;
}*/
// above program using 2d vectors;
/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void resultant_vector(vector <vector <int>> &v){
    int i, j;
    for(i=0; i<v.size(); i++) {
        for(j=0; j<i; j++) {
            swap(v[i][j], v[j][i]);
        }
    }
    for(i=0; i<v.size(); i++) {
        reverse(v[i].begin(), v[i].end());
    }
    return;
}  
int main() {
    int i,j,k,m,n;
    cin>>m>>n;
    vector <vector <int>> v(m, vector <int>(m));
    for(i=0; i<m; i++) {
        for(j=0; j<n; j++) {
            cin>>v[i][j];
        }
    }
    // cout<<v.size();
    cout<<endl;
    resultant_vector(v);
    for(i=0; i<m; i++) {
        for(j=0; j<m; j++) {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/

/*#include <iostream>
#include <vector>
using namespace std;
void arrangingInSpiralOrder(vector <vector <int>> &v) {
    int dir,row,col,left,right,bottom,top;
    top = 0;
    bottom = v.size()-1;
    left = 0;
    right = v[0].size()-1;
    dir = 0;
    while(top<=bottom && left<=right) {
        // left to right;
        if(dir == 0) {
            for(col=left; col<=right; col++) {
                cout<<v[top][col]<<" ";
            }
            top++;
        }
        // top to bottom;
        else if(dir == 1) {
            for(row=top; row<=bottom; row++) {
                cout<<v[row][right]<<" ";
            }
            right--;
        }
        // right to left;
        else if(dir == 2) {
            for(col=right; col>=left; col--) {
                cout<<v[bottom][col]<<" ";
            }
            bottom--;
        }
        // bottom to top;
        else{
            for(row=bottom; row>=top; row--) {
                cout<<v[row][left]<<" ";
            }
            left++;
        }
        dir = (dir+1)%4;
    }
    return;
}
int main() {
    int i,j,k;
    int m,n,p,q;
    cin>>m>>n;
    p = m;
    vector <vector <int> > v(m, vector <int>(n) );
    for(i=0; i<m; i++) {
        for(j=0; j<n; j++) {
            cin>>v[i][j];
        }
    }
    cout<<endl;
    cout<<endl;
    for(i=0; i<m; i++) {
        for(j=0; j<n; j++) {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    arrangingInSpiralOrder(v);
    
   return 0;
}
/*#include <iostream>
#include <vector>
using namespace std;
void  arrarngingInSpiralOrder(vector <vector <int>> &v){
    int dir,top,bottom,left,right,row,col,k;
    top = 0;
    bottom = v.size()-1;
    left = 0;
    right = v[0].size()-1;
    dir = 0;
    k = 1;
    while(top<=bottom && left<=right) {
        if(dir == 0) {
            for(col=left; col<=right; col++) {
                v[top][col] = k;
                 k++;
            }
            top++;
          
        }
        else if(dir == 1) {
            for(row=top; row<=bottom; row++) {
                v[row][right] = k;
                 k++;
            }
            right--;
        }
        else if(dir == 2) {
            for(col=right; col>=left; col--) {
                v[bottom][col] = k;
                 k++;
            }
            bottom--;
        }
        else {
            for(row=bottom; row>=top; row--) {
                v[row][left] = k;
                 k++;
            }
            left++;
        }
        dir = (dir+1)%4;
    }
    return;
}
int main() {
    int i,j,n;
    cout<<"enter n: ";
    cin>>n;
    vector <vector <int>> v(n, vector <int>(n));
    arrarngingInSpiralOrder(v);
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/
/*
// dry run of above code;
top = 1
left = 1
right = 1
bottom = 1
1 2 3
8 9 4
7 6 5  

*/
/*#include <iostream>
#include <vector>
using namespace std;
int main() {
    int i,j,k;
    int right_diag_sum = 0;
    int left_diag_sum = 0;
    int m;
    cout<<"enter m: ";
    cin>>m;
    int array[m][m];
    for(i=0; i<m; i++){
        for(j=0; j<m; j++) {
            cin>>k;
            array[i][j] = k;
        }
    }
    cout<<endl;
    for(i=0; i<m; i++){
        for(j=0; j<m; j++) {
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
    i = 0;
    j = m-1;
    while(i<=m && j>=0) {
        right_diag_sum += array[i][j];
        i++;
        j--;
        
    }
    i = 0;
    j = 0;
    while(i<=m-1 && j<=m-1) {
        left_diag_sum += array[i][j];
        i++;
        j++;
        
    }
    cout<<endl;
    cout<<"right_diag_sum: "<<right_diag_sum<<endl;
    cout<<"left_diag_sum: "<<left_diag_sum<<endl;
    return 0;
}*/
/*#include <iostream>
#include <algorithm>
using namespace std;

void upper_half(int array[3][3]) {
    int i,j,k,l;
    l = 0; 
    i = 0;
    while(i<3) {
        for(j=0;j<3;j++) {
            for(k=l;k<3;k++) {
            cout<<array[j][k]<<" ";
        }   
        l++;
        cout<<endl;
    }  
        i++;
} 
return;
}
int main() {
    int i,j,k;
    int n;
    cout<<"enter n: ";
    cin>>n;
    int array[3][3];
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            cin>>k;
            array[i][j] = k;
        }
    }
    upper_half(array);
    return 0;
}
*/
/*#include <iostream>
#include <vector>
using namespace std;
void upper_half(vector <vector<int>> &v) {
    int i,j,k,l,n;
    l = 0;
    i = 0;
    while(i<v.size()) {
    for(i=0; i<v.size(); i++) {
        for(k=0; k<l; k++) {
            cout<<"  ";
        }
        for(j=l; j<v[i].size(); j++) {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
        l++;
    }
}
return;
}
int main() {
    int i,j,k,m,n;
    cout<<"enter n: ";
    cin>>n;
    vector <vector <int>> v(n, vector <int> (n) );
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            cin>>v[i][j];
        }
    }
    upper_half(v);
    return 0;
}*/
/*#include <iostream>
#include <vector>
using namespace std;
int main() {
    int i,j,k;
    int m;
    cin>>m;
    int array_1[m];
    for(i=0; i<m; i++) {
        cin>>array_1[i];
    }
    int array_2[m];
    for(i=0; i<m; i++) {
        cin>>array_2[i];
    }
    int array_3[m];
    for(i=0; i<m; i++) {
        array_3[i] = array_1[i] + array_2[i];
    }
    for(i=0; i<m; i++) {
        cout<<array_3[i]<<" ";
    }
    return 0;
}*/
/*#include <iostream>
#include <vector>
using namespace std;
int rectangl_sum(vector <vector <int>> &v, int l1, int r1, int l2, int r2) {
    int i,j,k;
    int sum = 0;
    for(i=l1;i<=l2;i++) {
        for(j=r1;j<=r2;j++) {
            sum += v[i][j];
        }
    }
    return sum;
}
int main() {
    int i,j,k;
    cout<<"enter m,n: ";
    int m,n; 
    cin>>m>>n;
    vector <vector <int>> v(m, vector <int>(n));
    int l1,r1,l2,r2;
    int sum = 0;
    cout<<"enter l1,r1,l2,r2: ";
    cin>>l1>>r1>>l2>>r2;
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++) {
            cin>>v[i][j];
        }
    }
    sum = rectangl_sum(v,l1,r1,l2,r2);
    cout<<"sum: "<<sum;
    cout<<endl;
    return 0;
}
*/
/*#include <iostream>
#include <vector>
using namespace std;
int rectangle_sum(vector <vector <int>> &v, int l1, int r1, int l2, int r2) {
    int i,j,k;
    int sum = 0;
    for(i=l1; i<=l2; i++) {
        for(j=1; j<=r2; j++) {
            v[i][j] += v[i][j-1];
        }
        if(r1!=0) {
        sum += v[i][r2] - v[i][r1-1];
        }
        else{
            // if r1 = 0;
            //  1 2 3 
            //  4 5 6 
            //  7 8 9
                
            sum += v[i][r2];
        }
    }
    return sum;
}

int main() {
    int i,j,k;
    int m,n,sum;
    int l1,r1,l2,r2;
    cout<<"enter m & n: ";
    cin>>m>>n;
    vector <vector <int>> v(m, vector <int>(n));
    cout<<"enter l1,r1,l2,r2: ";
    cin>>l1>>r1>>l2>>r2;
    cout<<"enter vector elements: "<<endl;
    for(i=0; i<m; i++) {
        for(j=0; j<n; j++) {
            cin>>v[i][j];
        }
    }
    sum = rectangle_sum(v,l1,r1,l2,r2);
    cout<<"sum: ";
    cout<<sum;
    return 0;
}*/
// dry run:
/*m = 3; 
  n = 3;
  l1 = 1;
  l2 = 2;
  r1 = 1;
  r2 = 2;
  1 2 3 4 5 6 7 8 9
*/

/*#include <iostream>
#include <vector>
using namespace std;
int rectangle_sum(vector <vector <int>> &v, int l1, int r1, int l2, int r2) {
    int i,j,k;
    int sum = 0;
    for(i=0; i<v.size(); i++) {
        for(j=1; j<v[i].size(); j++) {
            v[i][j] += v[i][j-1];
        }
    }
    for(i=0; i<v.size(); i++) {
        for(j=0; j<v[i].size(); j++) {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    for(i=l1; i<=l2; i++) {
        if(r1!=0) {
        sum += v[i][r2] - v[i][r1-1];
        }
        else{
        sum += v[i][r2];
        }
    }
    return sum;
}
int main() {
    int i,j,k;
    int m,n,sum;
    int l1,r1,l2,r2;
    cout<<"enter m & n: ";
    cin>>m>>n;
    vector <vector <int>> v(m, vector <int>(n));
    cout<<"enter l1,r1,l2,r2: ";
    cin>>l1>>r1>>l2>>r2;
    cout<<"enter vector elements: "<<endl;
    for(i=0; i<m; i++) {
        for(j=0; j<n; j++) {
            cin>>v[i][j];
        }
    }
    sum = rectangle_sum(v,l1,r1,l2,r2);
    cout<<endl;
    cout<<"sum: ";
    cout<<sum;
    return 0;
}
*/
/*#include <iostream>
#include <vector>
using namespace std;
int rectangle_sum(vector <vector <int>> &v, int l1, int r1, int l2, int r2) {
    int i,j,k;
    int sum;
    for(i=0; i<v.size(); i++) {
        for(j=1; j<v[i].size(); j++){
            v[i][j] += v[i][j-1];
        }
    }
    for(j=0; j<v[0].size(); j++){
        for(i=1;i<v.size(); i++) {
            v[i][j] += v[i-1][j];
      }
    }
    sum = v[l2][r2] - v[l1-1][r2] - v[l2][r1-1] + v[l1-1][r1-1];
return sum;
}
int main() {
    int i,j,k;
    int m,n;
    int l1,r1,l2,r2;
    int sum;
    cout<<"enter m, n: ";
    cin>>m>>n;
    cout<<"enter l1,r1,l2,r2: ";
    cin>>l1>>r1>>l2>>r2;
    cout<<"enter vector here: ";
    vector <vector <int>> v(m, vector <int>(n));
    for(i=0; i<m; i++ ) {
        for(j=0; j<n; j++){
            cin>>v[i][j];
        }
    }
    sum = rectangle_sum(v,l1,r1,l2,r2);
    cout<<"sum: "<<sum;
    return 0;
}*/











