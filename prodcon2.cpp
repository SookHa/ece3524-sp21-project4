// prodcon2.cpp

#include <iostream>
#include <thread>
#include <chrono>
#include <random>

#include "message_queue2.h"

typedef char Message;
typedef message_queue2<Message> MessageQueue;

// To generating random sleep times
std::random_device rd;
std::mt19937 gen(rd());
std::uniform_int_distribution<> unif(1, 3000);

int maxsize=0;

class Consumer
{
public:
    // TODO:: add your code here

private:
    // TODO:: add your code here

};

class Producer
{
public:
    // TODO:: add your code here

private:
    // TODO:: add your code here
};


int main(int argc, char *argv[])
{
    // This is just to show which program is running.
    // You have to remove it when you start the real implementation.
    std::cout << "I am in prodcon2::main()." << std::endl;
    
    // TODO:: add your code here
    
    return 0;
}
