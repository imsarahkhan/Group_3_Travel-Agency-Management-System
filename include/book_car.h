/**
 * @file book_car.h
 *
 * @This implements booking car services for the travel management system
 *
 *
 * 
 *
 **/
#ifndef _BOOK_CAR_H_
#define _BOOK_CAR_H_
/**
* @brief This function will ask the user to enter the car ID that they want to book car services for.
*
* The function will create booking details of the user and the fare along with any discounts
*
* will be computed and written to a file.
*
* @param[in] The function takes input as booking ID and price of the flights
*
*
*
* @param[out] This function returns the booking details of the flight and car services.
*
*
**/

extern int book_car (int booking_id, float price_flight);
#endif
