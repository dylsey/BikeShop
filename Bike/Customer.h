#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Bike.h"

class Customer {
	public:
		//default constructor
		Customer();

		//overload AKA conversion constructor
		Customer(const int &customerId, std::string firstName, std::string lastName, std::string phoneNumber, std::string email, std::string address, std::vector<Bike>& bikes);

		//gets all the bikes belonging to a customer by passed customer id
		std::vector<Bike> displayCustomersBikes(const int& customerId);

		//adds a bike object to the vector of bikes belonging to a customer
		void addBikeToCustomer(Bike bike, const int& customerId);
		
		//removes a bike from customer bike vector
		void removeBikeFromCustomer(Bike bike, const int& customerId);

		//might be easier to use setters for this? 
		//can update name, phone, email, 
		void updateCustomerInfo();

		//extra methods for searching for customer
		Customer* findCustomerByPhoneNumber(std::string phoneNumber);

		Customer* findCustomerByLastName(std::string lastName);
	
		Customer* findCustomerByFirstName(std::string firstName);

		//getters and setters
		int getCustomerID();

		std::string getFirstName();

		std::string getLastName();

		std::string getPhoneNumber();

		//std::string getEmail();

		//std::string getAddress();

		

		

private:
	const int customerId{};
	std::string firstName{};
	std::string lastName{};
	std::string phoneNumber{};
	std::vector<Bike> bikes{};
	//std::string email{}; 
	//std::string address{};
	



};		