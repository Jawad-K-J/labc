# include <stdio.h>
void main ( ){int a[100] ,i , n , odd =0 ,even =0;
printf ( "\nenter the size of an array:");
scanf ("%d",& n);
printf ("\nenter the elements of an array :");
for (i =0; i <n; i++)
{scanf ("%d",&a[i]);
if (( a[i] % 2) ==0) {
even ++ ; }
else
{ odd ++ ;
}} printf ("\neven number : %d" , even) ;
printf ("\nodd number : %d" , odd) ;
}
