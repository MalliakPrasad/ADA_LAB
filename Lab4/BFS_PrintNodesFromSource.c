#include <stdio.h>
void bfs(int);
int a[10][10],vis[10],n;
void main()
{
    int i,j,src;
    printf("enter no. of vertices\n");
    scanf("%d",&n);
    printf("enter adjecency matrix\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter source node\n");
    scanf("%d",&src);
    printf("nodes reachable from %d vertex\n ",src);
    bfs(src);
    getch();
}

void bfs(int v)
{
    int q[10],f=0,r=0,u,i,j;
    vis[v]=1;
    q[r]=v;
    while(f<=r)
    {
        u=q[f];
        printf("%d\t",u);
        for(i=1;i<=n;i++)
        {
            if(a[u][i]==1 && vis[i]==0)
            {
                vis[i]=1;
                r=r+1;
                q[r]=i;
            }
        }
        f=f+1;
    }
}
