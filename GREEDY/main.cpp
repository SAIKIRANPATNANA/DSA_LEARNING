/*What is Greedy Algorithm?

=>Greedy Algorithm Structure:
=>Characteristics of Greedy Algorithm:
--Greedy is an algorithmic paradigm that builds up a solution piece by piece, always choosing the next piece
that offers the most obvious and immediate benefit.
--A greedy algorithm is a problem-solving approach that involves making the best possible choice at each step,
hoping to achieve the overall best solution.
--It focuses on the local optimal choice without considering the future consequences.
--This algorithm is helpful when a problem can be broken down into smaller parts, and the solution to each part
contributes to solving the entire problem. It is commonly used to solve optimization problems where you need
to find the best solution from a range of possibilities.
--Greedy Choice Property: The Greedy choice property states that a globally optimal solution can be achieved
by consistently making locally optimal choices. In other words, a Greedy algorithm selects the best option at
each step, considering only the current information and not the future consequences. It iteratively makes these
--Greedy choices, reducing the original problem into smaller subproblems.
Optimal Substructure: Optimal substructure refers to a property of a problem where finding an optimal
solution to the problem involves finding optimal solutions to its subproblems. This means that the overall
optimal solution can be constructed by combining the optimal solutions of the smaller subproblems. By solving
these subproblems and building up their solutions, we can solve larger and more complex problems.

//The general structure of a greedy algorithm can be summarized in the following stepsB#
--Identify the problem as an optimization problem where we need to find the best solution among a set of
possible solutions
determine the set of feasible solutions for the problem
--Identify the optimal substructure of the problem, meaning that the optimal solution to the problem can be
constructed from the optimal solutions of its subproblems
 evelop a greedy strategy to construct a feasible solution step by step, making the locally optimal choice at
each step
B+ Prove the correctness of the algorithm by showing that the locally optimal choices at each step lead to a
globally optimal solution.
A basic structure: L'
 eclare an empty result = 0
We make a greedy choice to select, If the choice is feasible add it to the final result
Return the result.
To apply the Greedy approach to a problem, the problem should possess the following characteristicsB#
 Ordered List of Resources: The problem should involve a set of resources, such as profits, costs, or values,
that can be arranged in a specific order.
0@ MaxAmum Resource SelectAon: 1he Greedy algorithm selects the maximum value or resource from the given
ordered list. It aims to choose the option that provides the highest profit, value, or any other relevant
measure.
By considering these characteristics, the Greedy algorithm can make locally optimal choices at each step,
ultimately leading to an overall optimal or satisfactory solution.
CharacterAstAc Components of Greedy AlgorAthm:

=>Why choose Greedy Approach?
B$@ FeasAble SolutAon: A subset of the given inputs that satisfies all the specified constraints of a problem is
knon as a "feasible solution". It is a solution that meets all the requirements of the problem@
0@ OptAmal SolutAon: 1he feasible solution that achieves the desired extremum (either minimizes or maximizes}
of the objective function specified in the problem is called an "optimal solution". It is the best solution among
all the feasible solutions@
|@ FeasAbAlAty Check: It is a process of verifying hether a selected input or solution fulfills all the constraints
mentioned in the problem. If it satisfies all the constraints, it is considered a feasible solution and added to
the set of feasible solutions. ttherise, it is rejected@
s@ OptAmalAty Check: It involves checking hether a selected input or solution produces either the minimum or
maximum value of the objective function, hile also satisfying all the specified constraints. If an element in
the solution set achieves the desired extremum, it is added to the set of optimal solutions@
@ OptAmal Substructure Property: 1he globally optimal solution to a problem includes the optimal subq
solutions ithin it. 1his means that finding the optimal solution for the overall problem involves combining
the optimal solutions of smaller subproblems@
p@ Greedy ChoAce Property: 1he globally optimal solution is constructed by selecting locally optimal choices.
1he Greedy approach applies certain locally optimal criteria to obtain a partial solution that appears to be
the best at that particular moment. It then proceeds to find the solution for the remaining subproblem.
1hese characteristic components help define and guide the behavior of a Greedy algorithm, enabling it to find
efficient and effective solutions for optimization problems.
1he local decisions (or choices} must possess three characteristics as mentioned belo:N<
B$@ FeasAbAlAty: 1he selected choice must fulfill constraints@
0@ OptAmalAty: 1he selected choice must be the best at that stage (locally optimal choice}@
|@ IrrevocabAlAty: 1he selected choice cannot be changed once it is made.

1he Greedy approach is often chosen for problemqsolving due to several reasons and tradeqoffs it offers. Here
are a couple of significant factorsC
B$@ ImmedAate FeasAble SolutAons: 1he Greedy approach allos for quickly obtaining feasible solutions. It
focuses on making locally optimal choices at each step, ithout considering the overall consequences. 1his
can be advantageous in situations here obtaining a feasible solution immediately is more important than
finding the globally optimal solution@
0@ RecursAve DAvAsAon: 1he Greedy approach can simplify problemqsolving by dividing the problem recursively
based on a condition, ithout the need to combine all the solutions. 1his can be seen in the activity
selection problem, here activities are selected based on certain criteria, alloing for efficient scheduling
ithout exhaustive combination calculations.

Cracking the Coding Interview in C++ - Foundation

In summary, the Greedy approach prioritizes immediate feasibility and recursive division, making it a suitable
choice for problems where finding a feasible solution quickly is crucial, and combining all solutions is not
necessary.
Use of Greedy Algorithm:

=>Applications of Greedy Algorithms
The greedy algorithm is a useful method employed in optimization problems. It aims to find the best solution by
making locally optimal choices at each step without considering future consequences. Here are some
common applications of the greedy algorithmy
e Scheduling and Resource Allocation: The greedy algorithm is effective in efficiently scheduling tasks or
allocating resources
--Minimum Spanning Trees: It can be used to find the minimum spanning tree in a graph, connecting all
vertices with the minimum total edge weight
b Coin Change Problem: The greedy algorithm solves the problem of making a change with the fewest coins
by selecting the highestZvalue coin that fits the remaining amount
--Huffman Coding: It generates a prefixZfree code for data compression by constructing a binary tree based
on character frequencies.
It is worth noting that not all optimization problems can be solved using the greedy algorithm, and there may
be cases where it produces suboptimal solutions. However, for many problems, it offers a quick and efficient
approximation of the optimal solution.

--ptimal Solution Finding: Greedy algorithms are commonly used to find optimal solutions in various
problems such as activity selection, fractional knapsack, job sequencing, and Huffman coding. These
algorithms help determine the best possible outcome based on specific criteria or objectives
a Approximate Solutions for NP-Hard Problems: Greedy algorithms can be applied to NPZHard problems like
the traveling salesman problem (TB;P) to find approximate solutions that are close to optimal. While not
guaranteed to find the absolute best solution, greedy algorithms can provide practical and efficient results
--Network Design: Greedy algorithms are utilized in network design tasks, including constructing minimum
spanning trees, finding shortest paths, and optimizing maximum flow networks. These algorithms help in
routing, resource allocation, and capacity planning, leading to efficient network designs
--Machine Learning: Greedy algorithms find applications in machine learning tasks such as feature selection,
clustering, and classification. They are used to identify relevant features, optimize cluster or class selection,
and improve the accuracy of machine learning models
--Image Processing: Greedy algorithms play a role in image processing tasks like compression, denoising,
and segmentation. or instance, Huffman coding efficiently compresses images by encoding frequently
occurring pixels
--Combinatorial Optimization: Greedy algorithms are employed in combinatorial optimization problems,
including graph coloring, scheduling, and the traveling salesman problem. While these problems are usually
computationally complex, greedy algorithms can provide practical and efficient solutions that are close to
optimal
 --Game Theory: Greedy algorithms are used in game theory applications, aiding in determining optimal
strategies for games like chess or poker. By selecting the most promising moves or actions at each turn,
based on the current game state, greedy algorithms contribute to decisionZmaking
 --Financial Optimization: Greedy algorithms find applications in financial domains such as portfolio
 optimization and risk management. They assist in selecting assets for portfolios based on historical data
and market trends, aiming to maximize returns and manage risks effectively.*/


