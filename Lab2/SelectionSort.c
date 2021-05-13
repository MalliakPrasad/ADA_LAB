#include <stdio.h>
#include <time.h>
int main(){
    clock_t start,end;
    double timetaken;
    int rand(void);
    
    int  n,temp;
    printf("SELECTION SORT\n");
    printf("Enter the total elements ");
    scanf("%d", &n);
    int array[n];
    printf("Generating array elements\n");
    for (int i = 0; i < n; i++)
    {
        array[i]=rand();
        printf("%d\t",array[i]);
    }
    start=clock();
    
    for(int i;i<n;i++)
    {
		for(int j=i+1;j<n;j++)
		{
			if(array[i]>array[j])
			{
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}
				
      
    printf("\n\n\nSorted Array:\n");
    for (int i=0; i < n; i++)
    {
      printf("%d\t",array[i]);
    }  
      
    end=clock();
    timetaken=((double)(end-start))/CLOCKS_PER_SEC;
    printf("\ntime taken = %f",timetaken);
    return 0;
}
