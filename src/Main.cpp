#include <iostream>
#include "Main.h"
#include "Stopwatch.h"

int main(){
    std::cout << "WELCOME TO PASTA COOKER" << std::endl;
    std::cout << std::endl;

    int choice;
    int subChoice;
    int alDente_overcooked = 1;
    int spagootsNo2 = 5;
    int spagootsNo5 = 8;
    int penne = 6;
    int fusilli = 6;
    int userInput;
    int people;
    int onePersonPortion = 100;

    std::cout << "Choose the pasta:" << std::endl;
    std::cout << "1. Long pasta       2. Short pasta" << std::endl;
    std::cin >> choice;

    if(choice == 1){
        std::cout << "Which one of long pasta do you want?" << std::endl;
        std::cout << "1. Spagetti no 2        2. Spagetti no 5" << std::endl;
        std::cin >> subChoice;

        if(subChoice == 1){
            std::cout << "Great, we are starting with cooking Spagetti no 2!" << std::endl;
           
           
            std::cout << "How many people will eat pasta?" << std::endl;
            std::cin >> people;

            std::cout << "You have to make " << people * onePersonPortion << " grams of pasta" << std::endl;
           
            std::cout << "Do you want it al dente or little overcooked" << std::endl;
            std::cout << "1. Al dente         2. Normal         3. Overcooked" << std::endl;
            std::cin >> userInput;
            

            if(userInput == 1){
                std::cout << "We are cooking your Spagetti no2 for " << alDente_overcooked - spagootsNo2 << " minutes." << std::endl;
            }
            else if (userInput == 3)
            {
                std::cout << "We are cooking your Spagetti no2 for " << alDente_overcooked + spagootsNo2 << " minutes."<< std::endl;
            }else{
                std::cout << "We are cooking your spagetti no2 for " << spagootsNo2 << " minutes" << std::endl;
            }
        }
        else if (subChoice == 2)
        {
            std::cout << "Great, we are starting with cooking Spagetti no 5!" << std::endl;
            
            
            std::cout << "Do you want it al dente or little overcooked" << std::endl;
            std::cout << "1. Al dente         2. Normal         3. Overcooked" << std::endl;
            std::cin >> userInput;

            if(userInput == 1){
                std::cout << "We are cooking your Spagetti no2 for " << alDente_overcooked + spagootsNo5 << " minutes." << std::endl;
            }
        }
        else
        {
            std::cout << "Wrong choice, start again" << std::endl;
        }
    }
    else if (choice == 2)
    {
        std::cout << "Which one of short pasta do you want?" << std::endl;
        std::cout << "1. Penne       2. Fusilli" << std::endl;
        std::cin >> subChoice;

        if(subChoice == 1){
            std::cout << "Great, we are starting with cooking Penne!" << std::endl;
        }else if(subChoice == 2){
            std::cout << "Great, we are starting with cooking Fusilli!" << std::endl;

        }else{
            std::cout << "Wrong choice, start again" << std::endl;
        }
    }
    else
    {
        std::cout << "Wrong choice, try again" << std::endl;
    }

    return 0;
}