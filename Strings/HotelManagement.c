#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <strings.h>
#include <stdarg.h>
#include <stdbool.h>

typedef struct HotelManagement
{
    int breakfast;
    int lunch;
    int dinner;
    //int min_bill;
    //int max_bill;
}Hotel;

void find_Max_Min_Meal(Hotel* hotel, int days) {
    char weeks[7][10] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "saturday", "Sunday"};
    int min = 9999999, max = 0, max_day, min_day, starting_day;
    printf("Enter the starting day: ");
    scanf("%d", &starting_day);
    char max_meal[20], min_meal[20];
    for (int i = 0; i < days; i++) {

        //Finding the maximum
        if (hotel[i].breakfast > max) {
            max = hotel[i].breakfast;
            max_day = i;
            strcpy(max_meal, "Breakfast");
        }
        if (hotel[i].lunch > max) {
            max = hotel[i].lunch;
            max_day = i;
            strcpy(max_meal, "Lunch");
        }
        if (hotel[i].dinner > max) {
            max = hotel[i].dinner;
            max_day = i;
            strcpy(max_meal, "Dinner");
        }

        //Finding the minimum
        if (hotel[i].breakfast < min) {
            min = hotel[i].breakfast;
            min_day = i;
            strcpy(min_meal, "Breakfast");
        }
        if (hotel[i].lunch < min) {
            min = hotel[i].lunch;
            min_day = i;
            strcpy(min_meal, "Lunch");
        }
        if (hotel[i].dinner < min) {
            min = hotel[i].dinner;
            min_day = i;
            strcpy(min_meal, "Dinner");
        }
    }

    printf("Maximum meal was on %s for %s with %d of amount\n", weeks[(starting_day+max_day)%7], max_meal, max);
    printf("Minimum meal was on %s for %s with %d of amount\n", weeks[(starting_day+min_day)%7], min_meal, min);
}
int main() {
    Hotel hotel[30];
    int day;
    printf("Enter the data for how many days: ");
    scanf("%d", &day);
    for (int i = 0; i < day; i++) {
        printf("Enter breakfast, lunch and dinner for day: %d\n", i+1);
        int b, l, d;
        scanf("%d %d %d", &b, &l, &d);
        hotel[i].breakfast = b, hotel[i].lunch = l, hotel[i].dinner = d;
    }
    find_Max_Min_Meal(hotel, day);
}