//Q1 Fractional Knapsack
// Given the eights and profits of a items, in the form of {profit, eight} put these items in a knapsack of
// capacity W to get the maximum total profit in the knapsack. In lractional Knapsack, e can break items for
// maximizing the total value of the knapsack.

/*#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int getknapSackMaxProfit(vector <vector<int>> profitWeights, int capacity) {
    vector <pair<int,int>> profitWeightsRatio(profitWeights.size());
    for(int i=0; i<profitWeights.size(); i++) {
        int r = profitWeights[i][0]/profitWeights[i][1];
        profitWeightsRatio[i].first = r;
        profitWeightsRatio[i].second = profitWeights[i][1];
    }sort(profitWeightsRatio.begin(), profitWeightsRatio.end(),
     [](const pair<int,int>& a, const pair<int,int>& b) {
         return a.first > b.first;
     });
    int weights = 0;
    int profit = 0;
    int i = 0;
    while(weights<capacity and i<profitWeightsRatio.size()) {
        if((capacity-weights)>=profitWeightsRatio[i].second) {
            weights += profitWeightsRatio[i].second;
            profit += profitWeightsRatio[i].second*profitWeightsRatio[i].first;
        }else {
            int rem = (capacity-weights);
            weights += rem;
            profit += rem *(profitWeightsRatio[i].first);
        }i++;
    }
    return profit;
}
int main() {
    int n;
    int capacity;
    cout<<"enter n: ";
    cin>>n;
    vector <vector<int>> profitWeights(n, vector<int>(2));
    for (int i=0; i<n; i++) {
        for (int j=0; j<2; j++) {
            cin>>profitWeights[i][j];
        }
    }cout<<"enter capacity: ";
    cin>>capacity;
    cout<<getknapSackMaxProfit(profitWeights,capacity)<<endl;
    return 0;
}
*/
// You are assigned to put some amount of boxes onto one truck. You are given a 2D array boxTypes, where boxTypes[i] = [numberOfBoxesi, numberOfUnitsPerBoxi]:
// numberOfBoxesi is the number of boxes of type i.
// numberOfUnitsPerBoxi is the number of units in each box of the type i.
// You are also given an integer truckSize, which is the maximum number of boxes that can be put on the truck. You can choose any boxes to put on the truck as long as the number of boxes does not exceed truckSize.
// Return the maximum total number of units that can be put on the truck;
/*#includ(e <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int maxNumberOfUnits(vector <vector<int>> boxSizesAndUnits, int truckSize) {
    vector <pair<int,int>> ratioBoxSizesAndUnits(boxSizesAndUnits.size());
    for(int i=0; i<boxSizesAndUnits.size(); i++) {
        ratioBoxSizesAndUnits[i].first = boxSizesAndUnits[i][1];
        ratioBoxSizesAndUnits[i].second = boxSizesAndUnits[i][0];
    }sort(ratioBoxSizesAndUnits.begin(), ratioBoxSizesAndUnits.end(),
     [](const pair<int,int>& a, const pair<int,int>& b) {
      return a.first > b.first;
     });
    int i=0;
    int units = 0;
    int size = 0;
    while(size<=truckSize and i<boxSizesAndUnits.size()) {
        if(truckSize-size>=ratioBoxSizesAndUnits[i].second) {
            size += ratioBoxSizesAndUnits[i].second;
            units += ratioBoxSizesAndUnits[i].first*ratioBoxSizesAndUnits[i].second;
        }else {
            units += ((truckSize-size)*ratioBoxSizesAndUnits[i].first);
            size += (truckSize-size);
        }i++;
    }return units;
}
int main() {
    int n;
    cout<<"enter n: ";
    cin>>n;
    vector <vector<int>> boxSizesAndUnits(n,vector<int>(2));
    cout<<"truckSize: ";
    int truckSize;
    cin>>truckSize;
    for (int i=0; i<n; i++) {
        for (int j=0; j<2; j++) {
            cin>>boxSizesAndUnits[i][j];
        }
    }cout<<maxNumberOfUnits(boxSizesAndUnits,truckSize);
    return 0;
}*/

