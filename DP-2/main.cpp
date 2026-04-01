// Q) You are given an m x n integer array grid. There is a robot initially located at the top-left corner (i.e.,
// grid[0][0]). The robot tries to move to the bottom-right corner (i.e., grid[m - 1][n - 1]). The robot can only
// move either down or right at any point in time.
// An obstacle and space are marked as 1 or 0 respectively in the grid. A path that the robot takes cannot
// include any square that is an obstacle.
// Return the number of possible unique paths that the robot can take to reach the bottom-right corner.
// Memoization(TopDown Approach):
/*#include <iostream>
#include <vector>
using namespace std;
vector <vector <int>> dp;
int getResult(int i, int j, vector <vector<int>> grid){
    if(i>=grid.size() or j>=grid[0].size() or grid[i][j]==1) {
        return 0;
    }if(i==grid.size()-1 and j==grid[0].size()-1){
        return 1;
    }if(dp[i][j]!=-1) {
        return dp[i][j];
    }return dp[i][j] = getResult(i+1,j,grid) + getResult(i,j+1,grid);
}int main() {
    vector <vector<int>> grid = {{0,0,0},{0,1,0},{0,0,0}};
    dp.clear();
    dp.resize(3,vector<int> (3,-1));
    cout<<getResult(0,0,grid);
    return 0;
}*/
//Tabulation (BottomUp Approach):
/*#include <iostream>
#include <vector>
using namespace std;
vector <vector<int>> dp;
int getResult(vector <vector<int>> grid) {
    int m = grid.size();
    int n = grid[0].size();
    dp[m-1][n-1] = 1;
    for(int i=n-2; i>=0; i--) {
        if(grid[m-1][i]==1){
            dp[m-1][i] = 0;
        }else {
            dp[m-1][i] = dp[m-1][i+1];
        }
    }for(int i=m-2; i>=0; i--){
        if(grid[i][n-1]==1){
            dp[i][n-1] = 0;
        }else{
        dp[i][n-1] = dp[i+1][n-1];
        }
    }for(int i=m-2; i>=0; i--){
        for(int j=n-2; j>=0; j--){
            if(grid[i][j]==1){
                dp[i][j]=0;
            }else{
                dp[i][j] = dp[i+1][j] + dp[i][j+1];
            }
        }
    }return dp[0][0];
}
int main() {
    vector <vector<int>> grid = {{0,0,0},{0,1,0},{0,0,0}};
    dp.resize(grid.size(),vector<int> (grid[0].size()-1,0));
    cout<<getResult(grid);
}*/

// Q) Given a m x n grid filled with non-negative numbers, find a path from top left to bottom right, which
// minimizes the sum of all numbers along its path.
// Note: You can only move either down or right at any point in time.
// Memoization:

/*#include <iostream>
#include <vector>
using namespace std;
vector <vector<int>> dp;
int m,n;
int getResult(int i, int j, vector <vector<int>> grid){
    if(i==m-1 and j==n-1){
        return grid[m-1][n-1];
    }if(dp[i][j]!=-1){
        return dp[i][j];
    }if(i<m and j+1==n){
        return dp[i][j] = grid[i][j]+getResult(i+1,j,grid);
    }if(j<n and i+1==m){
        return dp[i][j] = grid[i][j]+getResult(i,j+1,grid);
    }return dp[i][j] = grid[i][j]+min(getResult(i+1,j,grid),getResult(i,j+1,grid));
}int main() {
    vector <vector <int>> grid = {{1,2,3},{4,5,6}};
    m = grid.size();
    n = grid[0].size();
    dp.resize(m,vector<int> (n,-1));
    cout<<getResult(0,0,grid);
    return 0;
}*/

// Tabulation:
/*#include<iostream>
#include <vector>
using namespace std;
vector <vector<int>> dp;
int m,n;
int getResult(vector<vector<int>> grid){
    dp[m-1][n-1] = grid[m-1][n-1];
    for(int i=m-2; i>=0; i--) {
        dp[i][n-1] = grid[i][n-1]+dp[i+1][n-1];
    }for(int i=n-2; i>=0; i--) {
        dp[m-1][i] = grid[m-1][i]+dp[m-1][i+1];
    }for(int i=m-2; i>=0; i--){
        for(int j=n-2; j>=0; j--){
            dp[i][j] = grid[i][j]+min(dp[i+1][j],dp[i][j+1]);
        }
    }return dp[0][0];
}int main() {
    vector <vector <int>> grid = {{1,3,1},{1,5,1},{4,2,1}};
    m = grid.size();
    n = grid[0].size();
    dp.resize(m,vector<int> (n,0));
    cout<<getResult(grid);
    return 0;
}*/

//Q)Given a set of non-negative integers, and a value sum, determine if there is a subset of the given set with
// sum equal to given sum.

// BruteForce way of doing through backtracking:
/*#include <iostream>
#include <vector>
using namespace std;
int getResult(int idx, int sum, int req, vector <int> set){
    if(sum==req){
      return 1;
    }if(idx==set.size()){
        return 0;
    }return getResult(idx+1,sum+set[idx],req,set) or  getResult(idx+1,sum,req,set);
}int main() {
    vector <int> set = {3, 34, 4, 12, 5, 2};
    if(getResult(0,0,9,set)) {
        cout<<"YES";
    }else{
        cout<<"NO";
    }return 0;
}*/

// redo:
/*#include <iostream>
#include <vector>
using namespace std;
int getResult(int idx, int req, vector <int> set){
    if(req==0){
      return 1;
    }if(idx==set.size()){
        return 0;
    }if(set[idx]<=req) {
        return getResult(idx+1,req-set[idx],set) or  getResult(idx+1,req,set);
    }else {
        return getResult(idx+1,req,set);
    }
}int main() {
    vector <int> set = {3, 34, 4, 12, 5, 2};
    if(getResult(0,100,set)) {
        cout<<"YES";
    }else{
        cout<<"NO";
    }return 0;
}*/

