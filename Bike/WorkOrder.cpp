#include <iostream>
#include <string>
#include <vector>
#include "WorkOrder.h"

int WorkOrder::lastWorkId{ 0 };

//default constructor;
WorkOrder::WorkOrder()
{
	lastWorkId++;
	workId = lastWorkId;

	int customerId{};
	std::cout << "What is the customer's id?" << std::endl;
	std::cin >> customerId;

	//std::cout << "Customer Name: " << Customer.getCustomerById(customerId, customers).getFirstName() << " " << Customer.getCustomerById(customerId, customers).getLastName() << std::endl;




}

WorkOrder::WorkOrder(const int workId, int customerId, int bikeId, WorkStatus status, Date dateIn, Date dateOut, int orderTotal, std::string workDescription)
{
}

std::vector<WorkOrder> WorkOrder::displayAllWorkOrdersByStatus(WorkStatus status)
{
	return std::vector<WorkOrder>();
}

std::vector<WorkOrder> WorkOrder::displayWorkHistoryByBike(const int& bikeId)
{
	return std::vector<WorkOrder>();
}


WorkOrder* WorkOrder::findWorkOrderByCustomerId(int customerId)
{
	return nullptr;
}

void WorkOrder::addLaborCosttoWorkOrder(const int& workId, int laborCost)
{
}

void WorkOrder::updateWorkOrder(const int& workId, WorkStatus status, Date dateOut, std::string workDescription)
{
}

WorkOrder* WorkOrder::getWorkOrder(const int& workId) const

{
	return nullptr;
}

int WorkOrder::getWorkID() const
{
	return 0;
}

int WorkOrder::getWorkOrderTotal() const
{
	return 0;
}
