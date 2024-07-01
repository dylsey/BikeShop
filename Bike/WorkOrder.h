#pragma once
#include <iostream>
#include <string>
#include <vector>

//forward declarations
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
	WorkOrder(const int workId, Customer* customer, Bike* bike, WorkStatus status, Date dateIn, Date dateOut, float orderTotal, std::string workDescription);

	//can update the workStatus, date out, workDescriptoin
	void updateWorkOrder(Customer* customer, Bike* bike, WorkStatus status, Date dateOut, std::string workDescription);

	//WorkOrder* chooseWorkOrder(const std::vector<WorkOrder*>& workOrders);

	WorkOrder* getWorkOrderByWorkId(const int& workId, std::vector<WorkOrder*>& workorders) const;

	//method to filter work order view by status
	std::vector<WorkOrder*> displayAllWorkOrdersByStatus(WorkStatus status, std::vector<WorkOrder*>& workOrders) const;

	std::vector<WorkOrder*> findWorkOrdersByCustomer(Customer* customer, std::vector<WorkOrder*>& workOrders) const;

	void addLaborCosttoWorkOrder(int laborCost);

	//getters and setters
	int getWorkID() const;

	//will grab work order and display the order total. maybe just return an int? 
	float getWorkOrderTotal() const;

	void print() const;

private:
	int workId{};
	Customer* customer;
	Bike* bike;
	WorkStatus status;
	Date dateIn{};
	Date dateOut{};
	int laborCost{};
	float orderTotal{};
	std::string workDescription{};
	//std::vector<Bike*> bikes{};
	//std::vector<Customer*> customers{};
};