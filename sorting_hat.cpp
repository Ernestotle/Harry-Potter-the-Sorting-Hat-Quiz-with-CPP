#include <iostream>

int main() {

    // Declare te variables
    int gryffindor = 0;
    int hufflepuff = 0;
    int ravenclaw = 0;
    int slytherin = 0;

    // Declare the answer variables
    int answer1, answer2, answer3, answer4;

    std::cout << "=====================\n";
    std::cout << "The Sorting Hat Quiz!\n";
    std::cout << "=====================\n\n";

    // Ask the first question
    std::cout << "Q1) When I'm dead, I want people to remember me as:\n\n";
    std::cout << "1.) The Good\n";
    std::cout << "2.) The Great\n";
    std::cout << "3.) The Wise\n";
    std::cout << "4.) The Bold\n\n";
    std::cout << "Your answer: ";
    std::cin >> answer1;

    // Assign the points
    switch (answer1) {
        case 1 :
            hufflepuff++;
            break;
        case 2 :
            slytherin++;
            break;
        case 3 :
            ravenclaw++;
            break;
        case 4 :
            gryffindor++;
            break;
        default:
            std::cout << "Invalid Input.\n";
            break;
    }

    // Ask the second question
    std::cout << "\n\nQ2) Dawn or Dusk?\n\n";
    std::cout << "1.) Dawn\n";
    std::cout << "2.) Dusk\n\n";
    std::cout << "Your answer: ";
    std::cin >> answer2;

    // Assign the points
    switch (answer2) {
        case 1 :
            gryffindor++;
            ravenclaw++;
            break;
        case 2 :
            hufflepuff++;
            slytherin++;
            break;
        default :
            std::cout << "Invalid Input.";
    }

    // Ask the third question
    std::cout << "\n\nQ3) Which kind of instrument most pleases your ear?\n\n";
    std::cout << "1.) The violin\n";
    std::cout << "2.) The Trumpet\n";
    std::cout << "3.) The piano\n";
    std::cout << "4.) The drum\n\n";
    std::cout << "Your answer: ";
    std::cin >> answer3;

    // Assign the points
    switch (answer3) {
        case 1 :
            slytherin++;
            break;
        case 2 :
            hufflepuff++;
            break;
        case 3 :
            ravenclaw++;
            break;
        case 4 :
            gryffindor++;
            break;
        default :
            std::cout << "Invalid Input.";
    }

    // Ask the fourth question
    std::cout << "\n\nQ4) Which road tempts you most?\n\n";
    std::cout << "1.) The wide, sunny grassy lane\n";
    std::cout << "2.) The narrow, dark, lantern-lit alley\n";
    std::cout << "3.) The twisting, leaf-strewn path through woods\n";
    std::cout << "4.) The cobbled street lined (ancient buildings)\n\n";
    std::cout << "Your answer: ";
    std::cin >> answer4;

    // Assign the points
    switch (answer4) {
        case 1 :
            hufflepuff++;
            break;
        case 2 :
            slytherin++;
            break;
        case 3 :
            gryffindor++;
            break;
        case 4 :
            ravenclaw++;
            break;
        default :
            std::cout << "Invalid Input.";
    }

    // Determine the house
    int max = 0;
    std::string house;

    if (gryffindor > max) {
        max = gryffindor;
        house = "Gryffindor";
    } 

    if (slytherin > max) {
        max = slytherin;
        house = "Slytherin";
    }

    if (ravenclaw > max) {
        max = ravenclaw;
        house = "Ravenclaw";
    }

    if (hufflepuff > max) {
        max = hufflepuff;
        house = "Hufflepuff";
    }

    std::cout << "Your house is " << house << "!";

}