// Q2 Maximum meetings in one room
// There is one meeting room in a firm. There are N meetings in the form of (S[i], F[i]) where S[i] is the start time of
// meeting i and F[i] is the finish time of meeting i. The task is to find the maximum number of meetings that can
// be accommodated in the meeting room. Print all meeting numbers based on 0 indexing;

/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(const pair<int,int> &a , const pair<int,int> &b) {
    return a.first<b.first;
}
vector <int> getPossibleMtgs(vector <int> start, vector <int> end) {
    vector <pair<int,int>> end_idx;
    for(int i=0; i<end.size(); i++) {
        end_idx.push_back(make_pair(end[i],i));
    }sort(end_idx.begin(),end_idx.end(),cmp);
    vector <int> ans;
    ans.push_back(end_idx[0].second);
    int last = end_idx[0].first;
    for(int i=1; i<end_idx.size(); i++) {
        if(start[end_idx[i].second]>last) {
            ans.push_back(end_idx[i].second);
            last = end_idx[i].first;
        }
    }return ans;
}
int main() {
    vector <int> start = {1,3,0,5,8,5};
    vector <int> end = {2,4,6,7,9,9};
    vector <int> possibleMeetings = getPossibleMtgs(start,end);
    cout<<"Total mtgs: "<<possibleMeetings.size()<<endl;
    for(int i=0; i<possibleMeetings.size(); i++) {
        cout<<possibleMeetings[i]<<" ";
    }return 0;
}
*/
// ActivitySelectionProblem:
/*#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool cmp(const pair<int,int> &a, const pair<int,int> &b) {
    return a.first<b.first;
}
int maxNumberOfActivites(vector <int> start, vector<int> end) {
    vector <pair<int,int>> end_idx;
    for(int i=0; i<end.size(); i++) {
        end_idx.push_back(make_pair(end[i],i));
    }sort(end_idx.begin(),end_idx.end(),cmp);
    int ans = 1;
    int i=0;
    int last = end_idx[i].first;
    for(int i=1; i<end_idx.size(); i++) {
        if(start[end_idx[i].second]>last) {
            ans++;
            last = end_idx[i].first;
        }i++;
    }return ans;

}
int main() {
    vector <int> start = {1,2,3,4,5};
    vector <int> end = {6,7,8,9,10};
    cout<<maxNumberOfActivites(start,end);
    return 0;
    //tc: nLogn;
}
*/

