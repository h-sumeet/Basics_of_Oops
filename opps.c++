#include</Users/shaldar/VScode/C++/stdc++.h>
using namespace std;

// Base class
class Person{
   public:
   string name;
   int age;

   Person(){
     name = "Sumeet";
     age = 21;
   }

   Person(string s, int x){
      name = s;
      age = x;
   }

   string get_name(){
      return name;
   }

   int get_age(){
      return age;
   }

};

// Derived class with inheritance and polymorphism
class Employee : public Person{   
   private:
    float salary;
   public:

   // constructor overload
   Employee(float x){
      salary = x;
   }

   Employee(float x, string name, int age) : Person(name, age){
      salary = x;
   }

   void details(){
      cout<<"Name: "<<get_name()<<endl;
      cout<<"Age: "<<get_age()<<endl;
      cout<<"Salary: "<<salary<<endl;
   }

};

int main(){
   Employee obj(80000.00, "Rohit", 213);
   obj.details();
   Employee obj1(94.3);
   obj1.details();
   return 0;
}