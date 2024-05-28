cmake_minimum_required(VERSION 3.10)
project(tour_booking)

set(SOURCES 
    app_run.cpp 
    View/WelcomePage.cpp
    Controller/LoginController/LoginNavigator.cpp 
    DataSource/UserDataSource.cpp 
    Model/User.cpp 
    View/CustomerView/CustomerHomePage.cpp 
    View/CustomerView/CustomerProfilePage.cpp 
    Controller/CustomerController/CustomerEditProfileController.cpp
    Ultilities/Common.cpp

)

set(HEADERS 
    Ultilities/Library.h 
    Ultilities/json.hpp 
    View/WelcomePage.h
    Controller/LoginController/LoginNavigator.h 
    DataSource/UserDataSource.h 
    Model/User.h
    View/CustomerView/CustomerHomePage.h
    View/CustomerView/CustomerProfilePage.h 
    Controller/CustomerController/CustomerEditProfileController.h
    Ultilities/Common.h
)

add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})