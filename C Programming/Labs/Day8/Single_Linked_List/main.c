#include <stdio.h>
#include <stdlib.h>
#include "single_Linked_list.h"

void main()
{
	Insert_Last(10);
	Insert_Last(15);
	Insert_Last(20);
	Insert_Last(25);
	Insert_Last(30);

	Delete_Element(20);

	Print_List();
}
