/**
 * @file total_fare.h
 *
 * @This provides the total fare for the entire trip if user wants to book flight, hotel and car services
 *
 *
 * 
 *
 **/
#ifndef _TOTAL_FARE_H_
#define _TOTAL_FARE_H_

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
extern float total_fare_trip (float total_flight, float total_hotel, float total_car);
extern float total_fare_car (int days,float price_car, int booking_id);
extern float total_fare_flight (int num_passengers,float price_flight,int booking_id);
extern float total_fare_hotel (int days,float price_hotel, int booking_id);
extern float discount_offer_1 (float total_trip);
extern float discount_offer_2 (float total_trip);
#endif
