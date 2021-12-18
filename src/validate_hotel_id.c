
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
#include<string.h>
#include<unistd.h>
#include"../include/view_brochure.h"
#include"../include/main_menu.h"
#include"../include/validate_hotel_id.h"




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