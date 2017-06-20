#include "Application.h"
#include <string>
#include<list>
using namespace std;


Application::Application()
{


}

Application& Application::get_instance()
{
	static Application instance;
	return instance;
}

