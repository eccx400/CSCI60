#include <iostream>
#include <cstring>

using namespace std;

struct Time
{
    //military time, no am/pm
    int hour;
    int minute;
};

struct Carpool
{
    Time t;

    string names[5];
    int people;
};

Time earlier(Time t1, Time t2)
{
    Time ret;
    if(t1.hour == t2.hour){
    if(t1.minute<t2.minute)
        ret = t1;
    else
        ret = t2;
}
else if(t1.hour<t2.hour){
    ret = t1;
}
else{
    ret = t2;
}
return ret;
}

Carpool combineCarpool(Carpool car1, Carpool car2)
{
    Carpool newCar = {{},{},0};
    if((car1.people + car2.people) <= 5)
    {
        newCar.t = earlier(car1.t, car2.t);
        newCar.people = (car1.people + car2.people);

        for(int i = 0; i <= car1.people ; i++)
        {
            newCar.names[i] = car1.names[i];
        }
        for(int i = 0; i <= car2.people; i++)
        {
            newCar.names[car1.people + i] = car2.names[i];
        }
    }
    return newCar;
}

int main()
{
    Carpool thecar = {{3,30}, {"Bob", "Bill", "Joe"}, 3};
    Carpool nextcar= {{6,45},{"Jamie"}, 1};

    combineCarpool(thecar, nextcar);
};
