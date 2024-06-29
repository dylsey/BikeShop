#include "Bike.h"
#include <string>
#include <vector>
#include <iostream>

const int lastID{ 0 };

Bike::Bike()
	: bikeId(), bikeMake(""), bikeModel(""), size(0), color(""), bikeDescription("")
{
	bikeId = lastID + 1;


}

Bike::Bike(const int bikeId, std::string bikeMake, std::string bikeModel, int size, std::string color, std::string bikeDescription)
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

Bike* Bike::getBike(const int& bikeId, std::vector<Bike> bikes)
{
	return nullptr;
}
