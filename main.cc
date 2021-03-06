// --------------------------------------------------------
// Code generated by Papyrus C++
// --------------------------------------------------------

/*  Object-oriented Programming in C++, Professor Doug Ferguson
 *  JHU EP, Summer 2014 *
 *  20140711, Mike Ricci
 *  HW5: BOM
 *	 main.cpp *
 *  SUMMARY: This program contains three classes: Part (represents a single part
 *  by part number and description), Kit (represents a collection of part numbers and
 *  quantities required by the kit, and stores a catalog of all unique parts), and
 *  KitList (represents all kits in a map of kit numbers and Kit objects).  These
 *  classes are utilized to create a representation of all kits and parts described
 *  by the supplied CSV files.  Functionality is provided to query a part number
 *  and return a listing of the kits containing that part and quantities required.
 *
 *  INPUT: A folder path containing the CSV files for each kit is passed to the 
 *  KitList constructor.  The KitList constructor passes each CSV file's path to
 *  the Kit constructor.  The Kit constructor creates a Kit for each file (mapping
 *  part numbers to quantities required for the kit) and creates Part objects for
 *  each unique part encountered.  
 *
 *  OUTPUT: Main.cc contains an array of part numbers which are passed in turn to
 *  KitList::queryPart(), which searches the Kit objects for instances of the part
 *  number.  The passed part number and associated description are printed to the
 *  console, along with each kit requiring the part and the quantity required.
 *
 *  LIMITATIONS: Code was generated using the Eclipse Papyrus plugin.  Data types
 *  used in the UML diagram did not translate to the data types used in C++
 *  assignments completed previously.  Therefore, changes to the generated code 
 *  were required before compilation.  Additional changes to the overall design
 *  were implemented during development; revisions to the diagram were made to
 *  reflect these changes.
 */

#define Model_main_BODY

/************************************************************
 main class body
 ************************************************************/

#include <iostream>
#include <array>
#include <fstream> // REMOVE AFTER TESTING
#include <sstream> // REMOVE AFTER TESTING
#include <boost/tokenizer.hpp> // REMOVE AFTER TESTING
#include <boost/filesystem.hpp> // REMOVE AFTER TESTING
#include "KitList.h"

using namespace std;

std::map<std::string, Part> Kit::partsCatalog; // avoid undefined reference error
std::vector<std::string> Kit::appended; // avoid undefined reference error

int main()
{
	KitList list1 = KitList("/home/reechee/Documents/Cpp/HW5/CSV");

	array<std::string,10> parts = {"Bolt-SKT",
											 "FH-2",
										  	 "CCW-5E3",
										    "Nut-#8-32",
											 "W025130 (EU)",
											 "12A150A-50",
											 "6N-4",
											 "MFR220K-.5",
											 "#8 sheet metal screw",
											 "PJP-S"};

	for(int i = 0; i < 10; ++i)
	{
		list1.queryPart(parts[i]);
	}

	return 0;
}

/************************************************************
 End of main class body
 ************************************************************/
