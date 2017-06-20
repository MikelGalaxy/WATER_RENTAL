#pragma once
#include <string>
#include <list>
#include "Equipment.h"

using namespace std;
class Client
{
private:
	string c_name;
	string c_surname;
	string c_id;
	double saldo;
	char permissions;
	unsigned int max_eq;
	list<Equipment>* eq_list;

public:
	Client();
	Client(string Name, string Surname, string ID, double Saldo, char Perm, unsigned int Max_Eq);
	string get_f_name();
	string get_surname();
	string get_full_name();
	string get_ID();
	double get_slado();
	void set_saldo(double N_Saldo);
	char get_perm();
	void set_perm(char N_Perm);
	list<Equipment>* get_eq_list();
	void print_client_info();
	unsigned int count_c_eq();
	

};