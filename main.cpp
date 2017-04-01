#include <iostream>
#include "Trngl.h"
#include "stdio.h"
using namespace std;

int main (int argc, char *argv[])
{

	int n = 0;
	int optionNumber = 0;
	int triangleNumber = 0;
	double oppSide = 0;
	double hyp = 0;

	cout << "How many triangle do you want to create?" << endl;
	cin >> n;
	Trngl *triangleSet = new Trngl[n];
    for(int i = 0; i < n; i++)
    {
    	
        cout << i+1 <<". Input triangle side: ";
        cin >> triangleSet[i].oppositSide;
        cout << "Input triangle angle: ";
        cin >> triangleSet[i].corner;
        cout << endl;
        triangleSet[i].CountOther();

    }

    cout << "Choose triangle number: ";
    cin >> triangleNumber;
    triangleNumber -= 1;
    for(int i=0; i<4; i++)
    { 
    	switch(i)
    	{
    	    case(0): 
    	    {
    	    	cout <<"1. Adjacent side: ";
    	    	break;
    	    }

    	    case(1): 
    	    {
    	    	cout <<"2. Opposite side: ";
    	    	break;
    	    }
    	    case(2): 
    	    {
    	    	cout <<"3. Hypotenuse: ";
    	    	break;
    	    }
    	    case(3): 
    	    {
    	    	cout <<"4. Corner: ";
    	    	break;
    	    } 
    	}
      	cout << triangleSet[triangleNumber].ShowTriangleInfo(i) << endl;
    }
    cout << endl << "Choose the option number: " << endl;
    cout << "1. Change opposit side's size." << endl;
    cout << "2. Count inside radius." << endl;
    cout << "3. Count the difference between outside radius and inside radius." << endl;
    cout << "4. Count square root." << endl;
    cin >> optionNumber;
    switch(optionNumber)
    {
    	case(1):{
    		double percent = 0;
    		int num = 0;
    		cout << "Input '1' to increase the opposite side and '2' to decrease." << endl;
    		cin >> num;
    		cout << "Input the percent: ";
    		cin >> percent;
    		if(num == 1) triangleSet[triangleNumber].IncreaseOppositSide(percent);
    		else triangleSet[triangleNumber].DecreaseOppositeSide(percent);
    		cout << triangleSet[triangleNumber].oppositSide;
    		break;
    	}
    	case(2):{
    		cout << triangleSet[triangleNumber].InsideRadius();
    		break;
    	}
    	case(3):{
    		cout << triangleSet[triangleNumber].InsideOutsideDifference();
    		break;
    	}
    	case(4):{
    		cout << triangleSet[triangleNumber].SquareRoot();
    		break;
    	}
    }

	return 0;
}

