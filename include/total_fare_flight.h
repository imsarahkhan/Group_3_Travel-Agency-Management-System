/**
 * @file total_fare_flight.h
 *
 * @This provides the fare for the flight trips booked
 *
 *
 * 
 *
 **/
#ifndef _TOTAL_FARE_FLIGHT_H_
#define _TOTAL_FARE_FLIGHT_H_

/**
* @brief This function will calaculate the total price for the  flight trip including the number
*
* of passengers travelling in flight for the specific routes
*
* 
*
* @param[in] The function takes input as number of passengers from user, price for
*
* each flight route and the booking ID created during booking trip
*
* @param[out] This function returns the total price of the flight trip
*
*
**/
extern float total_fare_flight (int num_passengers,float price_flight,int booking_id) ;
#endif
