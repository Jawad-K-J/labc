#include <stdio.h>
void main()
{
int arr[100];
int i, x, a,pos, n ;
printf("enter the size of array:");
scanf("%d",&n);
printf("enter the elements in array:");
// initial array of size 10
for (i = 0; i < n; i++)
scanf("%d",&arr[i]);
// element to be inserted
printf("enter the element to be inserted:");
scanf("%d",&x);
printf("enter the position in wich element to be inserted:");
scanf("%d",&pos);
a=n;
a++;
// shift elements forward
for (i = a-1; i >= pos; i--)
arr[i] = arr[i - 1];
// insert x at pos
arr[pos - 1] = x;
for(i = 0; i < n+1; i++)
printf("%d ", arr[i]);
printf("\n");

}
