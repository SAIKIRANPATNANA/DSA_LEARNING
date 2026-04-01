// BackTracking:
// Q)Write a program to print all the permutations of a string in lexicographically sorted order?
/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void permute(string &str, int i, vector <string> &vec) {
    if(i==str.size()) {
        vec.push_back(str);
        // cout<<str<<endl;
        return;
    }else{ 
        for(int j=i; j<str.size(); j++) {
            swap(str[i],str[j]);
            permute(str,i+1,vec);
            swap(str[i],str[j]);
        }
    }
    return;
}
int main() {
    string str = "SAI";
    vector <string> vec;
    permute(str,0,vec);
    sort(vec.begin(),vec.end());
    for(string s: vec) {
        cout<<s<<endl;
    }cout<<endl;
    return 0;
}
*/

// rat_in_a_maze_query:

/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool canWeMove(int i, int j, vector <vector <int>> &grid) {
    return (i>=0 and j>=0 and i<grid.size() and j<grid.size()) and (grid[i][j]==1);
}
int findPossibleNumOfPaths(int i, int j, vector <vector <int>> &grid) {
    int ans = 0;
    if(i==grid.size()-1 and j==grid.size()-1) {
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid.size(); j++){
                if(i==grid.size()-1 and j==grid.size()-1) {
                    cout<<2;
                }else {
                    cout<<grid[i][j]<<" ";
                }
            }cout<<endl;
        }cout<<"-----******-----"<<endl;
        return 1;
    }else {
        grid[i][j] = 2;
        if(canWeMove(i,j+1,grid)) {
            ans += findPossibleNumOfPaths(i,j+1,grid);
        }
        if(canWeMove(i+1,j,grid)) {
            ans += findPossibleNumOfPaths(i+1,j,grid);
        }
        if(canWeMove(i,j-1,grid)) {
            ans += findPossibleNumOfPaths(i,j-1,grid);
        }
        if(canWeMove(i-1,j,grid)) {
            ans += findPossibleNumOfPaths(i-1,j,grid);
        }
        grid[i][j] = 1;
    }
    return ans;
}
int main() {
    vector <vector <int>> grid {
        {1,1,1,1},
        {0,1,0,1},
        {0,1,1,1},
        {0,1,1,1},
    };
    cout<<findPossibleNumOfPaths(0,0,grid);
    return 0;
}
*/

// Problem_of_Placing_NQueens:
/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool canWePlaceQueen(int currentRow, int col, vector <vector <char>> &grid) {
    for(int i=currentRow-1;i>=0; i--) {
        if(grid[i][col]=='Q') {
            return false;
        }
    }for(int i=currentRow-1,j=col-1; i>=0 and j>=0; i--,j--) {
        if(grid[i][j]=='Q') {
            return false;
        }
    }for(int i=currentRow-1,j=col+1; i>=0 and j<grid.size(); i--,j++) {
        if(grid[i][j]=='Q') {
            return false;
        }
    }return true;
}
void placeNQueens(int currentRow, int n, vector <vector <char>> &grid) {
    if(currentRow==n) {
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                cout<<grid[i][j]<<" ";
            }cout<<endl;
        }cout<<endl;
        cout<<"-----******-----"<<endl;
        return;
    }else {
    for(int col=0;  col<n; col++) {
        if(canWePlaceQueen(currentRow, col, grid)){
            grid[currentRow][col] = 'Q';
            placeNQueens(currentRow+1,n,grid);
            grid[currentRow][col] = '.';
        }
    }
    }return;
}
int main() {
    int n = 4;
    vector <vector <char>> grid(n, vector<char>(n,'.'));
    placeNQueens(0,n,grid);
    return 0;
}
*/

// degree's of moment:
// 1st_degree : mean;
// 2nd_degree: sd;
// 3rd_degree: skewness;
// 4th_degree: kurtosis;
// mesokurtic(Normal kurtosis): kurtosis_val = 3;
// leptokurtic(+ve kurtosis): kurtosis_val>3;
// platykurtic(-ve kurtosis): kurtosis_val<3;

// permutations_practice:
/*#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
void permute(string &str, int i, vector <string> &vec) {
    if(i==str.size()) {
        vec.push_back(str);
        return;
    }for(int j=i; j<str.size(); j++) {
        swap(str[i],str[j]);
        permute(str,i+1,vec);
        swap(str[i],str[j]);
    }return;
}int main() {
    string str = "SAI";
    vector <string> vec;
    permute(str,0,vec);
    sort(vec.begin(), vec.end());
    for(string s: vec) {
        cout<<s<<endl;
    }return 0;
}
*/

