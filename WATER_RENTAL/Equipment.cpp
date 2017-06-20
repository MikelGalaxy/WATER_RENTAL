#include "Equipment.h"
#include<iostream>
#include<string>
using namespace std;
/*====================================================================================================================================================================================
===================================================================EQUIPMENT CLASS====================================================================================================
======================================================================================================================================================================================*/
/*
Equipment::Equipment()
{



}
*/
Equipment::Equipment(string ID, string Type, double Cost, char State, char Perm_Needed)
{
	e_id = ID;
	e_type = Type;
	cost = Cost;
	state = State;
	perm_needed = Perm_Needed;
}
Equipment::~Equipment()
{


}
string Equipment::get_eq_id() const
{
	return e_id;
}
string Equipment::get_eq_type() const
{
	return e_type;
}
double Equipment::get_cost() const
{
	return cost;
}
void Equipment::set_cost(double N_Cost)
{
	cost = N_Cost;
}
char Equipment::get_state() const
{
	return state;
}
void Equipment::set_state(char N_State)
{
	state = N_State;
}
char Equipment::get_perm() const
{
	return perm_needed;
}
void Equipment::set_perm(char N_Perm)
{
	perm_needed = N_Perm;
}
void Equipment::print_eq()
{
	cout << "\t------------------------------------------\t" << endl;
	cout << "Equipemnt ID: " << e_id <<" Equipment type: " << e_type << endl;
	cout << "Equipment cost: " << cost << " Equipemnt state: " << state << " Permission needed: " << perm_needed << endl;
	cout << "\t------------------------------------------\t" << endl;
}