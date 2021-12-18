/**
 * @file validate_route_id.h
 *
 * @This implements validation of the route IF of flights to check if this route is booked
 *
 *
 * 
 *
 **/
#ifndef _VALIDATE_ROUTE_ID_H_
#define _VALIDATE_ROUTE_ID_H_
/**
* @brief This function will validate if the route ID for the flights have already been booked or not.
*
*
* 
*
* @param[in] The function takes input as route ID of flights
*
*
*
* @param[out] This function returns the a temporary variable that stores a value 0 if no user
* booked that particular route and any other value indicates it is booked more than once.
*
*
**/
extern int validate_route_id (int route_id);
#endif
