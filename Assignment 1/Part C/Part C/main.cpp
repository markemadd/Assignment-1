//
//  main.cpp
//  Part C
//
//  Created by Mark Emad  on 24/09/2022.
//
#include <queue>
#include <iostream>
#include "part B.h"
#include "Part A.h"
using namespace std;

int main() {
    //car c1, c2 , c3 , c4 , c5 , c6 , c7 , c8 ;
    Road R;
    string Car_brand;
    string Car_type;
    string Car_plate;
    int speed;
    int Year_model;
    char road_type;
    queue<car> car_objects;
    cout<<"enter car brand: "<<endl;
    cin>>Car_brand;
    cout<<"enter vehicle brand: "<<endl;
    cin>>Car_type;
    cout<<" enter vehicle plate: "<<endl;
    cin>>Car_plate;
    cout<<" enter speed: "<<endl;
    cin>>speed;
    cout<<" year model: "<<endl;
    cin>>Year_model;
    cout<<" enter road type: "<<endl;
    cin>>road_type;
    //car_objects.push(c1);
    car c1(Car_brand,speed,Year_model);
    c1.set_type(Car_type);
    c1.set_plate(Car_plate);
    R.setroad(road_type);
    car_objects.push(c1);
    cout<<"enter car brand: "<<endl;
    cin>>Car_brand;
    cout<<"enter vehicle brand: "<<endl;
    cin>>Car_type;
    cout<<" enter vehicle plate: "<<endl;
    cin>>Car_plate;
    cout<<" enter speed: "<<endl;
    cin>>speed;
    cout<<" year model: "<<endl;
    cin>>Year_model;
    cout<<" enter road type: "<<endl;
    cin>>road_type;
    car c2(Car_brand,speed,Year_model);
    c2.set_type(Car_type);
    c2.set_plate(Car_plate);
    R.setroad(road_type);
    car_objects.push(c2);
    cout<<"enter car brand: "<<endl;
    cin>>Car_brand;
    cout<<"enter vehicle brand: "<<endl;
    cin>>Car_type;
    cout<<" enter vehicle plate: "<<endl;
    cin>>Car_plate;
    cout<<" enter speed: "<<endl;
    cin>>speed;
    cout<<" year model: "<<endl;
    cin>>Year_model;
    cout<<" enter road type: "<<endl;
    cin>>road_type;
    car c3(Car_brand,speed,Year_model);
    c3.set_type(Car_type);
    c3.set_plate(Car_plate);
    R.setroad(road_type);
    car_objects.push(c3);
    cout<<"enter car brand: "<<endl;
    cin>>Car_brand;
    cout<<"enter vehicle brand: "<<endl;
    cin>>Car_type;
    cout<<" enter vehicle plate: "<<endl;
    cin>>Car_plate;
    cout<<" enter speed: "<<endl;
    cin>>speed;
    cout<<" year model: "<<endl;
    cin>>Year_model;
    cout<<" enter road type: "<<endl;
    cin>>road_type;
    car c4(Car_brand,speed,Year_model);
    c4.set_type(Car_type);
    c4.set_plate(Car_plate);
    R.setroad(road_type);
    car_objects.push(c4);
    cout<<"enter car brand: "<<endl;
    cin>>Car_brand;
    cout<<"enter vehicle brand: "<<endl;
    cin>>Car_type;
    cout<<" enter vehicle plate: "<<endl;
    cin>>Car_plate;
    cout<<" enter speed: "<<endl;
    cin>>speed;
    cout<<" year model: "<<endl;
    cin>>Year_model;
    cout<<" enter road type: "<<endl;
    cin>>road_type;
    car c5(Car_brand,speed,Year_model);
    c5.set_type(Car_type);
    c5.set_plate(Car_plate);
    R.setroad(road_type);
    car_objects.push(c5);
    cout<<"enter car brand: "<<endl;
    cin>>Car_brand;
    cout<<"enter vehicle brand: "<<endl;
    cin>>Car_type;
    cout<<" enter vehicle plate: "<<endl;
    cin>>Car_plate;
    cout<<" enter speed: "<<endl;
    cin>>speed;
    cout<<" year model: "<<endl;
    cin>>Year_model;
    cout<<" enter road type: "<<endl;
    cin>>road_type;
    car c6(Car_brand,speed,Year_model);
    c6.set_type(Car_type);
    c6.set_plate(Car_plate);
    R.setroad(road_type);
    car_objects.push(c6);
    cout<<"enter car brand: "<<endl;
    cin>>Car_brand;
    cout<<"enter vehicle brand: "<<endl;
    cin>>Car_type;
    cout<<" enter vehicle plate: "<<endl;
    cin>>Car_plate;
    cout<<" enter speed: "<<endl;
    cin>>speed;
    cout<<" year model: "<<endl;
    cin>>Year_model;
    cout<<" enter road type: "<<endl;
    cin>>road_type;
    car c7(Car_brand,speed,Year_model);
    c7.set_type(Car_type);
    c7.set_plate(Car_plate);
    R.setroad(road_type);
    car_objects.push(c7);
    cout<<"enter car brand: "<<endl;
    cin>>Car_brand;
    cout<<"enter vehicle brand: "<<endl;
    cin>>Car_type;
    cout<<" enter vehicle plate: "<<endl;
    cin>>Car_plate;
    cout<<" enter speed: "<<endl;
    cin>>speed;
    cout<<" year model: "<<endl;
    cin>>Year_model;
    cout<<" enter road type: "<<endl;
    cin>>road_type;
    car c8(Car_brand,speed,Year_model);
    c8.set_type(Car_type);
    c8.set_plate(Car_plate);
    R.setroad(road_type);
    car_objects.push(c8);
    
    //c1.set_brand(Car_brand);
    // c1.set_speed(speed);
        //c1.set_model(Year_model);
    //cin>>Car_brand>>Car_type>>Car_plate>>speed>>Year_model>>road_type;
    /*c2.set_brand(Car_brand);
    c2.set_type(Car_type);
    c2.set_plate(Car_plate);
    c2.set_speed(speed);
    c2.set_model(Year_model);
    R.setroad(road_type);
    car_objects.push(c2);
    c3.set_brand(Car_brand);
    c3.set_type(Car_type);
    c3.set_plate(Car_plate);
    c3.set_speed(speed);
    c3.set_model(Year_model);
    R.setroad(road_type);
    car_objects.push(c3);
    cout<<car_objects.front() <<endl;*/

    //car_objects.push(c4);
    for (int i=0;i<8;i++)
    {
        R.allow((car_objects.front()).get_type(), R.getroad());
        if ((R.Radar((car_objects.front()).get_speed())== true)){
            cout<<" This car will be fined! Details:"<<endl<<"the vehicle plate is: "<<car_objects.front().get_plate()<<" the type of this vehicle is: "<<car_objects.front().get_type()<<" moving with speed "<<car_objects.front().get_speed()<<" the vehicle brand is: "<<car_objects.front().get_brand()<<" made in: "<<car_objects.front().get_model()<<endl;
        }
        
        R.age((car_objects.front()).get_model());
        car_objects.pop();
    }
    
    
    double highestcount=0;
    if (R.getcountA()>R.getcountB() && R.getcountA()>R.getcountC())
        highestcount= R.getcountA();
    
    else if(R.getcountB()>R.getcountA() && R.getcountB()>R.getcountC())
            highestcount= R.getcountB();
    else highestcount=R.getcountC();
    cout<<"The efficency for road A "<<(R.getcountA()/highestcount)*100<<"%"<<endl;
    cout<<"The efficency for road B "<<(R.getcountB()/highestcount)*100<<"%"<<endl;
    cout<<"The efficency for road C "<<(R.getcountC()/highestcount)*100<<"%"<<endl;
    //cout << " \n No. of cars passed on all roads: " << car :: num_cars <<endl;
    
    
    return 0;
}
