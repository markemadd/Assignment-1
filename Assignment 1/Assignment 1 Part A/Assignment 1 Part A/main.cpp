//
//  main.cpp
//  Assignment 1 Part A
//
//  Created by Mark Emad  on 24/09/2022.
//

#include <iostream>
#include <string>
using namespace std;

class car{
private:
    string Car_brand;
    string Car_type;
    string Car_plate;
    int speed;
    int Year_model;
public:
    
    car(){
        Car_brand = " ";
        Car_type = " ";
        Car_plate = " ";
        speed = 0;
        Year_model = 0;
    }
    
    car(string brand, int max_Speed, int Model){
        Car_brand = brand;
        speed = max_Speed;
        Year_model = Model;
    }
    
    void set_brand(string brand){
        Car_brand = brand;
    }
    
    string get_brand(){
        return Car_brand;
    }
    
    void set_type(string type){
    while (type!= "truck"  && type!= "private" && type!= "motorcycle" && type!= "bus") {
            cout<<"invalid type enter again"<<endl;
            cin>>type;
            Car_type = type;
        }
    }
    string get_type(){
        return Car_type;
    }
    
    void set_plate(string plate){
        Car_plate = plate;
    }
    
    string get_plate(){
        return Car_plate;
    }
    
    void set_speed(int s){
        speed = s;
    }
    
    int get_speed(){
        return speed;
    }
    
    void set_model(int model){
        Year_model = model;
    }
    
    int get_model(){
        return Year_model;
    }
    
};

int main() {
  
    return 0;
}
