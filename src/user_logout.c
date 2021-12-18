
/**
 * @file user_logout.c
 *
 * @This implements logging out of the travel management system
 *
 *
 *
 * 
 *
 **/
 
#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include"../include/user_logout.h"




/**
* @brief This function will allow the user to logout of the system when the user is prompted to choose from
* 
* the options given in the main_menu function
*
* @param[in] The function doesn't take any input.
*
*
*
* @param[out] This function doesn't return any value.
*
*
**/

void user_logout () {
    printf("\nYou have been successfully logged out\n");
    main();
}