// You are a person on an islandZ There is only one shop in this island, this shop is open on all days of the week
// except for Sundays Consider following constraints:
// S b  Number of days you are required to survive.
// N b  Maximum unit of food you can buy each day.
// Unit of food required each day to survive.
// Find the minimum number of days on which you need to buy food from the shop so that you can survive the// Currently, itb s Monday, and you need to survive for the next S days.

// next S days, or determine that it isnb t possible to survive?

/*#include <iostream>
#include <cmath>
using namespace std;
int minNumOfDaysBuyFood(float s, float n, float m) {
    int ans;
    if((n==m and s<7)) {
        ans = s;
    }else if((n==m and s>=7) or (n<m)){
        ans = 0;
    }else {
        ans = ceil((s*m)/n);
    }return ans;
}
int main() {
    float s,n,m;
    cout<<"enter S,N,M in order: ";
    cin>>s>>n>>m;
    int result = minNumOfDaysBuyFood(s,n,m);
    if(result) {
        cout<<result;
    }else {
        cout<<"Can't survive..!";
    }return 0;
}*/

// Q4 Largest palindromic number by permuting digits
// Given N(very large), the task is to print the largest palindromi8 number obtained by permuting the digits of N. If
// it is not possible to make a palindromic number, then print an appropriate message.
//incomplete_code:
// /*#include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;
// bool cmp(const pair<int,int> &a , const pair<int,int> &b) {
//     return a.first>b.first;
// }
// int checkPalindrome(int num) {
//     int n = num;
//     int c = 0;
//     vector <pair<int,int>> digits_frequency;
//     while(n) {
//         if(digits_frequency.empty()) {
//             digits_frequency.push_back(make_pair(n%10,1));
//         }else {
//             int flag = 1;
//             for(int i=0; i<digits_frequency.size(); i++) {
//               if(digits_frequency[i].first == n%10) {
//                   digits_frequency[i].second += 1;
//                   flag = 0;
//                   break;
//               }
//             }if(flag) {
//                 digits_frequency.push_back(make_pair(n%10,1));
//             }
//         }c++;
//         n /= 10;
//     }sort(digits_frequency.begin(), digits_frequency.end(), cmp);
//     for(int i=0; i<digits_frequency.size(); i++) {
//         cout<<digits_frequency[i].first<<" "<<digits_frequency[i].second<<endl;
//     }
//     int ans = 0;
//     if(c%2) {
//         int oddFreq = 0;
//         for(int i=0; i<digits_frequency.size(); i++) {
//              if (digits_frequency[i].second%2) {
//                 oddFreq++;
//              }
//         }if(oddFreq>1){
//             return 0;
//         }else {
//             vector <int> palindromicSequence(c);
//             int i = 0;
//             int j = 0;
//             while(j<digits_frequency.size()) {
//                 if(digits_frequency[j].second%2) {
//                     while(digits_frequency[j].second%2){
//                         if(digits_frequency[j].second%2 and digits_frequency[j].second>1) {
//                             palindromicSequence[c-i-1]=digits_frequency[j].first;
//                             palindromicSequence[i]=digits_frequency[j].first;
//                             digits_frequency[i].second -= 2;
//                             i++;
//                         }else{
//                         palindromicSequence[c/2] = digits_frequency[j].first;
//                         j++;
//                         break;
//                       }
//                     }
//                 }else{
//                     while(digits_frequency[j].second){
//                     palindromicSequence[i] = digits_frequency[j].first;
//                     palindromicSequence[c-i-1] = digits_frequency[j].first;
//                     digits_frequency[j].second -= 2;
//                     i++;
//                     }j++;
//                 }
//             }ans += palindromicSequence[0];
//             for(int i=1; i<palindromicSequence.size(); i++) {
//                 ans = ((ans*10) + palindromicSequence[i]);
//             }
//         }
//     }else {
//         for(int i=0; i<digits_frequency.size(); i++) {
//             if(digits_frequency[i].second%2) {
//                 ans=0;
//                 return 0;
//             }
//         }int i = 0;
//         int j = 0;
//         vector <int> palindromicSequence(c);
//         while(j<digits_frequency.size()){
//             while(digits_frequency[j].second){
//                     palindromicSequence[i] = digits_frequency[j].first;
//                     palindromicSequence[c-i-1] = digits_frequency[j].first;
//                     digits_frequency[j].second -= 2;
//                     i++;
//             }j++;
//         }ans += palindromicSequence[0];
//         for(int i=1; i<palindromicSequence.size(); i++) {
//             ans = ((ans*10) + palindromicSequence[i]);
//         }
//     }return ans;
// }
// int main() {
//     int num;
//     cout<<"number: ";
//     cin>>num;
//     int result = checkPalindrome(num);
//     if(result) {
//         cout<<result;
//     }else{
//         cout<<"It's not possible to make a palindromic number.";
//     }
//     return 0;
// } */
// http://localhost:8080/gui/web/index.html


