// Disjoint Set Union:

// Different ways of Implementation:

// 1) Simple Array Implementation:

/*#include <iostream>
#include <vector>
using namespace std;
vector <int> graph;
int find(int x){
    return graph[x];
}void Union(int x, int y){
    int a = graph[x];
    int b = graph[y];
    for(int i=0; i<graph.size(); i++){
        if(graph[i]==b){
            graph[i] = a;
        }
    }return;
}int main() {
    int n,m;
    cin>>n>>m;
    graph.resize(n);
    for(int i=0; i<n; i++){
        graph[i] = i;
    }string query;
    while(m--){
        cin>>query;
        if(query=="UNION"){
            int x,y;
            cin>>x>>y;
            Union(x,y);
            cout<<graph[y]<<endl;
        }else if(query=="FIND"){
            int x;
            cin>>x;
            cout<<find(x)<<endl;
        }
    }return 0;
    // Avg TC: O(n);
}*/

//2) Union By Size Implementation:
/*
#include <iostream>
#include <vector>
using namespace std;
vector <int> graph;
vector <int> size;
int find(int x){
    return graph[x];
}void Union(int x, int y){
    int a = find(x);
    int b = find(y);
    if(size[a]>=size[b]){
        for(int i=0; i<graph.size(); i++){
            if(graph[i] == b){
                graph[i] = a;
                size[a] ++;
            }
        }
    }else{
        for(int i=0; i<graph.size(); i++){
            if(graph[i] == a){
                graph[i] = b;
                size[b] ++;
            }
        }
    }return;
}int main() {
    int n,m;
    cin>>n>>m;
    graph.resize(n);
    size.resize(n,1);
    for(int i=0; i<n; i++){
        graph[i] = i;
    }string query;
    while(m--){
        cin>>query;
        if(query=="UNION"){
            int x,y;
            cin>>x>>y;
            Union(x,y);
            cout<<graph[y]<<endl;
        }else if(query=="FIND"){
            int x;
            cin>>x;
            cout<<find(x)<<endl;
        }
    }return 0;
    // Avg TC: O(logn);
}*/

//3) Union By Rank Implementation:

//a) using size;
/*#include <iostream>
#include <vector>
using namespace std;
vector <int> graph;
vector <int> size;
int find(int x){
    if(graph[x] == x){
        return x;
    }return find(graph[x]);
}void Union(int x, int y){
    int a = find(x);
    int b = find(y);
    if(size[a]>=size[b]){
        graph[y] = a;
        size[a] += size[y];
    }else {
        graph[x] = b;
        size[b] += size[x];
    }return;
}int main() {
    int n,m;
    cin>>n>>m;
    graph.resize(n);
    size.resize(n,1);
    for(int i=0; i<n; i++){
        graph[i] = i;
    }string query;
    while(m--){
        cin>>query;
        if(query=="UNION"){
            int x,y;
            cin>>x>>y;
            Union(x,y);
            cout<<graph[y]<<endl;
        }else if(query=="FIND"){
            int x;
            cin>>x;
            cout<<find(x)<<endl;
        }
    }for(int i=0; i<n; i++){
        cout<<size[i]<<" ";
    }return 0;
    // Avg TC: O(logn);
}*/

// b) using rank:

/*#include <iostream>
#include <vector>
using namespace std;
vector <int> graph;
vector <int> Rank;
int find(int x){
    if(graph[x] == x){
        return x;
    }return find(graph[x]);
}void Union(int x, int y){
    int a = find(x);
    int b = find(y);
    if(Rank[a]>=Rank[b]){
        graph[y] = a;
        Rank[a]++;
    }else {
        graph[x] = b;
        Rank[b]++;
    }return;
}int main() {
    int n,m;
    cin>>n>>m;
    graph.resize(n);
    Rank.resize(n,1);
    for(int i=0; i<n; i++){
        graph[i] = i;
    }string query;
    while(m--){
        cin>>query;
        if(query=="UNION"){
            int x,y;
            cin>>x>>y;
            Union(x,y);
            cout<<graph[y]<<endl;
        }else if(query=="FIND"){
            int x;
            cin>>x;
            cout<<find(x)<<endl;
        }
    }for(int i=0; i<n; i++){
        cout<<Rank[i]<<" ";
    }return 0;
    // Avg TC: O(logn);
}*/

