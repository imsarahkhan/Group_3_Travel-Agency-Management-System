/**
 * @file view_brochure.c
 *
 * @This provides IDs for flights,hotel and car
 *
 *
 * 
 *
 **/
 
 #include<stdio.h>
#include<string.h>
#include<unistd.h>
#include"../include/view_brochure.h"

/**
* @brief This function This function contains list of packages (routes, hotels, rental cars) 
*
* along with their cost offered by the Travel agency
*
* @param[in] The function doesn't takes inputs
*
*
* @param[out] This function doesn't return any values
*
*
**/

void view_brochure () {
    printf("\n  Find the Best Deals Faster - Start Your Trip Planning Today!\n");
    printf("\n================================================================\n");
    printf("\t\t ROUTE ID \t\t\t FLIGHTS \t\t\t PRICE\n");
    printf("================================================================\n");
    printf("\t\t  101 \t\t\t Toronto to Ottawa \t\t $400 \n\t\t  102 \t\t\t Toronto to Montreal \t $450 \n\t\t  103 \t\t\t Toronto to Vancouver \t $800 """
           " \n\t\t  104 \t\t\t Toronto to Calgary \t $600 \n\t\t  105 \t\t\t Ottawa to Montreal \t $600 \n\t\t  106 \t\t\t Ottawa to Vancouver \t $300 """
           " \n\t\t  107 \t\t\t Ottawa to Calgary \t\t $200 \n\t\t  108 \t\t\t Montreal to Vancouver \t $350 \n\t\t  109 \t\t\t Montreal to Calgary \t $500 """
           " \n\t\t  110 \t\t\t Vancouver to Calgary \t $150\n");

    printf("\n================================================================\n");
    printf("\t\t HOTEL ID \t\t\t HOTELS \t\t\t PRICE\n");
    printf("================================================================\n");
    printf("\t\t  201 \t\t\t Holiday Inn\t\t $100 per night \n\t\t  202 \t\t\t Ritz-Carlton\t\t $125 per night  \n\t\t  203 \t\t\t Four Seasons Hotel\t $170 per night  \n\t\t  204 \t\t\t Marriott Hotel\t\t $200 per night \n");

    printf("\n================================================================\n");
    printf("\t\t CAR ID \t\tRENTAL CAR SERVICE \t\t  PRICE\n");
    printf("================================================================\n");
    printf("\t\t 301 \t\t\tCanada Car Rental \t\t$30 per day \n\t\t 302 \t\t\tEnterprise Rental \t\t$60 per day\n");
}