#pragma once
#include <iostream>
#include <string>
#include <vector>

class Bike;
class Customer;

struct Date {
	int day{};
	int month{};
	int year{};
};

enum class WorkStatus {open, working, finished};

class WorkOrder {
public:
	static int lastWorkId;

	//default constructor
	WorkOrder();

	//conversion constructor. used to load all the info from the work order from the loaded order from the file
	WorkOrder(const int workId, int customerId, int bikeId, WorkStatus status, Date dateIn, Date dateOut, int orderTotal, std::string workDescription);

	//trying to update unique work order by passing in the workId and returning the a pointer to the WO. I want to only ever update each individual work order and then update the exact work order. Still trying to get a grasp on Pointers and References

	//method to filter work order view by status
	std::vector<WorkOrder> displayAllWorkOrdersByStatus(WorkStatus status);

	//retruns the vector of work history for each bike
	std::vector<WorkOrder> displayWorkHistoryByBike(const int& bikeId);

	//filter to display work order. need to use dereferences and pointers 
	//will need for loop
	WorkOrder* findWorkOrderByCustomerId(int customerId);

	//might be too complicated for this scope 
	//WorkOrder* findWorkOrderByCustomerLastName(Customer::lastName);

	void addLaborCosttoWorkOrder(const int& workId, int laborCost);

	//can update the workStatus, date out, workDescriptoin
	void updateWorkOrder(const int& workId, WorkStatus status, Date dateOut, std::string  workDescription);



	//getters and setters
	WorkOrder* getWorkOrder(const int& workId) const;

	int getWorkID() const;

	//will grab work order and display the order total. maybe just return an int? 
	int getWorkOrderTotal() const;


	//not sure if i will need more getters for work order class
	//gets all the bikes
	//std::vector<Bike> getAllBikes();

private:
	int workId{};
	//not sure this is necessary
	int customerId{};
	//not sure this is necessary
	int bikeId{};
	Date dateIn{};
	Date dateOut{};
	int laborCost{};
	int orderTotal{};
	std::string workDescription{};
	//not sure these are necessary
	//std::vector<Bike> bikes{};
	//std::vector<Customer> customers{};

};