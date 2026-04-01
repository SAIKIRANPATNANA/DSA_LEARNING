//Q) Fibonacci problem statement through a recursive approach:
/*#include <iostream>
#include <vector> 
#include <algorithm>
using namespace std;
int fibonacci(int n, vector <int> &fib, vector <int> &flag) {
    if(n==0 or n==1) {
        if(flag[n]!=-1) {
            return flag[n];
        }else{
            flag[n] = n;
            fib.push_back(n);
            return n;
        }
    }if(flag[n]!=-1) {
        return flag[n];
    }fib.push_back(fibonacci(n-1,fib,flag)+fibonacci(n-2,fib,flag));
    flag[n] = fib.back();
    return flag[n];
}
int main() {
    int n;
    cout<<"enter n: ";
    cin>>n;
    vector <int> fib;
    vector <int> flag;
    for(int i=0; i<=n; i++) {
        flag.push_back(-1);
    }fibonacci(n,fib,flag);
    sort(fib.begin(), fib.end());
    for(int i=0; i<fib.size(); i++) {
        cout<<fib[i]<<" ";
    }return 0;
}*/

//TopDown Approach(memoization/recursive manner):
/*#include <iostream>
#include <vector>
using namespace std;
vector <int> dp;
int fibonacci(int n) {
    if(n==0 or n==1) {
      if(dp[n]!=-1){
        return dp[n];
      }else{
          dp[n] = n;
      }return dp[n];
    }else if(dp[n]!=-1) {
        return dp[n];
    }return dp[n] = (fibonacci(n-1) + fibonacci(n-2));
}
int main() {
    int n;
    cout<<"enter n: ";
    cin>>n;
    dp.resize(n+1,-1);
    cout<<fibonacci(n);
    return 0;
}*/

// BottomUp Approach(Tabulation/Iterative Manner):

// aliter-1:
/*#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector <int> dp;
    int n;
    cout<<"enter n: ";
    cin>>n;
    dp.resize(n+1);
    dp[0] = 0;
    dp[1] = 1;
    for(int i=2; i<=n; i++) {
        dp[i] = dp[i-1] + dp[i-2];
    }cout<<dp[n];
    return 0;
}*/

// aliter-2:
/*#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter n: ";
    cin>>n;
    int a = 0;
    int b = 1;
    int c;
    int i = 2;
    while(i<=n) {
        c = a+b;
        a = b;
        b = c;
        i++;
    }cout<<c;
    return 0;
}*/


// Q) You are a professional robber planning to rob houses along a street. Each house has a certain amount of
// money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have
// security systems connected and it will automatically contact the police if two adjacent houses were broken
// into on the same night.
// Given an integer array nums representing the amount of money of each house, return the maximum amount
// of money you can rob tonight without alerting the police.

// Memoization Approach:
/*#include <iostream>
#include <vector>
using namespace std;
vector <int> dp;
int maxAmtOfMoney(int i, vector <int> v) {
    if(i>=v.size()) {
        return 0;
    }if(dp[i]!=-1) {
        return dp[i];
    }return dp[i]=max(v[i]+maxAmtOfMoney(i+2,v),maxAmtOfMoney(i+1,v));
}
int main() {
    vector <int> v = {2,7,9,3,1};
    dp.resize(v.size(), -1);
    cout<<maxAmtOfMoney(0,v);
    return 0;
}*/

// Tabulation Approach:
/*#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector <int> v = {2,7,9,3,1};
    vector <int> dp(v.size(),-1);
    dp[v.size()-1] = v[v.size()-1];
    dp[v.size()-2] = max(v[v.size()-1], v[v.size()-2]);
    for(int i=v.size()-2; i>=0; i--) {
        dp[i] = max(v[i]+dp[i+2], dp[i+1]);
    }cout<<dp[0];
    return 0; 
}
*/

// Q)A message containing letters from A-Z can be encoded into numbers using the following mapping:
// 'A' -> "1"
// 'B' -> "2"
// JJ.
// 'Z' -> "26"
// To decode an encoded message, all the digits must be grouped then mapped back into letters using the
// reverse of the mapping above (there may be multiple ways)J For example, "11106" can be mapped into:
// "AAJF" with the grouping (1 1 10 6)
// "KJF" with the grouping (11 10 6)
// Note that the grouping (1 11 06) is invalid because "06" cannot be mapped into 'F' since "6" is different from "06".
// Given a string s containing only digits, return the number of ways to decode it.

