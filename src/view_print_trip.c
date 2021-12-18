
/**
 * @file view_print_trip.c
 *
 * @This implements view or print option of the booked trip details for the user
 *
 *
 *
 * 
 *
 **/
 
#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include"../include/view_brochure.h"
#include"../include/book_trip.h"
#include"../include/main_menu.h"
#include"../include/view_print_trip.h"



/**
* @brief This function will ask the user to enter the booking id for which they would like 
*
* to view or print the ticket. The booking information is displayed on the screen.
* 
*
* @param[in] The function doesn't take any input.
*
*
*
* @param[out] This function doesn't return any value.
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