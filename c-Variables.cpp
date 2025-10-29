#include <iostream>
using namespace std;

int main(){
    
    //creating an integer variable and outputting it
    int myNum = 15;
    cout << myNum << endl;

    //doing the same as above but showing that the variable can be declared without assignment first
    int myNum2;
    //assigning a value to the declared variable
    myNum = 15; 
    //changes the variable value since compiler reads top to bottom
    myNum = 18; 
    //will output 10
    cout << myNum << endl; 

    //insertion operator can be used to implement a variable into output  similar to python concatenation
    cout << "I am " << myNum << "years old."<<endl;

    //doing arithmetic with variables rather than straight from the prompt
    int firstNum = 20;
    int secondNum = 15;
    int sum = firstNum + secondNum;
    cout << sum <<endl;

    //multiple variables of the same data type can be declared and assigned at once. 
    int z = 20, a = 15;
    cout << z + a << endl;

    //variables can be constants when assigned const at the start which means their value cannot be changed also const 
    //has to be assigned value instantly at declaration

    const int timeVar = 60;
}