// Ordinary Recursive Approach:
/*#include <iostream>
#include <string>
using namespace std;
int getNumberOfDecodings(string msg, int idx) {
    if(idx>=msg.size()) {
        return 0;
    }else if(idx==msg.size()-1) {
        if(msg[idx]!='0') {
            return 1;
        }return 0;
    }else if(msg[idx]=='0'){
        return 0;
    }else {
        int isDoubleDigitCodePossible = stoi(msg.substr(idx,2))<=26;
        return getNumberOfDecodings(msg, idx+1) + (isDoubleDigitCodePossible? (idx+2>=msg.size()? 1 : getNumberOfDecodings(msg, idx+2)) : 0);
    }
}
int main() {
    string msg = "11206";
    cout<<"no. of decodings possible is "<<getNumberOfDecodings(msg,0);
    return 0;
}*/

//TopDown Approach(Memoization):
/*#include <string>
#include <vector>
#include <iostream>
using namespace std;
vector <int> dp(100,-1);
int getNumberOfDecodings(string msg, int idx) {
    if(idx>=msg.size()) {
        return 0;
    }else if(idx==msg.size()-1) {
        if(msg[idx]!='0') {
            return 1;
        }return 0;
    }else if(msg[idx]=='0'){
        return 0;
    }else if(dp[idx]!=-1){
        return dp[idx];
    }else {
        int isDoubleDigitCodePossible = stoi(msg.substr(idx,2))<=26;
        return dp[idx] = getNumberOfDecodings(msg, idx+1) + (isDoubleDigitCodePossible? (idx+2>=msg.size()? 1 : getNumberOfDecodings(msg, idx+2)) : 0);
    }
}
int main() {
    string msg = "11106";
    cout<<"no. of decodings possible is "<<getNumberOfDecodings(msg,0);
    return 0;
}*/

// BottomUp Approach(Tabulation):
/*#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector <int> dp(100,-1);
int getNumberOfDecodings(string msg) {
    int n = msg.size();
    dp[n-1] = (msg[n-1] != '0'? 1: 0);
    dp[n-2] = (msg[n-2] != '0'? (1+(stoi(msg.substr(n-2,2))<=26)): 0); 
    for(int i=n-3; i>=0; i--) {
        int isDoubleDigitCodePossible = (msg[i]!='0'? stoi(msg.substr(i,2))<=26 : 0);
        if(msg[i]!='0') {
            dp[i] =  dp[i+1] + (isDoubleDigitCodePossible? dp[i+2] : 0);
        }else {
            dp[i] = 0;
        }
    }return dp[0];
}
int main() {
    string msg = "226";
    cout<<"no. of decodings possible is "<<getNumberOfDecodings(msg);
    return 0;
}*/

// Q) There are N stones, numbered 1,2,...,N. The height of ith stone is hi.
// There is a frog who is initially on Stone 1. He will repeat an action some number of times to reach Stone N. The
// action is that if the frog is currently on Stone i, it jumps to one of the following: Stone i+1,i+2,...,i+K. Here, a cost
// of |hi - hj| is incurred, where j is the stone to land on.
// Find the minimum possible total cost incurred before the frog reaches Stone N.

// TopDown Approach:
/*#include <iostream>
#include <vector>
using namespace std; 
vector <int> dp(10000,-1);
int minimumCost(vector <int> heights, int i, int k) {
    if(i==heights.size()-1) {
        return 0;
    }if(dp[i]!=-1) {
        return dp[i];
    }int ans = 897534582;    
    for(int j=1; j<=k; j++){
        if(i+j>=heights.size()) {
            break;
        }ans = min(ans, abs(heights[i]-heights[i+j])+minimumCost(heights,i+j, k));
    }return dp[i] = ans;
}
int main() {
    vector <int> heights = {10, 20, 10};
    int k = 1;
    cout<<minimumCost(heights,0,k);
    return 0;
}*/

// BottomUp Approach(Tabulation):
/*#include <iostream>
#include <vector>
using namespace std;
vector <int> dp(7824,9999999);
int minimumCost(vector <int> heights, int k) {
    int n = heights.size();
    dp[n-1] = 0;
    for(int i=n-2; i>=0; i--) {
        for(int j=1; j<=k; j++) {
            if(i+j>=n) {
                break;
            }dp[i] = min(dp[i], abs(heights[i]-heights[i+j])+dp[i+j]);
        }
    }return dp[0];
}
int main() {
    vector <int> heights = {10,20,10};
    int k = 1;
    cout<<minimumCost(heights,k);
    return 0;
}*/

// Q) Given an integer array of coins[ ] of size N representing different types of currency and an integer sum,
// The task is to find the number of ways to make a sum by using different combinations from coins[]. Assume
// that you have an infinite supply of each type of coin.
// coinCombinations - II:
/*#include <iostream>
#include <vector>
using namespace std;
int getNumberOfChanges(vector <int> coins, int sum) {
    vector <int> dp(sum+1,0);
    dp[0] = 1;
    for(int i=0; i<coins.size(); i++){
        for(int j=1; j<=sum; j++) {
            if(coins[i]>j) {
                continue;
            }else {
                dp[j] += dp[j-coins[i]];
            }
        }// for(int k=0; k<=sum; k++) {
        //     cout<<dp[k]<<" ";
        // }cout<<endl;
    }return dp[sum];
}int main() {
    vector <int> coins = {1,2,3};
    int sum = 4;
    cout<<getNumberOfChanges(coins,sum);
    return 0;
}*/

