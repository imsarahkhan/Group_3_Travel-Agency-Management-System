
/**
 * @file validate_hotel_id.h
 *
 * @This implements validation of the hotel id to check if this hotel is booked
 *
 *
 * 
 *
 **/
#ifndef _VALIDATE_HOTEL_ID_H_
#define _VALIDATE_HOTEL_ID_H_
/**
* @brief This function will validate if the hotel id have already been booked or not.
*
*
* 
*
* @param[in] The function takes input as hotel id
*
*
*
* @param[out] This function returns the a temporary variable that stores a value 0 if no user
* booked that particular hotel and any other value indicates it is booked more than once.
*
*
**/
extern int validate_hotel_id (int hotel_id);
#endif
