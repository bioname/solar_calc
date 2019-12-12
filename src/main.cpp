/*
 *  Just simple solar panel calculator
 *  Author: Anatolii Burdeiny
 *  bioname@gmail.com
 *  2019-12-12
 */

#include <iostream>
#include <string>

#include "helper.h"
#include "solar_calc.h"

// function can get few params, required power, sun hours, and a capacity for 1 battery.
int main(int argc, char *argv[]){
								int requiredPower = 0;
								int sunHours = 0;
								unsigned int batteryCapacity = 0;
								unsigned int solarPanelCount = 0;
								unsigned int solarPanelReqArea=0;
								unsigned int battcap = 0;
								if (argc != 3) {
																requiredPower = inputValue("Please enter the energy consumption per day (in Wh): ");
																sunHours   = inputValue("Please enter the average sun hours per day for your location: ");
																std::cout << "And the last question )" <<  std::endl;
																battcap     = inputValue("Please enter a capacity for 1 battery (Wh): ");
								}else{
																requiredPower = (unsigned)std::stoi( argv[1] );
																sunHours      = (unsigned)std::stoi( argv[2] );
																battcap    = (unsigned)std::stoi( argv[3] );
								}

								solarplant *myInstance;
								myInstance = new solarplant(requiredPower,sunHours,battcap);

								std::cout << "How many batteries with capacity " << battcap << " Wh required: " << myInstance->getLABatteriesCount() << std::endl;
								std::cout << "How many 250-Watt solar panels are required: " << myInstance->getSolarPanelsCount() << std::endl;
								std::cout << "how many area on the roof should be available : " << myInstance->getSolarPanelsAreaSize() << std::endl;

								std::cout << "Total price is : " << myInstance->getTotalPrice() << std::endl;

								return 0;
}
