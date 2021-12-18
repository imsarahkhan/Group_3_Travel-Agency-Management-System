
/**
 * @file validate_car_id.c
 *
 * @This implements validation of the car id to check if this rental car services are booked
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
#include"../include/validate_car_id.h"




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