// DSU Implementation using Union by Size/Rank with path compression:
/*#include <iostream>
#include <vector>
using namespace std;
vector <int> graph;
vector <int> Rank;
int find(int x){
    if(graph[x] == x){
        return x;
    }return graph[x] = find(graph[x]);
}void Union(int x, int y){
    int a = find(x);
    int b = find(y);
    if(Rank[a]>=Rank[b]){
        graph[y] = a;
        Rank[a]++;
    }else {
        graph[x] = b;
        Rank[b]++;
    }return;
}int main() {
    int n,m;
    cin>>n>>m;
    graph.resize(n);
    Rank.resize(n,1);
    for(int i=0; i<n; i++){
        graph[i] = i;
    }string query;
    while(m--){
        cin>>query;
        if(query=="UNION"){
            int x,y;
            cin>>x>>y;
            Union(x,y);
            cout<<graph[y]<<endl;
        }else if(query=="FIND"){
            int x;
            cin>>x;
            cout<<find(x)<<endl;
        }
    }for(int i=0; i<n; i++){
        cout<<Rank[i]<<" ";
    }return 0;
    // Avg TC: O(log*n)(by Inverse Ackerman Fn: log*n is number of times applying logbase2 to n so that n <= 1;
}
*/

// TopologicalSort and Khan's Algorithm:

//Using BFS:

/*#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int v;
vector <vector<int>> graph;
vector <int> indegree;
void topologicalSort(){
    queue <int> q;
    vector <int> flag(v, 1);
    for(int i=0; i<v; i++){
        if(!indegree[i]){
            flag[i] = 0;
            q.push(i); 
        }
    }while(!q.empty()){
        int current = q.front();
        for(int neighbor: graph[current]){  
            indegree[neighbor]--;
            if(flag[neighbor]){
                if(!indegree[neighbor]){
                    q.push(neighbor);
                    flag[neighbor] = 0;
                }
            }
        }cout<<current<<" ";
        q.pop();
    }return;
}int main() {
    int e;
    cin>>v>>e;
    graph.resize(v);
    indegree.resize(v,0);
    while(e--){
        int x,y; 
        cin>>x>>y;
        indegree[y]++;
        graph[x].push_back(y);
    }topSort();
    return 0;
}*/

//Using DFS:

/*#include <iostream>
#include <vector>
#include <stack>
using namespace std;
vector <vector<int>> graph;
vector <int> flag;
stack <int> st;
void topSort(int x){
    for(auto neighbor: graph[x]){
        if(flag[neighbor]){
            flag[neighbor] = 0;
            topSort(neighbor);
        }
    }st.push(x);
}int main(){
    int v,e;
    cin>>v>>e;
    graph.resize(v);
    flag.resize(v,1);
    while(e--){
        int x,y;
        cin>>x>>y;
        graph[x].push_back(y);
    }for(int i=0; i<v; i++){
        if(flag[i]){
            flag[i] = 0;
            topSort(i);
        }
    }while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }return 0;
    // tc: O(V+E);
    // sc: O(V);
}*/

// detecting cycle in an undirected graph using DSU:
/*#include <iostream>
#include <vector>
using namespace std;
vector <int> graph;
vector <int> Rank;
int find(int x){
    if(graph[x]==x){
        return x;
    }return graph[x] = find(graph[x]);
}int unionComeDetectCycle(int x, int y){
    int a = find(x);
    int b = find(y);
    if(a==b){
        return 1;
    }else if(Rank[x]>=Rank[y]){
        graph[y] = a;
        Rank[a]++;
    }else{
        graph[x] = b;
        Rank[b]++;
    }return 0;
}int main() { 
    int v,e,flag=0;
    cin>>v>>e;
    graph.resize(v);
    Rank.resize(v);
    for(int i=0; i<v; i++){
       graph[i] = i; 
       Rank[i] = 1;
    }while(e--){
        int x,y;
        cin>>x>>y;
        if(unionComeDetectCycle(x,y)){
            cout<<"Cycle Detected..!";
            flag = 1;
            break;
        }
    }if(!flag){
        cout<<"No Cycle detected..!";
    }return 0;
}
*/

// detectng cycle in an undirected graph using DFS;
/*#include <iostream>
#include <vector>
using namespace std;
int v;
vector  <vector<int>> graph;
vector <int> flag;
int dfsComeDetectCycle(int current, int parent){
    flag[current] = 0;
    int result = 0;
    for(int val: graph[current]){
        if(val!=parent and !flag[val]){
            result = 1;
            return result;
        }if(flag[val]){
            cout<<val<<endl;
            result = dfsComeDetectCycle(val, current);
            if(result){
                return result;
            }
        }
    }return result;
}int checkCycle() {
    for(int i=0; i<v; i++){
        if(flag[i] and dfsComeDetectCycle(i,-1)){
            return 1;
        }
    }return 0;
}int main(){
    int e;
    cin>>v>>e;
    graph.resize(v);
    flag.resize(v,1);
    while(e--){
        int x,y;
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }if(checkCycle()){
        cout<<"Cycle Detected..!";
    }else {
        cout<<"No Cycle Detected..!";
    }return 0;
}*/

