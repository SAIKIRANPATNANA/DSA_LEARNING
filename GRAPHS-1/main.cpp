// Implementation Of Graphs:
// adjacency_list:
// undirected_unweighted_graph:
/*#include <iostream>
#include <list>
#include <vector>
using namespace std;
vector <list<int>> graph;
void add_to_graph(int src, int destiny){
    graph[src].push_back(destiny);
    graph[destiny].push_back(src);
    return;
}void print_graph(){
    for(int i=0; i<graph.size(); i++){  
        auto check = graph[i].end();
        check--;
        auto itr = graph[i].begin();
        cout<<i<<" -> ";
        while(itr!=graph[i].end()){
            cout<<*itr;
            if(itr!=check){
                cout<<",";
            }itr++;
        }cout<<endl;
    }return;
}int main() {
    int n;
    cin>>n;
    int src;
    int destiny;
    graph.resize(n+1);
    while(n--){
        cin>>src>>destiny;
        add_to_graph(src,destiny);
    }print_graph();
    return 0;
}
*/
// undirected_weighted_graph;
/*#include <iostream>
#include <list>
#include <vector>
using namespace std;
vector <list<pair<int,int>>> graph;
void add_to_graph(int src, int destiny, int weight){
    graph[src].push_back({destiny,weight});
    graph[destiny].push_back({src,weight});
    return;
}void print_graph(){
    for(int i=0; i<graph.size(); i++){
        auto check = graph[i].end();
        check--;
        auto itr = graph[i].begin();
        cout<<i<<" -> ";
        while(itr!=graph[i].end()){
            cout<<"("<<(*itr).first<<","<<(*itr).second<<")";
            if(itr!=check){
                cout<<",";
            }itr++;
        }cout<<endl;
    }return;
}int main() {
    int n;
    cin>>n;
    int src;
    int destiny;
    int weight;
    graph.resize(n+1);
    while(n--){
        cin>>src>>destiny>>weight;
        add_to_graph(src,destiny,weight);
    }print_graph();
    return 0;
}*/
//directed_unweighted_graph:
/*#include <iostream>
#include <list>
#include <vector>
using namespace std;
vector <list<int>> graph;
void add_to_graph(int src, int destiny){
    graph[src].push_back(destiny);
    return;
}void print_graph(){
    for(int i=0; i<graph.size(); i++){
        auto check = graph[i].end();
        check--;
        auto itr = graph[i].begin();
        cout<<i<<" -> ";
        while(itr!=graph[i].end()){
            cout<<*itr;
            if(itr!=check){
                cout<<",";
            }itr++;
        }cout<<endl;
    }return;
}int main() {
    int n;
    cin>>n;
    int src;
    int destiny;
    graph.resize(n+1);
    while(n--){
        cin>>src>>destiny;
        add_to_graph(src,destiny);
    }print_graph();
    return 0;
}*/
// directed_weighted_graph:
/*#include <iostream>
#include <list>
#include <vector>
using namespace std;
vector <list<pair<int,int>>> graph;
void add_to_graph(int src, int destiny, int weight){
    graph[src].push_back({destiny,weight});
    return;
}void print_graph(){
    for(int i=0; i<graph.size(); i++){
        auto check = graph[i].end();
        check--;
        auto itr = graph[i].begin();
        cout<<i<<" -> ";
        while(itr!=graph[i].end()){
            cout<<"("<<(*itr).first<<","<<(*itr).second<<")";
            if(itr!=check){
                cout<<",";
            }itr++;
        }cout<<endl;
    }return;
}int main() {
    int n;
    cin>>n;
    int src;
    int destiny;
    int weight;
    graph.resize(n);
    while(n--){
        cin>>src>>destiny>>weight;
        add_to_graph(src,destiny,weight);
    }print_graph();
    return 0;
}
*/
// adjacency_map:
// undirected_unweighted_graph:
/*#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;
vector <unordered_set<int>> graph;
void add_to_graph(int src, int destiny){
    graph[src].insert(destiny);
    graph[destiny].insert(src);
    return;
}void print_graph(){
    for(int i=0; i<graph.size(); i++){
        auto itr = graph[i].begin();
        cout<<i<<" -> ";
        while(itr!=graph[i].end()){
            
            if(itr==graph[i].begin()){
                cout<<*itr;
            }else{
                cout<<","<<*itr;
            }itr++;
        }cout<<endl;
    }return;
}int main() {
    int n;
    cin>>n;
    int src;
    int destiny;
    graph.resize(n);
    while(n--){
        cin>>src>>destiny;
        add_to_graph(src,destiny);
    }print_graph();
    return 0;
}*/
// undirected_weighted_graph
/*#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
vector <unordered_map<int,int>> graph;
void add_to_graph(int src, int destiny, int weight){
    graph[src].insert({destiny,weight});
    graph[destiny].insert({src,weight});
    return;
}void print_graph(){
    for(int i=0; i<graph.size(); i++){
        auto itr = graph[i].begin();
        cout<<i<<" -> ";
        while(itr!=graph[i].end()){
            if(itr==graph[i].begin()){
                cout<<"("<<(*itr).first<<","<<(*itr).second<<")";
            }else{
                cout<<","<<"("<<(*itr).first<<","<<(*itr).second<<")";
            }itr++;
        }cout<<endl;
    }return;
}int main() {
    int n;
    cin>>n;
    int src;
    int destiny;
    int weight;
    graph.resize(n);
    while(n--){
        cin>>src>>destiny>>weight;
        add_to_graph(src,destiny,weight);
    }print_graph();
    return 0;
}*/
//directed_unweighted_graph:
/*#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;
vector <unordered_set<int>> graph;
void add_to_graph(int src, int destiny){
    graph[src].insert(destiny);
    return;
}void print_graph(){
    for(int i=0; i<graph.size(); i++){
        auto itr = graph[i].begin();
        cout<<i<<" -> ";
        while(itr!=graph[i].end()){
            
            if(itr==graph[i].begin()){
                cout<<*itr;
            }else{
                cout<<","<<*itr;
            }itr++;
        }cout<<endl;
    }return;
}int main() {
    int n;
    cin>>n;
    int src;
    int destiny;
    graph.resize(n);
    while(n--){
        cin>>src>>destiny;
        add_to_graph(src,destiny);
    }print_graph();
    return 0;
}*/
// directed_weighted_graph
/*#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
vector <unordered_map<int,int>> graph;
void add_to_graph(int src, int destiny, int weight){
    graph[src].insert({destiny,weight});
    return;
}void print_graph(){
    for(int i=0; i<graph.size(); i++){
        auto itr = graph[i].begin();
        cout<<i<<" -> ";
        while(itr!=graph[i].end()){
            if(itr==graph[i].begin()){
                cout<<"("<<(*itr).first<<","<<(*itr).second<<")";
            }else{
                cout<<","<<"("<<(*itr).first<<","<<(*itr).second<<")";
            }itr++;
        }cout<<endl;
    }return;
}int main() {
    int n;
    cin>>n;
    int src;
    int destiny;
    int weight;
    graph.resize(n);
    while(n--){
        cin>>src>>destiny>>weight;
        add_to_graph(src,destiny,weight);
    }print_graph();
    return 0;
}*/
// adjacency_matrix:
// undirected_unweighted_graph:
/*#include <iostream>
#include <vector>
using namespace std;
vector <vector <int>> graph;
void add_to_graph(int src, int destiny){
    graph[src][destiny] = 1;
    graph[destiny][src] = 1;
    return;
}void print_graph(){
    for(int i=0; i<graph.size(); i++){
        cout<<i<<" -> ";
        int flag = 1;
        for(int j=0; j<graph[i].size(); j++){
            if(flag and graph[i][j]){
                cout<<j;
                flag = 0;
            }else if(graph[i][j]){
                cout<<","<<j;
            }
        }cout<<endl;
    }return;
}int main(){
    int n;
    cin>>n;
    int src;
    int destiny;
    graph.resize(n,vector <int> (n,0));
    while(n--){
        cin>>src>>destiny;
        add_to_graph(src,destiny);
    }print_graph();
    return 0;
}*/

