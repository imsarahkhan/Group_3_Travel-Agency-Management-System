/**
 * @file car.h
 *
 * @This provides the car rental type and prices for car packages
 *
 *
 * 
 *
 **/
#ifndef _CAR_H_
#define _CAR_H_
/**
* @brief This function takes the Car route ID shown in the view_brochure()
*
* and returns the necessary prices for two rental car services
*
* 
*
* @param[in] The function takes input as car route ID and file pointer to write
*
* details to file created
*
* @param[out] This function returns the price for each rental car services
*
*
**/
extern float car(int car_id, FILE *p_fptr3);
#endif
