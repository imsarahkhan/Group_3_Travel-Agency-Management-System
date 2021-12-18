
/**
 * @file book_hotel_car.c
 *
 * @This implements booking of all three packages - flight, hotel and 
 * car services for the travel management system
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
#include"../include/hotel.h"
#include"../include/total_fare_car.h"
#include"../include/total_fare_trip.h"
#include"../include/total_fare_hotel.h"
#include"../include/discount_offer_1.h"
#include"../include/discount_offer_2.h"
#include"../include/validate_car_id.h"
#include"../include/validate_hotel_id.h"
#include"../include/book_hotel.h"
#include"../include/book_car.h"
#include"../include/book_hotel_car.h"


/**
* @brief This function will ask the user to enter the car ID and hotel Id based 
*
* on the flight routes already booked.
*
* The function will create booking details of the user and the fare along with any discounts
*
* will be computed and written to a file for all the three packages that the user would like to book.
*
* @param[in] The function takes input as booking ID and price of the flights
*
*
*
* @param[out] This function returns the booking details of the flight, hotel and car services.
*
*
**/

int book_hotel_car (int booking_id, float price_flight){
    int hotel_id, car_id, days=0;
    FILE *p_fptr_h;
    char filename[20];
    char str;

    printf("\n================================================================\n");
    printf("\t\t\t\t\t\t  Book your Hotel");
    printf("\n================================================================\n");
    printf("\nPlease enter the Hotel ID you wish to travel:\n");
    scanf("%d", &hotel_id);
    int valid1 = validate_hotel_id(hotel_id);

    printf("\n================================================================\n");
    printf("\t\t\t\t\t\t  Book your car");
    printf("\n================================================================\n");
    printf("\nPlease enter the car ID you wish to rent:\n");
    scanf("%d", &car_id);
    int valid2 = validate_car_id(car_id);

    if(valid1!=0 && valid2!=0){
        sprintf(filename, "%03d.txt", booking_id);
        p_fptr_h = fopen(filename,"a");
        fputs("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n",p_fptr_h);
        fputs("\t\tYOUR HOTEL BOOKING DETAILS ARE AS FOLLOWS:\n",p_fptr_h);
        fputs("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n",p_fptr_h);
        float price_hotel = hotel(hotel_id, p_fptr_h);
        printf("\nFor how many days you wish to book the HOTEL?\n");
        scanf("%d", &days);
        fprintf(p_fptr_h,"\n You have booked the hotel for %d days.\n", days);
        fclose (p_fptr_h);
        float total_h = total_fare_hotel(days, price_hotel, booking_id);
        printf("\nHotel Booking Successful!");
        printf("\nHave a pleasant stay !!!\n");

        sprintf(filename, "%03d.txt", booking_id);
        p_fptr_h = fopen(filename,"a");
        fputs("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n",p_fptr_h);
        fputs("\t\tYOUR CAR BOOKING DETAILS ARE AS FOLLOWS:\n",p_fptr_h);
        fputs("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n",p_fptr_h);
        printf("\nFor how many days you wish to rent the CAR?\n");
        scanf("%d", &days);
        float price_car = car(car_id, p_fptr_h);
        fprintf(p_fptr_h,"\n You have booked the car for %d days.\n", days);
        fclose (p_fptr_h);
        float total_c =total_fare_car(days, price_car, booking_id);
        printf("\nRental Car Booking Successful!\n");
        printf("THANK YOU FOR BOOKING A RENTAL CAR !!!\n");

        float total_trip = total_fare_trip(price_flight, total_h,total_c);
        float discount = discount_offer_2(total_trip);
        p_fptr_h = fopen(filename,"a");
        fputs("\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n",p_fptr_h);
        fprintf(p_fptr_h,"Your total fare now for the trip is $%f", total_trip);
        fprintf(p_fptr_h, "\nYou have been offered 15 percent discount !!!\nYour final amount to pay is $%f", discount);
        fputs("\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n",p_fptr_h);
        fclose (p_fptr_h);
    } else {
        printf("Invalid ID! Try Again! \n");
        book_hotel_car(booking_id, price_flight);
    }
    return 0;
}