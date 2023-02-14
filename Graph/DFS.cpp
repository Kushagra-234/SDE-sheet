// Intuition:
// we use recursion and backtracking we take a visited array vis[n]={0} and do recursion from starting node

// dfs(){
//     vis[node]=1
//     ans.push_back(node);

//     we traverse node it:adj[node]
//     if not then we recursively call function
// }

// sc- o(n) for recursive stack space

// tc-0(n) + 0(2e)
// code :public:  
//     void dfs(vector<int>&ans,vector<int> adj[],int vis[],int node){
        
//         vis[node]=1;
//          ans.push_back(node);

        
        
//         for(auto it:adj[node]){
//             if(!vis[it]){
//             dfs(ans,adj,vis,it);    

//             }
//         }
//     }
//     // Function to return a list containing the DFS traversal of the graph.
//     vector<int> dfsOfGraph(int n, vector<int> adj[]) {
        
//         int start=0;
//         int vis[n]={0};
//         // vis[start]=1;
        
//         vector<int>ans;
//         // ans.push_back(0);
        
//         dfs(ans,adj,vis,start);
        
//         return ans;
        
        
//     }