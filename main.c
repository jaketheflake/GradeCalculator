/*
* This program is aimed at degree students who want to find out their final grade, or grade from a particular unit.
* This is the 'main' function, and functions are called from the 'header'.
* Author: Jake Hedges
* Last Edit: 02/06/2016 - 22:47
* Version: 1.0
*
* Ineffeciencies found by debugging/testing, to fix: <CURRENTLY NONE>
*/

#include <stdio.h>
#include <stdlib.h>
#include "header.h"
#include "unitInformation.h"

/*
* This class actions all main functions (stored in other files), in correct order, to allow the program to function.
*/
main()
{
    // Finds out if the user wants to
    HYOU();
    if(HyearOrUnit == '1'){
        printf("\nHow many years would you like to input data from?\n\n");
        HNumYears();
        HFindWeighting();
        HFindNumUnits();
    }
    else{
        //skip the looping part of the unit, go straight to getting the unit name, etc.
    }
}
