#pragma once
#include "Equipment.h"
#include "Client.h"
#include <string>
#include <list>
using namespace std;

class Rental
{
private:
	string r_id;			//4 characters
	string r_name;
	double balance;
	double provision;
	unsigned int max_eq;
	list<Equipment>* rental_eq_ls;
	list<Client>* rental_cl_ls;
	//equipment list

public:
	Rental();
	Rental(string Name, double Balance, double Provision, unsigned int MaxEq);
	//~Rental();






};