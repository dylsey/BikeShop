#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <fstream>
#include "Bike.h"
#include "Customer.h"
#include "WorkOrder.h"


//std::vector<Customer*> customers;
//std::vector<Bike*> bikes;
//std::vector<WorkOrder*> workOrders;

//int findWorkOrder(int orderID, const std::vector<WorkOrder>& workOrders);
//int findCustomer(int customerID, const std::vector<Customer>& customers);
//int findBike(int bikeID, const std::vector<Bike> bikes);

Customer* chooseCustomer(const std::vector<Customer*>& customers);
Bike* chooseBike(const std::vector<Bike*>& bikes);
WorkOrder* chooseWorkOrder(const std::vector<WorkOrder*>& workOrders);



//std::vector<WorkOrder> loadWorkOrders(const std::string& workOrderFile);
//std::vector<Customer> loadCustomer(const std::string& customerFile);
//std::vector<Bike> loadBikeFile(const std::string& bikeFile);

//void saveWorkOrder(const std::string& workOrderFile, const std::vector<WorkOrder>& workOrders);
//void saveCustomer(const std::string& customerFile, const std::vector<WorkOrder>& customers);
//void saveBike(const std::string& bikeFile, const std::vector<WorkOrder>& bikes);


int main()
{
	enum class MenuOptions
	{
		NewCustomer = 1,
		NewWorkOrder,
		AddBike,
		DisplayCustomers,
		DisplayWorkOrder,
		Exit,
	};

	const std::string workOrderFile{ "workorders.txt" };
	const std::string customerFile{ "customers.txt" };
	const std::string bikeFile{ "bikes.txt" };

	//std::vector<WorkOrder> workorders{ loadWorkOrders(workOrderFile) };
	//std::vector<Customer> customers{ loadCustomer(customerFile) };
	//std::vector<Bike> bikes{ loadBikeFile(bikeFile) };

	std::vector<WorkOrder> workOrders;
	std::vector<Customer> customers;
	std::vector<Bike> bikes;


	int choice{ 0 };

	while ((MenuOptions)choice != MenuOptions::Exit)
	{
		std::cout << "Welcome to the Bike Shop!" << std::endl;
		std::cout << "Please select an option from the menu below:" << std::endl;
		std::cout << "1. Create a New Customer " << std::endl;
		std::cout << "2. Create a New Work Order" << std::endl;
		std::cout << "3. Add a Bike " << std::endl;
		std::cout << "4. Display Customers" << std::endl;
		std::cout << "5. Display Work Orders" << std::endl;
		std::cout << "6. Exit" << std::endl;
		std::cin >> choice;


		switch ((MenuOptions)choice)
		{
			case MenuOptions::NewCustomer:
		{
			customers.push_back(Customer());
			break;
		}
			case MenuOptions::NewWorkOrder:
			{
				Customer* customer = chooseCustomer(customers);
				if (customer)
				{
					Bike* bike = chooseBike(customer->getCustomerBikes());
					if (bike)
					{
						workOrders.push_back(WorkOrder());
						//workOrders.back().updateWorkOrder()
					}
				}
				break;
			}
			case MenuOptions::AddBike:
			{
				Bike newBike;
				bikes.push_back(newBike);

				Customer* customer = chooseCustomer(customers);

			}
			case MenuOptions::DisplayCustomers:
		{
			for (const auto& customer : customers)
			{
				customer.print();
			}

			break;
		}
			case MenuOptions::DisplayWorkOrder:
		{


			break;

		}

		default:
			break;
		}
		system("PAUSE");
		system("CLS");
	}


	/*saveWorkOrder(workOrderFile, workOrders);
	saveCustomer(customerFile, customers);
	saveBike(bikeFile, bikes);*/

	return 0;
}

WorkOrder* chooseWorkOrder(const std::vector<WorkOrder*>& workOrders)
{
	std::cout << "Choose Work Order by Id: " << std::endl;
	for (const auto& workOrder : workOrders)
	{
		workOrder->print();
	}

	int workOrderId;
	std::cin >> workOrderId;

	for (const auto& workOrder : workOrders)
	{
		if (workOrder->getWorkID() == workOrderId)
			return workOrder;
	}

	std::cout << "Work Order not Found." << std::endl;
	return nullptr;
}

Customer* chooseCustomer(const std::vector<Customer*>& customers)
{
	std::cout << "Choose Customer by Id: " << std::endl;
	for (const auto& customer : customers)
	{
		customer->print();
	}
	int customerId;
	std::cin >> customerId;

	for (const auto& customer : customers)
	{
		if (customer->getCustomerID() == customerId)
		{
			return customer;
		}
	}
	std::cout << "Customer not found." << std::endl;
	return nullptr;
}


Bike* chooseBike(const std::vector<Bike*>& bikes)
{
	std::cout << "Choose Bike by Id: " << std::endl;
	for (const auto& bike : bikes)
	{
		bike->print();
		//std::cout << "Bike Id: " << bike->getBikeId() << " Bike Make: " << bike->getBikeMake() << " Bike Model: " << bike->getBikeModel() << std::endl;
	}
	int bikeId;
	std::cin >> bikeId;

	for (const auto& bike : bikes)
	{
		if (bike->getBikeId() == bikeId)
		{
			return bike;
		}
	}
	std::cout << "Bike not found." << std::endl;
	return nullptr;
}


//int findWorkOrder(int orderID, const std::vector<WorkOrder*>& workOrders)
//{
//	return 0;
//}

//int findCustomer(int customerID, const std::vector<Customer>& customers)
//{
//	return 0;
//}

//int findBike(int bikeID, const std::vector<Bike> bikes)
//{
//	return 0;
//}


//std::vector<WorkOrder> loadWorkOrders(const std::string& workOrderFile)
//{
//	return std::vector<WorkOrder>();
//}

//std::vector<Customer> loadCustomer(const std::string& customerFile)
//{
//	return std::vector<Customer>();
//}

//std::vector<Bike> loadBikeFile(const std::string& bikeFile)
//{
//	return std::vector<Bike>();
//}

//void saveWorkOrder(const std::string& workOrderFile, const std::vector<WorkOrder>& workOrders)
//{
//}

//void saveCustomer(const std::string& customerFile, const std::vector<WorkOrder>& customers)
//{
//}