#include <fstream>
#include <string>
#include <chrono>
#include <thread>
#include <iostream>
#define OUTPUT 0
#define INPUT 1
#define HIGH 1
#define LOW 0
#define GREENLED 1
#define REDLED 0
#define HEARTBAET 2
void digitalLed(bool id,int m){
    if(m==1){
        if(id){
            std::ofstream outfile("/sys/class/leds/green_led/trigger");
            outfile << "default-on" << "\n"; 
            outfile.close();  
        }
        else{
            std::ofstream outfile("/sys/class/leds/red_led/trigger");
            outfile << "default-on" << "\n"; 
            outfile.close();  
        }
    }
    else if(m==0){
        if(id){
            std::ofstream outfile("/sys/class/leds/green_led/trigger");
            outfile << "none" << "\n"; 
            outfile.close();  
        }
        else{
            std::ofstream outfile("/sys/class/leds/red_led/trigger");
            outfile << "none" << "\n"; 
            outfile.close();  
        }
    }
    else if(m==2){
        if(id){
            std::ofstream outfile("/sys/class/leds/green_led/trigger");
            outfile << "heartbeat" << "\n"; 
            outfile.close();  
        }
        else{
            std::ofstream outfile("/sys/class/leds/red_led/trigger");
            outfile << "heartbeat" << "\n"; 
            outfile.close();  
        }
    }
}
void pinMode(int id,bool mode){
    if(mode){
        std::ofstream outfile("/sys/class/gpio/export");
        outfile << std::to_string(id) << "\n"; 
        outfile.close();  
        std::string first="/sys/class/gpio/gpio";
        std::string two=std::to_string(id);
        std::string three="/direction";
        std::string result = first +two+ three;
        std::ofstream outfile1(result);
        outfile1 << "in" << "\n"; 
        outfile1.close();
    }
    else{
        std::ofstream outfile("/sys/class/gpio/export");
        outfile << std::to_string(id) << "\n"; 
        outfile.close();  
        std::string first="/sys/class/gpio/gpio";
        std::string two=std::to_string(id);
        std::string three="/direction";
        std::string result = first +two+ three;
        std::ofstream outfile1(result);
        outfile1 << "out" << "\n"; 
        outfile1.close();
    }
}
void digitalWrite(int id,bool mode){
    std::string first1="/sys/class/gpio/gpio";
    std::string two1=std::to_string(id);
    std::string three1="/value";
    std::string result1 = first1 +two1+ three1;
    std::ofstream outfile2(result1);
    if (!outfile2.is_open()) {
        std::cerr << "Error: Failed to open the file " << result1 << "\n";
        return;
    }
    outfile2 << std::to_string(mode) << "\n";
    outfile2.close();
}
bool digitalRead(int id){
    std::string first1="/sys/class/gpio/gpio";
    std::string two1=std::to_string(id);
    std::string three1="/value";
    std::string result1 = first1 +two1+ three1;
    std::ifstream file(result1);
    if (!file.is_open()) {
        std::cerr << "Error: Unable to open file " << result1 << "\n";
        return false; 
    }
    std::string content;
    file >> content; 
    int number = std::stoi(content);
    return (number == 1);
}
int main(){
pinMode(74,OUTPUT);
}