// undirected_weighted_graph
/*#include <iostream>
#include <vector>
using namespace std;
vector <vector <int>> graph;
void add_to_graph(int src, int destiny, int weight){
    graph[src][destiny] = weight;
    graph[destiny][src] = weight;
    return;
}void print_graph(){
    for(int i=0; i<graph.size(); i++){
        cout<<i<<" -> ";
        int flag = 1;
        for(int j=0; j<graph[i].size(); j++){
            if(flag and graph[i][j]!=-1){
                cout<<"("<<j<<","<<graph[i][j]<<")";
                flag = 0;
            }else if(graph[i][j]!=-1){
                cout<<","<<"("<<j<<","<<graph[i][j]<<")";
            }
        }cout<<endl;
    }return;
}int main(){
    int n;
    cin>>n;
    int src;
    int destiny;
    int weight;
    graph.resize(n,vector <int> (n,-1));
    while(n--){
        cin>>src>>destiny>>weight;
        add_to_graph(src,destiny,weight);
    }print_graph();
    return 0;
}*/
// directed_unweighted_graph
/*#include <iostream>
#include <vector>
using namespace std;
vector <vector <int>> graph;
void add_to_graph(int src, int destiny){
    graph[src][destiny] = 1;
    return;
}void print_graph(){
    for(int i=0; i<graph.size(); i++){
        cout<<i<<" -> ";
        int flag = 1;
        for(int j=0; j<graph[i].size(); j++){
            if(flag and graph[i][j]){
                cout<<j;
                flag = 0;
            }else if(graph[i][j]){
                cout<<","<<j;
            }
        }cout<<endl;
    }return;
}int main(){
    int n;
    cin>>n;
    int src;
    int destiny;
    graph.resize(n,vector <int> (n,0));
    while(n--){
        cin>>src>>destiny;
        add_to_graph(src,destiny);
    }print_graph();
    return 0;
}*/
//directed_weighted_graph
/*#include <iostream>
#include <vector>
using namespace std;
vector <vector <int>> graph;
void add_to_graph(int src, int destiny, int weight){
    graph[src][destiny] = weight;
    return;
}void print_graph(){
    for(int i=0; i<graph.size(); i++){
        cout<<i<<" -> ";
        int flag = 1;
        for(int j=0; j<graph[i].size(); j++){
            if(flag and graph[i][j]!=-1){
                cout<<"("<<j<<","<<graph[i][j]<<")";
                flag = 0;
            }else if(graph[i][j]!=-1){
                cout<<","<<"("<<j<<","<<graph[i][j]<<")";
            }
        }cout<<endl;
    }return;
}int main(){
    int n;
    cin>>n;
    int src;
    int destiny;
    int weight;
    graph.resize(n,vector <int> (n,-1));
    while(n--){
        cin>>src>>destiny>>weight;
        add_to_graph(src,destiny,weight);
    }print_graph();
    return 0;
}*/

