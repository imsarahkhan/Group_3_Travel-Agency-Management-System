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
#include<unistd.h>
#include"../include/sign_up.h"

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


int sign_up(char username[30], char password[30]){
  
    FILE *fp;
    int response_code;
    char pwd2[30];
    struct client client_profile;
    fp = fopen("Clients.txt","a");
    int i = (int)fwrite(&client_profile,sizeof(struct client),1,fp);
    if(i != 0){
      
         response_code = 1;
    }
    else {
      
        response_code = 2;
    }
  
    fclose(fp);
    return response_code;
}
