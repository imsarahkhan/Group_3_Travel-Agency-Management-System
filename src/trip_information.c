/**
 * @file trip_information.c
 *
 * @This provides infromation of routes and fares of all the trips
 *
 *
 * 
 *
 **/
 
#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include"../include/global.h"
#include"../include/user_login.h"
#include"../include/trip_information.h"

/**
* @brief This function will provide all the trip related infromation to the users from which
*
* the user can book the trip.
*
* @param[in] The function takes input reference ID of flights,hotel and cars 
*
* as input from the user in input terminal
*
*
* @param[out] This function returns price for the selected route ID,hotel ID or car ID
*
*
**/

float flight(int route_id) {
    float price_f;
    if (route_id == 101) {
        price_f = 400;
    }
    else if (route_id == 102) {
        price_f = 450;
    }
    else if (route_id == 103) {
        price_f = 800;
    }
    else if (route_id == 104) {
        price_f = 600;
    }
    else if (route_id == 105) {
        price_f = 600;
    }
    else if (route_id == 106) {
        price_f = 300;
    }
    else if (route_id == 107) {
        price_f = 200;
    }
    else  if (route_id == 108) {
        price_f = 350;
    }
    else if (route_id == 109) {
        price_f = 500;
    }
    else  if (route_id == 110) {
        price_f = 150;
    }
    else{
        flag_f = 1;
        return 0;
    }
    return price_f;
}

float hotel(int hotel_id) {
    float price_h = 0.0;
    if (hotel_id == 201) {
        price_h = 100;
    }
    else if (hotel_id == 202) {
        price_h = 125;
    }
    else if (hotel_id == 203) {
        price_h = 170;
    }
    else if (hotel_id == 204) {
        price_h = 200;
    }
    else{
        flag_h = 1;
        return 0;
    }
    return price_h;
}

float car(int car_id) {
    float  price_c = 0.0;
    if (car_id == 301) {
        price_c = 30;
    }
   else  if (car_id == 302) {
        price_c = 60;
    }
   else{
        flag_c = 1;
        return 0;
    }
    return price_c;
}

int flight_info(int route_id, FILE *fptr){
    if(route_id == 101){
        fputs("\nYou have booked a flight from Toronto to Ottawa\n",fptr);
        c1++;
    }
    else if(route_id == 102){
        fputs("\nYou have booked a flight from Toronto to Montreal\n",fptr);
        c2++;
    }
    else if(route_id == 103){
        fputs("\nYou have booked a flight from Toronto to Vancouver\n",fptr);
        c3++;
    }
    else if(route_id == 104){
        fputs("\nYou have booked a flight from Toronto to Calgary\n",fptr);
        c4++;
    }
    else if(route_id == 105){
        fputs("\nYou have booked a flight from Ottawa to Montreal\n",fptr);
        c5++;
    }
    else if(route_id == 106){
        fputs("\nYou have booked a flight from Ottawa to Vancouver\n",fptr);
        c6++;
    }
    else if(route_id == 107){
        fputs("\nYou have booked a flight from Ottawa to Calgary\n",fptr);
        c7++;
    }
    else if(route_id == 108){
        fputs("\nYou have booked a flight from Montreal to Vancouver\n",fptr);
        c8++;
    }
    else if(route_id == 109){
        fputs("\nYou have booked a flight from Montreal to Calgary\n",fptr);
        c9++;
    }
    else if(route_id == 110){
        fputs("\nYou have booked a flight from Vancouver to Calgary\n",fptr);
        c10++;
    }
    else{
        return 0;
    }
    return 0;
}

int hotel_info(int hotel_id, FILE *fptr1){
    if (hotel_id == 201) {
    fputs("\nYou have booked a hotel room in Holiday Inn\n",fptr1);
    h1++;
    }
    else if (hotel_id == 202) {
    fputs("\nYou have booked a hotel room in Ritz-Carlton\n",fptr1);
    h2++;
    }
    else if (hotel_id == 203) {
    fputs("\nYou have booked a hotel room in Four Seasons Hotel\n",fptr1);
    h3++;
    }
    else if (hotel_id == 204) {
    fputs("\nYou have booked a hotel room in Marriott Hotel\n",fptr1);
    h4++;
    }
    else
    {
    return 0;
    }
    return 0;
}

int car_info(int car_id, FILE *fptr2){
    if (car_id == 301) {
    fputs("\nYou have booked a rental car service with Canada Car Rental\n",fptr2);
    }
    else if (car_id == 302) {
    fputs("\nYou have booked a rental car service with Enterprise Rental\n",fptr2);
    } else{
    return 0;
    }
    return 0;
}