// Incidence Matrix:
// undirected_unweighted_graph:
/*#include <iostream>
#include <vector>
using namespace std;
vector <vector<int>> graph;
void print_graph(){
    for(int i=0; i<graph.size(); i++){
        cout<<i<<" -> ";
        int flag = 1;
        for(int j=0; j<graph[0].size(); j++){
            if(graph[i][j]){
                for(int k=0; k<graph.size(); k++){
                    if(k!=i  and graph[k][j]){
                        if(flag) {
                            cout<<k;
                            flag = 0;
                        }else{
                            cout<<","<<k;
                        }
                    }
                }
            }
        }cout<<endl;
    }return;
}void add_to_graph(int a, int b, int c){
    graph[b][a] = 1;
    graph[c][a] = 1;
    return;
}int main(){
    int n,e,a,b,c;
    cin>>n>>e;
    graph.resize(n,vector<int>(e,0));
    while(e--){
        cin>>a;
        cin>>b;
        cin>>c;
        add_to_graph(a,b,c);
    }print_graph();
    return 0;
}*/

// undirected_weighted_graph:
/*#include <iostream>
#include <vector>
using namespace std;
vector <vector<int>> graph;
void print_graph(){
    for(int i=0; i<graph.size(); i++){
        cout<<i<<" -> ";
        int flag = 1;
        for(int j=0; j<graph[0].size(); j++){
            if(graph[i][j]){
                for(int k=0; k<graph.size(); k++){
                    if(k!=i  and graph[k][j]){
                        if(flag) {
                            cout<<"("<<k<<","<<graph[i][j]<<")";
                            flag = 0;
                        }else{
                            cout<<","<<"("<<k<<","<<graph[i][j]<<")";
                        }
                    }
                }
            }
        }cout<<endl;
    }return;
}void add_to_graph(int a, int weight, int b, int c){
    graph[b][a] = weight;
    graph[c][a] = weight;
    return;
}int main(){
    int n,e,a,b,c,weight;
    cin>>n>>e;
    graph.resize(n,vector<int>(e,0));
    while(e--){
        cin>>a;
        cin>>weight;
        cin>>b;
        cin>>c;
        add_to_graph(a,weight,b,c);
    }print_graph();
    return 0;
}*/
// directed_unweighted_graph:
/*#include <iostream>
#include <vector>
using namespace std;
vector <vector<int>> graph;
void print_graph(){
    for(int i=0; i<graph.size(); i++){
        cout<<i<<" -> ";
        int flag = 1;
        for(int j=0; j<graph[0].size(); j++){
            if(graph[i][j] and graph[i][j]!=-1){
                for(int k=0; k<graph.size(); k++){
                    if(k!=i  and graph[k][j]){
                        if(flag) {
                            cout<<k;
                            flag = 0;
                        }else{
                            cout<<","<<k;
                        }
                    }
                }
            }
        }cout<<endl;
    }return;
}void add_to_graph(int a, int b, int c){
    graph[b][a] = 1;
    graph[c][a] = -1;
    return;
}int main(){
    int n,e,a,b,c;
    cin>>n>>e;
    graph.resize(n,vector<int>(e,0));
    while(e--){
        cin>>a;
        cin>>b;
        cin>>c;
        add_to_graph(a,b,c);
    }print_graph();
    return 0;
}*/
// directed_weighted_graph:
/*#include <iostream>
#include <vector>
using namespace std;
vector <vector<int>> graph;
void print_graph(){
    for(int i=0; i<graph.size(); i++){
        cout<<i<<" -> ";
        int flag = 1;
        for(int j=0; j<graph[0].size(); j++){
            if(graph[i][j] and graph[i][j]!=-1){
                for(int k=0; k<graph.size(); k++){
                    if(k!=i  and graph[k][j]){
                        if(flag) {
                            cout<<"("<<k<<","<<graph[i][j]<<")";
                            flag = 0;
                        }else{
                            cout<<","<<"("<<k<<","<<graph[i][j]<<")";
                        }
                    }
                }
            }
        }cout<<endl;
    }return;
}void add_to_graph(int a, int weight, int b, int c){
    graph[b][a] = weight;
    graph[c][a] = -1;
    return;
}int main(){
    int n,e,a,b,c,weight;
    cin>>n>>e;
    graph.resize(n,vector<int>(e,0));
    while(e--){
        cin>>a;
        cin>>weight;
        cin>>b;
        cin>>c;
        add_to_graph(a,weight,b,c);
    }print_graph();
    return 0;
}*/

