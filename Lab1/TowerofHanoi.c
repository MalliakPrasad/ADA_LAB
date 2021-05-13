#include <stdio.h>
#include <conio.h>

void towers(int n,int source,int temp,int dest)
{
 if(n==1)
 {
     printf("move disk %d from %c to %c\n",n,source,dest);
     return;
     
 }
 
 towers(n-1,source,dest,temp);
 printf("move disk %d from %c to %c\n",n,source,dest);
 towers(n-1,temp,source,dest);
 }
 
 int main()
 {
     int n;
     printf("enter the number of disks\n");
     scanf("%d",&n);
     towers(n,'S','T','D');
     return 0;
 }
           
