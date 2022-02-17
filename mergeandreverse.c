#include<stdio.h>

int main()
{
int rev[20],arr1[50],j=0, arr2[50], size1, size2, i, k, merge[100];
printf("\nEnter Array 1 Size: ");
scanf("%d", &size1);
printf("\nEnter Array 1 Elements: ");
for(i=0; i<size1; i++)
{
scanf("%d", &arr1[i]);
merge[i] = arr1[i];
}
k = i;
printf("\nEnter Array 2 Size: ");
scanf("%d", &size2);
printf("Enter Array 2 Elements: ");
for(i=0; i<size2; i++)
{
scanf("%d", &arr2[i]);
merge[k] = arr2[i];
k++;
}
printf("\nThe new array after merging is:\n");
for(i=0;i<k;i++)
printf("%d\t",merge[i]);
printf("\n The reveersed array is:");
for(i=k-1; i>=0; i--)
{
rev[j]=merge[i];
printf("%d ", rev[j]);
j++;
}

return 0;
}