// Q)A board of length M and width N is given. The task is to bSeak this boaSd into M * N squaSes such that cost of
// bSeaking is minimum. The cutting cost foS each edge will be given foS the boaSd in two aSSaVs X[] and Y[]
// SepSesenting the cost of cutting horizontal and veStical edges SespectivelV, i.e X[i] SepSesents the cost of cutting
// a hoSizontal edge of size i. In shoSt, Vou need to choose such a sequence of cutting such that cost is minimized.
// Return the minimized cost.

/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int minimizedCost(int m, int n, vector <int> x, vector <int> y) {
    sort(x.begin(),x.end(),greater<int>());
    sort(y.begin(),y.end(),greater<int>());
    int i = 0;
    int j = 0;
    int ans = 0;
    int h = 1;
    int v = 1;
    while(i<m-1 and j<n-1) {
        if(x[i]>y[j]) {
            ans += x[i]*h;
            i++;
            v++;
        }else{
            ans += y[j]*v;
            j++;
            h++;
        }
    }while(i<m-1) {
        ans += x[i]*h;
        i++;
    }while(j<n-1) {
        ans += y[j]*v;
        j++;
    }return ans;
}
int main() {
    int m = 6;
    int n = 4;
    vector <int> x = {2,1,3,1,4};
    vector <int> y = {4,1,2};
    cout<<minimizedCost(m,n,x,y);
    return 0;
}*/


