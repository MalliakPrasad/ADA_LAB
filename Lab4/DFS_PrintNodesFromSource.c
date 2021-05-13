#include<stdio.h>
void dfs(int);
int a[10][10],vis[10],n;
int main()
{
int i,j,src;
    printf("enter no. of vertices\n");
    scanf("%d",&n);
    printf("enter adjacency matrix:\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

for(i=1;i<=n;i++)
vis[i]=0;
printf("enter source vertex\n");
scanf("%d",&src);
printf("nodes reachable from %d vertex\n",src);
dfs(src);
    return 0;
}

void dfs(int v)
{
    int i;
    vis[v]=1;
    printf("%d",v);
    for(i=1;i<=n;i++)
    {
        if(a[v][i]==1 && vis[i]==0)
        dfs(i);
    }
}
