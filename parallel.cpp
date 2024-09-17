#include <algorithm>
#include <iostream>
#include <vector>
#include<thread>
#include<chrono>
#include<execution>
#include <sstream>  
#include <iostream>
#include <thread>
#include <chrono>
#include <format>
#include <sstream>  // To convert thread::id to a string

using namespace std::chrono_literals;

void Log(int id) {
    std::this_thread::sleep_for(1s);
    
    // Convert thread id to string
    std::stringstream ss;
    ss << std::this_thread::get_id();
    std::string thread_id_str = ss.str();

    std::cout << std::format("Thread: {}, Number: {}\n", thread_id_str, id);
}

int main() {
    std::thread t1(Log, 1);
    t1.join();
    return 0;
}