// Given an array of intervals where intervals[i] = [starti, endi], return the minimum number of intervals you need
// to remove to make the rest of the intervals non-overlapping?
/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(const pair<int,int> &a, const pair<int,int> &b) {
    return a.second<b.second;
}
int minNumberOfIntervalsToBeRemoved(vector <pair<int,int>> intervals) {
    sort(intervals.begin(),intervals.end(),cmp);
    int ans = 0;
    int last = intervals[0].second;
    for(int i=1; i<intervals.size(); i++) {
        if(intervals[i].first<last) {
            ans++;
        }else {
            last = intervals[i].second;
        }
    }return ans;
}
int main() {
    vector <pair<int,int>> intervals;
    int n;
    cout<<"enter n: ";
    cin>>n;
    cout<<"enter intervals: "<<endl;
    for(int i=0; i<n; i++) {
        int first,second;
        cin>>first>>second;
        intervals.push_back(make_pair(first,second));
    }cout<<minNumberOfIntervalsToBeRemoved(intervals);
    return 0;
}
*/

// The task is to find the smallest number with given sum of digits as S and number of digits as D?
/*#include <iostream>
using namespace std;
int getSmallestNumber(int s, int d, int ans) {
    if(s<=9 and d==1) {
        ans = ans*10 + s;
        return ans;
    }else if(s>9 and d>1){
        ans = ans*10 + 9;   //0 0 993001
        return getSmallestNumber(s-9,d-1,ans);
    }else if(s<=9 and d>0){
        ans = ans*10+(s-1);
        return getSmallestNumber(1,d-1,ans);
    }return -1;
}
int result(int s, int d) {
    int ans = getSmallestNumber(s,d,0);
    int small = 0;
    if(ans == -1) {
        return ans;
    }
    while(ans){
        small = (small*10)+(ans%10);
        ans /= 10;
    }return small;
}
int main() {
    int s;
    int d;
    cout<<"enter s: ";
    cin>>s;
    cout<<"enter d: ";
    cin>>d;
    cout<<result(s,d);
    return 0;
}*/

//yolo  and detectron video insights:
// creating virtual env thru anaconda python version 3.8
// conda create -n detectron python = 3.8 -y
// next activate env and install requirements via
// pip install -r requirements.txt
// next install detectron model using the cmd
// maku sure to install visual studio installer 2017 b4 running that cmd
// pip install git+https://github.com/facebookresearch/detectron2.git
// next execute python client.py
//in the webapp file we willbe having
// faster_rcnn_R_50_FPN_3x.yaml
// model_final.pth
// config.yml
//49,50,52,83,85,90,87,91,92,94


// Q) We have n jobs, h-r- -v-ry job is sch-dul-d to b- don- from st?rtTim-[i] to -ndTim-[i], obt?ining ? profit of
// profit[i].
// You'r- giv-n th- st?rtTim-, -ndTim- ?nd profit ?rr?ys, r-turn th- m?ximum profit you c?n t?k- such th?t th-r-
// ?r- no to jobs in th- subs-t ith ov-rl?pping tim- r?ng-.
// If you choos- ? job th?t -nds ?t tim- X you ill b- ?bl- to st?rt ?noth-r job th?t st?rts ?t tim- X.
/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
int getMaxProfit(vector <int> startTimes, vector <int> endTimes, vector <int> profits) {
    int mp = 0;
    vector <vector<int>> jobs;
    for(int i=0; i<startTimes.size(); i++) {
        jobs.push_back({startTimes[i],endTimes[i],profits[i]});
    }sort(jobs.begin(), jobs.end());
    priority_queue <vector<int>, vector <vector<int>>, greater<vector<int>>> pq;
    for(int i=0; i<startTimes.size(); i++) {
        int start = startTimes[i];
        int end = endTimes[i];
        int profit = profits[i];
    while(!pq.empty() and start>=pq.top()[0]) {
        mp = max(mp, pq.top()[1]);
        pq.pop();
    }pq.push({end, mp+profit});
    }while(!pq.empty()) {
        mp = max(mp, pq.top()[1]);
        pq.pop();
    }return mp;
}
int main() {
    vector <int> startTimes = {1,2,3,4,6};
    vector <int> endTimes = {3,5,10,6,9};
    vector <int> profits = {20,20,100,70,60};
    cout<<getMaxProfit(startTimes,endTimes,profits);
    return 0;
}*/

