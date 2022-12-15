int min(int a,int b){
    if(a<b)
    return a;
    else
    return b;
}
int max_r(int a,int b){
    if(a>b)
    return a;
    else
    return b;
}
int networkDelayTime(int** times, int timesSize, int* timesColSize, int n, int k){
int i,j,u,v,w;
int max=10000;
int dist[n];
for(i=0;i<n;i++){
    dist[i]=max;
}
dist[k-1]=0;
for(i=0;i<n;i++){
    for(j=0;j<timesSize;j++){
        u=times[j][0]-1;
        v=times[j][1]-1;
        w=times[j][2];
        dist[v]=min(dist[v],dist[u]+w);
        
    }
}
int ans=0;
for(i=0;i<n;i++){
    if(dist[i]==max)
    return -1;
    else
    ans=max_r(ans,dist[i]);
}
return ans;
}


o/p:
times =
[[2,1,1],[2,3,1],[3,4,1]]
n =
4
k =
2
Output
2
Expected
2
