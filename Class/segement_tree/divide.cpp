#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
# define vl vector <ll>
#define nl  '\n'
# define all(v) (v).begin() , (v).end()
const int mx = 1e5+5;
int tree[mx*3];
void  build(int node,int l,int r,int a[]){
    // cout<<node<<" "<<l<<" "<<r<<endl;
    if(l==r){
        tree[node]=a[r];
        return;
    }
    int leftNode=node*2;
    int rightNode=leftNode+1;
    int mid =(l+r)/2;
    build(leftNode,l,mid,a);
    build(rightNode,mid+1,r,a);
    tree[node]=tree[leftNode]+tree[rightNode];
}
int query(int node,int l,int r,int x,int y){
    // puro node bad
    if(r<x || l>y)return 0;
    //puro node nibo
    if(l>=x && r<=y)return tree[node];

    //majhamajhi obosta, children er upor depend kore
    int leftNode = node * 2;
    int rightNode = leftNode + 1;
    int mid = (l + r) / 2;
    return query(leftNode,l,mid,x,y)+query(rightNode,mid+1,r,x,y);
}
void update(int node,int l,int r,int idx,int val){
    if(l>idx || r<idx)return;
    if(l==r && l==idx){
        tree[node]=val;
        return;
    }
    int leftNode = node * 2;
    int rightNode = leftNode + 1;
    int mid = (l + r) / 2;
    update(leftNode, l, mid, idx, val) ;
    update(rightNode, mid + 1, r, idx, val);
    tree[node] = tree[leftNode] + tree[rightNode];
}
int main(){
     int n;cin>>n;
     int a[n];
     for(int i=0;i<n;i++)cin>>a[i];
     build(1,0,n-1,a);

     ll q;
     cin>>q;
     while(q--){
       int t;cin>>t;
       if(t==0){
        int idx,val;
        cin>>idx>>val;
        idx--;
        update(1,0,n-1,idx,val);
       }
       else{
        int x,y;
        cin>>x>>y;x--,y--;
        cout<<query(1,0,n-1,x,y)<<endl;
       }
     }
    
}