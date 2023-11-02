#include<iostream> //#something is a preprocessing directive
using namespace std; //???

int main()
{
    cout << "Hello World" << endl; //cout is output stream object, it acts like a function without parantheses
    // << is left shift/put to/insertion operator
    // endl is a manipulator, command to stream object to do something(external view)
    //internally endl clears buffer(will be an important thing during projects)
   

    //enumeration is finite set of information defined, increases readability
    //ex. days of the week, gender

    enum gender{male, malee, female = 10, third}; //these two are enumerators, internally represented as integer, so that'll be printed
    gender p_gender;//10 is assigned to female, 11 is assigned to third
    p_gender = malee;
    //gender k[10];
    enum days_of_the_week{sun, mon, tues, wed, thurs, fri, sat};
    cout << p_gender << endl;
    return 0;
}
//return value is returned to calling space
//printing multiple things at the same time(cascading) is possible

//variables : bool type is added upon the library of c
//switch case operation can only have int or char as param

//argument - during the passing of value to function
//param - during the function declaration

//pass by value, pass  by pointer, pass by reference
//int func(int &a, int &b){--statement here--} creates alias for the variables, so complex pointer structure is avoided
//func(a, 10) is not declarable;

//define work as a replacer, and executed during preprocessing time
//in line functions and using both properties of function and define to our advantage

//lab task - pass by reference, value and pointer

//project - management related to show use cases of oop