//
//  Controller.cpp
//  DataStructures
//
//  Created by Johnsen, Matthew on 1/31/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "Controller.hpp"

using namespace std;

void Controller :: start()
{
    cout << "Testing the Timer class" << endl;
    Timer codeTimer;
    codeTimer.startTimer();
    vector<CrimeData> myData = FileController :: readCrimeDataToVector("/Users/mjoh7008/Documents/Data Structures/DataStructures/DataStructures/Data/crime.csv");
    for (int index = 199; index < 216; index++)
    {
        cout << "Data at spot # " << index + 1 << ": " << myData[index] << endl;
    }
    codeTimer.stopTimer();
    codeTimer.displayInformation();
    
}
