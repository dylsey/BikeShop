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

//enum class for the status of the work order
enum class WorkStatus { open, working, finished };

class WorkOrder {
public:
	static int lastWorkId;

	//default constructor
	WorkOrder();

	//conversion constructor. used to load all the info from the work order from the loaded order from the file
	WorkOrder(const int workId, Customer* customer, Bike* bike, WorkStatus status, Date dateIn, Date dateOut, int orderTotal, std::string workDescription);

	WorkOrder* getWorkOrder(const int& workId, std::vector<WorkOrder*>& workorders) const;

	//method to filter work order view by status
	std::vector<WorkOrder*> displayAllWorkOrdersByStatus(WorkStatus status, std::vector<WorkOrder*>& workOrders) const ;

	//retruns the vector of work history for each bike
	//std::vector<WorkOrder*> displayWorkHistoryByBike(const int& bikeId) const;

	//filter to display work order. need to use dereferences and pointers 
	//will need for loop
	std::vector<WorkOrder*> findWorkOrdersByCustomer(Customer* customer, std::vector<WorkOrder*>& workOrders) const;

	//might be too complicated for this scope 
	//WorkOrder* findWorkOrderByCustomerLastName(Customer::lastName);

	void addLaborCosttoWorkOrder(int laborCost);

	//can update the workStatus, date out, workDescriptoin
	void updateWorkOrder(WorkStatus status, Date dateOut, std::string workDescription);



	//getters and setters
	WorkOrder* getWorkOrder(const int& workId) const;

	int getWorkID() const;

	//will grab work order and display the order total. maybe just return an int? 
	int getWorkOrderTotal() const;

	void print() const;

private:
	int workId{};
	//not sure this is necessary
	int customerId{};
	//not sure this is necessary
	int bikeId{};
	Customer* customer;
	Bike* bike;
	WorkStatus status;
	Date dateIn{};
	Date dateOut{};
	int laborCost{};
	float orderTotal{0.0f};
	std::string workDescription{};
	//not sure these are necessary
	std::vector<Bike*> bikes{};
	std::vector<Customer*> customers{};

};