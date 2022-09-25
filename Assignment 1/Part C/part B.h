//
//  part B.h
//  Part C
//
//  Created by Mark Emad  on 24/09/2022.
//

#ifndef part_B_h
#define part_B_h
#include <iostream>
#include "Part A.h"
using namespace std;

class Road{
private:
    char road_type;
    int Speed_limit;
    int countA;
    int countB;
    int countC;
public:
    int Year_model;
    int car_age;
    
    Road(){
        road_type = ' ';
        Speed_limit = 0;
    }
    Road( char Road_type , int speed, int model){
        road_type = Road_type;
        Speed_limit = speed;
        Year_model = model;
    }
    bool Radar(int car_speed){
        if (car_speed > 100)
            return true;
        else
            return false;
    }
    void setroad(char road){
        
        while (road != 'A' && road != 'B' && road != 'C') {
            cout<<"Enter either road A, B or C"<<endl;
            cin>>road;
            cout<<"invalid road enter again"<<endl;
            
        }road_type = road;
    }
    char getroad(){
        return road_type;
    }
    void allow(string Car_type, char road_type){
        if (road_type == 'A'){
        if(Car_type == "motorcycle" || Car_type =="Private" ){
                cout<<"you have access "<<endl;
            countA++;
        }
        else cout<<"you don't have access"<<endl;
    }
    else if (road_type == 'C'){
           if (Car_type == "truck"){
                //cout<<"you do not have access"<<endl;
             cout<<"you have access"<<endl;
            countC++;
        }
           else cout<<"you don't have access"<<endl;
    }
        else{
            countB++;
            cout<<"You have access "<<endl;}
    }
    int age(int year_model){
        car_age= 2022 - year_model;
        cout<<"The age of this car is: "<<car_age<<endl;
        return car_age;
    }
    int getcountA(){
        return countA;
    }
    int getcountB(){
        return countB;
    }
    int getcountC(){
        return countC;
    }
};

#endif /* part_B_h */
