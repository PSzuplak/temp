#include "list.hpp"

namespace
{
	list* CreateList()
	{
		list* head = new list();
		head->next = 0;
		return head();
	}

}
