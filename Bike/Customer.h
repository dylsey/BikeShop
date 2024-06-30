#pragma once
#include <iostream>
#include <string>
#include <vector>

class Bike;
class WorkOrder;

class Customer 
{
	public:
		static int lastCustomerId;

		//default constructor
		Customer();

		//overload AKA conversion constructor
		Customer(const int& customerId, std::string firstName, std::string lastName, std::vector<Bike*>& bikes);

		//might be easier to use setters for this? 
	//can update name, phone, email, etc if more functionality is ever needed 
		void updateCustomerInfo(std::string firstName, std::string lastName);

		//main customer finding method? 
		static Customer* getCustomerById(const int& customerId, std::vector<Customer*>& customers);

		static Customer* findCustomerByName(const std::string& firstName, const std::string& lastName, std::vector<Customer*>& customers);

		//adds a bike object to the vector of bikes belonging to a customer
		void addBikeToCustomer(Bike* bike);

		//gets all the bikes belonging to a customer by passed customer id
		std::vector<Bike*> displayCustomersBikes(const int& customerId, std::vector<Bike*>& bikes) const;

		//removes a bike from customer bike vector. seems to be complicated to remove something from a vector
		//void removeBikeFromCustomer(const int& bikeId);

		//getters and setters
		int getCustomerID() const;

		std::string getFirstName() const;

		std::string getLastName() const;

		void print() const;

private:
	int customerId{};
	std::string firstName{};
	std::string lastName{};
	//std::string phoneNumber{};
	//std::string email{};
	std::vector<Bike*> bikes{};

};		