// rat_in_a_maze_query_practice:
/*#include <iostream>
#include <vector>
using namespace std;
bool canWeMove(int i, int j, vector<vector <int>> maze){
    if(i<0 or j<0 or i>=maze.size() or j>=maze.size() or maze[i][j]==0 or maze[i][j]==2) {
        return false;
    }return true;
}int getResult(vector <vector<int>> &maze, int i, int j) {
    int n = maze.size();
    if(i==n-1 and j==n-1) {
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++){
                cout<<maze[i][j]<<" ";
            }cout<<endl;
        }cout<<"************"<<endl;
        return 1;
    }int result = 0;
    maze[i][j] = 2;
    if(canWeMove(i+1,j,maze)){
        result += getResult(maze, i+1, j);
    }if(canWeMove(i-1,j,maze)){
        result += getResult(maze, i-1, j);
    }if(canWeMove(i,j+1,maze)){
        result += getResult(maze, i, j+1);
    }if(canWeMove(i,j-1,maze)){
        result += getResult(maze, i, j-1);
    }maze[i][j] = 1;
    return result;
}int main() {
    vector <vector <int>> maze= {
        {1,1,0,1},{1,1,0,0},{0,1,1,0},{0,1,1,1}
    };cout<<getResult(maze, 0, 0);
    return 0;
}*/

// Problem_of_Placing_NQueens_practice: 
// #include <iostream>
// #include <vector>
// using namespace std;
// bool canWePlaceQueen(int r, int c, vector <vector <char>> queens) {
//     for(int i=r; i>=0; i--) {
//         if(queens[i][c]=='Q') {
//             return false;
//         }
//     }for(int i=r, j=c; i>=0 and j>= 0; i--,j--) {
//         if(queens[i][j]=='Q'){
//             return false;
//         }
//     }for(int i=r, j=c; i>=0 and j<queens.size(); i--,j++) {
//         if(queens[i][j]=='Q') {
//             return false;
//         }
//     }return true;
// }void getNQueens(int r,  vector <vector <char>> &queens) {
//     if(r==queens.size()) {
//         for(int i=0; i<r; i++) {
//             for(int j=0; j<r; j++) {
//                 cout<<queens[i][j]<<" ";
//             }cout<<endl;
//         }cout<<"**********"<<endl;
//         return;
//     }for(int i=0; i<queens.size(); i++) {
//         if(canWePlaceQueen(r,i, queens)) {
//             queens[r][i] = 'Q';
//             getNQueens(r+1, queens);
//             queens[r][i] = '.';
//         }
//     }return;
// }int main() {
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     vector <vector<char>> queens(n, vector <char> (n,'.'));
//     getNQueens(0,queens);
//     return 0;
// }*/

// Sudoku Solver:
// Consider a 9*9 2D array grid that is partially filled with numbers from 1 to 9. The Sudoku Solver problem is to fill
// remaining blocks with numbers from 1 to 9 so that every row, column and subgrid (3*3) contains exactly one
// instance of digits (1 to 9).
// #include <iostream>
// #include <vector>
// using namespace std;
// bool canWePlaceK(int r,int c,int k,vector <vector<int>> sudoko){
//     for(int j=0; j<9; j++) {
//         if(sudoko[r][j]==k) {
//             return false;
//         }
//     }for(int i=0; i<9; i++) {
//         if(sudoko[i][c]==k) {
//             return false;
//         }
//     }int m=r/3*3; int n=c/3*3;
//     for(int i=m; i<m+3; i++){
//         for(int j=n; j<n+3; j++) {
//             if(sudoko[i][j]==k) {
//                 return false;
//             }
//         }
//     }return true;
// }void solveSudoko(int r,int c,vector<vector <int>> &sudoko){
//     if(r==9 and c==0) {
//         for(int i=0; i<9; i++) {
//             for(int j=0; j<9; j++) {
//                 cout<<sudoko[i][j]<<" ";
//             }cout<<endl;
//         }return;
//     }if(sudoko[r][c]==0){
//             for(int k=1; k<=9; k++) {
//                 if(canWePlaceK(r,c,k,sudoko)){
//                     sudoko[r][c] = k;
//                     if(c==8){
//                         solveSudoko(r+1,0,sudoko);
//                     }else{
//                         solveSudoko(r,c+1,sudoko);
//                     }sudoko[r][c] = 0;
//                 }
//             }
//     }else{
//         if(c==8){
//             solveSudoko(r+1,0,sudoko);
//         }else{
//             solveSudoko(r,c+1,sudoko);
//         }
//     }return;
// }int main(){
//     vector <vector <int>> sudoko = {
//         {3, 0, 6, 5, 0, 8, 4, 0, 0},
//         {5, 2, 0, 0, 0, 0, 0, 0, 0},
//         {0, 8, 7, 0, 0, 0, 0, 3, 1},
//         {0, 0, 3, 0, 1, 0, 0, 8, 0},
//         {9, 0, 0, 8, 6, 3, 0, 0, 5},
//         {0, 5, 0, 0, 9, 0, 6, 0, 0},
//         {1, 3, 0, 0, 0, 0, 2, 5, 0},
//         {0, 0, 0, 0, 0, 0, 0, 7, 4},
//         {0, 0, 5, 2, 0, 6, 3, 0, 0} 
//     };solveSudoko(0,0,sudoko);
//     return 0;
// }*/

