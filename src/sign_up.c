/**
 * @file sign_up.c
 *
 * @brief function implements new users to enroll themselves into the Travel Management system.
 *
 *
 * 
 *
 **/
 
#include<stdio.h>
#include<string.h>
#include"../include/client_model.h"

/**
* @details This function will register new user to the system by collecting the information from users
*
* @param[in] The function takes user information into client_profile as variable type of structure
*
*
*
* @param[out] This function returns response code according to the status of user inputs
*
* @return Returns 1 on successful registration and returns 0 on unsuccessful registration
*
**/


int sign_up(struct client client_profile){

    FILE *fp;
    int response_code = 0;
    fp = fopen("clients.txt","a");
    int temp = fwrite(&client_profile,sizeof(struct client),1,fp);
    if(temp != 0) {
        response_code = 1;
    } else {
        response_code = 0;
    }
    fclose(fp);
    return response_code;
}

//int validate_email(client_profile.email)
//{

//}