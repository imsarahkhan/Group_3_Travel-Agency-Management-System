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
void user_login() {
    
    FILE *fp;
    int age, opt, user_status = 0;
    char pwd2[30];
    struct client client_profile;
    char usrnm[30], pwd[30];
    
    printf("\nEnter your username:\t");
    gets(usrnm);
    
    printf("Enter your password:\t");
    gets(pwd);

    fp = fopen("Clients.txt", "r");

    while (fread(&client_profile, sizeof(struct client), 1, fp)) {
        
        if (!strcmp(client_profile.username, usrnm)) {
            
            if (!strcmp(client_profile.password, pwd)) {
                
                printf("\n\t Welcome %s to Travel Agency Management System !!!\n", client_profile.fullName);
                STATUS = 1;
             } else {
                
                printf("\n\nInvalid Password!");
               }
            
            user_status = 1;
        }
    }
    if (!user_status) {
        
        printf("\n\nUser not found. Please register into the system");
    }
    fclose(fp);
}
