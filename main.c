#include <stdio.h>

int main()
{
    float a, b, c;
    float battery_percentage;
    float total_capacity;
    float efficiency;
    float destination_distance;

    printf("Enter total battery capacity (in Wh) ");
    scanf("%f", &total_capacity);
    
    printf("Enter current battery percentage ");
    scanf("%f", &battery_percentage);
    
    printf("Enter vehicle's efficiency (Wh per km) ");
    scanf("%f", &efficiency);
    
    printf("Enter the destination distance(in km) ");
    scanf("%f", &destination_distance);
    
    a = battery_percentage / 100;
    b = a * total_capacity;
    c = b / efficiency;
    
    printf("Your estimated range is %.2fkm\n", c);
    
    if(c >= destination_distance) {
        printf("Can reach the destination\n");
    }
    else {
        printf("Battery low!! will be able to cover only %.2fkm not sufficient to reach the destination %.2fkm and u will not be able to cover %.2fkm\n", c, destination_distance, (destination_distance - c));
    }

    return 0;
}
