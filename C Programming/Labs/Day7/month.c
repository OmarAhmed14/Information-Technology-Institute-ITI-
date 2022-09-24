#include <stdio.h>

enum Month
{
	jan=1,
	feb,
	march,
	april,
	may,
	june,
	july,
	aug,
	sep,
	oct,
	nov,
	dec,
};

void main()
{
	printf("jan = %d\n",jan);
	printf("feb = %d\n",feb);
	printf("mar = %d\n",march);
	printf("apr = %d\n",april);
	printf("may = %d\n",may);
	printf("jun = %d\n",june);
	printf("jul = %d\n",july);
	printf("aug = %d\n",aug);
	printf("sep = %d\n",sep);
	printf("oct = %d\n",oct);
	printf("nov = %d\n",nov);
	printf("dec = %d\n",dec);
}