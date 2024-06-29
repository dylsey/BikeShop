#include <iostream>
#include <string>
#include <vector>
#include "Customer.h"
#include "Bike.h"




Customer::Customer()
{
}

Customer::Customer(const int& customerId, std::string firstName, std::string lastName, std::string phoneNumber, std::string email, std::string address, std::vector<Bike>& bikes)
{
}

std::vector<Bike> Customer::displayCustomersBikes(const int& customerId)
{
	return std::vector<Bike>();
}

void Customer::addBikeToCustomer(const Bike& bike)
{
}

void Customer::removeBikeFromCustomer(const Bike& bike)
{
}

void Customer::updateCustomerInfo(std::string firstName, std::string lastName, std::string phoneNumber)
{
}

Customer* Customer::findCustomerByPhoneNumber(const std::string& phoneNumber)
{
	return nullptr;
}

Customer* Customer::findCustomerByLastName(const std::string& lastName)
{
	return nullptr;
}

Customer* Customer::findCustomerByFirstName(const std::string& firstName)
{
	return nullptr;
}
int Customer::getCustomerID()
{
	return 0;
}
std::string Customer::getFirstName()
{
	return std::string();
}
std::string Customer::getLastName()
{
	return std::string();
}
std::string Customer::getPhoneNumber()
{
	return std::string();
}
Customer* Customer::getCustomer(const int& customerId)
{
	return nullptr;
}
}