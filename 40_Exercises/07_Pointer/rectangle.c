#include <stdio.h>

struct Point2d {
	double x;
	double y;
};

//Definieren
struct Rectangle {
	struct Point2d bottomLeftCorner;
	struct Point2d topRightCorner;
	double area;
	double perimeter;
};

double ComputeRectangleArea(struct Rectangle *pRect);

// ein Rechteck anlegen
struct Rectangle myRectangle;


struct Rectangle *pRectangle = &myRectangle;  // pointer to struct Rectangle!

//Populate
int main(){
	myRectangle.bottomLeftCorner.x = 5.0;
	myRectangle.bottomLeftCorner.y = 5.0;
	myRectangle.topRightCorner.x = 35.0;
	myRectangle.topRightCorner.y = 35.0;

//points to area in orignal rectangle
	pRectangle->area = ComputeRectangleArea(&myRectangle);
	
	printf("Area (arrow): %.2f\n", pRectangle->area);
	printf("Area (indirection): %.2f\n", (*pRectangle).area); //Gleichwertig
	return 0;
}


double ComputeRectangleArea(struct Rectangle *pRect){
	double deltaX = (pRect->topRightCorner.x - pRect->bottomLeftCorner.x);
	double deltaY = (pRect->topRightCorner.y - pRect->bottomLeftCorner.y);
	return deltaX*deltaY;
}
	
