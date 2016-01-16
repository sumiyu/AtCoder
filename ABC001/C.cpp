#include <iostream>
#include <string>
#include <cmath>

std::string windDirection(double degree){
    if(348.75 <= degree || degree < 11.25) return "N";
    if(degree < 33.75) return "NNE";
    if(degree < 56.25) return "NE";
    if(degree < 78.75) return "ENE";
    if(degree < 101.25) return "E";
    if(degree < 123.75) return "ESE";
    if(degree < 146.25) return "SE";
    if(degree < 168.75) return "SSE";
    if(degree < 191.25) return "S";
    if(degree < 213.75) return "SSW";
    if(degree < 236.25) return "SW";
    if(degree < 258.75) return "WSW";
    if(degree < 281.25) return "W";
    if(degree < 303.75) return "WNW";
    if(degree < 326.25) return "NW";
    else return "NNW";
}

int windPower(double dis){
    if(dis <= 0.2) return 0;
    if(dis <= 1.5) return 1;
    if(dis <= 3.3) return 2;
    if(dis <= 5.4) return 3;
    if(dis <= 7.9) return 4;
    if(dis <= 10.7) return 5;
    if(dis <= 13.8) return 6;
    if(dis <= 17.1) return 7;
    if(dis <= 20.7) return 8;
    if(dis <= 24.4) return 9;
    if(dis <= 28.4) return 10;
    if(dis <= 32.6) return 11;
    else return 12;
}


int main(){
    double deg, dis;

    std::cin >> deg >> dis;
    deg /= 10;
    dis = round(dis / 6.0) / 10; // hour -> minute

    std::string dir = windDirection(deg);
    int w = windPower(dis);

    if(w == 0) dir = "C";

    std::cout << dir << " " << w << std::endl;
    return 0;
}
