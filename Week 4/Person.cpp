#include <string>
#include <iostream>
using namespace std;
/*Name: Savon Mctair
Course: CSCI 272
Lesson Number : Lesson 4 
Code Topic: Person Class Example
Date : 2/3/2026
*/



class Person {
    public:
    string name ="Maksi";
    int age = 29;
    char gender = 'M';
    void introduce(){
        cout << " Hello, I'm "<< name << ".I'm "<< age << "years old. ";
        if (gender == 'M'){
            cout << "I'm a male." << endl;
        }
        else if (gender == 'F'){
            cout << " I'm a female." << endl;
        }
        else {
            cout << " Gender unspecified" << endl;
            
        }
        }
        
        };
int main(){
    Person person1;
    person1.introduce();
    return 0;
}
/*
1.What I understood:
What I understood was to Class and how effienct it can be. Also, I noticd that It great for identify pepole as well. 
2. Difficulties:
I had error with the char as I put F and it show that i am male but it supposed to be female. Some sytanx errors to get the output.
3. Research:
I re-looked at the slides and try to make it understand for me. Also, I looked at google and it guidied me to make me understand it much clearer. 
4. AI usage:
I use Claude to understand this concpet. 
5. What I learned:
I learned that classes can also identify names and genders as well insteads of using if/else statements. Classes is a great way to organize code. 
*/
    
