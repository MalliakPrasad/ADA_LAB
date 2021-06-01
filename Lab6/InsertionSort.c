#include <stdio.h>
#include <time.h>


void printArray(int a[], int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
}

void insertionSort(int a[], int n) {
  for (int i = 1; i < n; i++) {
    int y = a[i];
    int j = i - 1;

    while (y < a[j] && j >= 0) {
      a[j + 1] = a[j];
      j=j-1;
    }
    a[j + 1] = y;
  }
}


int main() {
    int n,i;
    clock_t start,end;
    int rand(void);
    printf("Enter number of elements\n");
    scanf("%d",&n);
    int data[n];
    printf("generating the elements\n");
    for(i=0;i<n;i++)
    {
        data[i]=rand()%100;
        printf("%d\t",data[i]);
        
    }
  
  start=clock();
  int size = sizeof(data) / sizeof(data[0]);
  insertionSort(data, size);
  end=clock();
  printf("\nSorted array in ascending order:\n");
  printArray(data, n);
  printf("TIME TAKEN: %f\n",(((double)(end-start))/CLOCKS_PER_SEC));
}
