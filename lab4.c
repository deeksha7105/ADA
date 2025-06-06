#include<stdio.h>
#include<stdlib.h>
int main()
{ int i,j,k,n,source;
  int w[50][50];
  int visited[20];
  int minWt,totalCost=0,ev=0,sv=0;
  printf("Enter the number of vertices/nodes in the graph\n");
  scanf("%d",&n);
  printf("Enter the weight/cost matrix\n");
  for(i=1;i<=n;i++){
     for(j=1;j<=n;j++){
       scanf("%d",&w[i][j]);
      }
   }
   printf("Enter the source vertex to start\n");
   scanf("%d",&source);
   for(i=1;i<=n;i++){
     visited[i]=0;
     visited[source]=1;
     printf("Minimum weight/cost edge selected for spanning tree are: \n");
     for(i=1;i<n;i++){
        minWt=999;
        for(j=1;j<=n;j++){
          if(visited[j]==1){
            for(k=1;k<=n;k++){
               if(visited[k]!=1&&w[j][k]<minWt){
                 sv=j;
                 ev=k;
                 minWt=w[j][k];
                }
             }
           }
        }
       totalCost+=minWt;
       visited[ev]=1;
       printf("%d-->%d cost:%d\n",sv,ev,minWt);
    }
    printf("The total Cost of minimum spanning tree is %d\n",totalCost);
    return 0;
 }
 }