//Q) coinCombinations-I:
/*#include <iostream>
#include <vector>
using namespace std;
int result = 0;
void getPossibilities(vector <int> coins, int sum) {
    if(sum == 0){
        result ++;
        return;
    }if(sum<0) {
        return;
    }for(int i=0; i<coins.size(); i++) {
        getPossibilities(coins,sum - coins[i]);
    }return;
}int main() {
    int n;
    cin>>n;
    vector <int> coins; 
    for(int i=0; i<n; i++) {
        int coin;
        cin>>coin;
        coins.push_back(coin);
    }int sum;
    cin>>sum;
    getPossibilities(coins,sum);
    cout<<result;
    return 0;
}*/
// topDown Approach;
/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector <int> dp;
int mod = 1000000007;
int getPossibilities(vector <int> coins, int sum) {
    if(sum == 0){
        return 1;
    }if(sum<0) {
        return 0;
    }if(dp[sum]!=-1) {
        return dp[sum];
    }int result = 0;
    for(int i=0; i<coins.size(); i++) {
        result = (result + getPossibilities(coins,sum - coins[i]))%mod;
    }return dp[sum] = result;
}int main() {
    int n;
    cin>>n;
    int sum;
    cin>>sum;
    vector <int> coins; 
    for(int i=0; i<n; i++) {
        int coin;
        cin>>coin;
        coins.push_back(coin);
    }sort(coins.begin(),coins.end());
    dp.resize(sum+1,-1);
    cout<<getPossibilities(coins,sum);
    return 0;
}*/
// BottomUp Approach:
/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int getPossibilities(vector<int> coins, int sum) {
    const int mod = 1000000007;
    vector<int> dp(sum + 1, 0);
    dp[0] = 1;
    sort(coins.begin(), coins.end());
    for (int i = 1; i <= sum; i++) {
        for (int j = 0; j < coins.size(); j++) {
            if (i - coins[j] < 0) {
                break;
            } else {
                dp[i] = (dp[i] + dp[i - coins[j]]) % mod;
            }
        }
    }return dp[sum];
}int main() {
    int n, sum;
    cin >> n >> sum;
    vector<int> coins(n);
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }cout << getPossibilities(coins, sum);
    return 0;
}
*/
// /*#include <iostream>
// #include <vector>
// using namespace std;
// vector <int> dp;
// int getPossibilities(vector <int> coins, int sum, int req, int i) {
//     if(i==coins.size()) {
//         return dp[sum];
//     }if(req<=sum and req-coins[i]>=0) {
//     dp[req] += dp[req-coins[i]];
//     }if(req==sum) {
//         return getPossibilities(coins, sum, 0, i++);
//     }return getPossibilities(coins, sum, req++, i);
// }int main() {
//     int n,sum;
//     cin>>n,sum;
//     vector <int> coins(n,0);
//     for(int i=0; i<n; i++) {
//         cin>>coins[i];
//     }dp.resize(sum+1, 0);
//     cout<<getPossibilities(coins,sum,0,0);
//     return 0;
// }*/

// #include <iostream>
// #include <vector>
// using namespace std;
// vector<int> dp;
// int getPossibilities(vector<int> &coins, int sum, int i) {
//     if(sum == 0) return 1;
//     if(sum < 0 || i >= coins.size()) return 0;
//     if(dp[sum] != -1) return dp[sum];
//     dp[sum] = getPossibilities(coins, sum - coins[i], i) + getPossibilities(coins, sum, i + 1);
//     return dp[sum];
// }int main() {
//     int n, sum;
//     cin >> n >> sum;
//     vector<int> coins(n, 0);
//     for(int i = 0; i < n; i++) {
//         cin >> coins[i];
//     }dp.resize(sum+1, -1);
//     cout << getPossibilities(coins, sum, 0) << endl;
//     return 0;
// }

//Q) coinCombinations - II:
/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int getPossibilities(vector <int> coins, int sum) {
    int mod = 1000000007;
    vector <int> dp(sum+1, 0);
    dp[0] = 1;
    for(int i=0; i<coins.size(); i++) {
        for(int j=1; j<=sum; j++) {
            if(j-coins[i]>=0) {
                dp[j] = (dp[j] + dp[j-coins[i]])%mod;
            }
        }
    }return dp[sum];
}int main() {
    int n,sum;
    cin>>n>>sum;
    vector <int> coins(n, 0);
    for(int i=0; i<n; i++) {
        cin>>coins[i];
    }sort(coins.begin(), coins.end());
    cout<<getPossibilities(coins,sum);
    return 0;
}*/

