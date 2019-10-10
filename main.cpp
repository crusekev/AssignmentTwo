/* 
This program prompts the user to enter the weight of an object on Earth. It will then ask the user to enter the name of a celestial body. Based on the name entered, the program will compute the corresponding weight on that celestial body by multiplying the user’s value with the celestial body’s “weight factor” 
 */

#include <iostream>
#include <string>

//function prototype
double weightFactor(double earthWeight, std::string celestialBody, double planetWeight);

int main() {
    double earthWeight = 0.0; //variable for the earth weight
    std::string celestialBody; //string for celestial body that user enters
    double planetWeight = 0.0; //weight of the earth weight * celestial body factor
    std::string question; //string for asking user if they want to enter another conversion
    weightFactor(earthWeight, celestialBody, planetWeight); //calls the weightFactor fuction
    std::cout << "Do you wish to enter another conversion?: ";
    std::cin >> question; //asks user to enter Yes or No

    /* 
    The code block below checks the users input. If "Yes", it calls the weightFactor function again and asks if the would like to enter another conversion and asks the user for inpit. If the user enters "No", the program will terminate
     */

    while(question == "Yes" && question != "No") {
        weightFactor(earthWeight, celestialBody, planetWeight);
        std::cout << "Do you wish to enter another conversion?: ";
        std::cin >> question;
    }
    return 0;
}

/* 
This function asks the user for the weight of an earth object and a celestial body. If the user enters a correct name, the function will multiply the celestial body the user entered by the earthWeight and return that value (planetWeight). If the user does not incorrect celestial body, the user gets an error.
 */

double weightFactor(double earthWeight, std::string celestialBody, double planetWeight) {
    std::cout << "Enter the weight of an object on Earth: ";
    std::cin >> earthWeight; //asking user for weight on earth
    std::cout << "Enter a celestial body: ";
    std::cin >> celestialBody; //asking user for celestial body

    /* 
    If user enters a valid celestial body name, the supplied earth weight is multiplied by the celestial body's weight factor, then output that result (planetWeight). If the user does not enter a correct celestial body, they will get an error.
     */

    if(celestialBody == "Mercury") {
        planetWeight = earthWeight * 0.42;
        std::cout << "Weight on Mercury: " << planetWeight << std::endl;
    }
    else if(celestialBody == "Venus") {
        planetWeight = earthWeight * 0.89;
        std::cout << "Weight on Venus: " << planetWeight << std::endl;
    }
    else if(celestialBody == "Earth") {
        planetWeight = earthWeight * 1.0;
        std::cout << "Weight on Earth: " << planetWeight << std::endl;
    }
    else if(celestialBody == "Moon") {
        planetWeight = earthWeight * 0.16;
        std::cout << "Weight on the Moon: " << planetWeight << std::endl;
    }
    else if(celestialBody == "Mars") {
        planetWeight = earthWeight * 0.35;
        std::cout << "Weight on Mars: " << planetWeight << std::endl;
    }
    else if(celestialBody == "Jupiter") {
        planetWeight = earthWeight * 2.53;
        std::cout << "Weight on Jupiter: " << planetWeight << std::endl;
    }
    else if(celestialBody == "Saturn") {
        planetWeight = earthWeight * 1.06;
        std::cout << "Weight on Saturn: " << planetWeight << std::endl;
    }
    else if(celestialBody == "Uranus") {
        planetWeight = earthWeight * 0.89;
        std::cout << "Weight on Uranus: " << planetWeight << std::endl;
    }
    else if(celestialBody == "Neptune") {
        planetWeight = earthWeight * 1.17;
        std::cout << "Weight on Neptune: " << planetWeight << std::endl;
    }
    else if(celestialBody == "Pluto") {
        planetWeight = earthWeight * 0.08;
        std::cout << "Weight on Pluto: " << planetWeight << std::endl;
    }
    else
        std::cout << "That is not a known celestial body\n";

    return planetWeight; //returning earthWeight * celestial body weight factor
}