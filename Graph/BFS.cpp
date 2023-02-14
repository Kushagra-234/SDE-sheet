// Intuition-
// we use a queue and push 0 n queue usng q.push(0);
// queue<int>q  and take a visited array to keep check if index is visisted by vis[v]={0} and then by marking it as vis[0]=1;then run loop until q is empty and push node in vector and check if it is visited 
// if not visisted we visit it by vis[it]=1 and q.push(it);


// sc- quque bfs vector and adj vector 0(N)
// tc-0(n) queue + o(2e) for total degrees



// code-
// public:
//     // Function to return Breadth First Traversal of given graph.
//     vector<int> bfsOfGraph(int V, vector<int> adj[]) {
//         vector<int>bfs;
//         int vis[V]={0};
//         queue<int>q;
//         q.push(0);
//         vis[0]=1;
        
//         while(!q.empty()){
//             int node=q.front();
//             q.pop();
            
//             bfs.push_back(node);
            
//             for(auto it:adj[node]){
//                 if(!vis[it]){
//                     vis[it]=1;
//                     q.push(it);
//                 }
                
//             }
//         }
        
//         return bfs;
//     }