// Given integers M, N and K, the task is to place K knights on an M*N chessboard such that they don’t attack each
// other. The knights are expected to be placed on different squares on the board. A knight can move two squares
// vertically and one square horizontally or two squares horizontally and one square vertically. The knights attack
// each other if one of them can reach the other in single move. There are multiple ways of placing K knights on an
// M*N board or sometimes, no way of placing them. We are expected to list out all the possible solutions.

/*// #include <iostream>
// #include <vector>
// using namespace std;
// bool canWePlaceKnight(int r, int c, vector <vector<char>> knights) {
//     int m = knights.size();
//     int n = knights[0].size();
//     if (r-2>=0 and r-2<m and  c-1>=0 and c-1<n and knights[r-2][c-1]=='K') {
//         return false;
//     }if(r-2>=0 and r-2<m and  c+1>=0 and c+1<n and knights[r-2][c+1]=='K'){
//         return false;
//     }if(r-1>=0 and r-1<m and  c-2>=0 and c-2<n and knights[r-1][c-2]=='K'){
//         return false;
//     }if(r-1>=0 and r-1<m and  c+2>=0 and c+2<n and knights[r-1][c+2]=='K'){
//         return false;
//     }return true;
// }void placeKKnights(int r, int c, int n, int k, vector<vector <char>> &knights) {
//     if(k==n) {
//         for(int i=0; i<knights.size(); i++) {
//             for(int j=0; j<knights[0].size(); j++) {
//                 cout<<knights[i][j]<<" ";
//             }cout<<endl;
//         }cout<<"**************"<<endl;
//         return;
//     }if(r == knights.size()) return;
//     if(canWePlaceKnight(r,c,knights)) {
//             knights[r][c] = 'K';
//             if(c==knights[0].size()-1) {
//                 placeKKnights(r+1,0,n+1,k,knights);
//             }else {
//                 placeKKnights(r,c+1,n+1,k,knights);
//             }knights[r][c] = '.';
//     }if(c==knights[0].size()-1) {
//         placeKKnights(r+1,0,n,k,knights);
//     }else {
//         placeKKnights(r,c+1,n,k,knights);
//     }return;
// }int main() {
//     int m,n,k;
//     cin>>m>>n>>k;
//     vector<vector<char>> knights(m, vector <char> (n,'.'));
//     placeKKnights(0,0,0,k,knights);
//     return 0;
// }

*/

