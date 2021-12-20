/**
 * @file user_login.h
 *
 * @This implements existing users to login to the Travel Management system.
 *
 *
 * 
 *
 **/
#ifndef _USER_LOGIN_H_
#define _USER_LOGIN_H_
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
extern void user_login();
#endif 
