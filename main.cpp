#include <iostream>
#include <cmath>

using namespace std;

bool isMale = false;
bool isTall = true;


int getMax(int num1, int num2){
    int result;

    if (num1 > num2){
    result = num1;
    }else{
    result = num1;
    }

    return result;
}

int cube(int num){
    return num * num * num;

}

void sayHI(string name, int age){
    cout << "Hello "<< name<< ". You are "<< age<< " years old.";

}

int power(int baseNum, int powNum) {
    int result = 1;

    for(int i = 0; i < powNum; i++){
        result *= baseNum;
    }

    return result;
}

int main()
{
    int age = 24;
    int *pAge = &age;
    double gpa = 3.0;
    double *pGpa = &gpa;
    string name = "Bill";
    string *pName = &name;

    cout << *pAge;

    return 0;
}
