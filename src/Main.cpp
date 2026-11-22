#include <iostream>
#include "Main.h"
#include "Stopwatch.h"

int CalculatePortions (int people){
    return people * 100;
}

int CookingTime (int baseTime, int preference){

    int newBase;

    if(preference == 1){
        newBase = baseTime - 1;
    }else if(preference == 3){
        newBase = baseTime + 1;
    }

    return newBase;
}

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
    int preference;
    int people;


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

            std::cout << "You have to make " << CalculatePortions(people)<< " g of pasta" << std::endl;
           
            std::cout << "Do you want it al dente or little overcooked" << std::endl;
            std::cout << "1. Al dente         2. Normal         3. Overcooked" << std::endl;
            std::cin >> preference;

            std::cout << "We are cooking your Spagetti no2 for " << CookingTime(spagootsNo2, preference) << " minutes." << std::endl;
        }
        else if (subChoice == 2)
        {
            std::cout << "Great, we are starting with cooking Spagetti no 5!" << std::endl;
            
            
            std::cout << "Do you want it al dente or little overcooked" << std::endl;
            std::cout << "1. Al dente         2. Normal         3. Overcooked" << std::endl;
            std::cin >> preference;

            if(preference== 1){
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