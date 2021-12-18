/**
 * @file book_hotel_car.h
 *
 * @This implements booking of all three packages - flight, hotel and 
 * car services for the travel management system
 *
 *
 * 
 *
 **/
#ifndef _BOOK_HOTEL_CAR_H_
#define _BOOK_HOTEL_CAR_H_

/**
* @brief This function will ask the user to enter the car ID and hotel Id based 
*
* on the flight routes already booked.
*
* The function will create booking details of the user and the fare along with any discounts
*
* will be computed and written to a file for all the three packages that the user would like to book.
*
* @param[in] The function takes input as booking ID and price of the flights
*
*
*
* @param[out] This function returns the booking details of the flight, hotel and car services.
*
*
**/
extern int book_hotel_car (int booking_id, float price_flight);
#endif
