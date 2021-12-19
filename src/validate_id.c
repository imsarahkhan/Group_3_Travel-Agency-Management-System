
/**
 * @file validate_hotel_id.c
 *
 * @This implements validation of the hotel id to check if this hotel is booked
 *
 *
 * 
 *
 **/
 
#include<stdio.h>



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
 * @file validate_route_id.c
 *
 * @This implements validation of the route IF of flights to check if this route is booked
 *
 *
 * 
 *
 **/
 

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
 * @file validate_car_id.c
 *
 * @This implements validation of the car id to check if this rental car services are booked
 *
 *
 * 
 *
 **/
 


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
int validate_car_id (int car_id) {
    int temp = 0;
    for (int i = 301; i<303 ;i++){
        if(car_id == i){
            temp = 1;
        }
    }
    return temp;
}