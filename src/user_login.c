/**
 * @file user_login.c
 *
 * @brief This implements existing users to login to the Travel Management system.
 *
 *
 * 
 *
 **/
 
#include<stdio.h>
#include<string.h>
#include"../include/user_login.h"
#include "../include/client_model.h"

/**
* @details This function will allow users’ to login to the system using  
*
* their username and password. If the credentials are invalid,user will be prompted to login again.
*
* @param[in] The function takes input of user_name and password
*
*
* @param[out] This function returns response code according to the status of user inputs
*
* @return Returns 1 on successful login and returns 2 on unsuccessful login
*
**/
int user_login(char username[30],char password[30]) {
    
    FILE *fp;
    int response_code = 0;
    int user_status = 0;
    struct client client_profile;

    fp = fopen("clients.txt", "r");

    while (fread(&client_profile, sizeof(struct client), 1, fp)) {
        
        if (!strcmp(client_profile.username, username)) {
            
            if (!strcmp(client_profile.password, password)) {
                
                response_code = 1;
             }
            
            user_status = 1;
        }
    }
    if (!user_status) {
        response_code = 2;
    }
    fclose(fp);
    return response_code;
}
