
/**
 * @file add_passengers.c
 *
 * @brief This takes the information of passengers travelling in the trip
 *
 *
 * 
 *
 **/
 
#include<stdio.h>
#include"../include/add_passengers.h"
#include "../include/client_model.h"


/**
* @details This function will ask the user for the number of passengers travelling in the trip.
*
* The user will enter the passenger details including the user.
*
* 
*
* @param[in] The function takes input as booking ID created from the book trip function
*
*
*
* @param[out] This function returns the number of passengers
*
*
**/

 
int add_passengers (int booking_id) {

    struct client user_profile;
    int num_passenger;
    char filename[20];

    sprintf(filename, "%03d.txt", booking_id);
    FILE *p_fptr = fopen(filename,"a");

    printf("\nNumber of passengers including yourself \t");
    scanf("%d", &num_passenger);

    if(num_passenger>10){
        printf("Error! Number of passengers cannot be more than 10!\n");
        printf("Enter Again:\n");
        scanf("%d", &num_passenger);
    }
    fgetc(stdin);

    for(int i=1;i<num_passenger+1 ;i++) {
        printf("\nPassenger %d", i);
        fprintf(p_fptr,"\n ======================Passenger %d====================\n", i);
        printf("\nPlease enter your full name:\t");
        gets(user_profile.fullName);
        fputs("Name: \t ", p_fptr);
        fputs(user_profile.fullName, p_fptr);
        printf("\nPlease enter your email:\t");
        gets(user_profile.email);
        fputs("\nEmail: \t ", p_fptr);
        fputs(user_profile.email, p_fptr);
        printf("\nPlease enter your phone number:\t");
        gets(user_profile.phone);
        fputs("\nPhone Number: \t", p_fptr);
        fputs(user_profile.phone, p_fptr);
        fputs("\n",p_fptr);
    }
    fclose(p_fptr);

    return num_passenger;
}