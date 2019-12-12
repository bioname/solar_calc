/*
 * Just simple solar panel calculator
 * Author: Anatolii Burdeiny
 * bioname@gmail.com
 * 2019-12-12
 */

#include <math.h>       /* for ceil() */
#include <iostream>
#include <string>
#include "solar_calc.h"


// set static member of our class here (:
unsigned int energyConsumption::requiredPower = 0;
//----------------------------------------
// energyConsumption class methods:

energyConsumption::energyConsumption( unsigned int _requiredPower){
								requiredPower = _requiredPower;
}

void energyConsumption::setEnergeConsumption(unsigned int _requiredPower){
								requiredPower = _requiredPower;
}

unsigned int energyConsumption::getEnergeConsumption(){
								return requiredPower;
}

//----------------------------------------
// solarPanel class methods

solarPanel::solarPanel( unsigned int _sunHours ){
								sunHours = _sunHours;
}

unsigned int solarPanel::getSolarPanelsCount(){
								solarPanelCount =  ceil( (float)requiredPower / ( SOLAR_PANEL_POWER * sunHours ) );// to avoid integer operation is used (float) convertion
								return solarPanelCount;
}

unsigned int solarPanel::getSolarPanelsAreaSize(){
								return ceil( solarPanelCount * SOLAR_PANEL_SQUARE );
}

//----------------------------------------
// battery class methods

unsigned int battery::getLABatteriesCount(unsigned int _oneBatteryCapacity){
								return ceil( (float)batteryFullCapacity / _oneBatteryCapacity) * 2; // cause it possible to use only 50% of LeadAcid battery
}

//--------------------------------------------
// solarplant class methonds

solarplant::solarplant(unsigned int _requiredPower, unsigned int _sunHours){
								b               = new battery(_requiredPower);
								sp = new solarPanel( _sunHours);
}
