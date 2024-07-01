#pragma once
#include <iostream>
#include <string>
#include <vector>

class WorkOrder;
class Customer;

class Bike {
public:
	static int lastBikeId;

	//default constructor;
	Bike();

	//conversion AKA overloaded constructor
	Bike(const int& bikeId, std::string bikeMake, std::string bikeModel, int size, std::string color, std::vector<WorkOrder*>& workOrders);

	//Bike* chooseBike(const std::vector<Bike*>& bikes);

	//Bike* chooseBike(const Customer* customer);

	Bike* getBike(const int& bikeId, std::vector<Bike*>& bikes);

	//will push back a pointer to a work order onto the work order vector belonging to a bike object
	void addWorkHistory(WorkOrder* workOrders);

	//need to be able to pass in a value to change a member defining a bike
	void updateBikeDetail(std::string bikeMake, std::string bikeModel, int size, std::string color);

	int getBikeId() const;
	std::string getBikeMake() const;
	std::string getBikeModel() const;
	int getBikeSize();
	std::string getBikeColor() const;

	void print() const;

private:
	int bikeId{};
	std::string bikeMake{};
	std::string bikeModel{};
	int size{};
	std::string color{};
	std::vector<WorkOrder*> workOrders{};
};