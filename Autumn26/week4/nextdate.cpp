#include <iostream>

bool leap_year(int year){
    bool ly;

    if( (year % 4) == 0 ){
        // multiple of 4 so far...
        if( (year % 100) == 0 ){
            // also a multiple of 100 — need one more check
            if( (year % 400) == 0 ){
                std::cout << "leap year" << std::endl;
                ly=true; 
            }
            else{
                std::cout << "not a leap year" << std::endl;
           ly=false; } 
        }
        else{
            // multiple of 4 but not of 100 → definitely leap
            std::cout << "leap year" << std::endl;
            ly= true;
        }
    }
    else{
        // not even a multiple of 4
        std::cout << "not a leap year" << std::endl;
    ly = false;
}
    // TODO: check whether the year is a leap year or not
    // store result in variable ly

    return ly;
}

void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){
    // TODO: d1, m1, y1 are inputs 
    // corresponding to the date d1/m1/y1
    // d2, m2, y2 are outputs that the function must compute
    // corresponding to the date d2/m2/y2 
    // which is meant to be the day after d1/m1/y1

    // function leap_year is useful for this task

    // do not begin to write code straightaway
    // sketch some diagrams first like we did
    // for the leap year task

    // (this function should not print anything)
    d2=d1+1; 
    if (d1==31 && m1==12){
        y2=y1+1; 
    } else {
        y2 = y1;
    }
    if (d1==31 && (m1==1 || m1==3 || m1==5 || m1==7 || m1==8 || m1== 10 || m1==12))
    {
        d2=1;
        if (m1==12){
            m2=1;
        } else {
            m2=m1+1;
        }
    }

    if (d1==30 && (m1==4 || m1==6 || m1==9 || m1==11))
    {
        d2=1;
        if (m1==12){
            m2=1;
        } else {
            m2=m1+1;
        }
    }
    if (d1==28 && m1==2 && leap_year(y1)){
        d2=29;
        m2 = 2;
    }
    else if (d1==29 && m1==2 && leap_year(y1)){
        d2=1;
        m2=3;
    }
    else if (d1==28 && m1==2 && !(leap_year(y1)))
    {   d2=1;
        m2=3;
    }
}

int main(){
    // TODO: write a main to test the function
    int d1,m1,y1;
    int d2,m2,y2;

    std:: cin >> d1 >> m1 >> y1 ;
    next_date(d1,m1,y1,d2,m2,y2);

    std:: cout << d2 << m2 << y2 ;
}