#include<stdio.h>
#include"../test/include/test_sign_up.h"
#include<log_file.h>
#include"../include/client_model.h"
#include"../test/include/test_id.h"
#include"../test/include/test_booking_id.h"

int main()
{
    struct client client_profile;
    char username[20], password[20];
    int route_ID,car_ID,hotel_ID;
    /*Test case 1 - Sign up */
    int ret = test_sign_up(client_profile);
    add_log("-----------------------sign_up test cases---------------------------------------\n");
    if(ret == 1)
    {
        add_log("Test --- Email validation......failed!\n");
    }

    if(ret ==2){

        add_log("Test ---- Username validation..... failed!\n");

    }
    if(ret == 3){


        add_log("Test ---- Username validation..... failed!\n");
    }
    if( ret == 4){


            add_log("Test ---- username validation..... successful!\n");
    }
    if( ret == 5){


        add_log("Test ---- password validation..... failed!\n");
    }
   if( ret == 6){

        add_log("Test ---- password validation..... failed!\n");
    }
   if (ret == 7){

        add_log("Test ---- password validation..... successful!\n");
    }
   if (ret == 8){
            add_log("Test ---- Password matching..... failed!\n");
        }
   else{

        add_log("Test ---- sign_up()..... successful!\n");
    }
    add_log("-----------------------sign_up test cases -END ------------------------------------\n\n");
   add_log("----------------------- Services ID test cases---------------------------------------\n");
    printf("\nEnter the route ID: \n");
    scanf("%d",&route_ID);
    int result = test_route_id (route_ID);
    if(result != 1){
        printf("Incorrect route ID\n");
        add_log("Test ---- route ID validation..... failed!\\n");
    }
    printf("Enter the hotel ID: \n");
    scanf("%d",&hotel_ID);
    int result_2 = test_hotel_id (hotel_ID);
    if(result_2 != 2){
        printf("Incorrect hotel ID\n");
        add_log("Test ---- hotel ID validation..... failed!\\n");
    }
    printf("Enter the car ID: \n");
    scanf("%d",&car_ID);
    int result_3 = test_car_id (car_ID);
    if(result_3 != 3){
        printf("Incorrect car ID\n");
        add_log("Test ---- car ID validation..... failed!\\n");
    }
    if(result == 0){
        add_log("Test ---- ID validation..... successful!\n");
    }
    add_log("----------------------- booking ID test cases---------------------------------------\n");
    int response = test_booking_id ();
    if(response == 1){
        add_log("Test ----booking ID validation..... successful!\n");
    }
    if(response == 2){
        add_log("Test ---- ID validation..... failed!\n");
    }
    return 0;
}