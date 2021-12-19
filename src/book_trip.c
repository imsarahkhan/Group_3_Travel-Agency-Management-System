
/**
 * @file book_trip.c
 *
 * @brief This implements booking of all three packages - flight, hotel and 
 * car services for the Travel Management System
 *
 *
 * 
 *
 **/
 
#include<stdio.h>
#include <trip_available.h>
#include <global_variable.h>
#include"../include/validate_id.h"
#include"../include/individual_route_prices.h"
#include"../include/total_fare.h"
#include"../include/add_passengers.h"
#include"../include/book_trip.h"
#include"../include/view_brochure.h"

/**
* @details This function will ask the user to enter the flight route ID and will ask user to continue further if
* they would like to book hotel or car or both as well.
*
*
*
* @param[in] NONE
*
*
*
* @param[out] A text file with all the details of the booked trip(flight, hotel and car)
*
*
**/

int book_trip () {
    int route_id, choice;
    FILE *p_fptr_t;
    char filename[20];
    char str;

    printf("\n================================================================\n");
    printf("\t\t\t\t\t\t  Book your Flight");
    printf("\n================================================================\n");
    printf("\nPlease enter the Route ID you wish to travel:\n");
    scanf("%d", &route_id);
    int valid_1 = validate_route_id(route_id);
    int count = trip_available();
    if(count == 1){
        printf("\nPlease enter the Route ID you wish to travel:\n");
        scanf("%d", &route_id);
    }
    int valid_2 = validate_route_id(route_id);
    
    if(valid_1!=0 && valid_2!=0){
		g_booking_id++;
		sprintf(filename, "%03d.txt", g_booking_id);
		p_fptr_t = fopen(filename,"a");

        fprintf(p_fptr_t,"Your booking id is %d\n\n", g_booking_id);
        fputs("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n",p_fptr_t);
        fputs("\t\tYOUR FLIGHT BOOKING DETAILS ARE AS FOLLOWS:\n",p_fptr_t);
        fputs("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n",p_fptr_t);
        float price_flight = flight(route_id, p_fptr_t);
        fclose (p_fptr_t);
        int num_passengers = add_passengers(g_booking_id);
        float total_f = total_fare_flight(num_passengers, price_flight, g_booking_id);
        printf("\nFlight Booking Successful!\n");
        printf("\nTHANK YOU FOR BOOKING A FLIGHT !!!\n\n");

        printf("\nDo you wish to add a Hotel, a Rental Car or Both? \n");
        printf("\nPlease select one service from the following to proceed:\n");
        printf("\n\t\t 1 - Book Hotel \n\t\t 2 - Book Car \n\t\t 3 - Book Hotel & Car \n\t\t 4 - None\n");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                view_brochure();
                book_hotel(g_booking_id, total_f);
                break;
            case 2:
                view_brochure();
                book_car(g_booking_id, total_f);
                break;
            case 3:
                view_brochure();
                book_hotel_car(g_booking_id, total_f);
                break;
            case 4:
                break;
            default:
                printf("Invalid input!\n Try again: ");
                scanf("%d",&choice);
                fgetc(stdin);
        }

        sprintf(filename, "%03d.txt", g_booking_id);
        FILE * p_fptr = fopen (filename, "r");
        str = fgetc(p_fptr);

        while (str != EOF) {
            printf ("%c", str);
            str = fgetc(p_fptr);
        }
        printf("\n\n");
        fclose (p_fptr);
    } else {
        printf("Invalid ID! Try Again! \n");
        book_trip();
    }
    return 0;
}

/**
* @details This function will ask the user to enter the hotel ID that they want to book hotel acccommodation
*
* The function will create booking details of the user and the fare after applying the discount
*
* and then written to a file.
*
*
* @param[in] The function takes input as booking ID and price of the flight booked
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

    printf("\n================================================================\n");
    printf("\t\t\t\t\t\t  Book your Hotel");
    printf("\n================================================================\n");
    printf("\nPlease enter the Hotel ID you wish to stay:\n");
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
        fprintf(p_fptr_h,"Your total fare now for the trip is $%.2f", total_trip);
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

/**
* @details This function will ask the user to enter the car ID that they want to book car services.
*
* The function will create booking details of the user and the fare along with any discounts
*
* will be computed and written to a file.
*
* @param[in] The function takes input as booking ID and price of the flight booked
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
        fprintf(p_fptr_c,"Your total fare now for the trip is $%.2f", total_trip);
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



/**
* @details This function will ask the user to enter the car ID and hotel ID based 
*
* on the flight routes that are already booked.
*
* The function will create booking details of the user and the fare along with any discounts
*
* will be computed and written to a file for all the three packages that the user would like to book.
*
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
        fprintf(p_fptr_h,"Your total fare now for the trip is $%.2f", total_trip);
        fprintf(p_fptr_h, "\nYou have been offered 15 percent discount !!!\nYour final amount to pay is $%f", discount);
        fputs("\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n",p_fptr_h);
        fclose (p_fptr_h);
    } else {
        printf("Invalid ID! Try Again! \n");
        book_hotel_car(booking_id, price_flight);
    }
    return 0;
}



