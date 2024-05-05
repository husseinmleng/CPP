#include <iostream>
#include <format>

using namespace std;
int main() {
    long long A,B,C,D;
    cin >> A >> B >> C >> D;
    long long result = (A * B) - (C * D);
    cout <<std::format("Difference = {}", result);
    return 0;
}
