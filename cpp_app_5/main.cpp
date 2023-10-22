#include <iostream>

int main() {
    double distanceAB, distanceBC, cargoWeight;
    double fuelRequiredAB = 0;
    double fuelRequiredBC = 0;
    const double fuelCapacity = 300;

    std::cout << "Enter the distance from point A to point B (km): ";
    std::cin >> distanceAB;

    std::cout << "Enter the distance from point B to point C (km): ";
    std::cin >> distanceBC;

    std::cout << "Enter the weight of the cargo (kg): ";
    std::cin >> cargoWeight;

    if (cargoWeight <=2000) 
    {
        if (cargoWeight <= 500) 
        {
            fuelRequiredAB = distanceAB * 1;
            fuelRequiredBC = distanceBC * 1;
        }
        else if (cargoWeight <= 1000) 
        {
            fuelRequiredAB = distanceAB * 4;
            fuelRequiredBC = distanceBC * 4;
        }
        else if (cargoWeight <= 1500) 
        {
            fuelRequiredAB = distanceAB * 7;
            fuelRequiredBC = distanceBC * 7;
        }
        else 
        {
            fuelRequiredAB = distanceAB * 9;
            fuelRequiredBC = distanceBC * 9;
        }

        std::cout << "Fuel required from point A to B: " << fuelRequiredAB << " liters." << std::endl;
        std::cout << "Fuel required from point B to C: " << fuelRequiredBC << " liters." << std::endl;

        double totalFuelRequired = fuelRequiredAB + fuelRequiredBC;

        if (totalFuelRequired <= fuelCapacity) 
        {
            std::cout << "No refueling required at point B. Enough fuel to get to point C." << std::endl;
        }
        else 
        {
            double additionalFuelRequired = totalFuelRequired - fuelCapacity;
            std::cout << "Additional fuel required at point B to get to point C: " << additionalFuelRequired << "l" << std::endl;
        }
    }
    else 
    {
        std::cout << "The cargo weight exceeds the maximum capacity (2000 kg), cannot fly." << std::endl;
    }

    return 0;
}
