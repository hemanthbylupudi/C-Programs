#include <stdio.h>
int main() 
{
   int arr[15]={15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0};
   int n=15;
   int i, j, position, swap;
   for (i = 0; i < (n - 1); i++) 
   {
      position = i;
      for (j = i + 1; j < n; j++) 
	  {
         if (arr[position] > arr[j])
            position = j;
      }
      if (position != i) 
	  {
         swap = arr[i];
         arr[i] = arr[position];
         arr[position] = swap;
      }
   }
   for (i = 0; i < n; i++)
      printf("%d\t", arr[i]);
   return 0;
}
