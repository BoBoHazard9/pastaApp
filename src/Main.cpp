#include <iostream>

int main(){
    std::cout << "WELCOME TO PASTA COOKER" << std::endl;
    std::cout << std::endl;

    int choice;
    int subChoice;

    std::cout << "Choose the pasta:" << std::endl;
    std::cout << "1. Long pasta       2. Short pasta" << std::endl;
    std::cin >> choice;

    if(choice = 1){
        std::cout << "Which one of long pasta do you want?" << std::endl;
        std::cout << "1. Spagetti no 2        2. Spagetti no 5" << std::endl;
        std::cin >> subChoice;

        if(subChoice = 1){
            std::cout << "Great, we are starting with cooking Spagetti no 2!" << std::endl;
        }else if(subChoice = 2){
            std::cout << "Great, we are starting with cooking Spagetti no 5!" << std::endl;

        }else {
            std::cout << "Wrong choice, start again" << std::endl;
        }
    }else if(choice = 2){
        std::cout << "Which one of short pasta do you want?" << std::endl;
        std::cout << "1. Penne       2. Fusilli" << std::endl;
        std::cin >> subChoice;

        if(subChoice = 1){
            std::cout << "Great, we are starting with cooking Penne!" << std::endl;
        }else if(subChoice = 2){
            std::cout << "Great, we are starting with cooking Fusilli!" << std::endl;

        }else{
            std::cout << "Wrong choice, start again" << std::endl;
        }
    }else{
        std::cout << "Wrong choice, try again" << std::endl;
    }
}