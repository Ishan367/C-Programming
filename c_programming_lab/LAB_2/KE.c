#include <stdio.h>
int main()
{
   double mass,velocity,kinetic;
   
   printf("ENTER THE MASS (IN KG)");
   scanf("%lf",&mass);
   printf("enter the velocity in m/s");
   scanf("%lf",&velocity);
   kinetic=0.5*mass*velocity*velocity;
   printf("the kinectic energy of the body is:%lf",kinetic);
   return 0;
}
