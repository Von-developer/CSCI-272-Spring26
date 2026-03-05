#include <iostream>
#include <string>
using namespace std;
/*Name: Savon Mctair
Course: CSCI 272
Lesson Number : Lesson 4 
Code Topic: Copy Constructor, Classes, and Constructor Example
Date : 2/3/2026
*/

class Car {
    private:

string brand = "Volkswage";
string model = "Polo";
int year = 2012;
 public:
 // addition with constructor
 Car(){}
 // Parameterized version
 Car(string b, string m, int y){
     brand = b;
     model = m;
     year = y;
 }
 // Copy 
 Car(const Car& other){
     brand = other.brand;
     model = other.model;
     year = other.year;
 }
void startEngine(){
    cout << "Starting car "<< brand << "model:" << model << endl;
}
void accelerate(){
    cout << "Accelerating "<< endl;
}
};
int main(){
    Car car1;
    Car car2("Tesla", "X", 2020); // its use for parameterized 
    Car car3(car2);
    Car* pCar1 = new Car;
    Car* pCar2 = new Car("Tesla", "X", 2022);
    Car carArray[3];
    car1.startEngine();
    car2.startEngine();
    car3.startEngine();
    pCar1->startEngine();
    pCar2-> startEngine();
    carArray[0].startEngine();
    delete pCar1;
    delete pCar2;
    car1.accelerate();
    return 0;
}
/*
1.What I understood:
What I understood was to make a break down with Classes as it make see how to use it in a real life moment
2. Difficulties:
I had error with adding a new car by using copy constructor.
3. Research:
I re-looked at the slides and try to make it understand for me. I looked up on google a more depth guild and watch a video on it.
4. AI usage:
I use Claude to understand this concpet. 
5. What I learned:
I learned that you can make a class for something and make it activate with function. Also, got a foundation with public & private.
*/