//Q)diceCombinations:
/*#include <iostream>
#include <vector>
using namespace std;
vector <int> dp;
constexpr int mod = 1000000007;
int getPossibilities(int sum) {
    if(sum==0) {
        return 1;
    }if(sum<0) {
        return 0;
    }if(dp[sum]!=-1) {
        return dp[sum];
    }int result = 0;
    for(int i=1; i<=6; i++) {
        result = (result+getPossibilities(sum-i))%mod;
    }return dp[sum] = result;
}int main() {
    int sum;
    cin>>sum;
    dp.resize(sum+1, -1);
    cout<<getPossibilities(sum);
    return 0;
}*/

/*#include <iostream>
#include <vector>
using namespace std;
int mod = 1000000007;
vector <int> dp;
int getPossibilities(int sum) {
    dp[0] = 1;
    for(int i=1; i<=sum; i++) {
        for(int j=1; j<=6; j++) {
            if(i-j>=0) {
            dp[i] = (dp[i]+dp[i-j])%mod;
            }
        }
    }return dp[sum];
}int main() {
    int sum;
    cin>>sum;
    dp.resize(sum+1,0);
    cout<<getPossibilities(sum);
    return 0;
}*/
//Q) Given an integer array of coins[ ] of size N representing different types of currency and an integer sum,
// The task is to find the combination with minimum number of coins to make a sum by using different combinations from coins[]. Assume
// that you have an infinite supply of each type of coin.
// #include <iostream>
// #include <vector>
// using namespace std;
// int result(vector <int> coins, int sum) {
//     vector <int> dp(sum+1,0);
//     for(int j=0; j<=sum; j++) {
//         dp[j] = j/coins[0];
//     }
//     // for(int k=0; k<=sum; k++) {
//     //         cout<<dp[k]<<" ";
//     // }cout<<endl;
//     for(int i=1; i<coins.size(); i++) {
//         for(int j=1; j<=sum; j++) {
//             if(coins[i]>dp[j]) {
//                 continue;
//             }else {
//                 dp[j] = min(dp[j],1+dp[j-coins[i]]);
//             }
//         }
//         // for(int k=0; k<=sum; k++) {
//         //     cout<<dp[k]<<" ";
//         // }cout<<endl;
//     }return dp[sum];
// }
// 3
// 1 3 1 3
// 4 6 4 6
// 2 5 2 5

// int main() {
//     vector <int> coins = {1,2,3};
//     int sum = 4;
//     cout<<result(coins,sum);
//     return 0;
// }


//DP continues:
//Q) Given a triangle array, return the minimum path sum from top to bottom.For each step, you may move to
// an adjacent number of the row below. More formally, if you are on index i on the current row, you may move
// to either index i or index i + 1 on the next row.
// BruteForce Way:
/*#include <iostream>
#include <vector>
using namespace std;
int getMinPathSum(vector <vector <int>> triangle) {
    int minSum = 0;
    int j = 0;
    for(int i=0; i<triangle.size(); i++) {
        minSum += triangle[i][j];
        if(i+1<triangle.size() and triangle[i+1][j+1]<triangle[i+1][j]) {
            j++;
        }
    }return minSum;
}
int main() {
    int n;
    cout<<"enter n: ";
    cin>>n;
    vector <vector <int>> triangle(n);
    cout<<"enter triangle: "<<endl;
    for(int i=0; i<n; i++) {
        for(int j=0; j<=i; j++) {
            int temp;
            cin>>temp;
            triangle[i].push_back(temp);
        }
    }cout<<"MINIMUM PATH SUM "<<getMinPathSum(triangle);
    return 0;
}
*/
// Recursive Approach:
/*#include <iostream>
#include <vector>
using namespace std;
int getMinPathSum(int r,int c,vector <vector <int>> triangle) {
    if(r==triangle.size()-1) {
        return triangle[r][c];
    }return triangle[r][c] + min(getMinPathSum(r+1,c,triangle), getMinPathSum(r+1,c+1,triangle));
}
int main() {
    int n;
    cout<<"enter n: ";
    cin>>n;
    vector <vector<int>> triangle(n);
    cout<<"enter triangle: "<<endl;
    for(int i=0; i<n; i++) {
        for(int j=0; j<=i; j++) {
            int temp;
            cin>>temp;
            triangle[i].push_back(temp);
        }
    }cout<<"MINIMUM PATH SUM = "<<getMinPathSum(0,0,triangle);
    return 0;
}*/

