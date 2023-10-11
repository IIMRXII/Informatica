#include <stdlib.h>
#include <math.h>
#include <stdio.h>
int main(){
	for(double x = 1; x <= 3; x += 1.3)
	{
	    for(double y = (-0.4); y <= (-0.2); y += 0.1)
	    {
		for(double z = 0.5; z <= 1.5; z += 0.8)
		{
		    printf("x = %f y =  %f z = %f U = %f \n", x, y , z, (-(sqrt(pow(y,2) + (pow(4 * x,2) / 3))) + ((sin(pow(x, 3) - y) - (abs(x) * abs(y))))/ (x * z)));
		}
	    }
	}
	return 0;
}
