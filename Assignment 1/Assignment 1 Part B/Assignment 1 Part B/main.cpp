//
//  main.cpp
//  Assignment 1 Part B
//
//  Created by Mark Emad  on 24/09/2022.
//

#include <iostream>
using namespace std;

class Road{
private:
    char road_type;
    int Speed_limit;
public:
    int year_model;
    //int car_speed;
    Road(){
        road_type = ' ';
        Speed_limit = 0;
    }
    Road( char Road_type , int speed, int model){
        road_type = Road_type;
        Speed_limit = speed;
        year_model = model;
    }
    bool Radar(int car_speed){
        if (car_speed > 100)
            return true;
        else
            return false;
    }
    void setroad(char road){
        road_type = road;
        while (road!= 'A'  && road!= 'B' && road!= 'C') {
            cout<<"invalid road enter again"<<endl;
            cin>>road;
        }
    }
    char getroad(){
        return road_type;
    }
    void allow(string Car_type, char road_type){
        if (road_type == 'A'){
            if(Car_type!= "motorcycle" || Car_type!="Private" )
                cout<<" you do not have access"<<endl;
        }
        else if (road_type == 'C'){
            if (Car_type != "trucks"){
                cout<<"you do not have access"<<endl;
            }
        }
        else
            cout<<"All vehicles are allowed"<<endl;
    }
    int age(int year_model){
        int car_age;
        car_age= 2022 - year_model;
        return car_age;
    }
};
int main() {
    
    return 0;
}
