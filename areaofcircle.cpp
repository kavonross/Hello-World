/* 
*gets the radui from the user and returns the circles 
* area and circumference
* 
* By K R
*/
#include <iostream> 

using namespace std; 

int main() 
{ 
    // declare varibles 
    // We declare varibles first otherwise the equation will not produce the right output
    // so in conclusion the code will run in order from top to bottom
    double radius;
    double area; 
    
    // Creating pi 3.14159 as a set constant throughout the code
    const double pi=3.14159;

    // prompt user for input 
  cout << "Enter the radius of the circle: "; 
  cin >> radius; 
  // calculate the area of the circles 
    area = pi*radius*radius;

    // Display the Results 
    cout << "The area of the circles is " << area << "." << endl; 
    return 0; // end succesfully
}