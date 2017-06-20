#pragma once
#include <string>
using namespace std;
/*====================================================================================================================================================================================
===================================================================EQUIPMENT CLASS====================================================================================================
======================================================================================================================================================================================*/
class Equipment
{
private:
	string e_id;		//indivdual id set when it's ordered (4 charackters from rental ID 1 letter from type and 3 digits)
	string e_type;		//type name e.g. "canoe"
	double cost;		//buying cost(used also to calculate rent cost)
	char state;			//A – to rent R – rented B – broken M – missing
	char perm_needed;	//permission needed to rent and use this equipment (A - no perm needed, B - lvl1 perm, C - lvl2 perm, D - lvl3 perm)
public:
	//Equipment();
	Equipment(string ID, string Type, double Cost, char State, char Perm_Needed);
	~Equipment();
	string get_eq_id() const;
	string get_eq_type() const;
	double get_cost() const;
	void set_cost(double N_Cost);
	char get_state() const;
	void set_state(char N_State);
	char get_perm() const;
	void set_perm(char N_Perm);
	void print_eq();
};