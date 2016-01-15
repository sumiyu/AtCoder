#include <iostream>
#include <string>
#include <iomanip>

int main(){
    int m;
    std::string ans;

    std::cin >> m;

    if(m < 100) std::cout << "00" << std::endl;
    else if(m <= 5000) std::cout << std::setfill('0') << std::setw(2) << \
                                    m / 100 << std::endl;
    else if(m <= 30000) std::cout << m / 1000 + 50 << std::endl;
    else if(m <= 70000) std::cout << (m / 1000 - 30) / 5 + 80 << std::endl;
    else std::cout << 89 << std::endl;

    return 0;
}
