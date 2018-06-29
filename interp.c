#include <stdio.h>

int main(){

	float x1,y1,x2,y2,x3,y3;
	char looking, repeat;
	
	printf("\nLINEAR INTERPOLATION PROGRAM\n");
	
	while (1) {
		
	printf("What are your 2 points?\n");
	printf(" e.g. (1,3) and (4,7) should be input as 1 3 4 7\n");
	scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
	printf("Given: (%6.2f,%6.2f) (%6.2f,%6.2f)\n", x1, y1, x2, y2);
	printf("Are you looking for x or y value? (Type x or y)\n");
	scanf("%s", &looking);
	
	//interpolating for x
	if (looking=='x') {	
		printf("What is y3? ");
		scanf("%f", &y3);
		x3=x1+(y3-y1)/((y2-y1)/(x2-x1));
		printf("x3 = %6.2f\n Interpolated point is (%6.2f, %6.2f)\n", x3, x3, y3);
	}
	//interpolating for y
	else if (looking=='y') {
		printf("What is x3? ");
		scanf("%f", &x3);
		y3=y1+(y2-y1)*(x3-x1)/(x2-x1);
		printf("y3 = %6.2f\n Interpolated point is (%6.2f, %6.2f)\n", y3, x3, y3);
	}
	else {
		printf("Please enter x or y\n");
		continue;	// go back to beginning of loop
	}
	printf("Do you want to interpolate another point? y or n\n");
	scanf("%s", &repeat);
	if (repeat=='n'){	
		break;		// exit loop
	}

}	//end of while loop 

	system("pause");
	return 0;
}
