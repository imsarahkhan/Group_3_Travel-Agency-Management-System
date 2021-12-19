/**
 * @file book_trip.h
 *
 * @brief This implements booking of all three packages - flight, hotel and 
 * car services for the Travel Management System
 *
 *
 * 
 *
 **/
#ifndef _BOOK_HOTEL_H_
#define _BOOK_HOTEL_H_
/**
* @details This function will ask the user to enter the flight route ID and will ask user to continue further if
* they would like to book hotel or car or both as well.
*
*
*
* @param[in] NONE
*
*
*
* @param[out] A text file with all the details of the booked trip(flight, hotel and car)
*
*
**/
int book_trip ();
/**
* @details This function will ask the user to enter the hotel ID that they want to book hotel acccommodation
*
* The function will create booking details of the user and the fare after applying the discount
*
* and then written to a file.
*
*
* @param[in] The function takes input as booking ID and price of the flight booked
*
*
*
* @param[out] This function returns the booking details of the flight and hotel
*
*
**/
int book_hotel (int booking_id,float price_flight);
/**
* @details This function will ask the user to enter the car ID that they want to book car services.
*
* The function will create booking details of the user and the fare along with any discounts
*
* will be computed and written to a file.
*
* @param[in] The function takes input as booking ID and price of the flight booked
*
*
*
* @param[out] This function returns the booking details of the flight and car services.
*
*
**/
int book_car (int booking_id, float price_flight);
/**
* @details This function will ask the user to enter the hotel ID and car ID based 
*
* on the flight routes that are already booked.
*
* The function will create booking details of the user and the fare along with any discounts
*
* will be computed and written to a file for all the three packages that the user would like to book.
*
*
* @param[in] The function takes input as booking ID and price of the flights
*
*
*
* @param[out] This function returns the booking details of the flight, hotel and car services.
*
*
**/
int book_hotel_car (int booking_id, float price_flight);
#endif