// DepthFirstSearch(DFS):
// let's consider a undirected_unweighted_graph;
// AnyPath Implementation:
/*#include <iostream>
#include <list>
#include <vector>
using namespace std;
vector <list<int>> graph;
vector <int> check;
void add_to_graph(int src, int destiny){
    graph[src].push_back(destiny);
    graph[destiny].push_back(src);
    return;
}int anyPath(int src, int destiny){
    if(src==destiny){
        return 1;
    }int ans = 0;
    check[src] = 0;
    for(int val: graph[src]){
        if(check[val]){
            ans =  anyPath(val,destiny);
            if(ans){
               break;
            }
        }
    }return ans;
}int main(){
    int e;
    cin>>e;
    int src;
    int destiny;
    graph.resize(e+1);
    check.resize(e+1,1);
    while(e--){
        cin>>src>>destiny;
        add_to_graph(src,destiny);
    }cout<<anyPath(0,3);
    return 0;
}*/
// AllPath Implementation:
/*#include <iostream>
#include <list>
#include <vector>
using namespace std;
vector <list<int>> graph;
vector <int> check;
vector <vector<int>> paths;
void add_to_graph(int src, int destiny){
    graph[src].push_back(destiny);
    graph[destiny].push_back(src);
    return;
}void allPath(int src, int destiny, vector <int> path){
    if(src==destiny){
        paths.push_back(path);
        return;
    }for(int val: graph[src]){
        if(check[val]){
            check[val] = 0;
            path.push_back(val);
            allPath(val,destiny,path);
            path.pop_back();
            check[val] = 1;
        }
    }return;
}int main(){
    int e;
    cin>>e;
    int src;
    int destiny;
    graph.resize(e);
    check.resize(e,1);
    vector <int> path;
    path.push_back(0);
    check[0] = 0;
    while(e--){
        cin>>src>>destiny;
        add_to_graph(src,destiny);
    }allPath(0,3,path);
    for(auto path: paths){
        for(int val: path){
            cout<<val<<" ";
        }cout<<endl;
    }return 0;
}*/
// Breadth First Search(BFS):
// lot(levelOrderTraversal)
/*#include <iostream>
#include <list>
#include <queue>
#include <vector>
using namespace std;
vector <list<int>> graph;
queue <int> q;
vector <int> check;
void add_to_graph(int src, int destiny){
    graph[src].push_back(destiny);
    graph[destiny].push_back(src);
    return;
}void lot(int src){
    q.push(src);
    check[src] = 0;
    while(!q.empty()){
        for(int val: graph[q.front()]){
           if(check[val]){
               q.push(val);
               check[val] = 0;
           }
        }cout<<q.front()<<" ";
        q.pop();
    }return;
}int main(){
    int e;
    cin>>e;
    int src;
    int destiny;
    graph.resize(e);
    check.resize(e,1);
    vector <int> path;
    while(e--){
        cin>>src>>destiny;
        add_to_graph(src,destiny);
    }lot(0);
    return 0;
}*/
// ShortPath Implementation:
/*#include <iostream>
#include <list>
#include <queue>
#include <vector>
using namespace std;
vector <list<int>> graph;
queue <int> q;
vector <int> check;
vector <int> short_path;
void add_to_graph(int src, int destiny){
    graph[src].push_back(destiny);
    graph[destiny].push_back(src);
    return;
}void shortPath(int src){
    q.push(src);
    short_path[0] = 0;
    check[src] = 0;
    while(!q.empty()){
        for(int val: graph[q.front()]){
            if(check[val]){
               short_path[val] = short_path[q.front()]+1;
               q.push(val);
               check[val] = 0;
            }
        }q.pop();
    }return;
}int main(){
    int e;
    cin>>e;
    int src;
    int destiny;
    graph.resize(e);
    check.resize(e,1);
    short_path.resize(e,0);
    vector <int> path;
    while(e--){
        cin>>src>>destiny;
        add_to_graph(src,destiny);
    }shortPath(0);
    for(int val: short_path){
        cout<<val<<" ";
    }return 0;
}*/
// Q2.GiveX aX uXdirected graph, check if there exists a cycle iX the graph.
/*#include <iostream>
#include <vector>
#include <list>
using namespace std;
vector <list<int>> graph;
vector <int> flag;
void add_to_graph(int src, int destiny){
    graph[src].push_back(destiny);
    graph[destiny].push_back(src);
}int checkCycle(int src, int parent,vector <int> trace, vector<int> graph[]){
    if(find(trace.begin(),trace.end(),src)!=trace.end()){
        return 1;
    }flag[src] = 0;
    int ans = 0;
    trace.push_back(src);
    for(auto val: graph[src]){
        if(parent!=val){
            ans = checkCycle(val,src,trace,graph);
        }if(ans){
            break;
        }
    }trace.pop_back();
    return  ans;
}int getResult(int V){
    flag.resize(V+1,1);
    int ans = 0;
    for(int i=0; i<V; i++){
        vector <int> trace;
        if(flag[i] and checkCycle(i,i,trace,graph)){
            ans = 1;
            break;
        }
    }return ans;
}int main(){
    int e,n,src,destiny;
    cin>>n>>e;
    graph.resize(n+1);
    flag.resize(n+1);
    while(e--){
        cin>>src>>destiny;
        add_to_graph(src,destiny);
    }cout<<getResult(n);
    return 0;
}*/
// is Graph Tree?
/*#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
using namespace std;
vector <list<int>> graph;
vector <int> flag;
void add_to_graph(int src, int destiny){
    graph[src].push_back(destiny);
    graph[destiny].push_back(src);
    return;
}int checkCycle(int src, int parent, vector <int> trace){
    if(find(trace.begin(),trace.end(),src)!=trace.end()){
        return 1;
    }flag[src] = 0;
    int ans = 0;
    trace.push_back(src);
    for(auto val: graph[src]){
        if(parent!=val){
            ans = checkCycle(val,src,trace);
        }if(ans){
            break;
        }
    }trace.pop_back();
    return  ans;
}int getResult(int n){
	vector <int> trace;
    int ans = checkCycle(0,0,trace);
    for(int i=0; i<n; i++){
        if(flag[i]){
			return 0;
		}
    }if(!ans){
		return 1;
	}return 0;
}int main(){
    int e,n,src,destiny;
    cin>>n>>e;
    flag.resize(n);
    graph.resize(n);
    while(e--){
        cin>>src>>destiny;
        add_to_graph(src,destiny);
    }cout<<getResult(n);
    return 0;
}*/
// Excellent Alternative of above query:
// Fun Fact: In a tree, the no. of edges will always be less than the no. of vertices since e = n-1, so n>e;
// #include <iostream>
/*using namespace std;
int main() {
    int n,e;
    cin>>n>>e;
    if(n<e){
        cout<<1;
    }else{
        cout<<0;
    }
}*/

