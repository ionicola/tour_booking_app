cmake_minimum_required(VERSION 3.10)
project(tour_booking)

set(SOURCES 
    app_run.cpp 
    View/WelcomePage.cpp
    Controller/LoginController/LoginNavigator.cpp 
    DataSource/UserDataSource.cpp 
    Model/User.cpp 
    Model/Accommodation.cpp
    Model/Order.cpp
    Model/Tour.cpp
    Model/Vehicle.cpp
    View/CustomerView/CustomerHomePage.cpp 
    View/CustomerView/CustomerProfilePage.cpp 
    Controller/CustomerController/CustomerEditProfileController.cpp
    Ultilities/Common.cpp
    View/CustomerView/CustomerOrderPage.cpp
    DataSource/OrderDataSource.cpp
    Controller/CustomerController/CustomerOrderController.cpp

)

set(HEADERS 
    Ultilities/Library.h 
    Ultilities/json.hpp 
    View/WelcomePage.h
    Controller/LoginController/LoginNavigator.h 
    DataSource/UserDataSource.h 
    Model/User.h
    Model/Accommodation.h
    Model/Order.h
    Model/Tour.h
    Model/Vehicle.h
    View/CustomerView/CustomerHomePage.h
    View/CustomerView/CustomerProfilePage.h 
    Controller/CustomerController/CustomerEditProfileController.h
    Ultilities/Common.h
    View/CustomerView/CustomerOrderPage.h
    DataSource/OrderDataSource.h
    Controller/CustomerController/CustomerOrderController.cpp
)

add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})