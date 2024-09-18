#include<iostream>
using namespace std; 
class Date{
    private:
        int year; 
        int month; 
        int day; 
    public: 
        Date(int _year , int _month, int _day ){
            year=_year; 
            day=_day;
            if (_month>=1  && _month<=12) {
                month=_month; 
               
            }
            else{
                month=1; 

            }

        }
        void getYear(){
            cout<<"el año es: "<<year<<endl; 
        }
        void getMonth(){
            cout<<"el mes es: "<<month<<endl; 
        }
        void getDay(){
            cout<<"el dia es: "<<day<<endl; 
        }

};
int main(){
    Date d1{2012,3,13};
    d1.getDay();
}