// NumberOfIslands:
// Given an m x n 2D binary grid grid which represents a map of '1's (land) and '0's (water), return the number of islands.
// An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. You may assume all 
// four edges of the grid are all surrounded by water.
// lc solution:
/*class Solution {
public: 
    vector <vector<int>> flag;
    int m,n;
    void dfs(int i, int j, vector <vector<char>> &grid){
        if(grid[i][j]=='0'){
            return;
        }if(i-1>=0 and flag[i-1][j]){
            flag[i-1][j] = 0;
            dfs(i-1,j,grid);
        }if(i+1<m and flag[i+1][j]){
            flag[i+1][j] = 0;
            dfs(i+1,j,grid);
        }if(j-1>=0 and flag[i][j-1]){
            flag[i][j-1] = 0;
            dfs(i,j-1,grid);
        }if(j+1<n and flag[i][j+1]){
            flag[i][j+1] = 0;
            dfs(i,j+1,grid);
        }return;
    }int numIslands(vector<vector<char>>& grid) {
        m = grid.size();
        n = grid[0].size();
        flag.resize(m,vector<int>(n,1));
        int ans = 0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]!='0' and flag[i][j]){
                    ans++;
                    dfs(i,j,grid);
                }
            }
        }return ans;
    }
};
*/
// Given a grid of size n*m (n is the number of rows and m is the number of columns in the grid) consisting of '0's (Water) and '1's(Land). Find the number of islands.
// Note: An island is either surrounded by water or boundary of grid and is formed by connecting adjacent lands horizontally or vertically or diagonally i.e., in all 8 directions.
// gfg solution:
/*vector <vector<int>> flag;
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        queue <pair<int,int>> q;
        flag.resize(m,vector<int>(n,1));
        int ans = 0;
        for(int i=0; i<m; i++){
            for(int j = 0; j<n; j++){
                if(grid[i][j]=='0'){
                    flag[i][j] = 0;
                }else if(grid[i][j] == '1' and flag[i][j]){
                    ans++;
                    flag[i][j]=0;
                    q.push({i,j});
                    while(!q.empty()){
                        int r = q.front().first;
                        int c = q.front().second;
                        if(r-1>=0 and flag[r-1][c] and grid[r-1][c]!='0'){
                            flag[r-1][c] = 0;
                            q.push({r-1,c});
                        }if(r+1<m and flag[r+1][c] and grid[r+1][c]!='0'){
                            flag[r+1][c] = 0;
                            q.push({r+1,c});
                        }if(c-1>=0 and flag[r][c-1] and grid[r][c-1]!='0'){
                            flag[r][c-1] = 0;
                            q.push({r,c-1});
                        }if(c+1<n and flag[r][c+1] and grid[r][c+1]!='0'){
                            flag[r][c+1] = 0;
                            q.push({r,c+1});
                        }if(r-1>=0 and c-1>=0 and flag[r-1][c-1] and grid[r-1][c-1]!='0'){
                            flag[r-1][c-1]  = 0;
                            q.push({r-1,c-1});
                        }if(r+1<m and c+1<n and flag[r+1][c+1] and grid[r+1][c+1]!='0'){
                            flag[r+1][c+1] = 0;
                            q.push({r+1,c+1});
                        }if(r-1>=0 and c+1<n and flag[r-1][c+1] and grid[r-1][c+1]!='0'){
                            flag[r-1][c+1]  = 0;
                            q.push({r-1,c+1});
                        }if(r+1<m and c-1>=0 and flag[r+1][c-1] and grid[r+1][c-1]!='0'){
                            flag[r+1][c-1] = 0;
                            q.push({r+1,c-1});
                        }q.pop();
                    }
                }
            }
        }return ans;
*/

