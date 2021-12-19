cmake_minimum_required(VERSION 3.20)
project(Project_Program C)

set(CMAKE_C_STANDARD 99)
include_directories(include)
include_directories(src)
add_executable(Project_Program src/add_passenger.c src/main.c src/book_trip.c src/cancel_trip.c src/individual_route_prices.c src/main_menu.c src/sign_up.c src/total_fare.c src/trip_available.c src/user_login.c src/user_logout.c src/validate_id.c src/view_brochure.c src/view_print_trip.c
        include/client_model.h include/global_variable.h include/book_trip.h include/cancel_trip.h include/individual_route_prices.h include/main_menu.h include/sign_up.h include/total_fare.h include/trip_available.h include/user_login.h include/user_logout.h include/validate_id.h include/view_brochure.h include/view_print_trip.h include/individual_route_prices.h src/global_variables.c)
