// --------------------------------------------------------
// Code generated by Papyrus C++
// --------------------------------------------------------

/*	 Part.cpp
 * 
 *  Source file for the Part class: This class represents a part through it's part
 *  number and description.  Functions are provided to get and set those two
 *  private attributes.
 */

/************************************************************
 Part class body
 ************************************************************/

// include associated header file
#include "Part.h"

//CONSTRUCTOR
Part::Part(std::string /*in*/partNo, std::string /*in*/desc) 
{
	this->desc = desc;
	this->partNo = partNo;
}

//VIRTUAL DESCTRUCTOR
Part::~Part()
{

}

//The function getDesc() returns the part's description as a string.
std::string Part::getDesc() const
{
	return this->desc;
}

//MEMBER FUNCTIONS

//The function getPartNo() returns the part's part number as a string.
std::string Part::getPartNo() const
{
	return this->partNo;
}

//The function setDesc() sets the part's description to the passed string.
void Part::setDesc(std::string /*in*/desc) 
{
	this->desc = desc;
}

//The function setPartNo() sets the part's part number to the passed string.
void Part::setPartNo(std::string /*in*/partNo)
{
	this->partNo = partNo;
}

/************************************************************
 End of part class body
 ************************************************************/