// Using DP -> TopDown Approach(Memoization):
/*#include <iostream>
#include <vector>
using namespace std;
vector <vector <int>> dp;
int getMinPathSum(int r,int c,vector <vector <int>> triangle) {
    if(r==triangle.size()-1) {
        return triangle[r][c];
    }if(dp[r][c]!=-1) {
        return dp[r][c];
    }return dp[r][c] = triangle[r][c] + min(getMinPathSum(r+1,c,triangle), getMinPathSum(r+1,c+1,triangle));
}
int main() {
    int n;
    cout<<"enter n: ";
    cin>>n;
    dp.resize(205, vector<int> (205,-1));
    vector <vector<int>> triangle(n);
    cout<<"enter triangle: "<<endl;
    for(int i=0; i<n; i++) {
        for(int j=0; j<=i; j++) {
            int temp;
            cin>>temp;
            triangle[i].push_back(temp);
        }
    }cout<<"MINIMUM PATH SUM = "<<getMinPathSum(0,0,triangle);
    return 0;
}*/

// Using DP -> BottomUp Approach(Tabulation):
/*#include <iostream>
#include <vector>
using namespace std;
vector <vector <int>> dp;
int getMinPathSum(vector <vector <int>> triangle) {
    dp[triangle.size()-1] = triangle[triangle.size()-1];
    for(int i=triangle.size()-2; i>=0; i--) {
        for(int j=0; j<triangle[i].size(); j++) {
            dp[i][j] = triangle[i][j] + min(dp[i+1][j], dp[i+1][j+1]);
        }
    }return dp[0][0];
}
int main() {
    int n;
    cout<<"enter n: ";
    cin>>n;
    dp.resize(205, vector<int> (205,-1));
    vector <vector<int>> triangle(n);
    cout<<"enter triangle: "<<endl;
    for(int i=0; i<n; i++) {
        for(int j=0; j<=i; j++) {
            int temp;
            cin>>temp;
            triangle[i].push_back(temp);
        }
    }cout<<"MINIMUM PATH SUM = "<<getMinPathSum(triangle);
    return 0;
}*/

// Q)Given two strings text1 and text2, return the length of their longest common subsequence. If there is no
// common subsequence, return 0.
// A subsequence of a string is a new string generated from the original string with some characters (can be
// none) deleted without changing the relative order of the remaining characters.

// Memoization:
/*#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector <vector<int>> dp;
int getLengthOfCommonSequence(string &s1, string &s2, int i, int j) {
    if(i==s1.length() or j==s2.length()){
        return 0;
    }if(s1[i]!=s2[j]) {
        return dp[i][j] = max(getLengthOfCommonSequence(s1,s2,i,j+1), getLengthOfCommonSequence(s1,s2,i+1,j));
    }return dp[i][j] = 1 + getLengthOfCommonSequence(s1,s2,i+1,j+1);
}
int main() {
    string s1 = "abcde";
    string s2 = "ace";
    dp.clear();
    dp.resize(1005, vector <int> (1005, -1));
    cout<<getLengthOfCommonSequence(s1,s2,0,0);
    return 0;
}*/

//Tabulation:
/*#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector <vector<int>> dp;
int getLengthOfCommonSequence(string &s1, string &s2){
    dp.clear();
    dp.resize(1005, vector <int> (1005, 0));
    int m = s1.length();
    int n = s2.length();
    for(int i=m-1; i>=0; i--){
        for(int j=n-1; j>=0; j--){
           if(s1[i]!=s2[j]){
               dp[i][j] = max(dp[i+1][j],dp[i][j+1]);
            }else {
                dp[i][j] = 1 + dp[i+1][j+1];
            }
        }
    }return dp[0][0];
}
int main() {
    string s1 = "abcde";
    string s2 = "ace";
    cout<<getLengthOfCommonSequence(s1,s2);
    return 0;
}*/

// Q3) Given an integer array nums, return the length of the longest strictly increasing subsequence.
// Memoization:
// #include <iostream>
// #include <vector>
// using namespace std;
// vector <int> dp;
// int lengthOfLongestSubsequence(int i,vector <int> subsequence) {
//     if(i==0) {
//         return 1;
//     }if(dp[i]!=-1) {
//         return dp[i];
//     }int ans = -1;
//     for(int j=0; j<i; j++) {
//         if(subsequence[i]>subsequence[j]) {
//             ans = max(ans, lengthOfLongestSubsequence(j,subsequence));
//         }
//     }if(ans==-1) {
//         return dp[i] = 1;
//     }return dp[i] = 1+ans;
// }int main() {
//     dp.resize(2505,-1);
//     vector <int> subsequence = {10,9,2,5,3,7,101,18};
//     cout<<lengthOfLongestSubsequence(0,subsequence);
//     return 0;
// }

