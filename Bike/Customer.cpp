#include <iostream>
#include <string>
#include <vector>
#include "Bike.h"
#include "Customer.h"


//default constructor
Customer::Customer()
	: customerId(), firstName(""), lastName(""), phoneNumber(""), email(""), address(""), bikes()
{

}

//overload AKA conversion constructor
Customer::Customer(const int& customerId, std::string firstName, std::string lastName, std::string phoneNumber, std::string email, std::string address, std::vector<Bike>& bikes)
	: customerId(customerId), firstName(firstName), lastName(lastName), phoneNumber(phoneNumber),  bikes(bikes)
{

}

//gets all the bikes belonging to a customer by passed customer id
std::vector<Bike> Customer::displayCustomersBikes(const int& customerId)
{
	return std::vector<Bike>();
}

//adds a bike object to the vector of bikes belonging to a customer
void Customer::addBikeToCustomer(const Bike& bike)
{

}

//removes a bike from customer bike vector
void Customer::removeBikeFromCustomer(const Bike& bike)
{

}

//might be easier to use setters for this?
//can update name, phone, email,
void Customer::updateCustomerInfo(std::string firstName, std::string lastName, std::string phoneNumber)
{

}

//extra methods for searching for customer. May not be necessay but will be nice for extra flavor and eventual functoinality
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

//getters and setters

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