//Applying DP:
/*#include <iostream>
#include <vector>
using namespace std;
vector <vector<int>> dp;
int getResult(int idx, int sum, int req, vector <int> set){
    if(idx==set.size()){
        return 0;
    }if(sum==req){
        return 1;
    }if(dp[idx][sum]!=-1){
        return dp[idx][sum];
    }return dp[idx][sum] = getResult(idx+1,sum+set[idx],req,set) or  getResult(idx+1,sum,req,set);
}int main() {
    vector <int> set = {3, 34, 4, 12, 5, 2};
    dp.resize(205,vector<int>(20005,-1));
    if(getResult(0,0,100,set)) {
        cout<<"YES";
    }else{
        cout<<"NO";
    }return 0;
    return 0;
}*/

/*#include <iostream>
#include <vector>
using namespace std;
vector <vector<int>> dp;
int getResult(int idx, int req, vector <int> set){
    if(req==0){
      return 1;
    }if(idx==set.size()){
        return 0;
    }if(set[idx]<=req) {
        return dp[idx][req] = getResult(idx+1,req-set[idx],set) or  getResult(idx+1,req,set);
    }else {
        return dp[idx][req] = getResult(idx+1,req,set);
    }
}int main() {
    vector <int> set = {3, 34, 4, 12, 5, 2};
    dp.resize(205,vector<int>(20005,-1));
    if(getResult(0,9,set)) {
        cout<<"YES";
    }else{
        cout<<"NO";
    }return 0;
}
*/

 //Q) Given an integer array nums, return true if you can partition the array into two subsets such that the
// sum of the elements in both subsets is equal or false otherwise.
/*#include <iostream>
#include <vector>
using namespace std;
vector <vector<int>> dp;
int getResult(int idx, int req, vector <int> set){
    if(req==0){
      return 1;
    }if(idx==set.size()){
        return 0;
    }if(set[idx]<=req) {
        return dp[idx][req] = getResult(idx+1,req-set[idx],set) or  getResult(idx+1,req,set);
    }else {
        return dp[idx][req] = getResult(idx+1,req,set);
    }
}int main() {
    vector <int> set = {1,2,3,5};
    int req = 0;
    for(int val: set) {
        req += val;
    }dp.resize(205,vector<int>(20005,-1));
    if(!(req%2) and getResult(0,req/2,set)) {
        cout<<"YES";
    }else{
        cout<<"NO";
    }return 0;
}*/
// Applying DP in my style: 
// Memoization:
/*#include <iostream>
#include <vector>
using namespace std;
vector <vector<int>> dp;
int getResult(int idx, int sum, int req, vector <int> set){
    if(idx==set.size()){
        return 0;
    }if(sum==req){
        return 1;
    }if(dp[idx][sum]!=-1){
        return dp[idx][sum];
    }return dp[idx][sum] = getResult(idx+1,sum+set[idx],req,set) or  getResult(idx+1,sum,req,set);
}int main() {
    vector <int> set = {1,2,5};
    int req = 0;
    for(int val: set) {
        req += val;
    }dp.resize(205,vector<int>(20005,0));
    if(!(req%2) and getResult(0,0,req/2,set)) {
        cout<<"YES";
    }else{
        cout<<"NO";
    }return 0;
}*/
// Tabulation for above query in my style:
/*#include <iostream>
#include <vector>
using namespace std;
vector <vector<int>> dp;
int getResult(int req, vector <int> set){
    int n = req;
    int m = set.size();
    for(int i=0; i<m; i++){
        dp[i][req] = 1;
    }for(int i=m-1; i>=0; i--){
        for(int j=n-1;j>=0; j--){
            dp[i][j] = dp[i+1][j+set[i]] or dp[i+1][j];
        }
    }return dp[0][0];
}int main() {
    vector <int> set = {1,2,5};
    int req = 0;
    for(int val: set) {
        req += val;
    }dp.resize(205,vector<int>(20005,0));
    if(!(req%2) and getResult(req/2,set)) {
        cout<<"YES";
    }else{
        cout<<"NO";
    }return 0;
}*/
// Tabulation in sanket's style:
/*#include <iostream>
#include <vector>
using namespace std;
vector <vector<int>> dp;
int getResult(int req, vector <int> set){
    int m = set.size();
    for(int i=0; i<m; i++){
        dp[i][0] = 1;
    }for(int i=m-1; i>=0; i--){
        for(int j=1;j<=req; j++){
            if(j>=set[i]) {
                dp[i][j] = dp[i+1][j-set[i]] or dp[i+1][j];
            }else {
                dp[i][j] = dp[i+1][j];
            }
        }
    }return dp[0][req];
}int main() {
    vector <int> set = {1,2,5};
    int req = 0;
    for(int val: set) {
        req += val;
    }dp.resize(205,vector<int>(20005,0));
    if(!(req%2) and getResult(req/2,set)) {
        cout<<"YES";
    }else{
        cout<<"NO";
    }return 0;
}*/

//Q) Unique BST's:
//Catalan numbers are defined as a mathematical sequence that consists of positive integers, which can 
//be used to find the number of possibilities of various combinations.
//The nth term in the sequence denoted Cn, is found in the following formula: (2n)! / (n + 1)!* n!
//The first few Catalan numbers for n = 0, 1, 2, 3, b& are : 1, 1, 2, 5, 14, 42, 132, 429, 1430, 4862, 
//Given a number n. Print the nth catalan number.

/*#include <iostream>
#include <vector>
using namespace std;
vector <long double> dp; 
long double getFactorial(long double n){
    if(n==0){
        return dp[0]=1;
    }if(dp[n]!=-1){
        return dp[n];
    }return dp[n] = n*getFactorial(n-1);
}long double getResult(long double n){
    return getFactorial(2*n)/(getFactorial(n+1)*getFactorial(n));
}int main() {
    long double n;
    cin>>n;
    dp.resize(2*n+5,-1);
    cout<<getResult(n);
    return 0;
}*/

//logical way of doing above query:
/*#include <iostream>
using namespace std;
int getResult(int n){
    if(n==0 or n==1){
        return 1;
    }if(n==2){
        return 2;
    }int ans = 0;
    for(int i=1; i<=n; i++){
        ans += getResult(i-1)*getResult(n-i);
    }return ans;
}int main() {
    int n;
    cin>>n;
    cout<<getResult(n);
    return 0;
}*/

//Applying DP:

