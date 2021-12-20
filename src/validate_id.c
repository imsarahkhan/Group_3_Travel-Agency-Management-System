
/**
 * @file validate_id.c
 *
 * @brief This implements validation of all the trip IDs (route,hotel and car).
 *
 *
 * 
 *
 **/
 
#include<stdio.h>

/**
* @details This function will validate if the route ID for the flights have already been booked or not.
*
*
* 
*
* @param[in] The function takes input as route ID of flights
*
*
*
* @param[out] This function returns a temporary variable that stores a value 0 if no user
* booked that particular route and any other value indicates it is booked more than once.
*
*
**/

int validate_route_id (int route_id) {
    int temp = 0;
    for (int i = 101; i<111 ;i++) {
        if(route_id == i){
            temp = 1;
        }
    }
    return temp;
}


/**
* @details This function will validate if the hotel ID have already been booked or not.
*
*
* 
*
* @param[in] The function takes input as hotel ID
*
*
*
* @param[out] This function returns the a temporary variable that stores a value 0 if no user
* booked that particular hotel and any other value indicates it is booked more than once.
*
*
**/

int validate_hotel_id (int hotel_id) {
    int temp = 0;
    for (int i = 201; i<205 ;i++){
        if(hotel_id == i){
            temp = 1;
        }
    }
    return temp;
}



/**
* @details This function will validate if the car ID have already been booked or not.
*
*
* 
*
* @param[in] The function takes input as car ID
*
*
*
* @param[out] This function returns the a temporary variable that stores a value 0 if no user
* booked that particular car services and any other value indicates it is booked more than once.
*
*
**/

int validate_car_id (int car_id) {
    int temp = 0;
    for (int i = 301; i<303 ;i++){
        if(car_id == i){
            temp = 1;
        }
    }
    return temp;
}