// Tabulation:
/*#include <iostream>
#include <vector>
using namespace std;
vector <int> dp;
int getLengthOfLogestIncreasingSubsequence(vector <int> subsequence) {
    dp[0] = 1;
    int ans = -1;
    for(int i=0; i<subsequence.size(); i++) {
        for(int j=0; j<i; j++) {
            if(subsequence[i]>subsequence[j]) {
                dp[i] = max(dp[i], 1+dp[j]);
            }if(dp[i]==-1){
                dp[i] = 1;
            }
        }ans = max(ans, dp[i]);
    }return ans;
}
int main() {
    dp.resize(2505,-1);
    vector <int> subsequence = {10,9,2,5,3,7,101,18};
    cout<<getLengthOfLogestIncreasingSubsequence(subsequence);
    return 0;
}*/

// Q) Given the dimension of a sequence of matrices in an array arr[], where the dimension of the ith matrix is
// (arr[i-1] * arr[i]), the task is to find the most efficient way to multiply these matrices together such that the
// total number of element multiplications is minimum.

// Memoization:
/*#include <iostream>
#include <vector>
using namespace std;
vector <vector <int>> dp;
int getMinNumberOfElementMultiplication(int i, int j, vector <int> dimensions) {
    if(i+1==j or i==j) {
        return 0;
    }if(dp[i][j]!=-1) {
        return dp[i][j];
    }int ans = 10000000;
    for(int k=i+1; k<j; k++) {
        ans = min(ans, getMinNumberOfElementMultiplication(i,k,dimensions)+getMinNumberOfElementMultiplication(k,j,dimensions)+dimensions[i]*dimensions[k]*dimensions[j]);
    }return dp[i][j] = ans;
}int main() {
    dp.clear();
    vector <int> dimensions = {1,2,3,4,3};
    dp.resize(dimensions.size(), vector<int>(dimensions.size(), -1));
    cout<<getMinNumberOfElementMultiplication(0,dimensions.size()-1,dimensions);
    return 0;
}*/

// Tabulation:
// #include <vector>
// #include <iostream>
// using namespace std;
// vector <vector <int>> dp;
// int getMinNumberOfElementMultiplication(vector <int> dimensions) {
//     int ans;
//     for(int len=2; len<dimensions.size(); len++) {
//         for(int i=len; i+len<dimensions.size(); i++) {
//             int j = i+len;
//             dp[i][j] = 10000000;
//             for(int k=i+1; k<j; k++) {
//                 dp[i][j] = min(dp[i][j], dp[i][k]+dp[k][j]+dimensions[i]*dimensions[k]*dimensions[j]);
//                 ans = dp[i][j];
//             }
//         }
//     }return dp[0][dimensions.size()-1];
// }int main() {
//     dp.clear();
//     vector <int> dimensions = {1,2,3,4,3};
//     dp.resize(dimensions.size(), vector<int>(dimensions.size(), 0));
//     cout<<getMinNumberOfElementMultiplication(dimensions);
//     return 0;
// }

