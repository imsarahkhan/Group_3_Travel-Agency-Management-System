
/**
 * @file book_trip.c
 *
 * @This implements menu for booking the trip for three trip package
 *
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
#include"../include/total_fare_flight.h"
#include"../include/total_fare_car.h"
#include"../include/total_fare_trip.h"
#include"../include/total_fare_hotel.h"
#include"../include/discount_offer_1.h"
#include"../include/discount_offer_2.h"
#include"../include/validate_route_id.h"
#include"../include/validate_car_id.h"
#include"../include/validate_hotel_id.h"
#include"../include/book_hotel.h"
#include"../include/book_car.h"
#include"../include/book_hotel_car.h"
#include"../include/trip_available.h"



/**
* @brief This function will ask the user to enter the route ID and will ask user to continue further if
* they would like to book hotel or car or both as well.
*
*
* 
*
* @param[in] The function doesn't take any input.
*
*
*
* @param[out] This function returns the choice and booking details booked by the user
*
*
**/

int book_trip () {
    int route_id, hotel_id, car_id, choice;
    FILE *p_fptr_t;
    char filename[20];
    char str, ans;

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
    g_booking_id++;
    sprintf(filename, "%03d.txt", g_booking_id);
    p_fptr_t = fopen(filename,"a");

    if(valid_1!=0 && valid_2!=0){
        fprintf(p_fptr_t,"BOOKING ID : %d\n\n", g_booking_id);
        fputs("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n",p_fptr_t);
        fputs("\t\tYOUR FLIGHT BOOKING DETAILS ARE AS FOLLOWS:\n",p_fptr_t);
        fputs("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n",p_fptr_t);
        float price_flight = flight(route_id, p_fptr_t);
        fclose (p_fptr_t);
        int num_passengers = add_passengers(g_booking_id);
        float total_f = total_fare_flight(num_passengers, price_flight, g_booking_id);
        float total_trip = total_fare_trip(total_f,0,0);
        printf("\nFlight Booking Successful!\n");
        printf("Your Booking ID is %d\n",g_booking_id);
        printf("\nTHANK YOU FOR BOOKING A FLIGHT !!!\n\n");

        printf("\nDo you wish to add a Hotel, a Rental Car or Both? \n");
        printf("\nPlease select one service from the following to proceed:\n");
        printf("\n\t\t 1 - Book Hotel \n\t\t 2 - Book Car \n\t\t 3 - Book Hotel & Car \n\t\t 4 - None\n");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                book_hotel(g_booking_id, total_f);
                break;
            case 2:
                book_car(g_booking_id, total_f);
                break;
            case 3:
                book_hotel_car(g_booking_id, total_f);
                break;
            case 4:
                break;
            default:
                printf("ERROR!!! Not a valid input!\n Enter again: ");
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