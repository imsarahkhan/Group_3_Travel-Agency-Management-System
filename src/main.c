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
#include <client_model.h>
#include <stdbool.h>
#include"../include/main_menu.h"
#include"../include/sign_up.h"
#include"../include/user_login.h"


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

void main (void) {
    int option;
    char username[30], password[30];

    bool status = false;
    struct client client_profile;
    while (true)
    {
        printf("\n================================================================\n");
        printf("\t\t\t Travel Agency Management System");
        printf("\n================================================================\n");
        printf("\n****** Search Flights, Hotels & Rental Cars ******\n\n");
        printf("ENTER: \n\t\t1. SIGN UP \n\t\t2. LOGIN\n");
        scanf("%d",&option);
        fgetc(stdin);

        switch(option) {
            case 1:

                printf("\nPlease enter your full name:\t");
                gets(client_profile.fullName);

                printf("\nPlease enter your email:\t");
                gets(client_profile.email);

                printf("\nPlease enter your username:\t");
                gets(client_profile.username);

                printf("\nPlease enter your password:\t");
                gets(client_profile.password);

                printf("\nConfirm your password:\t");
                gets(password);
                if(!strcmp(client_profile.password,password))
                {
                    int response_code = sign_up(client_profile);
                    if(response_code == 0)
                    {
                        printf("\n\nSomething went wrong. Please try again");
                    }
                    else
                    {
                        status = true;
                        printf("\n\nUser has been successfully registered");
                    }

                }
                else{
                    printf("\n\nPassword entered do not match.Please re-register");
                }
                break;

            case 2:

                printf("\nEnter your username:\t");
                gets(username);

                printf("Enter your password:\t");
                gets(password);
                int response_code = user_login(username, password);
                if(response_code == 1)
                {
                    printf("\n\t Welcome %s to Travel Agency Management System !!!\n", username);
                    status = true;
                }
                else if(response_code == 2)
                {
                    printf("\n\nUser not found. Please register into the system");
                } else{
                    printf("\n\nInvalid Password");
                }
                break;

            default:
                printf("Invalid Input!\n Try again: ");
                scanf("%d",&option);
                fgetc(stdin);
        }
        if(status == true) {
            main_menu();
        }
    }
}