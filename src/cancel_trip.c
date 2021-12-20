/**
 * @file cancel_trip.c
 *
 * @brief This implements cancelling of the booked trip
 *
 *
 *
 * 
 *
 **/
 
#include<stdio.h>
#include<sys/stat.h>

/**
* @details This function will ask the user to enter the booking ID for which the trip needs to be cancelled.
* 
* The function will delete the entry and inform the user of the cancellation without any cancellation fee.
* 
* The amount will be refunded is printed on the command line.
*
* @param[in] NONE
*
*
*
* @param[out] NONE
*
*
**/

void cancel_trip(){
    int booking_id;
    char filename[20];
    struct stat buffer;

    printf("Please enter your booking ID to cancel:");
    scanf("%d",&booking_id);
    sprintf(filename, "%03d.txt", booking_id);

    int exist = stat(filename,&buffer);
    if (exist == 0) {
        if (remove(filename) == 0){
            printf("\nBooking Cancelled Successfully.\nYou will receive the full refund soon.");
        }
    } else {
        printf("Booking ID does not exists!\n");
    }
}
