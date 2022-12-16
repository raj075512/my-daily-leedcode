//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    private:
     void dfs( int start, vector<int>&ans, vector<int>adj[],int vis[]){
         
              vis[start]=1;
              ans.push_back(start);
               for( auto it:adj[start])
               {
                   if(!vis[it])
                   dfs(it,ans,adj, vis);
               }
          }
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int v, vector<int> adj[]) {
        // Code here
    int vis[v]{0};
       vector<int>ans;
       int start{0};
       dfs(start,ans,adj,vis);
       return ans;
       }
      
        
       
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends