
/**
 * @file book_hotel.c
 *
 * @This implements booking hotel for the travel management system
 *
 *
 * 
 *
 **/
 
#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include"../include/view_brochure.h"
#include"../include/book_trip.h"
#include"../include/main_menu.h"
#include"../include/add_passengers.h"
#include"../include/flight.h"
#include"../include/hotel.h"
#include"../include/total_fare_hotel.h"
#include"../include/total_fare_trip.h"
#include"../include/discount_offer_1.h"
#include"../include/validate_hotel_id.h"
#include"../include/book_hotel.h"


/**
* @brief This function will ask the user to enter the hotel ID that they want to book hotel acccommodation for.
*
* The function will create booking details of the user and the fare along with any discounts
*
* will be computed and written to a file.
*
* @param[in] The function takes input as booking ID and price of the flights
*
*
*
* @param[out] This function returns the booking details of the flight and hotel
*
*
**/

int book_hotel (int booking_id,float price_flight) {
    int hotel_id, days=0;
    FILE *p_fptr_h;
    char filename[20];
    char str;

    printf("\nYour Booking ID is %d\n",booking_id);
    printf("\n================================================================\n");
    printf("\t\t\t\t\t\t  Book your Hotel");
    printf("\n================================================================\n");
    printf("\nPlease enter the Hotel ID you wish to travel:\n");
    scanf("%d", &hotel_id);
    int valid = validate_hotel_id(hotel_id);

    if(valid!=0){
        sprintf(filename, "%03d.txt", booking_id);
        p_fptr_h = fopen(filename,"a");
        fputs("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n",p_fptr_h);
        fputs("\t\tYOUR HOTEL BOOKING DETAILS ARE AS FOLLOWS:\n",p_fptr_h);
        fputs("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n",p_fptr_h);
        float price_hotel = hotel(hotel_id, p_fptr_h);
        printf("\nFor how many days you wish to book?\n");
        scanf("%d", &days);
        fprintf(p_fptr_h,"\n You have booked the hotel for %d days.\n", days);
        fclose (p_fptr_h);
        float total_h = total_fare_hotel(days, price_hotel, booking_id);
        float total_trip = total_fare_trip(price_flight, total_h,0);
        float discount = discount_offer_1(total_trip);
        p_fptr_h = fopen(filename,"a");
        fputs("\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n",p_fptr_h);
        fprintf(p_fptr_h,"Your total fare now for the trip is $%f", total_trip);
        fprintf(p_fptr_h, "\nYou have been offered 5 percent discount !!!\nYour final amount to pay is $%f", discount);
        fputs("\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n",p_fptr_h);
        fclose (p_fptr_h);

        printf("\nHotel Booking Successful!");
        printf("\nHave a pleasant stay !!!\n");
    } else {
        printf("Invalid ID! Try Again! \n");
        book_hotel(booking_id, price_flight);
    }
    return 0;
}
