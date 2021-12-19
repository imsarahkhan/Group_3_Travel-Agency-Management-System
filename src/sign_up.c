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


int sign_up(struct client client_profile){

    FILE *fp;
    int response_code = 0;
    fp = fopen("Clients.txt","a");
    int temp = fwrite(&client_profile,sizeof(struct client),1,fp);
    if(temp != 0) {
        response_code = 1;
    }
    else {
        response_code = 0;
    }
    fclose(fp);
    return response_code;
}
