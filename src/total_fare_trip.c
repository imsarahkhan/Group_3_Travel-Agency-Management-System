/**
 * @file total_fare_trip.c
 *
 * @This provides the total fare for the entire trip if user wants to book flight, hotel and car services
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
#include"../include/hotel.h"
#include"../include/car.h"
#include"../include/add_passengers.h"
#include"../include/total_fare_flight.h"
#include"../include/total_fare_hotel.h"
#include"../include/total_fare_car.h"
#include"../include/total_fare_trip.h"


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
float total_fare_trip (float total_flight, float total_hotel, float total_car) {
    float final_fare;
    final_fare = total_flight+total_hotel+total_car;
    return final_fare;
}