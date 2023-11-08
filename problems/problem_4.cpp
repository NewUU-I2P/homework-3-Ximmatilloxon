#include <string>
#include <sstream>

std::string problemSolution4(const std::string &macAddress) {
    // write your code here
    std::stringstream s(macAddress);
    std::string word;
    int val;
    std::getline(s, word, ':');
    std::stringstream temp;
    temp << std::hex << word;
    temp >> val;

    if(val == 0xFF) return "Broadcast";
    else if(val % 2 == 0) return "Unicast";
    else return "Multicast";
    // make use of control flow statements
    // return result;
}
