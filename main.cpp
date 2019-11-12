#include <iostream> 
#include <cmath>
// C++ program to find the area of Pentagon 
#include<bits/stdc++.h> 
using namespace std; 
  
// Function to find area of pentagon 
float findArea(float a) 
{ 
    float area; 
    
    // Formula to find area 
    area = (sqrt(5 * (5 + 2 * (sqrt(5)))) * a * a) / 4; 
    
    return area; 
} 
// Driver code 
int main() 
{ 
    float a = 5; 
      
    // function calling 
    cout << "Area of Pentagon: " << findArea(a); 
      
    return 0; 

}
