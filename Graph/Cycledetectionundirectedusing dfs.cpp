// intuition-maan lo ham ek path pe jaa rhe hai aur usspe chalte chaltte wapas aa gya ek element
// maan lo ham 1-2-3-4 gye aur 4 se 1 jaa rhe hai aur 1 visited hai pr it !=parent 
// to cycle hai if unvisited than we call dfs(it,node,vid,adj)


// sc-0(n) recursive stack space +o(n) visisted arrray =0(n)

// tc-0(n + 2e) + o(n) because dfs is called for every neighbour which is submission of degree + loop for connected components



// code-
// bool dfs(int node,int parent,int vis[],vector<int>adj[]){
//         vis[node]=1;
        
//         for(auto it:adj[node]){
//             if(!vis[it]){
//                 vis[it]=1;
//                 if(dfs(it,node,vis,adj)==true);
//                 return true;
//             }
//             else if(it !=parent)
//             return true;
//         }
        
//         return false;
//     }
//     // Function to detect cycle in an undirected graph.
//     bool isCycle(int v, vector<int> adj[]) {
//         int vis[v]={0};
        
//         for(int i=0;i<v;i++){
//             if(!vis[i]){
//                 if(dfs(i,-1,vis,adj)==true) return true;
                
//             }
//         }
        
//         return false;
        
    
//     }