// Memoization:
/*#include <iostream>
#include <vector>
using namespace std;
vector <int> dp;
int getResult(int n){
    if(n==0 or n==1){
        return 1;
    }if(n==2){
        return 2;
    }if(dp[n]!=-1){
        return dp[n];
    }int ans = 0;
    for(int i=1; i<=n; i++){
        ans += getResult(i-1)*getResult(n-i);
    }return dp[n] = ans;
}int main() {
    int n;
    cin>>n;
    dp.resize(n+5,-1);
    cout<<getResult(n);
    return 0;
}*/

// Tabulation:
/*#include <iostream>
#include <vector>
using namespace std;
vector <int> dp;
int getResult(int n){
   dp.resize(n+5,0);
   dp[0] = dp[1] = 1;
   dp[2] = 2;
   for(int i=3; i<=n; i++){
       for(int j=1; j<=i; j++){
           dp[i] += dp[j-1]*dp[i-j];
       }
   }return dp[n];
}int main() {
    int n;
    cin>>n;
    cout<<getResult(n);
    return 0;
}*/

//Q) Regular Expression Matching:
/*#include<iostream>
#include <string>
#include <vector>
using namespace std;
int getResult(string s, string p, int i, int j){
    if(i==-1 and j==-1) {
        return 1;
    }else if(j>= 0 and p[j]=='*') {
        return getResult(s,p,i,j-2) or ((i>=0 and (s[i]==p[j-1] or p[j-1]=='.'))? getResult(s,p,i-1,j) : 0);
    }else if(i>=0 and j>=0 and (s[i]==p[j] or p[j]=='.')){
        return getResult(s,p,i-1, j-1);
    }else{
        return 0;
    }
}int main() {
    string s,p;
    cin>>s>>p;
    cout<<getResult(s,p,s.length()-1,p.length()-1);
}
*/

//Aliter:
/*#include <iostream>
#include <vector>
using namespace std;
int getResult(string s, string p, int i , int j){
    if(i>=s.size() and j>=p.size()){
        return 1;
    }else if(j+1<p.size() and p[j+1]=='*'){
        return getResult(s,p,i,j+2) or ((i<s.size() and ((s[i]==p[j]) or p[j]=='.'))? getResult(s,p,i+1,j) : 0);
    }else if(i<s.size() and j<p.size() and (s[i] == p[j] or p[j] =='.')){
        return getResult(s,p,i+1,j+1);
    }else{
        return 0;
    }
}int main() {
    string s,p;
    cin>>s>>p;
    cout<<getResult(s,p,0,0);
    return 0;
}*/

// Tabulation:
/*#include <iostream>
#include <vector>
using namespace std;
vector <vector<int>> dp;
int getResult(string s, string p){
    for(int i=s.size(); i>=0; i--){
      for(int j=p.size(); j>=0; j--){
            if(i>=s.size() and j>=p.size()){
                dp[i][j] = 1;
            }else if(j+1<p.size() and p[j+1]=='*'){
                dp[i][j] = dp[i][j+2] or ((i<s.size() and ((s[i]==p[j]) or p[j]=='.'))? dp[i+1][j] : 0);
            }else if(i<s.size() and j<p.size() and (s[i] == p[j] or p[j] =='.')){
                dp[i][j] =  dp[i+1][j+1];
            }else{
                dp[i][j] = 0;
            }
      }
    }return dp[0][0];
   
}int main(){
    string s,p;
    cin>>s>>p;
    dp.resize(25, vector<int>(25,0));
    cout<<getResult(s,p);
    return 0;
}*/

//Q) Travelling Salesman Problem:
// without dp:
/*#include <iostream>
#include <vector>
#include <climits>
using namespace std;
vector <int> bt;
int getResult(vector<vector<int>> cost, int i, int n, vector<int> bt){
    if(n==cost.size()){
        return cost[i][0];
    }int ans = INT_MAX;
    for(int j=1; j<cost.size(); j++){
        if(!bt[j]){
            bt[j] = 1;
            ans = min(ans,cost[i][j]+getResult(cost,j,n+1,bt));
            bt[j] = 0;
        }
    }return ans; 
}int main() {
    bt.clear();
    vector <vector<int>> cost = {
        {0 , 111}, 
        {112, 0 }
    };bt.resize(cost.size(),0);
    cout<<getResult(cost, 0, 1, bt)<<endl;
    return 0;
}*/

//Q) Histogram Area:
/*#include <iostream>
#include <stack>
#include <vector>
#include <climits>
using namespace std;
int getResult(vector <int> rectangles){
    stack <int> leftSmall;
    stack <int> rightSmall;
    vector <int> left_small(rectangles.size());
    vector <int> right_small(rectangles.size());
    for(int i=0; i<rectangles.size(); i++){
        if(leftSmall.empty()){
            leftSmall.push(0);
            left_small[i] = 0;
        }else{
            while(!leftSmall.empty() and rectangles[leftSmall.top()]>=rectangles[i]){
                leftSmall.pop();
            }if(!leftSmall.empty()){
                left_small[i] = leftSmall.top()+1;
            }else{
                left_small[i] = 0;
            }leftSmall.push(i);
        }
    }for(int i=rectangles.size()-1; i>=0; i--){
        if(rightSmall.empty()){
            rightSmall.push(rectangles.size()-1);
            right_small[i] = rectangles.size()-1;
        }else{
            while(!rightSmall.empty() and rectangles[rightSmall.top()]>=rectangles[i]){
                rightSmall.pop();
            }if(!rightSmall.empty()){
                right_small[i] = rightSmall.top()-1;
            }else{
                right_small[i] = rectangles.size()-1;
            }rightSmall.push(i);
        }
    }int result = INT_MIN;
    for(int i=0; i<rectangles.size(); i++) {
        result = max(result, (right_small[i]-left_small[i]+1)*rectangles[i]);
    }return result;
}int main() {
    vector <int> rectangles = {2,1,5,6,2,3,1};
    cout<<getResult(rectangles);
    return 0;
}*/