/*#include <iostream>
#include <vector>
using namespace std;
int getIrritation(vector <int> v, int i) {
    if(i>=v.size()) {
        return 0;
    }return v[i];
}int getResult(vector <int> v) {
    int maxIrritation = v[v.size()-1];
    for(int i=v.size()-2; i>=0; i--) {
        v[i] += getIrritation(v,i+v[i]);
        maxIrritation = v[i]>maxIrritation? v[i]:maxIrritation;
    }return maxIrritation;
}int main() {
    int t;
    cin>>t;
    vector <int> result;
    for(int i=0; i<t; i++) {
    int n;
    cin>>n;
    vector <int> v;
    for(int j=0; j<n; j++) {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }result.push_back(getResult(v));
    }for(int i=0; i<t; i++) {
        cout<<result[i]<<endl;
    }return 0;
}*/
/*#include <iostream>
#include <vector>
using namespace std;
vector <vector <vector <int>>> dp;
vector <int>  canWeMove(vector <vector <int>> &empire, int i, int j) {
    if(i>=empire.size() or j>=empire[0].size() or i<0 or j<0  or empire[i][j]==0) {
        vector <int> result;
        return result;
    }if(!dp[i][j].empty()) {
        for(int p=0; p<dp[i][j].size(); p++) {
            empire[dp[i][j][p]] += 1;
        }return dp[i][j];
    }if(i==empire.size()-1) {
        empire[i][j] += 1;
        return {j};
    }vector <int> result_1 = canWeMove(empire, i+1, j+2);
    vector <int> result_2 = canWeMove(empire, i+1, j-2);
    vector <int> result_3 = canWeMove(empire, i+2, j+1);
    vector <int> result_4 = canWeMove(empire, i+2, j-1);
    for(int q=0; q<result_1.size(); q++){
        dp[i][j].push_back(result_1[q]);
    }for(int q=0; q<result_2.size(); q++){
        dp[i][j].push_back(result_2[q]);
    }for(int q=0; q<result_3.size(); q++){
        dp[i][j].push_back(result_3[q]);
    }for(int q=0; q<result_4.size(); q++){
        dp[i][j].push_back(result_4[q]);
    }return dp[i][j];
}void getResult(vector <vector<int>> &empire) {
    for(int i=0; i<empire[0].size(); i++) {
        canWeMove(empire,0,i);
    }return;
}int main() {
    vector <vector <int>> empire;
    int n,m,k;
    cin>>n>>m;
    empire.resize(n, vector<int>(m, 1));
    cin>>k;
    for(int i=0; i<k; i++) {
        int x,y;
        cin>>x>>y;
        empire[x-1][y-1] = 0;
    }getResult(empire);
    for(int i=0; i<m; i++) {
        empire[n-1][i]? cout<<empire[n-1][i]-1<<" " : cout<<0<<" ";
    }return 0;
}*/
// #include <iostream>
/*#include <vector>
#include <algorithm>
using namespace std;

vector<vector<vector<int>>> dp;

vector<int> canWeMove(vector<vector<int>>& empire, int i, int j) {
    if (i >= empire.size() || j >= empire[0].size() || i < 0 || j < 0 || empire[i][j] == 0) {
        return vector<int>();
    }
    if (!dp[i][j].empty()) {
        for (int col : dp[i][j]) {
            empire[empire.size() - 1][col]++;
        }
        return dp[i][j];
    }
    if (i == empire.size() - 1) {
        empire[i][j]++;
        return {j};
    }
    vector<int> columns;
    vector<int> results[] = {
        canWeMove(empire, i + 1, j + 2),
        canWeMove(empire, i + 1, j - 2),
        canWeMove(empire, i + 2, j + 1),
        canWeMove(empire, i + 2, j - 1)
    };
    for (auto& res : results) {
        for (int col : res) {
            if (find(columns.begin(), columns.end(), col) == columns.end()) {
                columns.push_back(col);
            }
        }
    }
    dp[i][j] = columns;
    return columns;
}

void getResult(vector<vector<int>>& empire) {
    for (int i = 0; i < empire[0].size(); i++) {
        canWeMove(empire, 0, i);
    }
}

int main() {
    int n, m, k;
    cin >> n >> m;
    vector<vector<int>> empire(n, vector<int>(m, 1));
    dp.resize(n, vector<vector<int>>(m));

    cin >> k;
    for (int i = 0; i < k; i++) {
        int x, y;
        cin >> x >> y;
        empire[x - 1][y - 1] = 0;
    }

    getResult(empire);
    for (int i = 0; i < m; i++) {
        empire[n - 1][i] ? cout << empire[n - 1][i] - 1 << " " : cout << 0 << " ";
    }
    return 0;
}*/

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// vector<vector<int>> dp;
// vector<int> canWeMove(vector<vector<int>>& empire, int i, int j) {
//     if (i >= empire.size() || j >= empire[0].size() || i < 0 || j < 0 || empire[i][j] == 0) {
//         return vector<int>();
//     }if (!dp[i*m+j].empty()) {
//         for (int col : dp[i*m+j]) {
//             empire[empire.size() - 1][col]++;
//         }return dp[i*m+j];
//     }if (i == empire.size() - 1) {
//         empire[i][j]++;
//         return {j};
//     }vector<int> columns;
//     vector<int> results[] = {
//         canWeMove(empire, i + 1, j + 2),
//         canWeMove(empire, i + 1, j - 2),
//         canWeMove(empire, i + 2, j + 1),
//         canWeMove(empire, i + 2, j - 1)
//     };for (auto& res : results) {
//         for (int col : res) {
//             if (find(columns.begin(), columns.end(), col) == columns.end()) {
//                 columns.push_back(col);
//             }
//         }
//     }dp[i*m+j] = columns;
//     return columns;
// }void getResult(vector<vector<int>>& empire) {
//     for (int i = 0; i < empire[0].size(); i++) {
//         canWeMove(empire, 0, i);
//     }
// }int main() {
//     int n, m, k;
//     cin >> n >> m;
//     vector<vector<int>> empire(n, vector<int>(m, 1));
//     dp.resize(n*m, vector<int>(m));
//     cin >> k;
//     for (int i = 0; i < k; i++) {
//         int x, y;
//         cin >> x >> y;
//         empire[x - 1][y - 1] = 0;
//     }getResult(empire);
//     for (int i = 0; i < m; i++) {
//         empire[n - 1][i] ? cout << empire[n - 1][i] - 1 << " " : cout << 0 << " ";
//     }return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// vector<vector<int>> dp;

