#include <iostream>
#include <format>
using namespace std;
int main() {
    long long x, y;
    cin >> x >> y;
    cout << std::format("{} + {} = {}",x,y,x+y)<<endl;
    cout << std::format("{} * {} = {}",x,y,x*y)<<endl;
    cout << std::format("{} - {} = {}",x,y,x-y)<<endl;

    return 0;
}
