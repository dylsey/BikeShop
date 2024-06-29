#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "WorkOrder.h"

class Bike {
public:
	static int lastBikeId;
	//default constructor;
	Bike();

	//conversion AKA overloaded constructor
	Bike(const int& bikeId, std::string bikeMake, std::string bikeModel, int size, std::string color, std::vector<WorkOrder> workHistory);

	//method to display all of the information stored about the bike object that is defined by the members 
	std::string displayBikeDetails();

	//need to be able to pass in a value to change a member defining a bike
	std::string updateBikeDetail();

	//will add string of work history to each bike. will fill the vector of work history for each bike
	void addWorkHistory(const WorkOrder& workHistory, std::string workDescription);

	//retruns the vector of work history for each bike
	std::vector<WorkOrder> displayWorkHistoryByBike();

	int getBikeId() const;
	std::string getBikeMake() const;
	std::string getBikeModel() const;
	int getBikesize();
	std::string getBikeColor() const;

	Bike* getBike(const int& bikeId, std::vector<Bike> bikes);



private:
	int bikeId{};
	std::string bikeMake{};
	std::string bikeModel{};
	int size{};
	std::string color{};
	std::vector<WorkOrder> workHistory{};
	//what is the description used for? 
	std::string workDescription{};

};