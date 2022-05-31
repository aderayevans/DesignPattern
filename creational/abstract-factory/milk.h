#ifndef __MILKH__
#define __MILKH__
enum MilkType {
    Orange,
    Strawberry
};
class Milk {
public:    
    virtual void showInfo()=0;
};
#endif