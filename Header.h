/*
* This file hosts methods for data entry.
* Author: Jake Hedges
* Last Edit: 03/06/2016 - 10:41
* Version: 1.0
*/

// Initialises 'useful' variables (i.e. non-temporary (changeable)).
char HyearOrUnit;
int  validInput, numYears, totalUnits;
// Initialises counter variables
int yrN, temp, add;
int weighting[3], numUnitsInYears[3];

HYOU()
{
	validInput = 0;
    // Loops until validInput = 1
	while( validInput == 0 ) {
		printf("Would you like to calculate for a (number of) year(s), or for a single unit?\n 1: For a (number of) year(s)\n 2: For a single unit\n\n");
		// Gains HyearOrUnit as a character unit. COULD BE IMPROVED, WILL THROW MULTIPLE ERROR MESSAGES ON STRING ENTRY.
		scanf("  %c", &HyearOrUnit );
		if((HyearOrUnit == '1') || (HyearOrUnit == '2') )  validInput = 1;
		else  printf("\a\nYou've entered an incorrect value. Please try again.\n");
}return HyearOrUnit;}

HNumYears()
{
    validInput = 0;
    while( validInput == 0 ) {
    scanf("  %d", &numYears );
    if((numYears == 1) || (numYears == 2) || (numYears == 3))  validInput = 1;
    else{
    printf("\nHow many years would you like to input data from?\n");
    printf("\aPlease enter a number of years between 1 and 3\n\n");
}}return numYears;}

// Finds the weighting of each year, adds to the array 'weighting'. Weighting is of fixed size, so others are set to 0 if not being used
HFindWeighting()
{
    for(yrN = 1; yrN <= numYears; yrN++){
        printf("\nPlease enter the weighting for year %d (total must equal 100 - there is no validation for this) \n\n", yrN);
        // Adds data to a specific location in the array.
        scanf(" %d", &weighting[yrN-1]);
}}

HFindNumUnits()
{
    for(yrN = 1; yrN <= numYears; yrN++){
        printf("\nHow many units do you have in year %d? \n\n", yrN);
        // Adds data to a specific location in the array.
        scanf(" %d", &numUnitsInYears[yrN-1]);
}
// Adds all valies of number of units, stores in a variable.
for(add = 0; add <= numYears; add++){
        //Stores the total number of units in both years, for future reference (as a counter).3
        totalUnits += numUnitsInYears[add];
        printf(numUnitsInYears[add]);
}}
