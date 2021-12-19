/**
 * @file main_menu.c
 *
 * @This provides the main menu of the travel management system
 *
 *
 * 
 *
 **/
 
#include<stdio.h>
#include"../include/view_brochure.h"
#include"../include/book_trip.h"
#include"../include/view_print_trip.h"
#include"../include/cancel_trip.h"


/**
* @brief contains all the details regarding the trip are displayed 
*
* under the main menu using the view_brochure() sub-function and also 
*
* the user have the option of choosing the different services offered 
*
* by the Travel management system
*
* @param[in] This function doesn't takes inputs
*
*
* @param[out] This function doesn't return any values
*
*
**/

int main_menu() {
    int option;
    char choice;

    printf("\n================================================================\n");
    printf("\t\t\t\t\t\t  MAIN MENU");
    printf("\n================================================================\n");

    view_brochure();
    printf("\nPlease select one feature from the following to proceed:\n");
    printf("\n\t\t 1 - Book Trip \n\t\t 2 - View/Print Trip \n\t\t 3 - Cancel Trip \n\t\t 4 - User Logout \n");
    scanf("%d", &option);
    switch(option){
        case 1:
            book_trip();
            break;
        case 2:
            view_print_trip();
            break;
        case 3:
            cancel_trip();
            break;
        case 4:
            printf("Logged out successfully");
            return 0;
        default:
            printf("Invalid input!\n Try again!");
            scanf("%d",&option);
    }

    printf("\nPress any button to continue");
    fgetc(stdin);
    scanf("%c", &choice);
    if(choice != '\0') {
        main_menu();
    }
    return 0;
}