/*#include <iostream>
#include <stack>
#include <vector>
#include <climits>
using namespace std;
int getResult(vector <int> rectangles){
    int result = INT_MIN;
    stack <int> st;
    for(int i=0; i<=rectangles.size(); i++){
        if(st.empty()){
            st.push(i);
        }else{
            while(!st.empty() and (i==rectangles.size() or rectangles[i]<rectangles[st.top()])){
                if(st.size()==1){
                    result = max(result,rectangles[st.top()]*(i-0));
                    st.pop();
                }else{
                    int k = st.top();
                    st.pop();
                    result = max(result,rectangles[k]*(i-st.top()-1));
                }
            }st.push(i);
        }
    }return result;
}int main() {
    vector <int> rectangles = {2,4};
    cout<<getResult(rectangles);
    return 0;
}
*/

//Q) Maximal Rectangle:
/*#include <iostream>
#include <stack>
#include <vector>
#include <climits>
using namespace std;
int getResult(vector <int> rectangles){
    int result = INT_MIN;
    stack <int> st;
    for(int i=0; i<=rectangles.size(); i++){
        if(st.empty()){
            st.push(i);
        }else{
            while(!st.empty() and (i==rectangles.size() or rectangles[i]<rectangles[st.top()])){
                if(st.size()==1){
                    result = max(result,rectangles[st.top()]*(i-0));
                    st.pop();
                }else{
                    int k = st.top();
                    st.pop();
                    result = max(result,rectangles[k]*(i-st.top()-1));
                }
            }st.push(i);
        }
    }return result;
}int generateHistogram(vector <vector<int>> heights) {
    if(heights.empty() or heights[0].empty()){
        return 0;
    }vector <int> rectangles(heights[0].size(),0);
    int result = INT_MIN;
    for(int i=0;i<heights.size();i++){
        for(int j=0; j<heights[0].size(); j++){
            if(heights[i][j]=='0'){
                rectangles[j] = 0;
            }else{
                rectangles[j]++;
            }
        }result = max(result, getResult(rectangles));
    }return result;
}int main() {
    vector <vector<int>> heights = {{1,0,1,0,0},{1,0,1,1,1},{1,1,1,1,1},{1,0,0,1,0}};
    cout<<generateHistogram(heights);
    return 0;
}*/

//Q) HouseRobbery-1:
/*#include <iostream>
#include <vector>
using namespace std;
vector <vector<int>> dp;
int getResult(int idx, int flag,vector<int> nums){
    if(idx>=nums.size()){
        return 0;
    }if(dp[idx][flag]!=-1){
        return dp[idx][flag];
    }if(flag){
        return dp[idx][flag] = getResult(idx+1,0,nums);
    }else{
        return dp[idx][flag] = max(nums[idx]+getResult(idx+1,1,nums),getResult(idx+1,0,nums));
    }
}int main() {
    vector <int> nums = {1,2,3,1};
    dp.clear();
    dp.resize(105,vector<int> (2,-1));
    cout<<getResult(0,0,nums)<<endl;
    return 0;
}*/

//Q) HouseRobbery-2:
/*#include <iostream>
#include <vector>
using namespace std;
vector <vector<int>> dp;
int getResult(int idx, int flag,vector<int> nums){
    if(idx>=nums.size()){
        return 0;
    }if(dp[idx][flag]!=-1){
        return dp[idx][flag];
    }if(flag){
        return dp[idx][flag] = getResult(idx+1,0,nums);
    }else{
        return dp[idx][flag] = max(nums[idx]+getResult(idx+1,1,nums),getResult(idx+1,0,nums));
    }
}int main() {
    vector <int> nums = {1,2,3};
    vector <int> nums_first;
    vector <int> nums_last;
    for(int i=0; i<nums.size(); i++){
        if(i!=nums.size()-1){
            nums_first.push_back(nums[i]);
        }if(i!=0){
            nums_last.push_back(nums[i]);
        }
    }dp.clear();
    dp.resize(105,vector<int> (2,-1));
    int result_1 = getResult(0,0,nums_first);
    dp.clear();
    dp.resize(105,vector<int> (2,-1));
    int result_2 = getResult(0,0,nums_last);
    int result = max(result_1, result_2);
    cout<<result<<endl;
    return 0;
}*/

//Q) HouseRobbery-3:
/*#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};unordered_map <TreeNode*, vector<int>> dp;
int getResult(TreeNode* root, int flag){
    if(root==NULL){
        return 0;
    }if(dp.find(root)!=NULL and dp[root][flag]!=-1){
        return dp[root][flag];
    }if(flag){
        return dp[root][flag] = getResult(root->left,0)+getResult(root->right,0);
    }else{
        return dp[root][flag] = max(root->val+getResult(root->left,1)+getResult(root->right,1),getResult(root->left,0)+getResult(root->right,0));
    }
}void initialize_dp(TreeNode* root){
    if(root!=NULL){
        dp.emplace(root, vector<int>(2,-1));
    }if(root->left!=NULL){
        initialize_dp(root->left);
    }if(root->right!=NULL){
        initialize_dp(root->right);
    }return;
}int main(){
    TreeNode* root = new TreeNode(3);
    root->right = new TreeNode(3);
    root->left = new TreeNode(2);
    root->right->left = new TreeNode(1);
    root->left->right = new TreeNode(3);
    initialize_dp(root);
    cout<<getResult(root,0);
    return 0;
}*/

//Q)LongestCommonSubSequence:
// Recursive Solution:
/*#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;
int checkIsCommon(string substr, string str){
    if(substr.empty()){
        return 1;
    }int flag;
    int k = 0;
    for(int i=0; i<substr.length(); i++) {
        flag = 0;
        for(int j=0; j<str.length(); j++){
            if(str[j]==substr[i] and k<=j){
                flag = 1;
                k = j+1;
                break;
            }
        }if(!flag){
            break;
        }
    }if(flag){
        return 1;
    }return 0;
}int getResult(int idx, string str1, string str2, string substr){
    int ans = 0;
    if(idx==str1.length()){
        if(checkIsCommon(substr,str2)){
            ans = substr.length();
        }return ans;
    }return max(getResult(idx+1,str1,str2,substr+str1[idx]),getResult(idx+1,str1,str2,substr));
}int main(){
    string str1 = "papmretkborsrurgtina";
    string str2 = "nsnupotstmnkfcfavaxgl";
    string substr = "";
    cout<<getResult(0,str1,str2,substr);
    return 0;
}
*/

