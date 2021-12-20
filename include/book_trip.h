/**
 * @file book_trip.h
 *
 * @This implements menu for booking the trip for three trip package
 *
 *
 *
 * 
 *
 **/
#ifndef _BOOK_HOTEL_H_
#define _BOOK_HOTEL_H_
/**
* @brief This function will ask the user to enter the route ID and will ask user to continue further if
* they would like to book hotel or car or both as well.
*
*
* 
*
* @param[in] The function doesn't take any input.
*
*
*
* @param[out] This function returns the choice and booking details booked by the user
*
*
**/
extern int book_trip ();
extern int book_hotel_car (int booking_id, float price_flight);
extern int book_hotel (int booking_id,float price_flight);
extern int book_car (int booking_id, float price_flight);

#endif
