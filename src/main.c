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
#include"../include/main_menu.h"
#include"../include/sign_up.h"
#include"../include/user_login.h"
#include"../include/user_logout.h"


//extern int g_booking_id=0,g_count_1=0,g_count_2=0,g_count_3=0,g_count_4=0,g_count_5=0,g_count_6=0,g_count_7=0,g_count_8=0,g_count_9=0,g_count_10=0;


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
    int option;
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
            sign_up();
            break;

        case 2:
            user_login();
            break;

        case 3:
            user_logout();
            break;

        default:
            printf("ERROR!!! Not a valid input!\n Enter again: ");
            scanf("%d",&option);
            fgetc(stdin);
    }

    main_menu();
    return 0;
}