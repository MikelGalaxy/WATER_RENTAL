#include "Client.h"
#include<list>
#include<string>
#include<iostream>

using namespace std;

Client::Client()
{



}
Client::Client(string Name, string Surname, string ID, double Saldo, char Perm, unsigned int Max_Eq)
{
	c_name = Name;
	c_surname = Surname;
	c_id = ID;
	saldo = Saldo;
	permissions = Perm;
	max_eq = Max_Eq;
}
string Client::get_f_name()
{
	return c_name;
}
string Client::get_surname()
{
	return c_surname;
}
string Client::get_full_name()
{
	return c_name + c_surname;
}
string Client::get_ID()
{
	return c_id;
}
double Client::get_slado()
{
	return saldo;
}
void Client::set_saldo(double N_Saldo)
{
	saldo = N_Saldo;
}
char Client::get_perm()
{
	return permissions;
}
void Client::set_perm(char N_Perm)
{
	permissions = N_Perm;
}
list<Equipment>* Client::get_eq_list()
{
	return eq_list;
}
void Client::print_client_info()
{
	cout << "==============================================================" << endl;
	cout << "\t" << c_name << " " << c_surname << endl;

}
unsigned int Client::count_c_eq()
{
	unsigned int i = 0;
	return i;
}