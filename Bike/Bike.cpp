#include "Bike.h"
#include <string>
#include <vector>
#include <iostream>

int Bike::lastBikeId{ 0 };

//class Customer;
//class WorkOrder;

//default constructor
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
Bike::Bike(const int& bikeId, std::string bikeMake, std::string bikeModel, int size, std::string color, std::vector<WorkOrder*>& workOrders)
	:bikeId(bikeId), bikeMake(bikeMake), bikeModel(bikeModel), size(size), color(color), workOrders(workOrders)
{
		
}

//gets a bike by its id from the bike vector
Bike* Bike::getBike(const int& bikeId, std::vector<Bike*>& bikes)
{
	for (auto& bike : bikes)
	{
		if (bike->getBikeId() == bikeId)
		{
			return bike;
		}
	}
	return nullptr;
}

void Bike::updateBikeDetail(std::string bikeMake, std::string bikeModel, int size, std::string color)
{
	this->bikeMake = bikeMake;
	this->bikeModel = bikeModel;
	this->size = size;
	this->color = color;
}

void Bike::addWorkHistory(WorkOrder* workOrder)
{
	workOrders.push_back(workOrder);
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

int Bike::getBikeSize()
{
	return size;
}

std::string Bike::getBikeColor() const
{
	return color;
}

void Bike::print() const

{
	std::cout << "Bike ID: " << bikeId << std::endl;
	std::cout << "Bike Make: " << bikeMake << std::endl;
	std::cout << "Bike Model: " << bikeModel << std::endl;
	std::cout << "Bike Size: " << size << std::endl;
	std::cout << "Bike Color: " << color << std::endl;
}




	//trying to figure out how to add a bike to a work order
	// 
	//std::vector<Bike*> customerBikes = customer->getCustomerBikes();
	//std::cout << "Add bike to Work Order by Id: " << std::endl;
	//for (const auto& bike : bikes)
	//{
	//	bike->print();
	//	//std::cout << "Bike Id: " << bike->getBikeId() << " Bike Make: " << bike->getBikeMake() << " Bike Model: " << bike->getBikeModel() << std::endl;
	//}
	//int bikeId;
	//std::cin >> bikeId;

	//for (const auto& bike : bikes)
	//{
	//	if (bike->getBikeId() == bikeId)
	//	{
	//		return bike;
	//	}
	//}
	//std::cout << "Bike not found." << std::endl;
	//return nullptr;
