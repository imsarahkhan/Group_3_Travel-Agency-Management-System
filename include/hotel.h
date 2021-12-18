/**
 * @file hotel.h
 *
 * @This provides the routes and prices for each hotel accomodation
 *
 *
 * 
 *
 **/
#ifndef _HOTEL_H_
#define _HOTEL_H_
 /**
* @brief This function takes the hotel ID shown in the view_brochure()
*
* and returns the necessary prices for each hotel accomodation
*
* 
*
* @param[in] The function takes input as hotel ID and file pointer to write
*
* details to file created
*
* @param[out] This function returns the price for each hotel accomodation
*
*
**/
extern float hotel (int hotel_id,  FILE *p_fptr2);
#endif