// DP Tabulation Solution:
/*#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector <vector<int>> dp;
int getResult(string str1, string str2){
    for(int i=1; i<=str1.size(); i++){
        for(int j=1; j<=str2.size(); j++){
            if(str1[i-1]==str2[j-1]){
                dp[i][j] = dp[i-1][j-1]+1;
            }else{
                dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
            }
        }
    }return dp[str1.size()][str2.size()];
}int main() {
    string str1 = "nshjnb";
    string str2 = "vmk";
    dp.clear();
    dp.resize(str1.size()+1,vector<int>(str2.size()+1,0));
    cout<<getResult(str1, str2);
    return 0;
}*/

// Q) There are n stairs, a person standing at the bottom wants to reach the top. The person can climb either
// 1,2,3...m stairs at a time where m is a user given integer. Count the number of ways the person can reach the
// top.

/*#include<iostream>
#include <vector>
using namespace std;
vector <int> dp;
int getResult(int n,int m,int l){
    if(l>n){
        return 0;
    }if(l==n){
        return 1;
    }if(dp[l]!=-1){
        return dp[l];
    }int ans = 0;
    for(int i=1; i<=m; i++){
        ans += getResult(n,m,l+i);
    }return dp[l]=ans;
}int main(){
    int n,m;
    cin>>n>>m;
    dp.clear();
    dp.resize(n+1, -1);
    cout<<getResult(n,m,0);
    return 0;
}*/

//Q) The Tribonacci sequence Tn is defined as follows:
// T0 = 0, T1 = 1, T2 = 1, and Tn+3 = Tn + Tn+1 + Tn+2 for n >= 0.
// Given n, return the value of nth tribonacci number.

/*#include <iostream>
#include <vector>
using namespace std;
vector <int> dp;
int getResult(int n){
    if(n==0){
        return 0;
    }else if(n==1){
        return 1;
    }else if(n==2){
        return 1;
    }else if(dp[n]!=-1){
        return dp[n];
    }else {
        return dp[n] = getResult(n-3)+getResult(n-2)+getResult(n-1);
    }
}int main() {
    int n;
    cin>>n;
    dp.clear();
    dp.resize(n+1,-1);
    cout<<getResult(n);
    return 0;
}*/

// Q) Given a set of positive integers S, partition set S into two subsets, S1 and S2, such that the difference
// between the sum of elements in S1 and S2 is minimized. The solution should return the minimum absolute
// difference between the sum of elements of two partitions.

/*#include <iostream>
#include <vector>
using namespace std;
vector <vector<int>> dp;
int getResult(vector <int> set, int sum, int subSum, int idx){
   if(dp[subSum][idx]!=-1){
       return dp[subSum][idx];
   }if(idx==set.size()){
       if(subSum==sum){
           return sum;
       }return abs(sum-subSum);
   }return dp[subSum][idx] = min(getResult(set,sum,subSum+set[idx],idx+1),getResult(set,sum,subSum,idx+1));
}int main() {
    vector <int> set = {3,9,7,3};
    int sum = 0;
    dp.clear();
    for(int val: set){
        sum += val;
    }dp.resize(sum+1,vector<int>(set.size()+1,-1));
    cout<<getResult(set,sum,0,0);
    return 0;
}*/

// Q)You are given an integer array nums of 2 * n integers. You need to partition nums into 
//two arrays of length n to minimize the absolute difference of the sums of the arrays. 
//To partition nums, put each element of nums into one of the two arrays.
//Return the minimum possible absolute difference.
// LC submission:
// class Solution {
// public:
//     unordered_map<string, int> memo;
//     int getResult(vector <int> set, int sum, int subSum, int idx, int n){
//         if(idx==set.size()){
//             if(n==set.size()/2){
//                 return abs(sum-2*subSum);
//             }return INT_MAX;
//         }string key = to_string(idx) + "#" + to_string(subSum) + "#" + to_string(n);
//         if (memo.find(key) != memo.end()) {
//             return memo[key];
//         }return  memo[key] = min(getResult(set,sum,subSum+set[idx],idx+1,n+1),getResult(set,sum,subSum,idx+1,n));
//     }int minimumDifference(vector<int>& nums) {
//         int sum = 0;
//         for(int val: nums){
//             sum += val;
//         }return getResult(nums,sum,0,0,0);
//     }
// };

// Recursive Approach:
// LC submission:
/*class Solution {
public:
    int getResult(vector <int> set, int sum, int subSum, int idx, int n){
        if(idx==set.size()){
            if(n==set.size()/2){
                return abs(sum-2*subSum);
            }return INT_MAX;
        }return  min(getResult(set,sum,subSum+set[idx],idx+1,n+1),getResult(set,sum,subSum,idx+1,n));
    }int minimumDifference(vector<int>& nums) {
        int sum = 0;
        for(int val: nums){
            sum += val;
        }return getResult(nums,sum,0,0,0);
    }
};*/


// Iterative Approach
// CSES Accepted:
/*#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int countSetBits(int n){
    int count = 0;
    while(n) {
        n = n & (n-1);
        count ++;
    }return count;
}int getResult(vector <int> set) {
    int ans = INT_MAX;
    int sum = 0;
    for(int val: set){
        sum += val;
    }for(int i=0;i<(1<<set.size());i++){
        if(countSetBits(i)==set.size()/2){
            int subSum = 0;
            for(int j=0; j<set.size();j++){
                if(i & (1<<j)){
                    subSum += set[j];
                }
            }ans = min(ans,abs(sum-2*subSum));
        }
    }return ans;
}
int main() {
    vector <int> set = {3,9,7,3};
    cout<<getResult(set);
    return 0;
}*/

// Meet in the Middle:
/*#include <iostream>
#include<bits/stdc++.h>
#include <vector>
#include <unordered_map>
using namespace std;
struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};unordered_map <int, int, custom_hash> subSum;
int getResult(vector <int> set, int n, int k){
    int n1 = n/2;
    int n2 = n-n1;
    for(int i=0; i<(1<<n1); i++){
        int x = 0;
        for(int j=0; j<n1; j++){
            if(i & 1<<j){
                x+=set[j];
            }
        }if(subSum.find(x)==subSum.end()){
            subSum[x] = 1;
        }else {
            subSum[x]++;
        }
    }int ans = 0;
    for(int i=0; i<(1<<n2); i++){
        int y = 0; 
        for(int j=n1; j<n; j++){
            if(i & (1<<(j-n1))){
                y += set[j];
            }
        }if(subSum.find(k-y)!=subSum.end()){
            ans += subSum[k-y];
        }
    }return ans;
}int main() {
    int n,k;
    cin>>n>>k;
    vector <int> set(n);
    for(int i=0; i<n; i++){
        cin>>set[i];
    }cout<<getResult(set,n,k);
    return 0;
}*/