// knights Tour:
// #include <iostream>
// #include <vector>
// using namespace std;
// bool canWePlaceKnight(vector <vector <int>> knightsTour, int r, int c) {
//     if(r>=0 and r<knightsTour.size() and c>=0 and c<knightsTour[0].size() and knightsTour[r][c]==-1) {
//         return true;
//     }return false;
// }void knightsTour(int n,int r,int c,vector <vector<int>> &knights, int track) {
//     if(track==(n*n)) {
//           for(int i=0; i<n;i++){
//               for(int j=0; j<n; j++) {
//                   cout<<knights[i][j]<<"\t";
//               }cout<<endl;
//           }exit(0);
//           return;
//     }else {
//         if(canWePlaceKnight(knights,r-2,c-1)) {
//             knights[r-2][c-1] = track;
//             knightsTour(n,r-2,c-1,knights,track+1);
//             knights[r-2][c-1] = -1;
//         }if(canWePlaceKnight(knights,r-1,c-2)) {
//             knights[r-1][c-2] = track;
//             knightsTour(n,r-1,c-2,knights,track+1);
//             knights[r-1][c-2] = -1;
//         }if(canWePlaceKnight(knights,r-2,c+1)) {
//             knights[r-2][c+1] = track;
//             knightsTour(n,r-2,c+1,knights,track+1);
//             knights[r-2][c+1] = -1;
//         }if(canWePlaceKnight(knights,r-1,c+2)) {
//             knights[r-1][c+2] = track;
//             knightsTour(n,r-1,c+2,knights,track+1);
//             knights[r-1][c+2] = -1;
//         }if(canWePlaceKnight(knights,r+2,c-1)) {
//             knights[r+2][c-1] = track;
//             knightsTour(n,r+2,c-1,knights,track+1);
//             knights[r+2][c-1] = -1;
//         }if(canWePlaceKnight(knights,r+1,c-2)) {
//             knights[r+1][c-2] = track;
//             knightsTour(n,r+1,c-2,knights,track+1);
//             knights[r+1][c-2] = -1;
//         }if(canWePlaceKnight(knights,r+2,c+1)) {
//             knights[r+2][c+1] = track;
//             knightsTour(n,r+2,c+1,knights,track+1);
//             knights[r+2][c+1] = -1;
//         }if(canWePlaceKnight(knights,r+1,c+2)) {
//             knights[r+1][c+2] = track;
//             knightsTour(n,r+1,c+2,knights,track+1);
//             knights[r+1][c+2] = -1;
//         }
//     }return;
// }int main() {
//     int n;
//     cin>>n;
//     vector <vector <int>> knights(n, vector <int> (n, -1));
//     knights[0][0] = 0;
//     knightsTour(n,0,0,knights,1);
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// vector <int> x = {-2,-1,-2,-1,2,1,2,1};
// vector <int> y = {-1,-2,1,2,-1,-2,1,2};
// bool canWePlaceKnight(vector <vector <int>> knightsTour, int r, int c) {
//     if(r>=0 and r<knightsTour.size() and c>=0 and c<knightsTour[0].size() and knightsTour[r][c]==-1) {
//         return true;
//     }return false;
// }void knightsTour(int n,int r,int c,vector <vector<int>> &knights, int track) {
//     if(track==(n*n)) {
//           for(int i=0; i<n;i++){
//               for(int j=0; j<n; j++) {
//                   cout<<knights[i][j]<<"\t";
//               }cout<<endl;
//           }exit(0);
//           return;
//     }else {
//         for(int i=0; i<8; i++) {
//             if(canWePlaceKnight(knights,r+x[i],c+y[i])) {
//                 knights[r+x[i]][c+y[i]] = track;
//                 knightsTour(n,r+x[i],c+y[i],knights,track+1);
//                 knights[r+x[i]][c+y[i]] = -1;
//             }
//         }
//     }return;
// }int main() {
//     int n;
//     cin>>n;
//     vector <vector <int>> knights(n, vector <int> (n, -1));
//     knights[0][0] = 0;
//     knightsTour(n,0,0,knights,1);
//     return 0;
// }
/*#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector <int> x = {-2,-1,-2,-1,2,1,2,1};
vector <int> y = {-1,-2,1,2,-1,-2,1,2};
bool canWePlaceKnight(vector <vector <int>> knightsTour, int r, int c) {
    if(r>=0 and r<knightsTour.size() and c>=0 and c<knightsTour[0].size() and knightsTour[r][c]==-1) {
        return true;
    }return false;
}int getCount(vector <vector<int>> knights, int r, int c) {
    int count = 0;
    for(int i=0; i<8; i++){
        if(canWePlaceKnight(knights,r+x[i],c+y[i])) {
            count++;
        }
    }return count;
}void knightsTour(int n,int r,int c,vector <vector<int>> &knights, int track) {
    if(track==(n*n)) {
          for(int i=0; i<n;i++){
              for(int j=0; j<n; j++) {
                  cout<<knights[i][j]<<"\t";
              }cout<<endl;
          }exit(0);
          return;
    }else {
        vector<pair<int, int>> count(8, make_pair(9, -1)); 
        for(int i=0; i<8; i++){
            if(canWePlaceKnight(knights,r+x[i],c+y[i])) {
                count[i].first = getCount(knights,r+x[i],c+y[i]);
                count[i].second = i; 
            }
        }sort(count.begin(),count.end());
        for(int i=0; i<8; i++) {
                knights[r+x[count[i].second]][c+y[count[i].second]] = track;
                knightsTour(n,r+x[count[i].second],c+y[count[i].second],knights,track+1);
                knights[r+x[count[i].second]][c+y[count[i].second]] = -1;
        }
    }return;
}int main() {
    int n;
    cin>>n;
    vector <vector <int>> knights(n, vector <int> (n, -1));
    knights[0][0] = 0;
    knightsTour(n,0,0,knights,1);
    return 0;
}*/

