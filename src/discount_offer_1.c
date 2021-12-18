
/**
 * @file discount_offer_1.c
 *
 * @This provides the 5% discounted offer applied to the trips
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
#include"../include/add_passengers.h"
#include"../include/total_fare_trip.h"
#include"../include/discount_offer_1.h"


/**
* @brief This function will calaculate the fare after a discount of 5% is applied 
*
* to the trips booked for 2 features, that is, flight & hotel or flight & car. 
*
* 
*
* @param[in] The function takes input as total fare of the trip
*
*
*
* @param[out] This function returns the discounted fare
*
*
**/

 
float discount_offer_1 (float total_trip) {
    float discount;
    discount = total_trip-(total_trip*0.05);
    return discount;
}
