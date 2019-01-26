#include <iostream>
////////////////////////////////////
//    Module : enum.cpp
//
//    Using enumeration
//
///////////////////////////////////

enum WEEKDAYS{
Sun, Mon, Tues, Wed, Thurs, Fri, Sat

};


int main()
{
    WEEKDAYS wd;

    wd = Mon;

    switch(wd)
    {
        case Sun:
        std::cout <<"Sunday";
        break;

        case Mon:
        std::cout <<"Monday";
        break;

        case Tues:
        std::cout << "Tuesday";
        break;

        case Wed:
        std::cout << "Wednesday";
        break;

        case Thurs:
        std::cout << "Thursday";
        break;

        case Fri:
        std::cout << "Friday";
        break;

        case Sat:
        std::cout << "Saturday";
        break;


    }
}