// Q)Q1. Minimum Cost of ropes
// There are given N ropes of different lengths, we need to connect these ropes into one ropeu The cost to
// connect two ropes is equal to sum of their lengthsu The task is to connect the ropes with minimum costu Given
// N size array arr[] contains the lengths of the ropes?
/*#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int getMinCost(vector <int> ropes) {
    int minCost = 0;
    priority_queue <int, vector<int>,greater<int>> pq;
    for(int i=0; i<ropes.size(); i++) {
        pq.push(ropes[i]);
    }while(pq.size()!=1) {
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
        minCost += a+b;
        pq.push(a+b);
    }
    return  minCost;
}
int main() {
    int n;
    cout<<"enter n: ";
    cin>>n;
    vector <int> ropes;
    cout<<"enter ropes: ";
    for(int i=0; i<n; i++) {
        int p;
        cin>>p;
        ropes.push_back(p);
    }cout<<getMinCost(ropes);
    return 0;
}
*/

// Q) Minimum umber of Platforms Required for a Railway/Bus Station
// Given the arrival and departure times of all trains that reach a railway station, the task is to find the minimum
// number of platforms required for the railway station so that no train waitsu We are given two arrays that
// represent the arrival and departure times of trains that stop.
// Note: Consider that all the trains arrive on the same day and leave on the same dayu Arrival and departure
// time can never be the same for a train but we can have arrival time of one train equal to the departure time of
// the otheru At any given instance of time, the same platform can not be used for both departure of a train and
// the arrival of another trainu In such cases, we need different platforms.

/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(const pair<float,float> &a, const pair<float,float> &b) {
    return a.second<b.second;
}
int getMinPlatforms(vector <float> arrival, vector <float> departure) {
    vector <pair<float,float>> timings(arrival.size());
    for(int i=0; i<arrival.size(); i++) {
        timings[i].first = arrival[i];
        timings[i].second = departure[i];
    }sort(timings.begin(),timings.end(),cmp);
    float last = timings[0].second;
    int ans = 1;
    for(int i=1; i<timings.size(); i++) {
        if(timings[i].first>=last) {
            ans++;
            last = timings[i].second;
        }
    }return ans;
}
int main()  {
    vector <float> arrival = {9.00, 9.40, 9.50, 11.00, 15.00, 18.00};
    vector <float> departure = {9.10, 12.00, 11.20, 11.30, 19.00, 20.00};
    cout<<getMinPlatforms(arrival,departure);
    return 0;
}
*/

// Q3. Minimum Fibonacci terms with sum equal to K
// Given a number k, find the required minimum number of Fibonacci terms whose sum is equal to k.

/*#include <iostream>
#include <vector>
using namespace std;
int getFibonacci(int k) {
    int a=0;
    int b=1;
    vector <int> fibonacci;
    fibonacci.push_back(a);
    fibonacci.push_back(b);
    while(b<=k) {
       int temp = b;
       b = a+b;
       if(b>k){
           break;
       }
       fibonacci.push_back(b);
       a = temp;
    }return fibonacci.back();
}int getMinNumberOfTerms(int k,int ans) {
    if(!k) {
        return ans;
    }
    ans += 1;
    k -= getFibonacci(k);
    return getMinNumberOfTerms(k,ans);
}
int main() {
    int k;
    cout<<"enter k: ";
    cin>>k;
    cout<<getMinNumberOfTerms(k,0);
    return 0;
}
*/


// Q) Divide cuboid into cubes such that sum of volumes is maximum
// Given the length, breadth, height of a cuboid. The task is to divide the given cuboid in minimum number of
// cubes such that size of all cubes is same and sum of volumes of cubes is maximum. This output should be the
// side of cube and number of cubes.

/*#include <iostream>
#include <cmath>
using namespace std;
int getCubeSide(int length, int breadth, int height) {
    while(breadth%length) {
        int temp = breadth;
        breadth = length;
        length = temp%length;
    }while(height%length) {
        int temp = height;
        height = length;
        length = temp%length;
    }return length;
}
int getNumberOfCubes(int length, int breadth, int height, int cube_side){
    return (length*breadth*height)/pow(cube_side,3);
}
int main() {
    int length,breadth,height;
    cout<<"enter length: ";
    cin>>length;
    cout<<"enter breadth: ";
    cin>>breadth;
    cout<<"enter height: ";
    cin>>height;
    int cube_side = getCubeSide(length,breadth,height);
    int no_of_cubes = getNumberOfCubes(length,breadth,height,cube_side);
    cout<<"side of resultant cube: "<<cube_side<<endl;
    cout<<"no of cubes: "<<no_of_cubes<<endl;
    return 0;
}*/