/*#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
void getSubsum(int start, int end, vector <int> nums,unordered_map <int,int> &subSum,int sum){
    if(start==end){
        if(subSum.find(sum)==subSum.end()){
            subSum[sum] = 1;
        }else{
            subSum[sum] ++;
        }return;
    }getSubsum(start+1,end,nums,subSum,sum);
    getSubsum(start+1,end,nums,subSum,sum+nums[start]);
    return;
}int getResult(int n, int k, vector <int> nums){
    int n1 = n/2;
    unordered_map <int,int> subSum1, subSum2;
    getSubsum(0,n1,nums,subSum1,0);
    getSubsum(n1,n,nums,subSum2,0);
    int ans = 0;
    for(auto key_val: subSum1){
        ans += key_val.second*(subSum2[k-key_val.first]);
    }return ans;
}int main() {
    int n,k;
    cin>>n>>k;
    vector <int> nums(n);
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }cout<<getResult(n,k,nums);
    return 0;
}*/

// Closest Subsequence Sum:
// LC Accepted:
/*class Solution {
public:
    int getResult(vector<int> set, int goal){
        int n = set.size();
        int n1 = n/2;
        int n2 = n-n1;
        vector <int> subSums1(1<<n1);
        vector <int> subSums2(1<<n2);
        for(int i=0; i<(1<<n1); i++){
            int subSum1 = 0;
            for(int j=0; j<n1; j++){
                if(i & 1<<j){
                    subSum1+=set[j];
                }
            }subSums1[i] = subSum1;
        }int ans = INT_MAX;
        sort(subSums1.begin(),subSums1.end());
        for(int i=0; i<(1<<n2); i++){
            int subSum2 = 0; 
            for(int j=n1; j<n; j++){
                if(i & (1<<(j-n1))){
                    subSum2 += set[j];
                }
            }auto itr = lower_bound(subSums1.begin(),subSums1.end(),goal-subSum2);
            if(itr!=subSums1.end()){
                ans = min(ans,abs(*itr+subSum2-goal));
            }if(itr!=subSums1.begin()){
                itr--;
                ans = min(ans,abs(*itr+subSum2-goal));
            }
        }return ans;
    }int minAbsDifference(vector<int>& nums, int goal) {
        return getResult(nums,goal);
    }
};

// Partition Array Into Two Arrays to Minimize Sum Difference
// LC Accepted:
class Solution {
public:
  int getResult(vector<int> set){
        int n = set.size();
        int sum  = 0;
        int n1,n2;
        n1 = n2 = n/2;
        for(int val: set){
            sum += val;
        }vector <vector<int>> subSums1(n/2+1);
        vector <vector<int>> subSums2(n/2+1);
        for(int i=0; i<(1<<n1); i++){
            int subSum1 = 0;
            int size = 0;
            for(int j=0; j<n1; j++){
                if(i & 1<<j){
                    subSum1+=set[j];
                    size++;
                }
            }subSums1[size].push_back(subSum1);
        }for(int i=0; i<(1<<n2); i++){
            int subSum2 = 0; 
            int size = 0;
            for(int j=n1; j<n; j++){
                if(i & (1<<(j-n1))){
                    subSum2 += set[j];
                    size++;
                }
            }subSums2[size].push_back(subSum2);
        }int ans = INT_MAX;
        for(int i=0; i<=n/2; i++){
            if(i>=0 and n/2-i<=n/2 and !subSums1[i].empty() and !subSums2[n/2-i].empty()){
                sort(subSums2[n/2-i].begin(),subSums2[n/2-i].end());
                for(int val: subSums1[i]){
                    auto itr = lower_bound(subSums2[n/2-i].begin(),subSums2[n/2-i].end(),sum/2-val);
                    if(itr!=subSums2[n/2-i].end()){
                        ans = min(ans,abs(sum-2*(*itr+val)));
                    }if(itr!=subSums2[n/2-i].begin()){
                        itr--;
                        ans = min(ans,abs(sum-2*(*itr+val)));
                    }if (ans == 0) {
                        return ans;  
                    }
                }
            }
        }return ans; 
}int minimumDifference(vector<int>& nums) {
       return getResult(nums);
    }
};
*/

//Q)Consecutive zeroes not allowed

//Layman Approach:
/*#include <iostream>
#include <bitset>
#include <string>
using namespace std;
int check(int n){
    int bin = stoi(bitset<64>(n).to_string());
    int n1 = bin;
    int n2 = bin/10;
    while((n1%10==1 and n2%10==0) or (n1%10==0 and n2%10==1) or (n1%10==0 and n2%10==0)){
        n1 /= 10;
        n2 /= 10;
        if(n1==0 and n1==0){
            break;
        }
    }if(!n1 and !n2){
        return 1;
    }return 0;
}int getResult(int n){ 
   int ans = 0;
   for(int i=0; i<=n; i++){
        ans += check(i);
   }return ans;
}int main() {
    int d;
    cin>>d;
    cout<<getResult((1<<d)-1);
    return 0;
}*/

//Fibonacci with dp Approach:
/*#include <iostream>
#include <vector>
#define ll long long
using namespace std;
vector <ll> dp;
int getResult(ll n){
    if(dp[n]!=-1){
        return dp[n];
    }if(n==0 or n==1){
        return n;
    }return dp[n] = getResult(n-1)+getResult(n-2);
}int main() {
    ll n;
    cin>>n;
    dp.clear();
    dp.resize(n+5,-1);
    cout<<getResult(n+2);
    return 0;
}*/

//Optimized Approach;
/*#include<iostream>
#include<vector>
#define ll long long
using namespace std;
vector <ll> end_zero;
vector <ll> end_one;
int getResult(ll n){
    for(ll i = 2; i<=n; i++){
        end_zero[i] = end_zero[i-1]+end_one[i-1];
        end_one[i] = end_zero[i-1];
    }return end_zero[n] + end_one[n];
}int main(){
    ll n;
    cin>>n;
    end_zero.resize(n+5);
    end_one.resize(n+5);
    end_zero[1] = 1;
    end_one[1] = 1;
    cout<<getResult(n);
    return 0;
}*/

