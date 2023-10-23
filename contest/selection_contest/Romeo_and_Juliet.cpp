#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
# define vl vector <ll>
#define nl  '\n'
# define all(v) (v).begin() , (v).end()
const int N=1e5+10;
vector<int>g[N];
int vis[N];
int level1[N];
int level2[N];
void adjacencyList(int n, int e)
{
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
}


void bfs(int s,int level[]){
    queue<int>q;
    q.push(s);
    level[s]=0;
    while(!q.empty()){
        int p = q.front();
        q.pop();
        for(auto c:g[p]){
            if(level[c]==-1){
                q.push(c);
                level[c] = level[p] + 1;
            }    
        }
    }
}




int main(){
    int n,m;
    cin>>n>>m;
    adjacencyList(n,m);
    int p,q,s;
    cin>>p>>q>>s;

    memset(level1,-1,sizeof(level1));

    memset(level2,-1,sizeof(level2));

    bfs(p,level1);
    bfs(q,level2);
    int flag=0;
    for(int i=0;i<n;i++){
        if( level1[i]!=-1 && level2[i]!=-1 && level1[i]<=s&& level2[i]<=s){
           flag=1;
           break;
        }
    }


    if(flag){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}