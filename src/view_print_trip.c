
/**
 * @file view_print_trip.c
 *
 * @brief This displays booked trip details for the user
 *
 *
 *
 * 
 *
 **/
 
#include<stdio.h>
#include"../include/view_print_trip.h"
#include<sys/stat.h>



/**
* @details This function will ask the user to enter the booking ID for which they would like 
*
* to view or print the ticket. The booking information is displayed on the screen and creates a text file
* 
*
* @param[in] NONE
*
*
*
* @param[out] NONE
*
*
**/

void view_print_trip () {
    int booking_id;
    printf("Please enter your booking ID to proceed:");
    scanf("%d",&booking_id);
    char filename[20];
    char str;
    struct stat buffer;

    sprintf(filename, "%03d.txt", booking_id);
    int exist = stat(filename,&buffer);
    if (exist == 0) {
        FILE *p_fptr = fopen(filename, "r");
        printf("\n Your car details are ready to be printed:\n");
        printf("===============================================================\n");
        str = fgetc(p_fptr);
        while (str != EOF) {
            printf("%c", str);
            str = fgetc(p_fptr);
        }
        printf("\n\n");
        fclose(p_fptr);
    } else {
        printf("Booking ID does not exists!\n");
    }
}