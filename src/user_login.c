/**
 * @file login_user.c
 *
 * @This implements existing users to login to the Travel Management system.
 *
 *
 * 
 *
 **/
 
#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include"../include/sign_up.h"
#include"../include/user_login.h"

/**
* @brief This function will allow users’ to login to the system using  
*
* their username and password. If the credentials are invalid, the user have 3 tries to re-login
*
* and any tries beyond that will exit the system.
*
* @param[in] The function takes input of user_name and password
*
* as input from the user in input terminal
*
*
* @param[out] This function returns response code based on the user inputs
*
* @return Returns 0 on successful login and returns 1 on unsuccessful login
*
**/
int user_login(char username[30],char password[30],char usrnm[30],char pwd[30]) {
    FILE *fp;
    int user_status = 0;
    int response_code;
    struct client client_profile;

    fp = fopen("Clients.txt", "r");
    while (fread(&client_profile, sizeof(struct client), 1, fp)) {
        if (!strcmp(client_profile.username, usrnm)) {
            
            if (!strcmp(client_profile.password, pwd)) {
                
                response_code = 1;

            } else {
                
                response_code =2;
            }
            
            user_status = 1;
        }
    }
    if (!user_status) {
        
        response_code = 3;
    }
    
    fclose(fp);
    return response_code;
}
