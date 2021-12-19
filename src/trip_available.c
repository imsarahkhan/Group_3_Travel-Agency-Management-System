
/**
 * @file trip_available.c
 *
 * @This implements logging out of the travel management system
 *
 *
 *
 * 
 *
 **/
 
#include<stdio.h>
#include"../include/trip_available.h"
#include"../include/global_variable.h"


/**
* @brief This function will count the number of times a particular route is booked and indicate the availability 
* 
* of the trip for the next user to book or not.
*
* @param[in] The function doesn't take any input.
*
*
*
* @param[out] This function return the counter value that defines trip count 
*
*
**/

int trip_available() {
    int counter = 0;
    if (g_count_1 > 2) {
        printf("The flight from Toronto to Ottawa is no longer available!\nPlease select another flight.");
        counter = 1;
    } else if (g_count_2 > 3) {
        printf("The flight from Toronto to Montreal is no longer available!\nPlease select another flight.");
        counter = 1;
    } else if (g_count_3 > 4) {
        printf("The flight from Toronto to Vancouver is no longer available!\nPlease select another flight.");
        counter = 1;
    } else if (g_count_4 > 2) {
        printf("The flight from Toronto to Calgary is no longer available!\nPlease select another flight.");
        counter = 1;
    } else if (g_count_5 > 3) {
        printf("The flight from Ottawa to Montreal is no longer available!\nPlease select another flight.");
        counter = 1;
    } else if (g_count_6 > 1) {
        printf("The flight from Ottawa to Vancouver is no longer available!\nPlease select another flight.");
        counter = 1;
    } else if (g_count_7 > 3) {
        printf("The flight from Ottawa to Calgary is no longer available!\nPlease select another flight.");
        counter = 1;
    } else if (g_count_8 > 3) {
        printf("The flight from Montreal to Vancouver is no longer available!\nPlease select another flight.");
        counter = 1;
    } else if (g_count_9 > 2) {
        printf("The flight from Montreal to Calgary is no longer available!\nPlease select another flight.");
        counter = 1;
    } else if (g_count_10 > 3) {
        printf("The flight from Vancouver to Calgary is no longer available!\nPlease select another flight.");
        counter = 1;
    } else {
        return 0;
    }
    return counter;
}
