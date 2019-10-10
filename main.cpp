#include <iostream>
#include <string>
#include <locale>

double weightFactor(double earthWeight, std::string celestialBody, double planetWeight);

int main() {
    double earthWeight = 0.0;
    std::string celestialBody;
    double planetWeight = 0.0;
    std::string question;
    weightFactor(earthWeight, celestialBody, planetWeight);
    std::cout << "Do you wish to enter another conversion?: ";
    std::cin >> question;
    while(question == "Yes" && question != "No") {
        weightFactor(earthWeight, celestialBody, planetWeight);
        std::cout << "Do you wish to enter another conversion?: ";
        std::cin >> question;
    }
    return 0;
}

double weightFactor(double earthWeight, std::string celestialBody, double planetWeight) {
    std::cout << "Enter the weight of an object on Earth: ";
    std::cin >> earthWeight;
    std::cout << "Enter a celestial body: ";
    std::cin >> celestialBody;
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
    return planetWeight;
}