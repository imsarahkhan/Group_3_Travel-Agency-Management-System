//
// Created by kavya on 20-12-2021.
//
#include"../test/include/test_id.h"

int test_route_id (int route_id) {
    int temp = 0;
    for (int i = 101; i<111 ;i++) {
        if(route_id == i){
            temp = 1;
        }
    }
    return temp;
}

int test_hotel_id (int hotel_id) {
    int temp = 0;
    for (int i = 201; i<205 ;i++){
        if(hotel_id == i){
            temp = 2;
        }
    }
    return temp;
}

int test_car_id (int car_id) {
    int temp = 0;
    for (int i = 301; i<303 ;i++){
        if(car_id == i){
            temp = 3;
        }
    }
    return temp;
}