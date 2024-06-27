#pragma once
#include <iostream>
#include <string>
#include <vector>

struct Date {
	int day{};
	int month{};
	int year{};
};


class WorkOrder {
public:
	//default constructor
	WorkOrder();

	//conversion constructor. used to load all the info from the work order from the loaded order from the file
	WorkOrder(const int workId, int customerId, int bikeId, enum class workStatus, Date dateIn, Date dateOut, int orderTotal, std::string workDescription);

	//trying to update unique work order by passing in the workId and returning the a pointer to the WO. I want to only ever update each individual work order and then update the exact work order. Still trying to get a grasp on Pointers and References

	//method to filter work order view by status
	std::vector<WorkOrder> displayAllWorkOrdersByStatus(enum class workStatus);

	//filter to display work order. need to use dereferences and pointers 
	//will need for loop
	WorkOrder* findWorkOrderByCustomerId(int& customerId);

	//might be too complicated for this scope 
	//WorkOrder* findWorkOrderByCustomerLastName(Customer::lastName);

	void addLaborCosttoWorkOrder(const int& workId, int laborCost);

	//can update the workStatus, date out, workDescriptoin
	void updateWorkOrder(const int& workId);


	//getters and setters

	int getWorkID();

	//will grab work order and display the order total. maybe just return an int? 
	WorkOrder* getWorkOrderTotal();


	//not sure if i will need more getters for work order class
	//gets all the bikes
	std::vector<Bike> getAllBikes();




private:
	const int workId{};
	//not sure this is necessary
	int customerId{};
	//not sure this is necessary
	int bikeId{};
	enum class workStatus { open, working, finished };
	Date dateIn{};
	Date dateOut{};
	int laborCost{};
	int orderTotal{};
	std::string workDescription{};
	std::vector<WorkOrder> workOrders{};
	std::vector<Bike> bikes{};

};