// atlanticPacificWaterQuery(lc):
/*class Solution {
public:
    vector <vector<int>> pf,af;
    int m,n;
    void bfs(vector<vector<int>> &heights, vector <vector<int>> &ocean,queue <pair<int,int>> &q){
       while(!q.empty()){
           int i = q.front().first;
           int j = q.front().second;
           if(i-1>=0 and ocean[i-1][j] and heights[i-1][j]>=heights[i][j]){
               ocean[i-1][j] = 0;
               q.push({i-1,j});
           }if(i+1<m and ocean[i+1][j] and heights[i+1][j]>=heights[i][j]){
               ocean[i+1][j] = 0;
               q.push({i+1,j});
           }if(j-1>=0 and ocean[i][j-1] and heights[i][j-1]>=heights[i][j]){
               ocean[i][j-1] = 0;
               q.push({i,j-1});
           }if(j+1<n and ocean[i][j+1] and heights[i][j+1]>=heights[i][j]){
               ocean[i][j+1] = 0;
               q.push({i,j+1});
           }q.pop();
       }return;
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        m = heights.size();
        n = heights[0].size();
        pf.resize(m, vector<int>(n,1));
        af.resize(m, vector<int>(n,1));
        queue <pair<int,int>> pq;
        queue <pair<int,int>> aq;
        for(int j=0; j<n; j++){
            pf[0][j] = 0;
            af[m-1][j] = 0;
            pq.push({0,j});
            aq.push({m-1,j});
        }for(int i=0; i<m; i++){
            pf[i][0] = 0;
            af[i][n-1] = 0;
            if(i!=0){
                pq.push({i,0});
            }if(i!=m-1) {
                aq.push({i,n-1});
            }
        }bfs(heights,pf,pq);
        bfs(heights,af,aq);
        vector <vector<int>> result;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(!pf[i][j] and !af[i][j]){
                    result.push_back({i,j});
                }
            }
        }return result;
    }
};*/
// rottenOrangesQuery(lc);
/*class Solution {
public:
    int m,n;
    vector <vector<int>> flag;
    int bfs(vector<vector<int>> &grid){
       queue <pair<pair<int,int>, int>> q;
       for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
               if(grid[i][j]==2){
                   q.push({{i,j},0});
               }
            }
        }if(!q.size()){
            return 0;
        }while(true){
           int i = q.front().first.first;
           int j = q.front().first.second;
           int t = q.front().second;
           if(i-1>=0 and grid[i-1][j]==1){
               grid[i-1][j] = 2;
               q.push({{i-1,j},t+1});
           }if(i+1<m and grid[i+1][j]==1){
               grid[i+1][j] = 2;
               q.push({{i+1,j},t+1});
           }if(j-1>=0 and grid[i][j-1]==1){
               grid[i][j-1] = 2;
               q.push({{i,j-1},t+1});
           }if(j+1<n and grid[i][j+1]==1){
               grid[i][j+1] = 2;
               q.push({{i,j+1},t+1});
           }q.pop();
           if(q.empty()){
               return t;
           }
       }return 0;
    }int orangesRotting(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();
        int ans = bfs(grid);
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]==1){
                    return -1;
                }
            }
        }return ans;
    }
};*/

// Counting Rooms
/*#include <iostream>
#include <vector>
using namespace std;
vector <vector<char>> map;
vector <vector<int>> flag;
int n,m;
void dfs(int i, int j){
    if(map[i][j]=='#'){
        return;
    }if(i+1<n and flag[i+1][j]){
        flag[i+1][j] = 0;
        dfs(i+1, j);
    }if(i-1>=0 and flag[i-1][j]){
        flag[i-1][j] = 0;
        dfs(i-1, j);
    }if(j+1<m and flag[i][j+1]){
        flag[i][j+1] = 0;
        dfs(i, j+1);
    }if(j-1>=0 and flag[i][j-1]){
        flag[i][j-1] = 0;
        dfs(i, j-1);
    }return;
}int main() {
    cin>>n>>m;
    flag.resize(n,vector<int>(m,1));
    map.resize(n,vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>map[i][j];
        }
    }int ans  = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++) {
            if(flag[i][j] and map[i][j]!='#'){
                dfs(i,j);
                ans++;
            }
        }
    }cout<<ans;
    return 0;
}*/

// using dfs : not worked out---
// Labrinth:
// #include <iostream>
// #include <vector>
// #include <string>
// #include <climits>
// using namespace std;
// vector <vector<char>> map;
// vector <vector<int>> flag;
// int n,m;
// string ans_path;
// int ans = INT_MAX;
// void dfs(int i, int j, string path){
//     if(map[i][j]=='#') {
//         return;
//     }if(map[i][j]=='B'){
//         if(ans>path.length()) {
//             ans = path.length();
//             ans_path = path;
//         }return;
//     }if(i+1<n and flag[i+1][j]){
//         flag[i+1][j] = 0;
//         dfs(i+1, j,path+'D');
//     }if(i-1>=0 and flag[i-1][j]){
//         flag[i-1][j] = 0;
//         dfs(i-1, j, path+'U');
//     }if(j+1<m and flag[i][j+1]){
//         flag[i][j+1] = 0;
//         dfs(i, j+1, path+'R');
//     }if(j-1>=0 and flag[i][j-1]){
//         flag[i][j-1] = 0;
//         dfs(i, j-1, path+'L');
//     }return;
// }int main() {
//     cin>>n>>m;
//     int a,b;
//     flag.resize(n,vector<int>(m,1));
//     map.resize(n,vector<char>(m));
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             cin>>map[i][j];
//             if(map[i][j]=='A'){
//                 a = i; 
//                 b = j;
//                 flag[i][j] = 0;
//             }
//         }
//     }string path;
//     dfs(a,b,path);
//     if(!ans_path.empty()){
//         cout<<"YES"<<endl;
//         cout<<ans_path.length()<<endl;
//         cout<<ans_path;
//     }else{
//         cout<<"NO";
//     }return 0;
// }

