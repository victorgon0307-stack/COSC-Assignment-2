// Assignment 2 - Mendoza Instagram Calc
// Author: Victor Gonzalez
// Date: February 15, 2026

#include <iostream>
using namespace std;

int main() {
    // Starting data from the prompt, before the follower gain
    int startingFollowers = 328200;

    // Calculating the 38% increase
    int newFollowers = startingFollowers * 0.38;

    // Added together for the total
    int totalFollowers = startingFollowers + newFollowers;

    // Final follower count
    cout << "Fernando Mendoza had a successful Heisman season." << endl;
    cout << "For example" << endl;
    cout << "on January 19th, his Instagram Followers count was " << startingFollowers << "." << endl;
    cout << "After winning his teams title win, he gained " << newFollowers << " followers the following night." << endl;
    cout << "By January 20th, he had a total of " << totalFollowers << " followers." << endl;

    return 0;
}