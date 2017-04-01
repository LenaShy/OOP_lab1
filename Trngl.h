#ifndef TRNGL_H
#define TRNGL_H
#include "math.h" 


struct Trngl
{
    public:
    	double oppositSide;      
        double corner;
        double adjacentSide;
    	double hypotenuse;
        Trngl();
        virtual ~Trngl();
        void CountOther();
        void IncreaseOppositSide(double);
        void DecreaseOppositeSide(double);
        float InsideRadius();
        double InsideOutsideDifference();
        double SquareRoot();
        double ShowTriangleInfo(int);
    protected:
    private:
};

#endif // TRNGL_H
