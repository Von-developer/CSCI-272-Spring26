#include <string>
#include <iostream>
using namespace std;
/*Name: Savon Mctair
Course: CSCI 272
Lesson Number : Lesson 4 
Code Topic: Encapsulation Bank  Example
Date : 2/3/2026
*/
class BankAccount {
    private:
    double balance{0};
    public:
    void deposit(double amount){
        balance += amount;
    }
    void withdraw(double amount){
        if(amount <= balance){
            balance -= amount;
        }
    }
     void displayBalance(){
         cout << "Current balance: $"<< balance << endl;
     }
};
int main(){
    BankAccount account;
    account.deposit(500);
    account.withdraw(200);
    account.displayBalance();
    return 0;
}

/*
1.What I understood:
What I understood was to make a break down with Encapsulation as it make see how to use it in a real life moment
2. Difficulties:
I had error with making the numbers print out as it gives me an error on the class but I fix it.
3. Research:
I re-looked at the slides and try to make it understand for me
4. AI usage:
I use AI to understand this concpet. 
5. What I learned:
I learned that Encapsulation can use on objects
*/
