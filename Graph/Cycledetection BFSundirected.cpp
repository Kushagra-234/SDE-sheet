
// intuition- we take parent along with current element aur fir maan lo wo agar visited hai to 
// ya to wo parent ho kyuki wo usi path me aaya hai ya fir cycle __has_includeto fir 
// agar visited hai aur it!=parent then true

// sc-0(n) for queueu + o(n) for visited so =o(n)

// tc-0(n+2e) because you call for all component + 0(n)

// code

// public: 
//      bool detect(vector<int>adj[],int node,int vis[]){
//          queue<pair<int,int>>q;
//          vis[node]=1;
//          q.push({node,-1});
         
//          while(!q.empty()){
//              int node=q.front().first;
//              int parent=q.front().second;
//              q.pop();
             
//              for(auto it:adj[node]){
//                  if(!vis[it]){
//                  vis[it]=1;
//                  q.push({it,node});
//                  }
//                  else if(it != parent)
//                  return true;
//              }
//          }
//          return false;
    //          bool isCycle(int v, vector<int> adj[]) {
    // int vis[v]={0};
    
    // for(int i=0;i<v;i++){
    //     if(!vis[i]){
    //     if(detect(adj,i,vis))
    //     return true;
    //     }
        
    // }
    
    // return false;
    // }