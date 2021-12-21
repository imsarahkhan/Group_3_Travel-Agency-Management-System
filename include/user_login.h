/**
 * @file user_login.h
 *
 * @brief This implements existing users to login to the Travel Management system.
 *
 *
 * 
 *
 **/
#ifndef _USER_LOGIN_H_
#define _USER_LOGIN_H_
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
int user_login(char usrnm[30],char pwd[30]);
#endif 
