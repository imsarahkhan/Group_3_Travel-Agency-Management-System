/**
 * @file total_fare_hotel.c
 *
 * @This provides the fare for the hotel accommodations booked 
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
#include"../include/hotel.h"
#include"../include/add_passengers.h"
#include"../include/total_fare_hotel.h"


/**
* @brief This function will calaculate the total price for the hotel accommodations including 
*
* the number of days for the stay in hotels according to the hotels
*
* 
*
* @param[in] The function takes input as number of days of stay from user, price for
*
* each hotel and the booking ID created during booking trip
*
* @param[out] This function returns the total price of the hotel booking
*
*
**/


float total_fare_hotel (int days,float price_hotel, int booking_id) {

    char filename[20];
    float total;

    total = days*price_hotel;
    sprintf(filename, "%03d.txt", booking_id);
    FILE * p_fptr = fopen(filename,"a");
    fprintf(p_fptr,"\n---------------------------------------------------------------------\n");
    fprintf(p_fptr, "Your total fare for the hotel is $%f", total);
    fprintf(p_fptr,"\n---------------------------------------------------------------------\n");
    fclose(p_fptr);
    return total;
}