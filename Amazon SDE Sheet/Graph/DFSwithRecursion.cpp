#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
   
   void dfs(int s,vector<int>&vis,vector<int>&ans,vector<int>adj[])
   {
     ans.push_back(s);
     vis[s]=true;
     for(int i=0;i<adj[s].size();i++)
     {
         if(vis[adj[s][i]]==0)
         {
         dfs(adj[s][i],vis,ans,adj);
         }
     }
   }
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
     vector<int>ans;
     vector<int>visited(V,0);
     for(int i=0;i<V;i++)
     {
         if(visited[i]==0)
         {
             dfs(i,visited,ans,adj);
         }
     }
     return ans;
       // Code here
    }
};

// { Driver Code Starts.
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
}  // } Driver Code Ends
