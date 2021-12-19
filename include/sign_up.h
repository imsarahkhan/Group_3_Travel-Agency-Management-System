/**
 * @file sign_up.h
 *
 * @brief function implements new users to enroll themselves into the Travel Management system.
 *
 *
 * 
 *
 **/
#ifndef _SIGN_UP_H_
#define _SIGN_UP_H_
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

int sign_up(struct client client_profile);
#endif
