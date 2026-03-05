#include <string> 
#include <iostream>
using namespace std;
/*Name: Savon Mctair
Course: CSCI 272
Lesson Number : Lesson 4 
Code Topic: Destuctor Example
Date : 2/3/2026
*/
class Car{
    private:
    string brand = "Volkswagen";
    string model = "Polo";
    int year = 2012;
    public:
    Car(){}
    Car(string b, string m, int y){
        brand = b;
        model = m;
        year = y;
    }
    ~Car(){// Destuctor
        cout << "Object is destroyed"<< endl;
    }
    void startEngine(){
        cout << "start engine" << "Brand" << brand<< "Model"<< model << "}"<< endl;
    }
};
int main(){
    Car car1;
    Car Car2("Tesla ", "X", 2022);
    car1.startEngine();
    Car2.startEngine();
    return 0;

}
/*
1.What I understood:
What I understood was to make a break down with Destuctor as it make see how to use it in a real life moment
2. Difficulties:
I had error with adding a new car by using copy constructor.
3. Research:
I re-looked at the slides and try to make it understand for me
4. AI usage:
I use Claude to understand this concpet. 
5. What I learned:
I learned that u can remove the object and make it an output.
*/