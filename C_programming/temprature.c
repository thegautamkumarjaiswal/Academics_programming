/* Find the winf chill factor */
#include<stdio.h>
#include<math.h>
int main()
{
    float temp, wi_vel, wcf;
    printf("Enter the temprature: ");       /* Temparture of wind */
    scanf("%f", &temp);
    printf("Enter the velocity: ");     /* Velocity of wind */
    scanf("%f", &wi_vel);
    
    /* wind chill factor formula */
    wcf = 35.74 + 0.6215*temp + (0.4275*temp - 35.75)*pow(wi_vel, 0.16);
    
    printf("\nWind chill factor is: %f", wcf);
}