//sumCombinations:
// /*
// #include <iostream>
// #include <vector>
// #include <cmath>
// #include <algorithm>
// using namespace std; 
// void getResult(vector <int> &v, int t) {
//     for(int i=0; i<(1<<v.size()); i++) {
//         vector <int> result;
//         int ans = 0;
//         for(int j=0; j<v.size(); j++) {
//             if(i & (1<<j)){
//                 ans += v[j];
//                 result.push_back(v[j]);
//             }
//         }if(ans==t) {
//                 for(int j=0; j<result.size(); j++) {
//                     cout<<result[j]<<" ";
//                 }cout<<endl;
//         }
//     }return; 
// }int main() {
//     int n,t;
//     cin>>t>>n;
//     vector<int> v(n,0);
//     for(int i=0; i<n; i++) {
//         cin>>v[i];
//     }sort(v.begin(),v.end());
//     getResult(v,t);
//     return 0;
// } */
/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void getResult(vector <int> &v, vector <int> &result, int i, int t) {
    if(!t) {
        for(int j=0; j<result.size(); j++) {
            cout<<result[j]<<" ";
        }cout<<endl;
        return;
    }else {
        if(v[i]>t) {
            return;
        }else {
            result.push_back(v[i]);
            getResult(v,result,i+1,t-v[i]);
            result.pop_back();
            int j=i+1;
            while(v[j]==v[i]){
                j++;
            }getResult(v,result,j,t);
        }
    }return;
}int main() {
    int t;
    int n;
    cin>>t>>n;
    vector <int> v(n,0);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }vector <int> result;
    sort(v.begin(),v.end());
    getResult(v,result,0,t);
    return 0;
}
*/

// Q1) Given n as input Generate all strings that are palindromes with the number of digits as ‘n’.
/*#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void result(string &str, int n, int d) {
    if((n%2==1 and d==n/2+1) or (n%2==0 and d==n/2)) {
        string ans;
        if(n%2==0) {
            ans = str;
            reverse(ans.begin(),ans.end());
            cout<<str+ans<<endl;
        }else {
            ans = str.substr(0,n/2);
            reverse(ans.begin(),ans.end());
            cout<<str+ans<<endl;
        }return;
    }for(int i=0; i<=9; i++) {
        str += to_string(i);
        result(str, n, d+1);
        str.pop_back();
    }return;
}int main() {
    int n;
    cin>>n;
    string str = "";
    result(str,n,0);
    return 0;
}*/

// Q2) Check if the product of some subset of an array is equal to the target valueJ
// Where n is the size of the input array.
// Note: Each index value can be used only onceJ
/*#include <iostream>
#include <vector>
using namespace std;
void result(vector <int> v, int idx, int product, int target) {
    if(product==target) {
        cout<<"YES";
        exit(0);
    }for(int i=idx; i<v.size(); i++) {
        product *= v[i];
        result(v, i+1, product, target);
        product /= v[i];
    }return;
}int main() {
    int n,target;
    cin>>n;
    cin>>target;
    vector <int> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }result(v,0,1,target);
    return 0;
}*/

// Q3) Given an integer array nums that may contain duplicates, return all possible
// subsets(the power set).
// The solution set must not contain duplicate subsetsJ Return the solution in any order.

// #include <iostream>
// #include <vector>
// #include <cmath>
// using namespace std;
// void result(vector <int> v, int idx, vector <int> ans) {
//     if(idx==v.size()) {
//         cout<<"[";
//         for(int i=0; i<ans.size(); i++) {
//             if(i+1==ans.size()) {
//                 cout<<ans[i];
//             }else {
//                 cout<<ans[i]<<",";
//             }
//         }cout<<"]"<<endl;
//         return;
//     }result(v,idx+1,ans);
//     ans.push_back(v[idx]);
//     result(v,idx+1,ans);
//     ans.pop_back();
//     return;
// }int main(){
//     int n;
//     cin>>n;
//     vector <int> v(n);
//     vector <int> ans;
//     for(int i=0; i<n; i++) {
//         cin>>v[i];
//     }result(v,0,ans);
//     return 0;
// }
/*#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
vector <vector<int>> r;
void result(vector <int> v, int idx, vector <int> ans) {
    if(idx==v.size()) {
       sort(ans.begin(),ans.end());
       if(find(r.begin(),r.end(),ans)==r.end()) {
            cout<<"[";
            for(int i=0; i<ans.size(); i++) {
                if(i+1==ans.size()) {
                    cout<<ans[i];
                }else {
                    cout<<ans[i]<<",";
                }
            }cout<<"]"<<endl;
            r.push_back(ans);
        }return;
    }result(v,idx+1,ans);
    ans.push_back(v[idx]);
    result(v,idx+1,ans);
    ans.pop_back();
    return;
}int main(){
    int n;
    cin>>n;
    vector <int> v(n);
    vector <int> ans;
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }result(v,0,ans);
    return 0;
}*/

