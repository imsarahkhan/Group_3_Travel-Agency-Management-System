/**
 * @file flight.c
 *
 * @This provides the routes and prices for each flight trips
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


/**
* @brief This function takes the hotel ID shown in the view_brochure()
*
* and returns the necessary prices for each flight trips
*
* 
*
* @param[in] The function takes input as flight ID and file pointer to write
*
* details to file created
*
* @param[out] This function returns the price for each flight trips
*
*
**/

float flight (int route_id, FILE *p_fptr1) {

    float flight_price;

   if (route_id == 101) {
        fputs("\nYou have booked a flight from Toronto to Ottawa\n",p_fptr1);
        flight_price = 400;
        g_count_1++;
    }else if (route_id == 102) {
        fputs("\nYou have booked a flight from Toronto to Montreal\n",p_fptr1);
        flight_price = 450;
        g_count_2++;
    }else if (route_id == 103) {
        fputs("\nYou have booked a flight from Toronto to Vancouver\n",p_fptr1);
        flight_price = 800;
        g_count_3++;
    }else if (route_id == 104) {
        fputs("\nYou have booked a flight from Toronto to Calgary\n",p_fptr1);
        flight_price = 600;
        g_count_4++;
    }else if (route_id == 105) {
        fputs("\nYou have booked a flight from Ottawa to Montreal\n",p_fptr1);
        flight_price = 600;
        g_count_5++;
    }else if (route_id == 106) {
        fputs("\nYou have booked a flight from Ottawa to Vancouver\n",p_fptr1);
        flight_price = 300;
        g_count_6++;
    }else if (route_id == 107) {
        fputs("\nYou have booked a flight from Ottawa to Calgary\n",p_fptr1);
        flight_price = 200;
        g_count_7++;
    }else if (route_id == 108) {
        fputs("\nYou have booked a flight from Montreal to Vancouver\n",p_fptr1);
        flight_price = 350;
        g_count_8++;
    }else if (route_id == 109) {
        fputs("\nYou have booked a flight from Montreal to Calgary\n",p_fptr1);
        flight_price = 500;
        g_count_9++;
    }else if (route_id == 110) {
        fputs("\nYou have booked a flight from Vancouver to Calgary\n",p_fptr1);
        flight_price = 150;
        g_count_10++;
    }else {
        return 0;
    }
    return flight_price;
}
