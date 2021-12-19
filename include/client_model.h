 
/**
 * @file book_trip.h
 * @brief This structure client stores the details of the client 
 */

#ifndef PROJECT_PROGRAM_CLIENT_MODEL_H
#define PROJECT_PROGRAM_CLIENT_MODEL_H
/**
 * @details This structure clients stores the information of the client like their Full name, email, 
 * username, password, phone number. 
 */
struct client {
    char fullName[30];
    char email[30];
    char username[30];
    char password[30];
    char phone [10];
};
#endif 
