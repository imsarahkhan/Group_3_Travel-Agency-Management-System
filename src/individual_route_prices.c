/**
 * @file individual_route_prices.c
 *
 * @brief This provides the ID and prices for all trip services (flight,hotel and car)
 *
 *
 * 
 *
 **/
 
#include<stdio.h>
#include <global_variable.h>

/**
* @details This function takes the route ID (flights) shown in the view_brochure()
*
* and returns the necessary prices for each flight trips
*
*
* @param[in] The function takes input as route ID associated with a flight routes and file pointer to write
*
* details to the file created
*
* @param[out] This function returns the price for each flight trip
*
* @return Returns 0 if invalid route ID or else returns flight price
**/

float flight (int route_id, FILE *p_fptr1) {

    float flight_price;

   if (route_id == 101) {
        fputs("\nYou have booked a flight from Toronto to Ottawa\n",p_fptr1);
        flight_price = 400;
        g_count_1++;
    } else if (route_id == 102) {
        fputs("\nYou have booked a flight from Toronto to Montreal\n",p_fptr1);
        flight_price = 450;
        g_count_2++;
    } else if (route_id == 103) {
        fputs("\nYou have booked a flight from Toronto to Vancouver\n",p_fptr1);
        flight_price = 800;
        g_count_3++;
    } else if (route_id == 104) {
        fputs("\nYou have booked a flight from Toronto to Calgary\n",p_fptr1);
        flight_price = 600;
        g_count_4++;
    } else if (route_id == 105) {
        fputs("\nYou have booked a flight from Ottawa to Montreal\n",p_fptr1);
        flight_price = 600;
        g_count_5++;
    } else if (route_id == 106) {
        fputs("\nYou have booked a flight from Ottawa to Vancouver\n",p_fptr1);
        flight_price = 300;
        g_count_6++;
    } else if (route_id == 107) {
        fputs("\nYou have booked a flight from Ottawa to Calgary\n",p_fptr1);
        flight_price = 200;
        g_count_7++;
    } else if (route_id == 108) {
        fputs("\nYou have booked a flight from Montreal to Vancouver\n",p_fptr1);
        flight_price = 350;
        g_count_8++;
    } else if (route_id == 109) {
        fputs("\nYou have booked a flight from Montreal to Calgary\n",p_fptr1);
        flight_price = 500;
        g_count_9++;
    } else if (route_id == 110) {
        fputs("\nYou have booked a flight from Vancouver to Calgary\n",p_fptr1);
        flight_price = 150;
        g_count_10++;
    } else {
        return 0;
    }
    return flight_price;
}


/**
* @brief This function takes the hotel ID shown in the view_brochure()
*
* and returns the necessary prices for each hotel accommodation
*
* 
*
* @param[in] The function takes input as hotel ID and file pointer to write the
*
* details to the file created
*
* @param[out] This function returns the price for each hotel accommodation
*
* @return Returns 0 if invalid hotel ID or else returns hotel price
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


/**
* @brief This function takes the car route ID shown in the view_brochure()
*
* and returns the necessary prices for two rental car services
*
* 
*
* @param[in] The function takes input as car route ID and file pointer to write
*
* details to the file created
*
* @param[out] This function returns the price for each rental car services
*
* @return returns 0 if invalid car ID and or else returns car price
**/

float car(int car_id, FILE *p_fptr3) {

    float  car_price = 0.0;
    if (car_id == 301) {
        fputs("\nYou have booked a rental car service with Canada Car Rental\n",p_fptr3);
        car_price = 30;
    } else  if (car_id == 302) {
        fputs("\nYou have booked a rental car service with Enterprise Rental\n",p_fptr3);
        car_price = 60;
    } else {
        return 0;
    }
    return car_price;
}