// Given a rod of length n and a list of rod prices of length i, where 1 <= i <= n, find the optimal way to cut the
// rod into smaller rods to maximize profit.
/*#include <iostream>
#include <climits>
#include <vector>
using namespace std;
vector <int> dp;
int getResult(int n,vector <int> prices){
    if(dp[n]!=-1){
        return dp[n];
    }if(!n){
        return 0;
    }int ans = INT_MIN;
    for(int i=n; i>=1; i--){
        ans = max(ans,prices[i-1]+getResult(n-i,prices));
    }return dp[n] = ans;
}int main(){
    int n = 4;
    vector <int> prices = {1, 5, 8, 9, 10, 17, 17, 20};
    dp.clear();
    dp.resize(n+5,-1);
    cout<<getResult(n,rods,prices);
    return 0;
}*/

// Given a distance ‘dist’, count the total number of ways to cover the distance with 1, 2 and 3 steps.
/*#include <iostream>
#include <vector>
using namespace std;
vector <int> dp;
int getResult(int n){
    if(n<0){
        return 0;
    }if(dp[n]!=-1){
        return dp[n];
    }if(!n){
        return 1;
    }int ans = 0;
    for(int i=3; i>=1; i--){
        ans += getResult(n-i);
    }return dp[n] = ans;
}int main(){
    int n; 
    cin>>n;
    dp.clear();
    dp.resize(n+5,-1);
    cout<<getResult(n);
    return 0;
}*/

// Q9. Given a positive integer K, the task is to find the minimum number of operatons to the following two
// types, required to change 0 to K?
//  Add one to the operand
//  Multply the operand by 2.

/*#include <iostream>
#include <vector>
#include <climits>
using namespace std;
vector <vector<int>> dp;
int getResult(int k, int n, int ops){
    if(dp[n][ops]!=-1){
        return dp[n][ops];
    }if(k==n){
        return ops;
    }if(n>k or (n==0 and ops>1)){
        return INT_MAX;
    }return dp[n][ops] = min(getResult(k,n+1,ops+1),getResult(k,n*2,ops+1));
}int main(){
    int k;
    cin>>k;
    dp.clear();
    dp.resize(1000,vector<int>(1000,-1));
    cout<<getResult(k,0,0);
    return 0;
}*/

// Given two strings str1 and str2 and below operations that can be performed on str1. Find the minimum
// number of edits (operations) required to convert ‘str1’ and ‘str2’.
// Insert , Remove , Replace
// All of the above operations are of equal cost.
/*#include <iostream>
#include <string>
#include <unordered_map>
#include <climits>
using namespace std;
unordered_map <string,int> dp;
int getResult(string str1, string str2, int i, int j, int ops){
    string check = "#"+to_string(i)+"#"+to_string(j)+"#"+to_string(ops);
    if(dp.find(check)!=dp.end()){
        return dp[check];
    }if(i==str1.length() and j==str2.length()){
        return ops;
    }if(i == str1.length()){
        return ops + str2.length()-j;
    }if(j == str2.length()){
        return ops + str1.length()-i;
    }if(str1[i]==str2[j]){
        return dp[check] = getResult(str1,str2,i+1,j+1,ops);
    }int ans = INT_MAX;
    ans = min(ans,getResult(str1,str2,i+1,j+1,ops+1));
    ans = min(ans,getResult(str1,str2,i,j+1,ops+1));
    ans = min(ans,getResult(str1,str2,i+1,j,ops+1));
    return dp[check] = ans;
}int main(){
    string str1,str2;
    cin>>str1>>str2;
    cout<<getResult(str1,str2,0,0,0);
    return 0;
}
*/
/*#include <iostream>
#include <string>
#include <unordered_map>
#include <climits>
using namespace std;
int getResult(string str1, string str2, int i, int j){
    if(i == str1.length()){
        return str2.length()-j;
    }if(j == str2.length()){
        return str1.length()-i;
    }if(str1[i]==str2[j]){
        return getResult(str1,str2,i+1,j+1);
    }int ans = INT_MAX;
    ans = min(ans,1+getResult(str1,str2,i+1,j+1));
    ans = min(ans,1+getResult(str1,str2,i,j+1));
    ans = min(ans,1+getResult(str1,str2,i+1,j));
    return ans;
}int main(){
    string str1,str2;
    cin>>str1>>str2;
    cout<<getResult(str1,str2,0,0);
    return 0;
}*/
// Minimizing Coins:
// #include <iostream>
// #include <vector>
// #include <climits>
// #include <unordered_map>
// using namespace std;
// struct pair_hash {
//     template <class T1, class T2>
//     std::size_t operator () (const std::pair<T1, T2>& p) const {
//         auto h1 = std::hash<T1>{}(p.first);
//         auto h2 = std::hash<T2>{}(p.second);
//         return h1 ^ h2;
//     }
// };unordered_map<pair<int, int>, int, pair_hash> dp;
// int getResult(int x, vector<int> &c, int k){
//     if(dp.find({x,k})!=dp.end()){
//         return dp[{x,k}];
//     }if(x<0){
//         return INT_MAX;
//     }if(x==0){
//         return k; 
//     }int ans = INT_MAX;
//     for(int i=0; i<c.size(); i++){
//         int temp = getResult(x-c[i],c,k+1);
//         if (temp!=-1) ans = min(ans,temp);
//     }if(ans==INT_MAX){
//         return -1;
//     }return ans;
// }int main(){
//     int n,x;
//     cin>>n>>x;
//     vector <int> c(n);
//     for(int i=0; i<n; i++){
//         cin>>c[i];
//     }cout<<getResult(x,c,0);
//     return 0;
// }

