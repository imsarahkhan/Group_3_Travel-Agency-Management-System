/**
 * @file total_fare_car.c
 *
 * @This provides the fare for the rental car services booked 
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
#include"../include/car.h"
#include"../include/add_passengers.h"
#include"../include/total_fare_car.h"


/**
* @brief This function will calaculate the total price for the rental car services including 
*
* the number of days for the travel by car
*
* 
*
* @param[in] The function takes input as number of days of travel by car, price for
*
* rental car services and the booking ID created during booking trip
*
* @param[out] This function returns the total price of the car rentals
*
*
**/


float total_fare_car (int days,float price_car, int booking_id) {

    char filename[20];
    float total;

    total = days*price_car;
    sprintf(filename, "%03d.txt", booking_id);
    FILE * p_fptr = fopen(filename,"a");
    fprintf(p_fptr,"\n---------------------------------------------------------------------\n");
    fprintf(p_fptr, "Your total fare for the car is $%f", total);
    fprintf(p_fptr,"\n---------------------------------------------------------------------\n");
    fclose(p_fptr);
    return total;
}