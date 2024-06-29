#pragma once
#include <string>
#include <vector>
#include "Bike.h"

class Bike;

class Customer 
{
	public:
		static int lastCustomerId;
		//default constructor
		Customer();

		//overload AKA conversion constructor
		Customer(const int& customerId, std::string firstName, std::string lastName, std::string phoneNumber, std::string email, std::string address, std::vector<Bike>& bikes);

		//gets all the bikes belonging to a customer by passed customer id
		std::vector<Bike> displayCustomersBikes(const int& customerId);

		//adds a bike object to the vector of bikes belonging to a customer
		void addBikeToCustomer(const Bike& bike);
		
		//removes a bike from customer bike vector
		void removeBikeFromCustomer(const Bike& bike);

		//might be easier to use setters for this? 
		//can update name, phone, email, 
		void updateCustomerInfo(std::string firstName, std::string lastName, std::string phoneNumber);

		//extra methods for searching for customer. May not be necessay but will be nice for extra flavor and eventual functoinality
		Customer* findCustomerByPhoneNumber(const std::string& phoneNumber);

		Customer* findCustomerByLastName(const std::string& lastName);
	
		Customer* findCustomerByFirstName(const std::string& firstName);

		//getters and setters
		int getCustomerID() const;

		std::string getFirstName() const;

		std::string getLastName() const;

		std::string getPhoneNumber() const; 

		Customer* getCustomer(const int& customerId); 


private:
	int customerId{};
	std::string firstName{};
	std::string lastName{};
	std::string phoneNumber{};
	std::vector<Bike> bikes{};

};		