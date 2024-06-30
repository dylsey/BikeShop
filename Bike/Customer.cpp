#include <iostream>
#include <string>
#include <vector>
#include "Customer.h"


int Customer::lastCustomerId{ 0 };
//default constructor
Customer::Customer()
{
	lastCustomerId++;
	customerId = lastCustomerId;

	std::cout << "What is the customer's first name?" << std::endl;
	std::cin >> firstName;
	
	std::cout << "What is the customer's last name?" << std::endl;
	std::cin >> lastName;

	//creates a vector of bikes for each customer
	std::vector<Bike> bikes{};
}

//overload AKA conversion constructor
Customer::Customer(const int& customerId, std::string firstName, std::string lastName, std::vector<Bike>& bikes)
	: customerId(customerId), firstName(firstName), lastName(lastName), bikes(bikes)
{

}

//gets all the bikes belonging to a customer by passed customer id
std::vector<Bike> Customer::displayCustomersBikes(const int& customerId)
{
	std::cout << "Enter customer Id" << std::endl;
	std::cin >> Customer::customerId; 
	if (customerId == Customer::customerId)
	{

	}
	std::vector<Bike> bikes; 
}

//adds a bike object to the vector of bikes belonging to a customer
void Customer::addBikeToCustomer(const Bike& bike)
{
	bikes.push_back(bike);
}

//removes a bike from customer bike vector
void Customer::removeBikeFromCustomer(const Bike& bike)
{
		//find bike in vector and remove it
	for (auto& bike : bikes)
	{
		if (bike.getBikeId() == bike.getBikeId())
		{
			bikes.erase(bikes.begin() + bike.getBikeId());
		}
	}
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

int Customer::getCustomerID() const
{
	return customerId;
}

std::string Customer::getFirstName() const
{
	return firstName;
}


std::string Customer::getLastName() const
{
	return std::string();
}

std::string Customer::getPhoneNumber() const
{
	return std::string();
}

Customer* Customer::getCustomerById(const int& customerId, std::vector<Customer>& customers)
{
	for (auto& customer : customers)
	{
		if (customer.getCustomerID() == customerId)
		{
			return &customer;
		}
	}
}

