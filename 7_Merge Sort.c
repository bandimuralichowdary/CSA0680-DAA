#include <stdio.h>
int count=0;
void  merge_Sort(int [], int, int, int);
void  partition(int [],int, int);

int main()
{
      int a[50] , i, n;
      printf("Enter total number of elements:");
      count++;
      scanf("%d", &n);
      count++;
      printf("Enter the elements:\n");
      count++;
      count++;
      for(i = 0; i < n; i++)
      {
      	count++;
      	count++;
      	scanf("%d", &a[i]);
      	count++;
      }count++;

      partition( a, 0, n - 1);
      count++;
	   
      printf("After merge sort:\n");
      count++;
      count++;
      for(i = 0;i < n; i++)
      {
      	count++;
      	count++;
	    printf("%d\t", a[i]);
	    count++;
	  }count++;
	  
	  printf("\nTime complexity is %d\n",count);
	  count++;
}


void partition(int a[],int low,int high)
{
      int mid;
     
	  if(low < high)
      {
      	count++;
		mid = (low + high)/2;
		count++;
		
		partition( a, low, mid);
		
		partition(a, mid+1, high);
		
		merge_Sort(a, low, mid, high);
	  }
}

void merge_Sort(int a[], int low, int mid, int high)
{
	int i, j, k, lo, temp[50];
   
	lo = low;
	count++;
	i = low;
	count++;
	j = mid + 1;
	count++;
	while ((lo <= mid) && (j <= high))
	{
		count++;
		count++;
		if (a[lo] <= a[j])
		{
			count++;
			temp[i] = a[lo];
			count++;
			lo++;
		}
		else
		{
			temp[i] = a[j];
			count++;
			j++;
		}
		i++;
		count++;
	}
	count++;
	
	if (lo > mid)
	{
		count++;
		for (k = j; k <= high; k++)
		{
			count++;
			count++;
			temp[i] = a[k];
			i++;
		}
	}
	else
	{
		for (k = lo; k <= mid; k++)
		{
			count++;
			count++;
			count++;
			temp[i] = a[k];
			i++;
			count++;
		}
		count++;
	}
	count++;
  
  count++;
	for (k = low; k <= high; k++)
	{
		count++;
		count++;
		a[k] = temp[k];
		count++;
	}
}
