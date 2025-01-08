 /*the amount borrowed and the monthly payment including a dollar sign and two decimal places.
 1.5 A cyclist coasting on a level road slows from a speed of 10 mi/hr to 2.5 mi/hr in one minute.
 Write a computer program that calculates the cyclist’s constant rate of acceleration and deter
mines how long the cyclist will take to come to rest, given an initial speed of 10 mi/hr. (Hint:
 1
Use the equation
 a = vf −vt
 t
 where a is acceleration, t is time interval, v1 is initial velocity, and vf is final velocity.) Write
 and call a function that displays instructions to the program user and a function that computes
 a, given t,vf, and vr.*/
 #include<stdio.h>
 #include<math.h>
 int main()
 {
    float a,vf,vr,t;
    printf("Enter the time interval in minutes:\n");
    scanf("%f",&t);
    printf("Enter the final velocity in mi/hr:\n");
    scanf("%f",&vf);
    printf("Enter the initial velocity in mi/hr:\n");
    scanf("%f",&vr);
    a= (vf-vr)/t;
    printf("The acceleration is %.2f mi/hr^2\n",a);
    t=vr/a;
    printf("The time taken to come to rest is %.2f minutes\n",t);
    return 0;
 }