// Q4)Given a string s, you can transform every letter individually to be lowercase or uppercase to
// create another string.
// Return a list of all possible strings we could createJ Return the output in any order.
/*#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;
vector <string> r;
void result(string &str, int idx) {
    if(idx==str.size()) {
        r.push_back(str);
        return;
    }if(!isdigit(str[idx]) and islower(str[idx])) {
        result(str,idx+1);
        str[idx] = toupper(str[idx]);
        result(str,idx+1);
        str[idx] = tolower(str[idx]);
    }else if(!isdigit(str[idx]) and isupper(str[idx])) {
        result(str,idx+1);
        str[idx] = tolower(str[idx]);
        result(str,idx+1);
        str[idx] = toupper(str[idx]);
    }else {
        result(str,idx+1);
    }return;
}int main() {
    string str;
    cin>>str;
    result(str,0);
    cout<<"[";
    for(int i=0; i<r.size(); i++) {
        if(i+1==r.size()) {
            cout<<r[i];
        }else{
            cout<<r[i]<<",";
        }
    }cout<<"]";
    return 0;
}*/

// Q5)Given a string containing digits from 2-9 inclusive, return all possible letter combinations that
// the number could representJ Return the answer in any order.
// A mapping of digits to letters (just like on the telephone buttons) is given belowJ Note that 1
// does not map to any letters.

/*#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector <string> r;
string getstr(char n) {
    switch (n) {
        case '2':
            return "abc";
        case '3':
            return "def";
        case '4':
            return "ghi";
        case '5':
            return "jkl";
        case '6':
            return "mno";
        case '7':
            return "pqrs";
        case '8':
            return "tuv";
        case '9':
            return "wxyz";
    }exit(0);
}void result(string num, string ans, int idx)  {
    if(idx==num.size()) {
        r.push_back(ans);
        return;
    }string str = getstr(num[idx]);
    for(int i=0; i<str.size(); i++) {
        ans += str[i];
        result(num, ans, idx+1);
        ans.pop_back();
    }return;
}int main() {
    string num;
    cin>>num;
    string ans = "";
    result(num,ans,0);
    cout<<"[";
    for(int i=0; i<r.size(); i++) {
        if(i+1==r.size()) {
            cout<<r[i];
        }else{
            cout<<r[i]<<",";
        }
    }cout<<"]";
    return 0;
}*/

//Q6) Given two integers n and k, return all possible combinations of k numbers chosen from the
// range [1, n].
// Note: The number should not be repeated in the combination.
// You may return the answer in any order.
/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector <vector<int>> r;
void result(int k,vector<int> v, vector <int> ans, int idx) {
    if(ans.size()==k) {
        sort(ans.begin(),ans.end());
        if(find(r.begin(),r.end(),ans)==r.end()) {
            r.push_back(ans);
        }return;
    }for(int i=idx; i<v.size(); i++) {
        if(find(ans.begin(),ans.end(),v[i])==ans.end()) {
            ans.push_back(v[i]);
        }result(k,v,ans,idx+1);
        ans.pop_back();
    }return;
}int main() {
    int n,k;
    cin>>n>>k;
    vector <int> v(n);
    vector <int> ans;
    for(int i=0; i<n; i++) {
        v[i] = i+1;
    }result(k,v,ans, 0);
    cout<<"[";
    for(int i=0; i<r.size(); i++) {
        cout<<"[";
        for(int j=0; j<r[i].size(); j++) {
            if(j+1==r[i].size()) {
                cout<<r[i][j];
            }else{
                cout<<r[i][j]<<",";
            }
        }cout<<"]";  
        if(i+1!=r.size()) {
            cout<<",";
        }
    }cout<<"]";
    return 0;
}*/



