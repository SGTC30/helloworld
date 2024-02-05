//THIS IS A HEADER FILE TO BE USED BY HELLOWORLD.CPP
//From selecting 1 of 3 you choose which phot is displayed
//Please add the three photo files to ensure successful compile and run

#include <iostream>
#include <fstream>
using namespace std;

void hellouniverse() {
  // Declare a variable to store the user's input
  int choice;
  // Prompt the user to enter a choice between 1, 2, or 3
  cout << "Enter a choice between 1, 2, or 3: ";
  // Read the user's input and store it in the variable
  cin >> choice;
  // Use a switch statement to execute different actions based on the input
  switch (choice) {
    // If the input is 1, load a photo from a file named "photo1.jpg"
    case 1:{
      // Declare an object of the ifstream class to read from a file
      ifstream photo1;
      // Open the file in binary mode
      photo1.open("photo1.jpg", ios::binary);
      // Check if the file is opened successfully
      if (photo1.is_open()) {
        // Display a message that the photo is loaded
        cout << "Photo 1 is loaded.\n";
        // Do something with the photo data
        // ...
        // Close the file
        photo1.close();
      }
      else {
        // Display an error message if the file is not found
        cout << "Photo 1 not found.\n";
      }
      break;}
    // If the input is 2, load a photo from a file named "photo2.jpg"
    case 2:{
      // Declare an object of the ifstream class to read from a file
      ifstream photo2;
      // Open the file in binary mode
      photo2.open("photo2.jpg", ios::binary);
      // Check if the file is opened successfully
      if (photo2.is_open()) {
        // Display a message that the photo is loaded
        cout << "Photo 2 is loaded.\n";
        // Do something with the photo data
        // ...
        // Close the file
        photo2.close();
      }
      else {
        // Display an error message if the file is not found
        cout << "Photo 2 not found.\n";
      }
      break;}
    // If the input is 3, load a photo from a file named "photo3.jpg"
    case 3:{
      // Declare an object of the ifstream class to read from a file
      ifstream photo3;
      // Open the file in binary mode
      photo3.open("photo3.jpg", ios::binary);
      // Check if the file is opened successfully
      if (photo3.is_open()) {
        // Display a message that the photo is loaded
        cout << "Photo 3 is loaded.\n";
        // Do something with the photo data
        // ...
        // Close the file
        photo3.close();
      }
      else {
        // Display an error message if the file is not found
        cout << "Photo 3 not found.\n";
      }
      break;}
    // If the input is not 1, 2, or 3, display an invalid choice message
    default:
      cout << "Invalid choice.\n";
  }
}
