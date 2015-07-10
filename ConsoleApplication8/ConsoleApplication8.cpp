
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

// main client --------------------------------------------------------
int main()
{
   // food #1 constants
   const string FOOD_1_NAME = "Avocado";
   const  int FOOD_1_CALORIES_P100G = 160;
   const  double FOOD_1_FIBER_P100G = 7;
   const  int FOOD_1_PROTEIN_P100G = 2;
   const  int FOOD_1_FAT_P100G = 15;

   // food #2 constants
   const  string FOOD_2_NAME = "Sun-Dried Tomato";
   const  int FOOD_2_CALORIES_P100G = 258;
   const  double FOOD_2_FIBER_P100G = 12;
   const  double FOOD_2_PROTEIN_P100G = 14;
   const  double FOOD_2_FAT_P100G = 3;

   // food #3 constants
   const  string FOOD_3_NAME = "Provolone";
   const  int FOOD_3_CALORIES_P100G = 351;
   const  double FOOD_3_FIBER_P100G = 0;
   const  double FOOD_3_PROTEIN_P100G = 26;
   const  double FOOD_3_FAT_P100G = 27;

   // food #4 constants
   const  string FOOD_4_NAME = "Whole Wheat Bread";
   const  int FOOD_4_CALORIES_P100G = 247;
   const  double FOOD_4_FIBER_P100G = 7;
   const  double FOOD_4_PROTEIN_P100G = 13;
   const  double FOOD_4_FAT_P100G = 3;

   // food #5 constants
   const  string FOOD_5_NAME = "Iceberg Lettuce";
   const  int FOOD_5_CALORIES_P100G = 14;
   const  double FOOD_5_FIBER_P100G = 1;
   const  double FOOD_5_PROTEIN_P100G = 1;
   const  double FOOD_5_FAT_P100G = 0;

   const  string INDENT = "   ";

   string recipeName, userInputStr;
   int userInputInt;
   double totalFiber, totalCals, totalProtein, totalFat;

   // initialize accumulator variables
   totalFiber = 0.;
   totalCals = 0;
   totalProtein = 0;
   totalFat = 0;

   // print menu
   cout << "---------- List of Possible Ingredients ---------" << endl;
   cout << INDENT << "Food #1: " << FOOD_1_NAME << endl;
   cout << INDENT << "Food #2: " << FOOD_2_NAME << endl;
   cout << INDENT << "Food #3: " << FOOD_3_NAME << endl;
   cout << INDENT << "Food #4: " << FOOD_4_NAME << endl;
   cout << INDENT << "Food #5: " << FOOD_5_NAME << endl << endl;

   // name of recipe
   cout << "What are you calling this recipe? ";
   getline(cin, recipeName);

   // food #1 ---------------------------------------------------------
   cout << "How many grams of " << FOOD_1_NAME << "? ";
   getline(cin, userInputStr);
   istringstream(userInputStr) >> userInputInt;

   // update accumulators
   totalCals += userInputInt * (FOOD_1_CALORIES_P100G / 100.);
   totalFiber += userInputInt * (FOOD_1_FIBER_P100G / 100.);
   totalProtein += userInputInt * (FOOD_1_PROTEIN_P100G / 100);
   totalFat += userInputInt * (FOOD_1_FAT_P100G / 100);

   //If Negative Value Input
   if (userInputInt < 0)
   {
      cout << "\n-----------------Error-------------------\n" << "Negative value detected.\n" << "Results displayed will NOT be correct!\n"
         << "Please restart the program.\n" << "-----------------Error-------------------\n";
   }

   // food #2 ---------------------------------------------------------
   cout << "How many grams of " << FOOD_2_NAME << "? ";
   getline(cin, userInputStr);
   istringstream(userInputStr) >> userInputInt;

   // update accumulators
   totalCals += userInputInt * (FOOD_2_CALORIES_P100G / 100.);
   totalFiber += userInputInt * (FOOD_2_FIBER_P100G / 100.);
   totalProtein += userInputInt * (FOOD_2_PROTEIN_P100G / 100);
   totalFat += userInputInt * (FOOD_2_FAT_P100G / 100);

   //If Negative Value Input
   if (userInputInt < 0)
   {
      cout << "\n-----------------Error-------------------\n" << "Negative value detected.\n" << "Results displayed will NOT be correct!\n"
         << "Please restart the program.\n" << "-----------------Error-------------------\n";
   }

   // food #3 ---------------------------------------------------------
   cout << "How many grams of " << FOOD_3_NAME << "? ";
   getline(cin, userInputStr);
   istringstream(userInputStr) >> userInputInt;

   // update accumulators
   totalCals += userInputInt * (FOOD_3_CALORIES_P100G / 100.);
   totalFiber += userInputInt * (FOOD_3_FIBER_P100G / 100.);
   totalProtein += userInputInt * (FOOD_3_PROTEIN_P100G / 100);
   totalFat += userInputInt * (FOOD_3_FAT_P100G / 100);

   //If Negative Value Input
   if (userInputInt < 0)
   {
      cout << "\n-----------------Error-------------------\n" << "Negative value detected.\n" << "Results displayed will NOT be correct!\n"
         << "Please restart the program.\n" << "-----------------Error-------------------\n";
   }

   // food #4 ---------------------------------------------------------
   cout << "How many grams of " << FOOD_4_NAME << "? ";
   getline(cin, userInputStr);
   istringstream(userInputStr) >> userInputInt;

   // update accumulators
   totalCals += userInputInt * (FOOD_4_CALORIES_P100G / 100.);
   totalFiber += userInputInt * (FOOD_4_FIBER_P100G / 100.);
   totalProtein += userInputInt * (FOOD_4_PROTEIN_P100G / 100);
   totalFat += userInputInt * (FOOD_4_FAT_P100G / 100);

   //If Negative Value Input
   if (userInputInt < 0)
   {
      cout << "\n-----------------Error-------------------\n" << "Negative value detected.\n" << "Results displayed will NOT be correct!\n"
         << "Please restart the program.\n" << "-----------------Error-------------------\n";
   }

   // food #5 ---------------------------------------------------------
   cout << "How many grams of " << FOOD_5_NAME << "? ";
   getline(cin, userInputStr);
   istringstream(userInputStr) >> userInputInt;

   // update accumulators
   totalCals += userInputInt * (FOOD_5_CALORIES_P100G / 100.);
   totalFiber += userInputInt * (FOOD_5_FIBER_P100G / 100.);
   totalProtein += userInputInt * (FOOD_5_PROTEIN_P100G / 100);
   totalFat += userInputInt * (FOOD_5_FAT_P100G / 100);

   //If Negative Value Input
   if (userInputInt < 0)
   {
      cout << "\n-----------------Error-------------------\n" << "Negative value detected.\n" << "Results displayed will NOT be correct!\n"
         << "Please restart the program.\n" << "-----------------Error-------------------\n";
   }

   //Servings
   cout << "\nHow many servings will this recipe prepare? ";
   getline(cin, userInputStr);
   istringstream(userInputStr) >> userInputInt;

   //If Negative Value Input
   if (userInputInt < 0)
   {
      cout << "\n-----------------Error-------------------\n" << "Negative value detected.\n" << "Results displayed will NOT be correct!\n"
         << "Please restart the program.\n" << "-----------------Error-------------------\n";
   }

   totalCals = (totalCals / userInputInt);
   totalFiber = (totalFiber / userInputInt);
   totalProtein = (totalProtein / userInputInt);
   totalFat = (totalFat / userInputInt);

   // report results --------------------------------------------------
   cout << "\nNutrition for one serving of " << recipeName << "------------" << endl;
   cout << INDENT << "Calories: " << totalCals << endl;
   cout << INDENT << "Dietary Fiber: " << totalFiber << endl;
   cout << INDENT << "Protein: " << totalProtein << endl;
   cout << INDENT << "Fat: " << totalFat << endl;

   return 0;
}

