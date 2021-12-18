
/**
 * @file book_car.c
 *
 * @This implements booking car services for the travel management system
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
#include"../include/car.h"
#include"../include/total_fare_car.h"
#include"../include/total_fare_trip.h"
#include"../include/discount_offer_1.h"
#include"../include/validate_car_id.h"
#include"../include/book_hotel.h"
#include"../include/book_car.h"


/**
* @brief This function will ask the user to enter the car ID that they want to book car services for.
*
* The function will create booking details of the user and the fare along with any discounts
*
* will be computed and written to a file.
*
* @param[in] The function takes input as booking ID and price of the flights
*
*
*
* @param[out] This function returns the booking details of the flight and car services.
*
*
**/

int book_car (int booking_id, float price_flight) {
    int car_id, days;
    FILE *p_fptr_c;
    char filename[20];
    char str;

    printf("\n================================================================\n");
    printf("\t\t\t\t\t\t  Book your car");
    printf("\n================================================================\n");
    printf("\nPlease enter the car ID you wish to rent:\n");
    scanf("%d", &car_id);
    int valid = validate_car_id(car_id);
    sprintf(filename, "%03d.txt", booking_id);
    p_fptr_c = fopen(filename,"a");

    if(valid!=0){
        fputs("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n",p_fptr_c);
        fputs("\t\tYOUR CAR BOOKING DETAILS ARE AS FOLLOWS:\n",p_fptr_c);
        fputs("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n",p_fptr_c);
        printf("\nFor how many days you wish to rent the car?\n");
        scanf("%d", &days);
        float price_car = car(car_id, p_fptr_c);
        fprintf(p_fptr_c,"\n You have booked the car for %d days.\n", days);
        fclose (p_fptr_c);
        float total_c =total_fare_car(days, price_car, booking_id);
        float total_trip = total_fare_trip(price_flight, 0,total_c);
        float discount = discount_offer_1(total_trip);
        p_fptr_c = fopen(filename,"a");
        fputs("\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n",p_fptr_c);
        fprintf(p_fptr_c,"Your total fare now for the trip is $%f", total_trip);
        fprintf(p_fptr_c, "\nYou have been offered 5 percent discount !!!\nYour final amount to pay is $%f", discount);
        fputs("\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n",p_fptr_c);
        fclose (p_fptr_c);
        printf("\nRental Car Booking Successful!\n");
        printf("THANK YOU FOR BOOKING A RENTAL CAR !!!\n");
    } else {
        printf("Invalid ID! Try Again! \n");
        book_car(booking_id, price_flight);
    }
    return 0;
}