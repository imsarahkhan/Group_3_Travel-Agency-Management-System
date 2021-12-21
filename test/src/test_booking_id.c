#include"../test/include/test_booking_id.h"
#include<stdio.h>

int test_booking_id (){
    int booking_id;
    printf("Enter Booking ID: ");

    if ( scanf("%d", booking_id) == 1 ) {
        printf("Valid Booking ID!\n");
        return 1;
    } else
    {
        scanf("%*s");
        printf("Invalid Booking ID\n");
        return 2;
    }
    return 0;
}
