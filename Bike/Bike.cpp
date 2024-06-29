#include "Bike.h"
#include <string>
#include <vector>
#include <iostream>

int Bike::lastBikeId{ 0 };

Bike::Bike()
{
	lastBikeId++;
	bikeId = lastBikeId;
	
	std::cout << "What is the make of the bike?" << std::endl;
	std::cin >> bikeMake;

	std::cout << "What is the bike model? " << std::endl;
	std::cin >> bikeModel;

	std::cout << "What is the bike size in centimeters? " << std::endl;
			//<< "unless inches are specified by mfgr."
	std::cin >> size;

	std::cout << "What is the bike color? " << std::endl;
	std::cin >> color; 

}

Bike::Bike(const int& bikeId, std::string bikeMake, std::string bikeModel, int size, std::string color)
	:bikeId(bikeId), bikeMake(bikeMake), bikeModel(bikeModel), size(size), color(color)
{
		
}

std::string Bike::displayBikeDetails()
{

	return std::string();
}

std::string Bike::updateBikeDetail()
{
	return std::string();
}

void Bike::addWorkHistory(const WorkOrder& workHistory)
{
}

std::vector<WorkOrder> Bike::displayWorkHistoryByBike()
{
	return std::vector<WorkOrder>();
}

int Bike::getBikeId() const
{

	return bikeId;
}

std::string Bike::getBikeMake() const
{
	return bikeMake;
}

std::string Bike::getBikeModel() const
{
	return bikeModel;
}

int Bike::getBikesize()
{
	return size;
}

std::string Bike::getBikeColor() const
{
	return color;
}

Bike* Bike::getBike(const int& bikeId, std::vector<Bike> bikes)
{


	return &Bike;
}
