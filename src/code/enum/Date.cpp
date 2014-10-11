#include <iostream>
#include "Date.h"

#include "mine.h"

Date::Date(int day, int month, int year) :
day{day}, month{month}, year{year} {

  m::announce("day", day);
  m::announce("month", month);
  m::announce("year", year);

}

Date::Date(int day, Month month, int year) : Date (day, (int) month, year) {

}

Date::Date(Month month, int day, int year) : Date (day, (int) month, year) {

}

Month Date::getMonth() {
  return static_cast<Month> (month);
}