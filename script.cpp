#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Booking {
    std::string cityName;
    int numberOfPeople;
    std::string checkInDate;
    std::string checkOutDate;
};

int main() {
    // Define an array of strings to store city names
    std::string cities[3];

    // Assign values to the array elements
    cities[0] = "New York";
    cities[1] = "Paris";
    cities[2] = "Tokyo";

    // Access and print the values
    for (int i = 0; i < 3; ++i) {
        std::cout << "City " << i + 1 << ": " << cities[i] << std::endl;
    }
  Booking bookings[3];

    // Take user input for three bookings
    for (int i = 0; i < 3; ++i) {
        std::cout << "Enter City Name for Booking " << i + 1 << ": ";
        std::cin >> bookings[i].cityName;

        std::cout << "Enter Number of People for Booking " << i + 1 << ": ";
        std::cin >> bookings[i].numberOfPeople;

        std::cout << "Enter Check-in Date for Booking " << i + 1 << ": ";
        std::cin >> bookings[i].checkInDate;

        std::cout << "Enter Check-out Date for Booking " << i + 1 << ": ";
        std::cin >> bookings[i].checkOutDate;
    }

    // Access and print the user inputs
    for (int i = 0; i < 3; ++i) {
        std::cout << "\nBooking " << i + 1 << " details:" << std::endl;
        std::cout << "City Name: " << bookings[i].cityName << std::endl;
        std::cout << "Number of People: " << bookings[i].numberOfPeople << std::endl;
        std::cout << "Check-in Date: " << bookings[i].checkInDate << std::endl;
        std::cout << "Check-out Date: " << bookings[i].checkOutDate << std::endl;
    }
    return 0;
}


class Element {
public:
    virtual void click() = 0;
};

class Overlay : public Element {
public:
    void click() override {
        // Implementation for overlay click
    }
};

class NavBarButton : public Element {
public:
    void click() override {
        // Implementation for nav button click
    }
};

class NavBarLink : public Element {
public:
    void click() override {
        // Implementation for nav link click
    }
};

class NavBar {
public:
    void toggle() {
        // Implementation for toggling navbar
    }
};

class Header {
public:
    void toggle() {
        // Implementation for toggling header
    }
};

int data() {
    Overlay overlay;
    NavBarButton navOpenBtn, navCloseBtn;
    NavBarLink navLink1, navLink2, navLink3;  // Example nav links
    NavBar navbar;
    Header header;

    vector<Element*> navElements = {&navOpenBtn, &navCloseBtn, &overlay, &navLink1, &navLink2, &navLink3};

    for (Element* elem : navElements) {
        elem->click();
    }

    int scrollY = 0;

    while (true) {
        // Simulate scrolling
        scrollY += 10;

        if (scrollY >= 200) {
            header.toggle();
            // Simulate goTopBtn toggle
        } else {
            header.toggle();
            // Simulate goTopBtn toggle
        }
    }

    return 0;
}