// Q6. Find minimum number of currency notes and values that sum to given amount
// Given an amount, find the minimum number of notes of different denominations that sum up to the given
// amount.
// We may assume that we have infinite supply of notes of values {2000, 500, 200, 100, 50, 20, 10, 5, 1}
/*#include <iostream>
#include <vector>
using namespace std;
int getMinNumberOfNOtes(vector <int> denominations,int amount) {
    int notes = 0;
    while(amount) {
        for(int i=0; i<denominations.size(); i++) {
            if(amount>=denominations[i]) {
                cout<<denominations[i]<<":"<<amount/denominations[i]<<endl;
                notes += amount/denominations[i];
                amount -= (denominations[i])*(amount/denominations[i]);
                break;
            }
        }
    }return notes;
}
int main() {
    vector <int> denominations = {2000, 500, 200, 100, 50, 20, 10, 5, 1};
    int amount;
    cout<<"enter amount: ";
    cin>>amount;
    cout<<getMinNumberOfNOtes(denominations,amount);
    return 0;
}*/

// Q7. Buy Maximum Stocks if i stocks can be bought on ith day
// In a stock market, there is a product with its infinite stocks. The stock prices are given for N days,
// where arr[i] denotes the price of the stock on the ith day. There is a rule that a customer can buy
// at most i stock on the ith day. If the customer has k amount of money initially, find out the
// maximum number of stocks a customer can buy.
/*#include <iostream>
#include <vector>
using namespace std;
int getNumberOfStocks(vector <int> stocks, int k) {
    int i = 1;
    int ans = 0;
    while(i<=stocks.size() and k!=0) {
        if(stocks[i-1]*i<=k){
            k -= stocks[i-1]*i;
            ans += i;
        }else if(k/stocks[i-1]>=0){
            ans += k/stocks[i-1];
            k -= k/stocks[i-1];
        }i++;
    }return ans;
}
int main() {
    vector <int> stocks = {7,10,4};
    int k = 100;
    cout<<getNumberOfStocks(stocks,k);
}*/
// Al - Artificial Intelligence
// ML - Machine Learning
// b6 What is Al?
// Artificial intelligence (Al) is machines' ability to observe, think and react
// like human beings.
// b8 It's grounded in the idea that human intelligence can be broken down
// into precise abilities, which computers can be programmed to mimic.
// Al is an umbrella term that encompasses a wide range of concepts and
// technologies, including machine learning (ML).
// Speed
// Al - Artificial Intelligence
// Al consists of many subfields that use techniques to mimic specific
// behaviors we associate with natural human intelligence.
// For example, humans can speak, hear, read and write language
// and glean meaning from it.
// Some Al mimic abilities are
// Speech recognition
// Natural language processing
// These abilities mimics converting audio signals into text and
// processing that text to extract meaning from it.

// Amazon mintrip query:
/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    map <int,int> amz_trip; 
    vector <int> pkg_wts =    priority_queue <int, vector<int>,greater<int>> pq;
q {2,4,6,6,4,2,4};
    int n = pkg_wts.size();
    for(int i=0; i<n; i++){
        if(amz_trip.find(pkg_wts[i])==amz_trip.end()){
            amz_trip[pkg_wts[i]] = 1;
        }else{
            amz_trip[pkg_wts[i]]++;
        }
    }int ans = 0;
    for(auto pkg_quant: amz_trip){
        if(pkg_quant.second%3 and pkg_quant.second%2){
            ans = -1;
            break;
        }else if(!(pkg_quant.second%3)){
            ans += pkg_quant.second/3;
        }else if(!(pkg_quant.second%2)){
            ans += pkg_quant.second/2;
        }
    }cout<<ans<<endl;
    return 0;
}*/
// optimal merge pattern:
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
	vector <int> files = {10,15,5};
	priority_queue <int, vector<int>,greater<int>> pq;
	for(int val: files) {
		pq.push(val);
	}int ans = 0;
	while(pq.size()>1) {
	    int a = pq.top();
	    pq.pop();
	    int b = pq.top();
	    pq.pop();
		ans += a+b;
		pq.push(a+b);
	}cout<<ans<<endl;
	return 0;
}

