// using bfs;
/*#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector <vector<char>> map;
int main() {
    int n,m;
    cin>>n>>m;
    map.resize(n, vector <char> (m));
    vector <vector<int>> flag(n, vector <int>(m, 1));
    int a,b;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>map[i][j];
            if(map[i][j]=='A'){
                a = i;
                b = j;
            }
        }
    }queue <pair<pair<int,int>,string>> q;
    flag[a][b] = 0;
    string ans;
    q.push({{a,b},ans});
    while(!q.empty()){
        int i = q.front().first.first;
        int j = q.front().first.second;
        string path = q.front().second;
        flag[i][j] = 0;
        if(map[i][j]=='B'){
            flag[i][j] = 1;
            if(ans.empty() or ans.size()>=path.size()){
                ans = path;
            }
        }else{
            if(i+1<n and map[i+1][j]!='#' and flag[i+1][j]){
                q.push({{i+1,j},path+'D'});
            }if(i-1>=0 and map[i-1][j]!='#' and flag[i-1][j]){
                q.push({{i-1,j},path+'U'});
            }if(j+1<m and map[i][j+1]!='#' and flag[i][j+1]){
                q.push({{i,j+1},path+'R'});
            }if(j-1>=0 and map[i][j-1]!='#' and flag[i][j-1]){
                q.push({{i,j-1},path+'L'});
            }
        }q.pop();
    }if(!ans.empty()){
        cout<<"YES"<<endl;
        cout<<ans.length()<<endl;
        cout<<ans;
    }else{
        cout<<"NO";
    }return 0;
}*/

// Building Roads:
/*#include <iostream>
#include <vector>
using namespace std;
vector <vector<int>> building;
vector <int> flag;
void dfs(int s){
    flag[s] = 0;
    if(!building[s].size()){
        return;
    }for(int d: building[s]){
        if(flag[d]) {
            dfs(d);
        }
    }return;
}int main() {
    int n,m;
    cin>>n>>m;
    building.resize(n);
    flag.resize(n,1);
    int ans = 0;
    vector <pair<int,int>> paths;
    while(m--){
        int s,d;
        cin>>s>>d;
        building[s-1].push_back(d-1);
        building[d-1].push_back(s-1);
    }for(int i=0; i<n; i++){
        if(flag[i]){
            if(i){
                paths.push_back({i,i+1});
            }ans++;
            dfs(i);
        }
    }cout<<ans-1<<endl;
    for(auto path: paths){
        cout<<path.first<<" "<<path.second<<endl;
    }return 0;
}*/

// Message Route;
// #include <iostream>
// #include <vector>
// using namespace std;
// vector <vector<int>> network;
// vector <int> result;
// vector <int> flag;
// void anyMinPath(int s, int d, vector <int> path){
//     flag[s] = 0;
//     path.push_back(s);
//     if(s==d){
//         flag[s] = 1;
//         if(result.empty() or result.size()>=path.size()){
//             result = path;
//         }return;
//     }if(!network[s].size()){
//         return;
//     }for(int val: network[s]){
//         if(flag[val]){
//             anyMinPath(val,d,path);
//         }
//     }path.pop_back();
//     return;
// }int main() {
//     int n,m;
//     cin>>n>>m;
//     network.resize(n);
//     flag.resize(n,1);
//     while(m--){
//         int s,d;
//         cin>>s>>d;
//         network[s-1].push_back(d-1);
//         network[d-1].push_back(s-1);
//     }vector <int> temp;
//     anyMinPath(0,n-1,temp);
//     if(!result.size()){
//         cout<<"IMPOSSIBLE";
//     }else {
//         cout<<result.size()<<endl;
//         for(int val: result){
//              cout<<val+1<<" ";
//         }
//     }return 0;
// }

// using bfs:
/*#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    vector <vector<int>> network(n);
    while(m--){
        int s,d;
        cin>>s>>d;
        network[s-1].push_back(d-1);
        network[d-1].push_back(s-1);
    }queue <pair<int,vector<int>>> q;
    vector <int> result;
    vector <int> flag(n,1);
    q.push({0,{0}});
    flag[0] = 0;
    while(!q.empty()){
        int i = q.front().first;
        vector <int> path = q.front().second;
        flag[i] = 0;
        if(i==n-1){
            if(result.empty() or result.size()>=path.size()){
                result = path;
            }
        }for(int val: network[i]){
            if(flag[val]){
                path.push_back(val);
                q.push({val, path});
            }
        }q.pop();
    }if(!result.empty()){
        cout<<result.size()<<endl;
        for(int val: result){
            cout<<val<<" ";
        }
    }else {
        cout<<"IMPOSSIBLE";
    }return 0;
}*/

