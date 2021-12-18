/**
 * @file hotel.c
 *
 * @This provides the routes and prices for each hotel accomodation
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





/**
* @brief This function takes the hotel ID shown in the view_brochure()
*
* and returns the necessary prices for each hotel accomodation
*
* 
*
* @param[in] The function takes input as hotel ID and file pointer to write
*
* details to file created
*
* @param[out] This function returns the price for each hotel accomodation
*
*
**/

float hotel (int hotel_id,  FILE *p_fptr2) {

    float hotel_price = 0.0;

    if (hotel_id == 201) {
        fputs("\nYou have booked a hotel room in Holiday Inn\n",p_fptr2);
        hotel_price = 100;
    } else if (hotel_id == 202) {
        fputs("\nYou have booked a hotel room in Ritz-Carlton\n",p_fptr2);
        hotel_price = 125;
    } else if (hotel_id == 203) {
        fputs("\nYou have booked a hotel room in Four Seasons Hotel\n",p_fptr2);
        hotel_price = 170;
    } else if (hotel_id == 204) {
        fputs("\nYou have booked a hotel room in Marriott Hotel\n",p_fptr2);
        hotel_price = 200;
    } else {
        return 0;
    }
    return hotel_price;
}