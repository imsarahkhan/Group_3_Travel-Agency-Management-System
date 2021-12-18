/**
 * @file flight.h
 *
 * @This provides the routes and prices for each flight trips
 *
 *
 * 
 *
 **/
#ifndef _FLIGHT_H_
#define _FLIGHT_H_
/**
* @brief This function takes the hotel ID shown in the view_brochure()
*
* and returns the necessary prices for each flight trips
*
* 
*
* @param[in] The function takes input as flight ID and file pointer to write
*
* details to file created
*
* @param[out] This function returns the price for each flight trips
*
*
**/
extern float flight (int route_id, FILE *p_fptr1);
#endif
