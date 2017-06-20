#pragma once
#include "Equipment.h"
#include "Client.h"
#include "Rental.h"
#include <string>
#include <list>
//implement as singletone
using namespace std;
class Application
{
private:
	Application();
	Application(Application const& copy);
	Application& operator=(Application const& copy);

	//~Application();

	list<Equipment> equipment_ls;
	list<Rental>  rentals_ls;
	list<Client> clients_ls;
public:
	static Application & get_instance();
	bool add_client(string Name, string Surname, string ID, double Saldo, char Perm, unsigned int Max_Eq);
	bool add_rental(string Name, double Balance, double Provision, unsigned int MaxEq);
	
	
	void view_all_clients(int d);	//d denote level of details about each client 0 - short 1 - wider 2 - all
	void view_all_rentals(int d);	// -||-






};