#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <fstream>
#include "Bike.h"
#include "Customer.h"
#include "WorkOrder.h"

int findWorkOrder(int orderID, const std::vector<WorkOrder>& workOrders);
int findCustomer(int customerID, const std::vector<Customer>& customers);
int findBike(int bikeID, const std::vector<Bike> bikes);

//WorkOrder& chooseWorkOrder(std::vector<WorkOrder> workOrders);
//Customer& chooseCustomer(std::vector<Customer> customers);
//Bike& chooseBike(std::vector<Bike> bikes);

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

	/*std::vector<WorkOrder> workOrders;
	std::vector<Customer> customers;
	std::vector<Bike> bikes;*/
	

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
		/*switch ((MenuOptions)choice)
		{
			case MenuOptions::NewCustomer: 

			customers.push_back(Customer());

				break;

			case MenuOptions::NewWorkOrder: 
				workOrders.push_back(WorkOrder());

				break;

			case MenuOptions::AddBike:

			bikes.push_back(Bike());
				break;

			case MenuOptions::DisplayCustomers:

				

				break;

			case MenuOptions::DisplayWorkOrder:

				

				break;

			default:
				break;
		}
		system("PAUSE");
		system("CLS");*/
	}


	/*saveWorkOrder(workOrderFile, workOrders);
	saveCustomer(customerFile, customers);
	saveBike(bikeFile, bikes);*/

	return 0;
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

//WorkOrder& chooseWorkOrder(std::vector<WorkOrder> workOrders)
//{
//	// TODO: insert return statement here
//}

//Customer& chooseCustomer(std::vector<Customer> customers)
//{
//	// TODO: insert return statement here
//}

//Bike& chooseBike(std::vector<Bike> bikes)
//{
//	// TODO: insert return statement here
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

void saveBike(const std::string& bikeFile, const std::vector<WorkOrder>& bikes)
{
}