// follow up: Cycle Detection in an undirected graph usibg BFS...!

/*#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector <vector<int>> graph;
int main() {
    int v,e;
    cin>>v>>e;
    graph.resize(v);
    queue <int> q;
    while(e--){
        int x,y;
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }vector <int> parent(v,-1);
    vector <int> flag(v,1);
    for(int i=0; i<n; i++) {
        if(parent[i]==-1){
            q.push(i);
            while(!q.empty()){
                int current = q.front();
                for(int val: graph[current]){
                    if(flag[val]){
                        parent[val] = current;
                        flag[val] = 0;
                        q.push(val);
                    }else if(parent[current]!=val and !flag[val]){
                        cout<<"Cycle Is Detected..!";
                        exit(0);
                    }
                }q.pop();
            }
        }
    }cout<<"Cycle is not Detected..!";
    return 0;
}
*/

// Kruskals Algorithm:

/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int v,e;
vector <pair<pair<int,int>,int>> graph;
vector <int> Rank;
vector <int> parent;
int cmp(const pair<pair<int,int>,int> &a, const pair<pair<int,int>,int> &b){
    return a.second<b.second;
}int find(int a){
    if(parent[a]==a){
        return a;
    }return parent[a] = find(parent[a]);
}void Union(int a, int b){
    if(Rank[a]>=Rank[b]){
        parent[b] = a;
        Rank[a]++;
    }else {
        parent[a] = b;
        Rank[b]++;
    }return;
}int kruskals(){
    sort(graph.begin(),graph.end(),cmp);
    for(int i=0; i<v; i++){
        parent[i] = i;
    }int edges = 0;
    int i=0;
    int ans = 0;
    while(edges<v-1 and i<e){
        int a = find(graph[i].first.first);
        int b = find(graph[i].first.second);
        if(a!=b){
            Union(a,b);
            ans += graph[i].second;
            edges++;
        }i++;
    }return ans;
}int main(){
    cin>>v>>e;
    graph.resize(e);
    parent.resize(v);
    Rank.resize(v,1);
    for(int i=0; i<e; i++){
        cin>>graph[i].first.first>>graph[i].first.second>>graph[i].second;
    }cout<<kruskals()<<endl;
    return 0;
    // tc: o(v+eloge);
}*/

// Prims Algorithm:
// 1 based indexing:
/*#include <iostream>
#include <vector>
#include <queue>
#include <climits>
#include <algorithm>
#include <unordered_map>
using namespace std;
struct cmp({
    bool operator()(const pair<int,int> &a, const pair<int,int> &b) const{
        return a.second>b.second;
    }
};struct pair_hash {
    template <class T1, class T2>
    std::size_t operator () (const std::pair<T1, T2>& p) const {
        auto h1 = std::hash<T1>{}(p.first);
        auto h2 = std::hash<T2>{}(p.second);
        return h1 ^ h2;
    }
};vector <vector<int>> graph;
unordered_map <pair<int,int>,int,pair_hash> graphMap;
vector <int> parent;
vector <int> weight;
vector <int> flag;
int v,e,src;
int prims(){
    priority_queue <pair<int,int>, vector<pair<int,int>>, cmp> pq;
    pq.push({src-1,0});
    int i = 0;
    int ans = 0;
    while(i<v){
        pair<int,int> currPair = pq.top();
        pq.pop();
        if(flag[currPair.first]) {
            for(int neighbor: graph[currPair.first]){
                if(flag[neighbor] and neighbor!=parent[currPair.first] and graphMap[{currPair.first,neighbor}]<weight[neighbor]){
                    parent[neighbor] = currPair.first;
                    weight[neighbor] = graphMap[{currPair.first,neighbor}];
                    pq.push({neighbor,graphMap[{currPair.first,neighbor}]});
                }
            }ans += currPair.second;
            flag[currPair.first] = 0;
             i++;
        }
       
    }return ans;
}int main() {
    cin>>v>>e;
    graph.resize(v);
    for(int i=0; i<e; i++){
        int x,y,wt;
        cin>>x>>y>>wt;
        if(graphMap.find({x-1,y-1})!=graphMap.end() and graphMap.find({y-1,x-1})!=graphMap.end()){
            graphMap[{x-1,y-1}] = wt;
            graphMap[{y-1,x-1}] = wt;
        }else {
            graphMap.insert({{x-1,y-1},wt});
            graphMap.insert({{y-1,x-1},wt});
        }if(find(graph[x-1].begin(),graph[x-1].end(),y-1)==graph[x-1].end() and find(graph[y-1].begin(),graph[y-1].end(),x-1)==graph[y-1].end()){
            graph[x-1].push_back(y-1);
            graph[y-1].push_back(x-1);
        }
    }cin>>src;
    parent.resize(v,-1);
    weight.resize(v,INT_MAX);
    flag.resize(v,1);
    cout<<prims();
    return 0;
    // tc: O(n^2);
}*/


