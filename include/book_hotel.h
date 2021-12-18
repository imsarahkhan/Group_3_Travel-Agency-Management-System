/**
 * @file book_hotel.c
 *
 * @This implements booking hotel for the travel management system
 *
 *
 * 
 *
 **/
#ifndef _BOOK_HOTEL_H_
#define _BOOK_HOTEL_H_

/**
* @brief This function will ask the user to enter the hotel ID that they want to book hotel acccommodation for.
*
* The function will create booking details of the user and the fare along with any discounts
*
* will be computed and written to a file.
*
* @param[in] The function takes input as booking ID and price of the flights
*
*
*
* @param[out] This function returns the booking details of the flight and hotel
*
*
**/

extern int book_hotel (int booking_id,float price_flight);
#endif
