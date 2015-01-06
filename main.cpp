/* 
 * File:   main.cpp
 * Author: Archeress
 *
 * Created on January 5, 2015, 9:32 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;


int main(int argc, char** argv) {
    int sum = 0; 
    for (int i=1; i<1000; i++){
        if ((i % 5 == 0) || (i % 3 == 0))
            sum += i;
    }//for each number below 1000
    
    cout << "Sum = " << sum << endl;
    return 0;
}//main
