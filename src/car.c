/**
 * @file car.c
 *
 * @This provides the car rental type and prices for car packages
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





/**
* @brief This function takes the Car route ID shown in the view_brochure()
*
* and returns the necessary prices for two rental car services
*
* 
*
* @param[in] The function takes input as car route ID and file pointer to write
*
* details to file created
*
* @param[out] This function returns the price for each rental car services
*
*
**/

float car(int car_id, FILE *p_fptr3) {

    float  car_price = 0.0;
    if (car_id == 301) {
        fputs("\nYou have booked a rental car service with Canada Car Rental\n",p_fptr3);
        car_price = 30;
    }
    else  if (car_id == 302) {
        fputs("\nYou have booked a rental car service with Enterprise Rental\n",p_fptr3);
        car_price = 60;
    }
    else{
        return 0;
    }
    return car_price;
}