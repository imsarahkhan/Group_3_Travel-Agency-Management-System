/**
 * @file sign_up.c
 *
 * @function implements new users to enroll themselves into the Travel Management system.
 *
 *
 * 
 *
 **/
 
#include<stdio.h>
#include<string.h>
#include"../include/client_model.h"

/**
* @brief This function will register new user to the system
*
* @param[in] The function takes input of user_name and password
*
* as input from the user in input terminal
*
*
* @param[out] This function returns response code based on the user inputs
*
* @return Returns 0 on successful registration and returns 1 on unsuccessful registration
*
**/


void sign_up(){

    FILE *fp;
    int age,opt,user_status = 0;
    char pwd2[30];
    struct client client_profile;
    char usrnm[30],pwd[30];

    printf("\nPlease enter your full name:\t");
    gets(client_profile.fullName);

    printf("\nPlease enter your email:\t");
    gets(client_profile.email);

    printf("\nPlease enter your username:\t");
    gets(client_profile.username);

    printf("\nPlease enter your password:\t");
    gets(client_profile.password);

    printf("\nConfirm your password:\t");
    gets(pwd2);

    if(!strcmp(client_profile.password,pwd2)){
        fp = fopen("Clients.txt","a");
        fwrite(&client_profile,sizeof(struct client),1,fp);
        if(fwrite != 0) {
            printf("\n\nUser has been successfully registered");
        }
        else {
            printf("\n\nSomething went wrong. Please try again");
        }
        fclose(fp);
    }
    else{
        printf("\n\nPassword entered do not match.Please re-register");
    }
}
