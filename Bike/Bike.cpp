#include "Bike.h"
#include <string>
#include <vector>
#include <iostream>


int Bike::lastBikeId{ 0 };
//default constructor;

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
//conversion AKA overloaded constructor
Bike::Bike(const int& bikeId, std::string bikeMake, std::string bikeModel, int size, std::string color, std::vector<WorkOrder> workHistory)
	:bikeId(bikeId), bikeMake(bikeMake), bikeModel(bikeModel), size(size), color(color), workHistory(workHistory)
{
		
}

Bike* Bike::getBike(const int& bikeId, std::vector<Bike> bikes)
{
	for (auto& bike : bikes)
	{
		if (bike.getBikeId() == bikeId)
		{
			return &bike;
		}
	}


}
//not sure this is necessary
//std::string Bike::displayBikeDetails()
//{
//
//	return std::string();
//}

std::string Bike::updateBikeDetail()
{
	return std::string();
}

void Bike::addWorkHistory(const WorkOrder& workHistory, std::string workDescription)
{
	//this points to work history member of the Bike object
	//pushes back onto the vector of work history for the Bike object

	this->workHistory.push_back(workHistory);
	//this points to the work description member of the Bike object
	//sets the work description for the Bike object
	this->workDescription = workDescription;

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