// Dijkstras Algorithm:
/*#include <iostream>
#include <vector>
#include <queue>
#include <climits>
#include <algorithm>
#include <unordered_map>
using namespace std;
struct cmp{
    bool operator()(const pair<int,int> &a, const pair<int,int> &b) const{
        return a.second>b.second;
    }
};struct pair_hash {
    template <class T1, class T2>
    std::size_t operator () (const std::pair<T1, T2>& p) const {
        auto h1 = std::hash<T1>{}(p.first);
        auto h2 = std::hash<T2>{}(p.second);
        return h1 ^ h2;
    }
};vector <vector<int>> graph;
unordered_map <pair<int,int>,int,pair_hash> graphMap;
vector <int> parent;
vector <int> weight;
vector <int> flag;
int v,e,src,destiny;
int dijkstras(){
    priority_queue <pair<int,int>, vector<pair<int,int>>, cmp> pq;
    pq.push({src,0});
    int i = 0;
    weight[src] = 0;
    while(i<v){
        pair<int,int> currPair = pq.top();
        pq.pop(); //O(logv)
        if(flag[currPair.first]){
            for(int neighbor: graph[currPair.first]){
                if(flag[neighbor] and neighbor!=parent[currPair.first] and  weight[neighbor]>weight[currPair.first]+graphMap[{currPair.first,neighbor}]){
                    parent[neighbor] = currPair.first;
                    weight[neighbor] = graphMap[{currPair.first,neighbor}];
                    pq.push({neighbor,weight[neighbor]});
                }
            }flag[currPair.first] = 0;
            i++;
        } // bfs: O(v+e);
    }return weight[destiny];
}int main(){
    cin>>v>>e;
    graph.resize(v);
    for(int i=0; i<e; i++){
        int x,y,wt;
        cin>>x>>y>>wt;
        if(graphMap.find({x,y})!=graphMap.end() and graphMap.find({y,x})!=graphMap.end()){
            graphMap[{x,y}] = wt;
            graphMap[{y,x}] = wt;
        }else {
            graphMap.insert({{x,y},wt});
            graphMap.insert({{y,x},wt});
        }if(find(graph[x].begin(),graph[x].end(),y)==graph[x].end() and find(graph[y].begin(),graph[y].end(),x)==graph[y].end()){
            graph[x].push_back(y);
            graph[y].push_back(x);
        }
    }cin>>src>>destiny;
    parent.resize(v,-1);
    weight.resize(v,INT_MAX);
    flag.resize(v,1);
    cout<<dijkstras();
    return 0;
    // tc: O(logv*(v+e));
}*/

// Floyds algorithm:

// #include <iostream>
// #include <vector>
// #define ll long long int
// #include <climits>
// using namespace std;
// int v,e,t;
// const ll BIG = 1e18;
// vector <vector<ll>> graph;
// vector <pair<int,int>> tests;
// void floydWarshall(){
//     for(int i=1; i<v+1; i++){
//         for(int j=1; j<v+1; j++){
//             for(int k=1; k<v+1; k++){
//                 if(j==k){
//                     graph[j][k] = 0;
//                 }else if(j!=i and k!=i){
//                     graph[j][k] = min(graph[j][k], graph[j][i]+graph[i][k]);
//                 }
//             }
//         };
//     }return;
// }int main(){
//     cin>>v>>e>>t;
//     graph.resize(v+1,vector<ll>(v+1,BIG));
//     while(e--){
//         int x,y;
//         ll wt;
//         cin>>x>>y>>wt;
//         if(wt>BIG){
//             wt = BIG;
//         }if(graph[x][y]>wt){
//             graph[x][y] = wt;
//             graph[y][x] = wt;
//         }
//     }while(t--){
//         int x,y;
//         cin>>x>>y;
//         tests.push_back({x,y});
//     }floydWarshall();
//     for(int i=0; i<t; i++){
//         int x = tests[i].first;
//         int y = tests[i].second;
//         if(graph[x][y]>=BIG){
//             cout<<-1<<endl;
//         }else {
//             cout<<graph[x][y]<<endl;
//         }
//     }
//     return 0;
// }

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector <pair<pair<int,int>, int>> graph;\
vector <int> parent;
vector <int> rnk;
void union(int a, int b){
    if(rnk[a]>rank
}
int main(){
    int v,e;
    cin>>v>>e;
    graph.resize(e);
    rank.resize(e,0);
    parent.resize(e);
    for(int i=0; i<e; i++){
        parent[i] = i;
    }for(int i=0; i<e; i++){
        cin>>graph[i].first.first>>graph[i].first.second>>graph[i].second;
    }
}