// Building Teams:
/*#include <iostream>
#include <vector>
using namespace std;
vector <vector<int>> pupils;
vector <int> teams;
void dfs(int i, int a, int b){
    teams[i] = a;
    swap(a,b);
    for(int val: pupils[i]){
        if(teams[val]==-1){
            dfs(val, a, b);
        }else{
            if(teams[i]==teams[val]){
                cout<<"IMPOSSIBLE"<<endl;
                exit(0);
            }
        }
    }return;
}int main() {
    int n,m;
    cin>>n>>m;
    pupils.resize(n);
    teams.resize(n,-1);
    while(m--){
        int s,d;
        cin>>s>>d;
        pupils[s-1].push_back(d-1);
        pupils[d-1].push_back(s-1);
    }for(int i=0; i<n; i++){
        if(teams[i]==-1){
            dfs(i,1,2);
        }
    }for(int i=0; i<n; i++){
        cout<<teams[i]<<" ";
    }return 0;
}*/

// Round Trip:
/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector <vector<int>> cities;
void dfs(int current, int parent, vector <int> trip){
    for(int val: cities[current]){
        if(trip[0] == val and trip.size()>=3){
            trip.push_back(val);
            cout<<trip.size()<<endl;
            for(int city: trip){
                cout<<city+1<<" ";
            }exit(0);
        }else{
            if(parent!=val and find(trip.begin(), trip.end(), val)==trip.end()){
                trip.push_back(val);
                dfs(val, current, trip);
                trip.pop_back();
            }
        }
    }return;
}int main(){
    int n,m;
    cin>>n>>m;
    cities.resize(n);
    while(m--){
        int s,d;
        cin>>s>>d;
        cities[s-1].push_back(d-1);
        cities[d-1].push_back(s-1);
    }for(int i=0; i<n; i++){
        vector <int> trip;
        trip.push_back(i);
        dfs(i,0,trip);
    }cout<<"IMPOSSIBLE";
    return 0;
}*/

// Monsters:
/*#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector <vector<char>> map;
int n,m;
int checkMonster(int i, int j){
    if(i>=0 and i<n and j>=0 and j<m and map[i+1][j]!='M' and map[i-1][j]!='M' and map[i][j+1]!='M' and map[i][j-1]!='M'){
        return 1;
    }return 0;
}int main() {
    cin>>n>>m;
    map.resize(n, vector <char> (m));
    vector <vector<int>> flag(n, vector <int>(m, 1));
    int a,b;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>map[i][j];
            if(map[i][j]=='A'){
                a = i;
                b = j;
            }
        }
    }queue <pair<pair<int,int>,string>> q;
    flag[a][b] = 0;
    string ans;
    q.push({{a,b},ans});
    while(!q.empty()){
        int i = q.front().first.first;
        int j = q.front().first.second;
        string path = q.front().second;
        flag[i][j] = 0;
        if(((i==n-1 and j<m) or (i<n and j==m-1)) and  map[i][j]=='.'){
            flag[i][j] = 1;
            if(ans.empty() or ans.size()>=path.size()){
                ans = path;
            }
        }else{
            if(i+1<n and map[i+1][j]!='#' and flag[i+1][j]  and checkMonster(i+1, j)){
                q.push({{i+1,j},path+'D'});
            }if(i-1>=0 and map[i-1][j]!='#' and flag[i-1][j]  and checkMonster(i-1, j)){
                q.push({{i-1,j},path+'U'});
            }if(j+1<m and map[i][j+1]!='#' and flag[i][j+1] and checkMonster(i, j+1)){
                q.push({{i,j+1},path+'R'});
            }if(j-1>=0 and map[i][j-1]!='#' and flag[i][j-1] and checkMonster(i, j-1)){
                q.push({{i,j-1},path+'L'});
            }
        }q.pop();
    }if(!ans.empty()){
        cout<<"YES"<<endl;
        cout<<ans.length()<<endl;
        cout<<ans;
    }else{
        cout<<"NO";
    }return 0;
}*/

// Shortest Routes - 1:

// /*#include <iostream>
// #include <vector>
// #include <queue>
// #include <algorithm>
// #include <climits>
// using namespace std;
// int main() {
//     int n,m;
//     cin>>n>>m;
//     vector <vector<int>> graph;
//     vector <vector<int>> dist;
//     vector <int> flag;
//     graph.resize(n);
//     dist.resize(n,vector<int> (n, INT_MAX));
//     flag.resize(n, 1);
//     for(int i=0; i<n; i++){
//         dist[i][i] = 0;
//     }while(m--){
//         int s,d,l;
//         cin>>s>>d>>l;
//         if(find(graph[s-1].begin(), graph[s-1].end(),d-1)==graph[s-1].end() ){
//             graph[s-1].push_back(d-1);
//             graph[d-1].push_back(s-1);
//         }dist[s-1][d-1] = min(dist[s-1][d-1],l);
//         dist[d-1][s-1] = dist[s-1][d-1];
//     }queue <pair<int,int>> q;
//     q.push({0,0}); 
//     flag[0] = 0;
//     while(!q.empty()){
//         int i = q.front().first;
//         int length = q.front().second;
//         for(int val: graph[i]){
//             dist[0][val] = min(dist[0][val], length+dist[i][val]);
//             if(flag[val]){
//                 q.push({val, dist[0][val]});
//                 flag[val] = 0;
//             }
//         }q.pop();
//     }for(int i=0; i<n; i++){
//         cout<<dist[0][i]<<" ";
//     }return 0;
// }
*/
