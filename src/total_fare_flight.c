/**
 * @file total_fare_flight.c
 *
 * @This provides the fare for the flight trips booked
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
#include"../include/flight.h"
#include"../include/add_passengers.h"
#include"../include/total_fare_flight.h"


/**
* @brief This function will calaculate the total price for the  flight trip including the number
*
* of passengers travelling in flight for the specific routes
*
* 
*
* @param[in] The function takes input as number of passengers from user, price for
*
* each flight route and the booking ID created during booking trip
*
* @param[out] This function returns the total price of the flight trip
*
*
**/

float total_fare_flight (int num_passengers,float price_flight,int booking_id) {

    char filename[20];
    float total;

    total = price_flight*num_passengers;

    sprintf(filename, "%03d.txt", booking_id);
    FILE *p_fptr = fopen(filename,"a");
    fprintf(p_fptr,"\n---------------------------------------------------------------------\n");
    fprintf(p_fptr,"Your total fare for the flight is $%f", total);
    fprintf(p_fptr,"\n---------------------------------------------------------------------\n");
    fclose(p_fptr);
    return total;
}