/*-------------------------Paste of Run #1----------------------------

---------- List of Possible Ingredients ---------
Food #1: Avocado
Food #2: Sun-Dried Tomato
Food #3: Provolone
Food #4: Whole Wheat Bread
Food #5: Iceberg Lettuce

What are you calling this recipe? Chris' Club Sandwich
How many grams of Avocado? 87
How many grams of Sun-Dried Tomato? 120
How many grams of Provolone? 285
How many grams of Whole Wheat Bread? 586
How many grams of Iceberg Lettuce? 410

How many servings will this recipe prepare? 4

Nutrition for one serving of Chris' Club Sandwich------------
Calories: 738.493
Dietary Fiber: 16.4025
Protein: 42.795
Fat: 24.5325
Press any key to continue . . .

-------------------------Paste of Run #2----------------------------

---------- List of Possible Ingredients ---------
Food #1: Avocado
Food #2: Sun-Dried Tomato
Food #3: Provolone
Food #4: Whole Wheat Bread
Food #5: Iceberg Lettuce

What are you calling this recipe? Gianna's Guacamole
How many grams of Avocado? 683
How many grams of Sun-Dried Tomato? 207
How many grams of Provolone? 0
How many grams of Whole Wheat Bread? 0
How many grams of Iceberg Lettuce? 0

How many servings will this recipe prepare? 5

Nutrition for one serving of Gianna's Guacamole------------
Calories: 325.372
Dietary Fiber: 14.53
Protein: 5.796
Fat: 1.242
Press any key to continue . . .

-------------------------Paste of Run #3----------------------------

---------- List of Possible Ingredients ---------
Food #1: Avocado
Food #2: Sun-Dried Tomato
Food #3: Provolone
Food #4: Whole Wheat Bread
Food #5: Iceberg Lettuce

What are you calling this recipe? Steven's Salad
How many grams of Avocado? 301
How many grams of Sun-Dried Tomato? 603
How many grams of Provolone? 0
How many grams of Whole Wheat Bread? 0
How many grams of Iceberg Lettuce? 1782

How many servings will this recipe prepare? 8

Nutrition for one serving of Steven's Salad------------
Calories: 285.853
Dietary Fiber: 13.9063
Protein: 12.78
Fat: 2.26125
Press any key to continue . . .

-------------------------Paste of Run #4----------------------------

---------- List of Possible Ingredients ---------
Food #1: Avocado
Food #2: Sun-Dried Tomato
Food #3: Provolone
Food #4: Whole Wheat Bread
Food #5: Iceberg Lettuce

What are you calling this recipe? Alexander's Appetizer
How many grams of Avocado? 403
How many grams of Sun-Dried Tomato? 854
How many grams of Provolone? 0
How many grams of Whole Wheat Bread? 2204
How many grams of Iceberg Lettuce? 0

How many servings will this recipe prepare? 23

Nutrition for one serving of Alexander's Appetizer------------
Calories: 360.522
Dietary Fiber: 12.39
Protein: 17.6557
Fat: 3.9887
Press any key to continue . . .

-------------------------Paste of Run #5----------------------------

---------- List of Possible Ingredients ---------
Food #1: Avocado
Food #2: Sun-Dried Tomato
Food #3: Provolone
Food #4: Whole Wheat Bread
Food #5: Iceberg Lettuce

What are you calling this recipe? Maxwell's Self-Dubbed "Best Sandwich in the Whole World"
How many grams of Avocado? 500
How many grams of Sun-Dried Tomato? 1023
How many grams of Provolone? 582
How many grams of Whole Wheat Bread? 6083
How many grams of Iceberg Lettuce? -59

-----------------Error-------------------
Negative value detected.
Results displayed will NOT be correct!
Please restart the program.
-----------------Error-------------------

How many servings will this recipe prepare? -4

-----------------Error-------------------
Negative value detected.
Results displayed will NOT be correct!
Please restart the program.
-----------------Error-------------------

Nutrition for one serving of Maxwell's Self-Dubbed "Best Sandwich in the Whole World"------------
Calories: -5124.73
Dietary Fiber: -145.745
Protein: -271.185
Fat: -92.58
Press any key to continue . . .

---------------------------------------------------------------------*/