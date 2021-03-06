/**
 * @file total_fare.c
 *
 * @brief This provides the fare for all the trip services offered (flight, hotel and car)
 *
 *
 * 
 *
 **/
 
#include<stdio.h>

/**
* @details This function will calculate the total fare for the flight trip including the number
*
* of passengers travelling in flight for the specific routes
*
* 
*
* @param[in] The function takes input as number of passengers from user, price for
*
* each flight route and the booking ID created during book trip
*
* @param[out] This function returns the total fare for the flight trip
*
*
**/

float total_fare_flight (int num_passengers,float price_flight,int booking_id) {

    char filename[20];
    float total;

    total = price_flight*num_passengers;

    sprintf(filename, "%03d.txt", booking_id);
    FILE *p_fptr = fopen(filename,"a");
    fprintf(p_fptr,"\n---------------------------------------------------------------------\n");
    fprintf(p_fptr,"Your total fare for the flight is $%.2f", total);
    fprintf(p_fptr,"\n---------------------------------------------------------------------\n");
    fclose(p_fptr);
    return total;
}


/**
* @details This function will calculate the total fare for the hotel accommodation including 
*
* the number of days for the stay according to the hotel prices
*
* 
*
* @param[in] The function takes input as number of days of stay from user, price for
*
* each hotel and the booking ID created during book trip
*
* @param[out] This function returns the total fare of hotel booking
*
*
**/


float total_fare_hotel (int days,float price_hotel, int booking_id) {

    char filename[20];
    float total;

    total = days*price_hotel;
    sprintf(filename, "%03d.txt", booking_id);
    FILE * p_fptr = fopen(filename,"a");
    fprintf(p_fptr,"\n---------------------------------------------------------------------\n");
    fprintf(p_fptr, "Your total fare for the hotel is $%.2f", total);
    fprintf(p_fptr,"\n---------------------------------------------------------------------\n");
    fclose(p_fptr);
    return total;
}

/**
* @details This function will calculate the total fare for the rental car services including 
*
* the number of days for the travel by car
*
* 
*
* @param[in] The function takes input as number of days for travel, price for
*
* rental car services and the booking ID created during book trip
*
* @param[out] This function returns the total fare of the car rentals
*
*
**/

float total_fare_car (int days,float price_car, int booking_id) {

    char filename[20];
    float total;

    total = days*price_car;
    sprintf(filename, "%03d.txt", booking_id);
    FILE * p_fptr = fopen(filename,"a");
    fprintf(p_fptr,"\n---------------------------------------------------------------------\n");
    fprintf(p_fptr, "Your total fare for the car is $%.2f", total);
    fprintf(p_fptr,"\n---------------------------------------------------------------------\n");
    fclose(p_fptr);
    return total;
}


/**
* @details This function will calculate the total fare for entire trip
*
* 
*
* @param[in] The function takes input as fares of each trip services (flight, hotel and car)
*
* @param[out] This function returns the total fare of the entire trip
*
*
**/

float total_fare_trip (float total_flight, float total_hotel, float total_car) {
    float final_fare;
    final_fare = total_flight+total_hotel+total_car;
    return final_fare;
}


/**
* @details This function will calculate the fare after a discount of 5% is applied 
*
* to the trips booked for 2 features, that is, flight & hotel or flight & car. 
*
* 
*
* @param[in] The function takes input as total fare of the entire trip
*
*
*
* @param[out] This function returns the discounted fare
*
*
**/

 
float discount_offer_1 (float total_trip) {
    float discount;
    discount = total_trip-(total_trip*0.05);
    return discount;
}


/**
* @details This function will calaculate the fare after a discount of 15% is applied 
*
* to the trips booked for all 3 features, that is, flight, hotel & car. 
*
*
* 
*
* @param[in] The function takes input as total fare of the entire trip
*
*
*
* @param[out] This function returns the discounted fare
*
*
**/

float discount_offer_2 (float total_trip) {
    float discount;
    discount = total_trip-(total_trip*0.15);
    return discount;
}

