#include "BubbleSort.h"

void swap(int *p1, int *p2)
{
  int mid = *p1;
  *p1 = *p2;
  *p2 = mid;
}

void BubbleSort(int *a, int begin, int end)
{
  if(a==NULL)
    return;

  if(begin >= end)
    return;

  for(int i=end;i>=begin;i--)
    {
      for(int j=begin;j<i-1;j++)
	{
	  if(a[j]>a[j+1])
	    {
	      swap(&a[j], &a[j+1]);
	    }
	}
    }
}
