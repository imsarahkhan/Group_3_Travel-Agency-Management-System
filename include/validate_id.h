/**
 * @file validate_id.h
 *
 * @This implements validation of the car id to check if this rental car services are booked
 *
 *
 * 
 *
 **/
#ifndef _VALIDATE_ID_H_
#define _VALIDATE_ID_H_
/**
* @brief This function will validate if the car id have already been booked or not.
*
*
* 
*
* @param[in] The function takes input as car id
*
*
*
* @param[out] This function returns the a temporary variable that stores a value 0 if no user
* booked that particular car service and any other value indicates it is booked more than once.
*
*
**/
extern int validate_car_id (int id);
extern int validate_route_id (int id);
extern int validate_hotel_id (int id);
#endif
