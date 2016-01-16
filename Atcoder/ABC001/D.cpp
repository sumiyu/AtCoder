#include <iostream>
#include <string>

int main(){
    int n, time[300]={0};

    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::string a;
        std::cin >> a;
        int start = std::stoi(a.substr(0, 4));
        int end = std::stoi(a.substr(5, 4));

        int s = (start % 100) / 5;
        s += (start / 100) * 12;
        int e = ((end % 100) + 4) / 5;
        std::cout << e << " " ;
        e += (end / 100) * 12;

        std::cout << s << " " << e << std::endl;
        for (int j = s; j < e; j++) {
            time[j] = 1;
        }
    }

    int i = 0;
    while(i < 300){
        while(time[i] == 0) i++;
        int s = i;
        while(time[i] == 1) i++;
        int e = i - 1;
        std::cout << e << " " << s << std::endl;
        std::cout << s/12 << s%12*5 << "-" << e/12 << e%12*5 << std::endl;
    }
    return 0;
}
