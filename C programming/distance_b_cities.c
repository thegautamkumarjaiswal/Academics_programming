/* C program to find distance of two cities in nautical miles. */
#include<stdio.h>
#include<math.h>
int main()
{
    float lati_1, lon_1, lati_2, lon_2, dist;
    printf("Enter the langitude and longitude of one place in degree: ");       /* Langitude and Longitude of one place. */
    scanf("%f%f", &lati_1, &lon_1);
    printf("Enter the langitude and longitude of second place in degree: ");        /* Langitude and Longitude of second place. */
    scanf("%f%f", &lati_2, &lon_2);

    /* Formula to find the distance in nautical miles */
    dist = 3963*acos(sin(lati_1)*sin(lati_2) + cos(lati_1)*cos(lati_2)*cos(lon_2 - lon_1));
    
    /* Print the distance */
    printf("Distance between nautical miles is: %f", dist);
}