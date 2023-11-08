#include <iostream>
#include "problems/problem_1.cpp"
#include "problems/problem_2.cpp"
#include "problems/problem_3.cpp"
#include "problems/problem_4.cpp"
#include "problems/problem_5.cpp"

using namespace std;

int main() {
    cout << "Problem 1\n";
    cout << problemSolution1(55) << endl;
    cout << "Problem 2\n";
    cout << "The maximum number is " << problemSolution2(34.9, 34.5, 34.2) << endl;
    cout << "Problem 3\n";
    cout << problemSolution3(1.85, 'M') << endl;
    cout << "Problem 4\n";
    cout << problemSolution4("FF:FF:FF:FF:FF:FF") << endl;
    cout << "Problem 5\n";
    cout << problemSolution5(5, 6, '+');
    return 0;
}