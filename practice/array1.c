#include <stdio.h>
int main () {

int n,i;
float sum = 0;
printf ("Enter how many numbers you want to enter: ");
scanf ("%d",&n);

float arr [n];

for(i=0;i<n;i++){
printf ("Enter the %d number:", i+1); 
scanf ("%f",&arr [i]);

}

printf ("The Array Entered is\n");
for(i=0;i<n;i++){
printf("%.2f \n",arr[i]);
sum = sum+arr [i];

}

printf ("Sum of values in array is %.2f\n", sum);
printf ("Average is %.2f\n",sum/n);
}