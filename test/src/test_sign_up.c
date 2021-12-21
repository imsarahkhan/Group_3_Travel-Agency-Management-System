#include "../test/include/test_sign_up.h"
#include"../include/client_model.h"
#include<stdio.h>
#include<string.h>

 int test_sign_up(struct client client_profile) {

    int status_code = 0;
    char password_2[20];
    printf("\nPlease enter your full name:\t");
    gets(client_profile.fullName);

    printf("\nPlease enter your email:\t");
    gets(client_profile.email);
    if (NULL == strchr(client_profile.email, '@')) {

        status_code = 1;
        printf("User entered invalid email");
    }
    printf("\nPlease enter your username:\t");
    gets(client_profile.username);
    int length_username = strlen(client_profile.username);

    if (length_username == 0) {

        status_code = 2;
        printf("\n Empty username field.");

    }
    else if (length_username < 5 || length_username > 8) {

        status_code = 3;
        printf("\nPlease enter appropriate username.");
    }
    else {

         status_code = 4;
    }

    printf("\nPlease enter your password:\t");
    gets(client_profile.password);
     int length_password = strlen(client_profile.password);
    if (length_password == 0) {

        status_code = 5;
        printf("\n Empty Password field.");

    } else if (length_password < 8 || length_password > 10) {

        status_code =  6;
        printf("\n Please enter appropriate password.");
    }
    else{

        status_code = 7;
    }

    printf("\nConfirm your password:\t");
    gets(password_2);
    if (strcmp(client_profile.password, password_2) != 0) {

        status_code = 8;
        printf("\n Password do not match.");
    }

    return status_code;
    }

