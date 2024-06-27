#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "WorkOrder.h"

class Bike {
public:
	//default constructor;
	Bike();

	//conversion AKA overloaded constructor
	Bike(const int bikeId, std::string bikeMake, std::string bikeModel, int size, std::string color, std::string bikeDescription);

	//method to display all of the information stored about the bike object that is defined by the members 
	std::string displayBikeDetails();

	//need to be able to pass in a value to change a member defining a bike
	std::string updateBikeDetail(); 

	//will add string of work history to each bike. will fill the vector of work history for each bike
	void addWorkHistory(const WorkOrder& workHistory);

	//retruns the vector of work history for each bike
	std::vector<WorkOrder> displayWorkHistoryByBike();

	Bike* getBike(const int& bikeId);



private:
	const int bikeid{};
	std::string bikeMake{};
	std::string bikeModel{};
	int size{};
	std::string color{};
	std::string bikeDescription{};
	std::vector<WorkOrder> workHistory{};


}