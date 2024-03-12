//THIS IS A HEADER FILE TO BE USED BY HELLOWORLD.CPP
//From selecting 1 of 3 you choose which photo is displayed
//Please add the three photo files to ensure successful compile and run

#include <iostream>
#include <fstream>
// Include the Qt headers
//added QtWidgets
#include <QtWidgets/QApplication>
#include <QLabel>
#include <QPixmap>
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
      // Create a QApplication object
      int argc = 0;
      char *argv[] = {};
      QApplication app(argc, argv);
      // Create a QLabel object
      QLabel label;
      // Create a QPixmap object
      QPixmap pixmap("photo1.jpg");
      // Set the pixmap on the label
      label.setPixmap(pixmap);
      // Show the label on the screen
      label.show();
      // Start the event loop
      app.exec();
      break;}
    // If the input is 2, load a photo from a file named "photo2.jpg"
    case 2:{
      // Create a QApplication object
      int argc = 0;
      char *argv[] = {};
      QApplication app(argc, argv);
      // Create a QLabel object
      QLabel label;
      // Create a QPixmap object
      QPixmap pixmap("photo2.jpg");
      // Set the pixmap on the label
      label.setPixmap(pixmap);
      // Show the label on the screen
      label.show();
      // Start the event loop
      app.exec();
      break;}
    // If the input is 3, load a photo from a file named "photo3.jpg"
    case 3:{
      // Create a QApplication object
      int argc = 0;
      char *argv[] = {};
      QApplication app(argc, argv);
      // Create a QLabel object
      QLabel label;
      // Create a QPixmap object
      QPixmap pixmap("photo3.jpg");
      // Set the pixmap on the label
      label.setPixmap(pixmap);
      // Show the label on the screen
      label.show();
      // Start the event loop
      app.exec();
      break;}
    // If the input is not 1, 2, or 3, display an invalid choice message
    default:
      cout << "Invalid choice.\n";
  }
}
