/**
 * @file individual_route_prices.h
 *
 * @brief This provides the ID and prices for all trip services (flight,hotel and car)
 *
 *
 * 
 *
 **/

#ifndef PROJECT_PROGRAM_INDIVIDUAL_ROUTE_PRICES_H
#define PROJECT_PROGRAM_INDIVIDUAL_ROUTE_PRICES_H
/**
* @details This function takes the route ID (flights) shown in the view_brochure()
*
* and returns the necessary prices for each flight trips
*
*
* @param[in] The function takes input as route ID associated with a flight routes and file pointer to write
*
* details to the file created
*
* @param[out] This function returns the price for each flight trip
*
* @return Returns 0 if invalid route ID or else returns flight price
**/
float flight(int route_id, FILE *p_fptr3);
/**
* @details This function takes the hotel ID shown in the view_brochure()
*
* and returns the necessary prices for each hotel accommodation
*
* 
*
* @param[in] The function takes input as hotel ID and file pointer to write the
*
* details to the file created
*
* @param[out] This function returns the price for each hotel accommodation
*
* @return Returns 0 if invalid hotel ID or else returns hotel price
**/
float hotel(int hotel_id, FILE *p_fptr3);
/**
* @details This function takes the car route ID shown in the view_brochure()
*
* and returns the necessary prices for two rental car services
*
* 
*
* @param[in] The function takes input as car route ID and file pointer to write
*
* details to the file created
*
* @param[out] This function returns the price for each rental car services
*
* @return returns 0 if invalid car ID and or else returns car price
**/
float car(int car_id, FILE *p_fptr3);
#endif //PROJECT_PROGRAM_INDIVIDUAL_ROUTE_PRICES_H
