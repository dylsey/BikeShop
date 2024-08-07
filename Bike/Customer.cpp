#include <iostream>
#include <string>
#include <vector>
#include "Customer.h"
#include "Bike.h"


int Customer::lastCustomerId{ 0 };
class Bike;
class WorkOrder;

//default constructor
Customer::Customer()
{
	lastCustomerId++;
	customerId = lastCustomerId;

	std::cout << "What is the customer's first name?" << std::endl;
	std::cin >> firstName;
	
	std::cout << "What is the customer's last name?" << std::endl;
	std::cin >> lastName;

}

//overload AKA conversion constructor
Customer::Customer(const int& customerId, std::string firstName, std::string lastName, std::vector<Bike*>& bikes)
	: customerId(customerId), firstName(firstName), lastName(lastName), bikes(bikes)
{

}

//customer chooser helper method. returns customer pointer object. 
Customer* chooseCustomer(const std::vector<Customer*>& customers)
{
	std::cout << "Please choose a customer by Id: " << std::endl;
	for (const auto& customer : customers)
	{
		customer->print();
		//std::cout << "Customer Id: " << customer->getCustomerID() << " :: " << customer->getFirstName() << " " << customer->getLastName() << std::endl;
	}
	int customerId;
	std::cin >> customerId;

	for (const auto& customer : customers)
	{
		if (customer->getCustomerID() == customerId)
		{
			return customer;
		}
	}
	std::cout << "Customer not found" << std::endl;
	return nullptr;
}


//used to using setters for this in Java as this.member = member  
//can update name, phone, email? should this be so simple? 
void Customer::updateCustomerInfo(std::string firstName, std::string lastName)
{
	this->firstName = firstName;
	this->lastName = lastName;
}

//important getter method used to return pointer to specific Customer object related to customerId within the vector of Customer pointers. 
Customer* Customer::getCustomerById(const int& customerId, std::vector<Customer*>& customers)
{
	for (const auto& customer : customers)
	{
		//same as :: Customer* customer{ new Customer() };
		//			 (*customer).customerId;
		if (customer->customerId == customerId)
		{
			return customer;
		}
	}
	return nullptr; 
}

//flavor method to return a pointer to a customer object if the first and last names match. 
Customer* Customer::findCustomerByName(const std::string& firstName, const std::string& lastName, std::vector<Customer*>& customers)
{
	for (const auto& customer : customers)
	{
		if ((customer->firstName == firstName) && (customer->lastName == lastName))
		{
			return customer;
		}
	}
	return nullptr;
}

void Customer::addBikeToCustomer(Bike* bike)
{
	bikes.push_back(bike); 

}

std::vector<Bike*> Customer::getCustomerBikes() const
{
	/*if (this->customerId == customerId)
	{
		return bikes;
	}*/
	return bikes;
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
	return lastName;
}

void Customer::print() const
{
	std::cout << "Customer ID: " << customerId << std::endl;
	std::cout << "First Name: " << firstName << std::endl;
	std::cout << "Last Name: " << lastName << std::endl;
	//std::cout << "Bikes: " << std::endl;
		
}
