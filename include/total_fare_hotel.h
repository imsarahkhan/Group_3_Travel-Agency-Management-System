/**
 * @file total_fare_hotel.h
 *
 * @This provides the fare for the hotel accommodations booked 
 *
 *
 * 
 *
 **/
#ifndef _TOTAL_FARE_HOTEL_H_
#define _TOTAL_FARE_HOTEL_H_
/**
* @brief This function will calaculate the total price for the hotel accommodations including 
*
* the number of days for the stay in hotels according to the hotels
*
* 
*
* @param[in] The function takes input as number of days of stay from user, price for
*
* each hotel and the booking ID created during booking trip
*
* @param[out] This function returns the total price of the hotel booking
*
*
**/
extern float total_fare_hotel (int days,float price_hotel, int booking_id);
#endif
