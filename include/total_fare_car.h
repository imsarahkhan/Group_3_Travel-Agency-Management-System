/**
 * @file total_fare_car.h
 *
 * @This provides the fare for the rental car services booked 
 *
 *
 * 
 *
 **/
#ifndef _TOTAL_FARE_CAR_H_
#define _TOTAL_FARE_CAR_H_
/**
* @brief This function will calaculate the total price for the rental car services including 
*
* the number of days for the travel by car
*
* 
*
* @param[in] The function takes input as number of days of travel by car, price for
*
* rental car services and the booking ID created during booking trip
*
* @param[out] This function returns the total price of the car rentals
*
*
**/
extern float total_fare_car (int days,float price_car, int booking_id);
#endif
