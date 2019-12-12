/*
 * Just simple solar panel calculator
 * Author: Anatolii Burdeiny
 * bioname@gmail.com
 * 2019-12-12
 */
#ifndef _SOLAR_CALC_
#define _SOLAR_CALC_

// set some default values just to simplify
#define BATTERY_VOLTAGE    12
#define SOLAR_PANEL_POWER  250
#define SOLAR_PANEL_SQUARE 2


//----------------------------------------
class energyConsumption {
public:
static unsigned int requiredPower;
energyConsumption(){
};
energyConsumption( unsigned int _requiredPower );
static void setEnergeConsumption( unsigned int _requiredPower );
static unsigned int getEnergeConsumption();
};

//----------------------------------------
class battery : public energyConsumption {
private:
unsigned int batteryFullCapacity;
public:
battery( unsigned int _requiredPower ) : energyConsumption( _requiredPower ){
};
void countBatteryFullCapacity();
unsigned int getLABatteriesCount( unsigned int _oneBatteryCapacity );
};

//----------------------------------------
class solarPanel : public energyConsumption {
private:
unsigned int sunHours;
unsigned int solarPanelCount;
public:
solarPanel( unsigned int _sunHours );
unsigned int getSolarPanelsCount();
unsigned int getSolarPanelsAreaSize();
};

//----------------------------------------
class solarplant {
private:
solarPanel *sp;
battery    *b;
public:
solarplant( unsigned int _requiredPower, unsigned int _sunHours );
unsigned int getSolarPanelsCount(){
								return sp->getSolarPanelsCount();
}
unsigned int getSolarPanelsAreaSize(){
								return sp->getSolarPanelsAreaSize();
}
void countBatteryFullCapacity(){
								b->countBatteryFullCapacity();
}
unsigned int getLABatteriesCount(unsigned int _oneBatteryCapacity){
								return getLABatteriesCount(_oneBatteryCapacity);
}
};

#endif
