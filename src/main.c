/**
 * @file main.c
 *
 * @This is the main function for the travel management system
 *
 *
 * 
 *
 **/
 
#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include"../include/view_brochure.h"
#include"../include/book_trip.h"
#include"../include/main_menu.h"
#include"../include/flight.h"
#include"../include/main.h"
#include"../include/sign_up.h"
#include"../include/user_login.h"
#include"../include/exit_system.h"



/**
* @brief This function takes the main functionality of the travel management system where it asks
*
* users to provide a choice of services for the accessing the trips.
*
* 
*
* @param[in] The function takes no input
*
* 
*
* @param[out] This function returns the main choices as provided by the user
*
*
**/

int main (void) {
    int option, response_code;
    struct client client_profile;
    char password[30];
    char username[30],pass_word[30];
    char flag;

    printf("\n================================================================\n");
    printf("\t\t\t Travel Agency Management System");
    printf("\n================================================================\n");
    printf("\n****** Search Flights, Hotels & Rental Cars ******\n\n");
    printf("ENTER: \n\t\t1. SIGN UP \n\t\t2. LOGIN \n\t\t3. EXIT\n");
    scanf("%d",&option);
    fgetc(stdin);

    switch(option) {
        case 1:
            printf("\nPlease enter your full name:\t");
            gets(client_profile.fullName);

            printf("\nPlease enter your email:\t");
            gets(client_profile.email);

            printf("\nPlease enter your age:\t");
            scanf("%d", &client_profile.age);
            fgetc(stdin);

            printf("\nPlease enter your username:\t");
            gets(client_profile.username);

            printf("\nPlease enter your password:\t");
            gets(client_profile.password);

            printf("\nConfirm your password:\t");
            gets(password);

            if(!strcmp(client_profile.password,password)){
                int response_code = sign_up(client_profile.username,client_profile.password);
                if (response_code == 1) {
                    printf("\n\nUser has been successfully registered\n");
                } else if (response_code == 2) {
                    printf("\n\nSomething went wrong. Please try again\n");
                }
            } else {
                printf("Confirm password and password doesn't match.\n");
            }
            break;

        case 2:
            user_login();
            break;

        case 3:
            exit_system();
            break;

        default:
            printf("ERROR!!! Not a valid input!\n Enter again: ");
            scanf("%d",&option);
            fgetc(stdin);
    }

    main_menu();
    return 0;
}