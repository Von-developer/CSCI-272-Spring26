#include <string>
#include <iostream>
using namespace std;
/*Name: Savon Mctair
Course: CSCI 272
Lesson Number : Lesson 4 
Code Topic: Encapsulation Example
Date : 2/3/2026
*/
class User{
    private:
    string username;
    string password;
    public:
    User(const string& name, const string& pwd){
        username = name;
        password = pwd;
    }
    bool login(const string& inputUser, const string& inputPwd) const{
        return (inputUser == username) && (inputPwd == password);
    }
    void updatePassword(const string& newPwd){
        password = newPwd;
    }
};
int main(){
    User user1("admin","1234");
    if(user1.login("admin", "1234")){
        cout << "Login successful!"<< endl;
    } else {
        cout << "Login failed!"<< endl;
    }
     user1.updatePassword("new password");
     return 0;
    }
/*
1.What I understood:
What I understood was to make a break down with Encapsulation as it make see how to use it in a real life moment
2. Difficulties:
Not much Difficulties i was irritaed on these if/ else statements.
3. Research:
I re-looked at the slides and try to make it understand for me.
4. AI usage:
I use Claude to understand this concpet. 
5. What I learned:
I learned that Encapsulation can use on objects.
*/
    
