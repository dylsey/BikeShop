#include <iostream>
#include <string>
#include <vector>
#include "WorkOrder.h"
#include "Bike.h"
#include "Customer.h"


int WorkOrder::lastWorkId{ 0 };


//default constructor;
WorkOrder::WorkOrder()
{
	lastWorkId++;
	workId = lastWorkId;
	WorkStatus status = WorkStatus::open;
	orderTotal = 0;

	std::cout << "Enter a date MM, DD, YY for service open date: " << std::endl;
	std::cin >> dateIn.month >> dateIn.day >> dateIn.year;

	std::cout << "Enter a description for the service." << std::endl;
	std::getline(std::cin >> std::ws, workDescription);
}

WorkOrder::WorkOrder(const int workId, Customer* customer, Bike* bike, WorkStatus status, Date dateIn, Date dateOut, float orderTotal, std::string workDescription)
	: workId(workId), customer(customer), bike(bike), status(status), dateIn(dateIn), dateOut(dateOut), orderTotal(orderTotal), workDescription(workDescription)
{

}

//this method helps add customers and bikes to the work orders along with updating their status and description
void WorkOrder::updateWorkOrder(Customer* customer, Bike* bike, WorkStatus status, Date dateOut, std::string workDescription)
{
	this->customer = customer;
	this-> bike = bike;
	this->status = status; 
	this->dateOut = dateOut; 
	std::cout << "Update the service description " << std::endl;
	std::getline(std::cin >> std::ws, this->workDescription);

}

WorkOrder* WorkOrder::getWorkOrderByWorkId(const int& workId, std::vector<WorkOrder*>& workorders) const
{
	for (const auto& workOrder : workorders)
	{
		if (workOrder->workId == workId)
		{
			return workOrder;
		}
	}
	return nullptr;
}

std::vector<WorkOrder*> WorkOrder::displayAllWorkOrdersByStatus(WorkStatus status, std::vector<WorkOrder*>& workOrders) const
{
	std::vector<WorkOrder*> statusOrders;
	for (auto& workOrder : workOrders)
	{
		if (workOrder->status == status)
		{
			statusOrders.push_back(workOrder);
		}
	}
	return statusOrders;
}

std::vector<WorkOrder*> WorkOrder::findWorkOrdersByCustomer(Customer* customer, std::vector<WorkOrder*>& workOrders) const
{
	std::vector<WorkOrder*> customerOrders;
	for (auto& workOrder : workOrders)
	{
		if (workOrder->customer == customer)
		{
			customerOrders.push_back(workOrder);
		}
	}
	return customerOrders;
}

void WorkOrder::addLaborCosttoWorkOrder(int laborCost)
{
	orderTotal += laborCost;
}


int WorkOrder::getWorkID() const
{
	return workId;
}

float WorkOrder::getWorkOrderTotal() const
{
	return orderTotal;
}

void WorkOrder::print() const
{
	std::cout << "Work Order ID: " << workId << std::endl;
	std::cout << "Customer ID: " << customer->getCustomerID() << std::endl;
	std::cout << "Bike ID: " << bike->getBikeId() << std::endl;
	std::cout << "Date In: " << dateIn.month << "/"<< dateIn.day << "/" << dateIn.year <<  std::endl;
	std::cout << "Date Out: " << dateOut.month << "/" << dateOut.day << "/" << dateOut.year << std::endl;
	std::cout << "Order Total: " << orderTotal << std::endl;
	std::cout << "Work Description: " << workDescription << std::endl;
}