// int canWeMove(vector<vector<int>> &empire, int i, int j) {
//     if (i >= empire.size() || j >= empire[0].size() || i < 0 || j < 0 || empire[i][j] == 0) {
//         return 0;
//     }
//     if (i == empire.size() - 1) {
//         return empire[i][j];
//     }
//     if (dp[i][j] != -1) {
//         return dp[i][j];
//     }
//     int ways = canWeMove(empire, i + 1, j + 2) +
//               canWeMove(empire, i + 1, j - 2) +
//               canWeMove(empire, i + 2, j + 1) +
//               canWeMove(empire, i + 2, j - 1);
    
//     dp[i][j] = ways;
//     return ways;
// }

// void getResult(vector<vector<int>> &empire) {
//     for (int i = 0; i < empire[0].size(); i++) {
//         canWeMove(empire, 0, i);
//     }
// }

// int main() {
//     int n, m, k;
//     cin >> n >> m;
//     vector<vector<int>> empire(n, vector<int>(m, 1));
//     dp.resize(n, vector<int>(m, -1));
    
//     cin >> k;
//     for (int i = 0; i < k; i++) {
//         int x, y;
//         cin >> x >> y;
//         empire[x - 1][y - 1] = 0;
//     }
    
//     getResult(empire);
    
//     for (int i = 0; i < m; i++) {
//         cout << empire[0][i] - 1 << " ";
//     }

//     return 0;
// }


/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<int>> dp;
vector<int> canWeMove(vector<vector<int>>& empire, int i, int j, int m) {
    if (i >= empire.size() || j >= empire[0].size() || i < 0 || j < 0 || empire[i][j] == 0) {
        return vector<int>();
    }if (!dp[i*m+j].empty()) {
        for (int col : dp[i*m+j]) {
            empire[empire.size() - 1][col]++;
        }
        return dp[i*m+j];
    }if (i == empire.size() - 1) {
        empire[i][j]++;
        return {j};
    }vector<int> columns;
    vector<int> results[] = {
        canWeMove(empire, i + 1, j + 2, m),
        canWeMove(empire, i + 1, j - 2, m),
        canWeMove(empire, i + 2, j + 1, m),
        canWeMove(empire, i + 2, j - 1, m)
    };for (auto& res : results) {
        for (int col : res) {
            if (find(columns.begin(), columns.end(), col) == columns.end()) {
                columns.push_back(col);
            }
        }
    }dp[i*m+j] = columns;
    return columns;
}void getResult(vector<vector<int>>& empire, int m) {
    for (int i = 0; i < empire[0].size(); i++) {
        canWeMove(empire, 0, i, m);
    }
}int main() {
    int n, m, k;
    cin >> n >> m;
    vector<vector<int>> empire(n, vector<int>(m, 1));
    dp.resize(n*m, vector<int>());
    cin >> k;
    for (int i = 0; i < k; i++) {
        int x, y;
        cin >> x >> y;
        empire[x - 1][y - 1] = 0;
    }getResult(empire, m);
    for (int i = 0; i < m; i++) {
        empire[n - 1][i] ? cout << empire[n - 1][i] - 1 << " " : cout << 0 << " ";
    }return 0;
}
*/

/*#include <iostream>
#include <vector>
using namespace std;
vector <vector<int>> dp;
int canWeMove(vector<vector<int>> &empire, int i, int j) {
    if (i >= empire.size() || j >= empire[0].size() || i < 0 || j < 0 || empire[i][j] == 0) {
        return 0;
    }if(dp[i][j]!=-1) {
        return dp[i][j];
    }if (i == 0) {
        return 1;
    }int r1 = canWeMove(empire, i - 1, j + 2);
    int r2 = canWeMove(empire, i - 1, j - 2);
    int r3 = canWeMove(empire, i - 2, j + 1);
    int r4 = canWeMove(empire, i - 2, j - 1);
    return dp[i][j] = r1+r2+r3+r4;
}void getResult(vector<vector<int>> &empire, int n) {
    for (int i = 0; i < empire[0].size(); i++) {
        empire[n-1][i] += canWeMove(empire, n-1, i);
    }return;
}int main() {
    vector<vector<int>> empire;
    int n, m, k;
    cin >> n >> m;
    empire.resize(n, vector<int>(m, 1));
    dp.resize(n, vector<int>(m, -1));
    cin >> k;
    for (int i = 0; i < k; i++) {
        int x, y;
        cin >> x >> y;
        empire[x - 1][y - 1] = 0;
    }getResult(empire,n);
    for (int i = 0; i < m; i++) {
        cout << (empire[n - 1][i] > 1 ? empire[n - 1][i] - 1 : 0) << " ";
    }return 0;
}*/



