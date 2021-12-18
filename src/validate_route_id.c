
/**
 * @file validate_route_id.c
 *
 * @This implements validation of the route IF of flights to check if this route is booked
 *
 *
 * 
 *
 **/
 
#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include"../include/view_brochure.h"
#include"../include/main_menu.h"
#include"../include/validate_route_id.h"




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