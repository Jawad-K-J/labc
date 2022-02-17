#include <stdio.h>
void main ( )
{
int n , i , a[10] ,b[10] ;
printf ( "enter the size of array:") ;
scanf ("%d",&n) ;
printf ("enter the elements of an array :"); 
for (i=0; i<n; i++)
{
scanf ("%d", & a[i] ) ;
}
printf ("the first array is :") ;
for (i = 0; i < n; i++)
{
printf ("%d",a[i] ) ;
}
printf ("the second array is :");
for (i=0; i<n;i++)
{
b[i] = a[i];
printf ("%d",b[i]);
}
}
