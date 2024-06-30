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

	WorkStatus status = WorkStatus::open;

	//need to attach a customer to the work order
	
	//need to attach a bike to the work order

	std::cout << "Enter a date MM, DD, YY for service open date: " << std::endl;
	std::cin >> dateIn.month >> dateIn.day >> dateIn.year;

	//can set date out later? 

	orderTotal;

	std::cout << "Enter a description for the service." << std::endl;
	std::getline(std::cin >> std::ws, workDescription);


}

WorkOrder::WorkOrder(const int workId, Customer* customer, Bike* bike, WorkStatus status, Date dateIn, Date dateOut, int orderTotal, std::string workDescription)
	: workId(workId), customer(customer), bike(bike), status(status), dateIn(dateIn), dateOut(dateOut), orderTotal(orderTotal), workDescription(workDescription)
{

}

void WorkOrder::updateWorkOrder(WorkStatus status, Date dateOut, std::string workDescription)
{
	this->status = status; 
	this->dateOut = dateOut; 
	std::cout << "Update the service description " << std::endl;
	std::getline(std::cin >> std::ws, this->workDescription);

}

WorkOrder* WorkOrder::getWorkOrder(const int& workId, std::vector<WorkOrder*>& workorders) const
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
	for (auto& workOrder : workOrders)
	{
		if (workOrder->status == status)
		{
			workOrders.push_back(workOrder);
		}
	}
	return std::vector<WorkOrder*>();
}

std::vector<WorkOrder*> WorkOrder::findWorkOrdersByCustomer(Customer* customer, std::vector<WorkOrder*>& workOrders) const
{
	for (auto& workOrder : workOrders)
	{
		if (workOrder->customer == customer)
		{
			workOrders.push_back(workOrder);
		}
	}
	return std::vector<WorkOrder*>();
}

void WorkOrder::addLaborCosttoWorkOrder(int laborCost)
{
	WorkOrder::orderTotal += laborCost;
}


int WorkOrder::getWorkID() const
{
	return workId;
}

int WorkOrder::getWorkOrderTotal() const
{
	return orderTotal;
}

void WorkOrder::print() const
{
	std::cout << "Work Order ID: " << workId << std::endl;
	std::cout << "Customer ID: " << customerId << std::endl;
	std::cout << "Bike ID: " << bikeId << std::endl;
	std::cout << "Date In: " << dateIn.month << "/"<< dateIn.day << "/" << dateIn.year <<  std::endl;
	std::cout << "Date Out: " << dateOut.month << "/" << dateOut.day << "/" << dateOut.year << std::endl;
	std::cout << "Order Total: " << orderTotal << std::endl;
	std::cout << "Work Description: " << workDescription << std::endl;

}
