/**
 * @file view_brochure.c
 *
 * @brief This dislays list of packages(flights,hotel and car)
 *
 * 
 *
 **/    
 
#include<stdio.h>
#include"../include/view_brochure.h"

/**
* @details This function contains list of packages (routes, hotels, rental cars) 
*
* along with their cost offered by the Travel agency
*
* @param[in] NONE
*
*
* @param[out] NONE
*
*
**/

void view_brochure () {
    printf("\n************************ VIEW BROCHURE *************************\n");
    printf("\nFind the Best Deals Faster - Start Your Trip Planning Today!\n");
    printf("\n========================================================================================================\n");
    printf("\t\t ROUTE ID \t\t\t FLIGHTS \t\t\t PRICE\n");
    printf("========================================================================================================\n");
    printf("\t\t  101 \t\t\t Toronto to Ottawa \t\t\t $400 \n\t\t  102 \t\t\t Toronto to Montreal \t\t\t $450 \n\t\t  103 \t\t\t Toronto to Vancouver \t\t\t $800 """
           " \n\t\t  104 \t\t\t Toronto to Calgary \t\t\t $600 \n\t\t  105 \t\t\t Ottawa to Montreal \t\t\t $600 \n\t\t  106 \t\t\t Ottawa to Vancouver \t\t\t $300 """
           " \n\t\t  107 \t\t\t Ottawa to Calgary \t\t\t $200 \n\t\t  108 \t\t\t Montreal to Vancouver \t\t\t $350 \n\t\t  109 \t\t\t Montreal to Calgary \t\t\t $500 """
           " \n\t\t  110 \t\t\t Vancouver to Calgary \t\t\t $150\n");

    printf("\n========================================================================================================\n");
    printf("\t\t HOTEL ID \t\t\t HOTELS \t\t\t PRICE\n");
    printf("========================================================================================================\n");
    printf("\t\t  201 \t\t\t Holiday Inn\t\t\t\t$100 per night \n\t\t  202 \t\t\t Ritz-Carlton\t\t\t\t$125 per night  \n\t\t  203 \t\t\t Four Seasons Hotel\t\t\t$170 per night  \n\t\t  204 \t\t\t Marriott Hotel\t\t\t\t$200 per night \n");

    printf("\n========================================================================================================\n");
    printf("\t\t CAR ID \t\tRENTAL CAR SERVICE \t\t\t  PRICE\n");
    printf("========================================================================================================\n");
    printf("\t\t 301 \t\t\tCanada Car Rental \t\t\t$30 per day \n\t\t 302 \t\t\tEnterprise Rental \t\t\t$60 per day\n");
	
}	