// Book Shop:
// #include <iostream>
// #include <unordered_map>
// #include <vector>
// #include <climits>
// using namespace std;
// struct pair_hash {
//     template <class T1, class T2>
//     std::size_t operator () (const std::pair<T1, T2>& p) const {
//         auto h1 = std::hash<T1>{}(p.first);
//         auto h2 = std::hash<T2>{}(p.second);
//         return h1 ^ h2;
//     }
// };unordered_map<pair<int, int>, int, pair_hash> dp;
// int getResult(int x, vector<int> &h, vector<int> &s, int pg, vector <int> flag){
//     if(dp.find({x,pg})!=dp.end()){
//         return dp[{x,pg}];
//     }int ans = INT_MIN;
//     for(int i=0; i<h.size(); i++){
//         if(flag[i] and x-h[i]>=0){
//             flag[i] = 0;
//             ans = max(ans, getResult(x-h[i],h,s,pg+s[i],flag));
//             flag[i] = 1;
//         }
//     }if(ans==INT_MIN){
//         return dp[{x,pg}] = pg;
//     }return dp[{x,pg}] = ans;
// }int main(){
//     int n,x;
//     cin>>n>>x;
//     vector <int> h(n);
//     vector <int> s(n);
//     vector <int> flag(n,1);
//     for(int i=0; i<n; i++){
//         cin>>h[i];
//     }for(int j=0; j<n; j++){
//         cin>>s[j];
//     }cout<<getResult(x,h,s,0,flag);
//     return 0;
// }


// ProjectsCsesProblem:
// #include <iostream>
// #include <vector>
// #include <climits>
// #include <unordered_map>
// #define ll long long 
// using namespace std;
// vector <ll> start_day;
// vector <ll> end_day;
// vector <ll> reward;
// struct pair_hash {
//     template <class T1, class T2>
//     std::size_t operator () (const std::pair<T1, T2>& p) const {
//         auto h1 = std::hash<T1>{}(p.first);
//         auto h2 = std::hash<T2>{}(p.second);
//         return h1 ^ h2;
//     }
// };unordered_map<pair<ll, ll>, ll, pair_hash> dp;
// ll getResult(ll current_day, ll earning, vector<ll> flag){
//     if(dp.find({current_day,earning})!=dp.end()){
//         return dp[{current_day,earning}];
//     }ll ans = INT_MIN;
//     int check = 0;
//     for(ll i=0; i<start_day.size(); i++){
//         if(flag[i] and current_day<start_day[i]){
//             flag[i] = 0; 
//             check = 1;
//             ans = max(ans,getResult(end_day[i],earning+reward[i],flag));
//             flag[i] = 1;
//         }
//     }if(!check){
//         return dp[{current_day,earning}] = earning;
//     }return  dp[{current_day,earning}] = ans;
// }int main() {
//     ll n;
//     cin>>n;
//     start_day.resize(n);
//     end_day.resize(n);
//     reward.resize(n);
//     vector <ll> flag(n,1);
//     int current_day = 0;
//     for(ll i=0; i<n; i++) {
//         cin>>start_day[i];
//         cin>>end_day[i];
//         cin>>reward[i];
//     }cout<<getResult(current_day,0,flag);
//     return 0;
// }

// Cses Money Sums problem:
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// vector <int> sums;
// void getResult(int idx, int sum, vector <int> coins){
   
//     if(idx==coins.size()){
//         if(sum and find(sums.begin(), sums.end(), sum)==sums.end()) {
//             sums.push_back(sum);
//         }return;
//     }getResult(idx+1, sum+coins[idx], coins);
//     getResult(idx+1,sum,coins);
//     return;
// }int main() {
//     int n;
//     cin>>n;
//     vector <int> coins(n);
//     for(int i=0; i<n; i++){
//         cin>>coins[i];
//     }getResult(0,0,coins);
//     sort(sums.begin(),sums.end());
//     for(int i=0; i<sums.size(); i++){
//         cout<<sums[i]<<" ";
//     }return 0;
// }

// Grid Paths:
/*#include <iostream>
#include <vector>
using namespace std;
int n;
int mod = 1000000000+7;
vector <vector<char>> grid;
vector <vector<int>> dp;
int getResult(int i, int j){
    if(dp[i][j]!=-1){
        return dp[i][j];
    }if(i==n-1 and j==n-1){
        return 1;
    }int a,b;
    a = b = 0;
    if(i+1<n and grid[i+1][j]!='*'){
       a = getResult(i+1,j);
    }if(j+1<n and grid[i][j+1]!='*'){
       b = getResult(i,j+1);
    }return dp[i][j]=(a+b)%mod;
}int main(){
    cin>>n;
    grid.resize(n,vector<char> (n));
    dp.resize(n, vector <int> (n,-1));
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++){
            cin>>grid[i][j];
        }
    }if(grid[0][0]=='*'){
        cout<<0;
    }else {
        cout<<getResult(0,0);
    }return 0;
}*/

// Removal Game:

// #include <iostream>
// #include <vector>
// #include <climits>
// #include <algorithm>
// using namespace std;
// int n;
// vector <int> list;
// int getResult(int i,int j,vector <int> play,int score){
//     if(find(play.begin(),play.end(),1)==play.end()){
//         return score;
//     }if(i>=n or i<0 or j>=n or j<0){
//         return 0;
//     }int a,b,c,d;
//     a = b = c = d = INT_MIN;
//     // case-1:
//     play[i] = 0;
//     if(i+1<n){
//         play[i+1] = 0;
//     }a = getResult(i+2,j,play,score+list[i]);
//     play[i] = 1;
//     if(i+1<n){
//         play[i+1] = 1;
//     }// case-2:
//     play[i] = 0;
//     play[j] = 0;
//     b = getResult(i+1,j-1,play,score+list[i]);
//     play[i] = 1;
//     play[j] = 1;
//     // case-3:
//     play[j] = 0;
//     play[i] = 0;
//     c = getResult(i+1,j-1,play,score+list[j]);
//     play[j] = 1;
//     play[i] = 1;
//     // case-4:
//     play[j] = 0;
//     if(j-1>=0){
//         play[j-1] = 0;
//     }d = getResult(i,j-2,play,score+list[j]);
//     play[j] = 1;
//     if(j-1>=0){
//         play[j-1] = 1;
//     }return max(max(a,b),max(c,d));
// }int main() {
//     cin>>n;
//     list.resize(n);
//     for(int i=0; i<n; i++){
//         cin>>list[i];
//     }vector<int> play(n,1);
//     cout<<getResult(0,n-1,play,0);
//     return 0;
// }
