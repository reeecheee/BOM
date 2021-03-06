// --------------------------------------------------------
// Code generated by Papyrus C++
// --------------------------------------------------------

/*  KitList.h
 * 
 *  KitList class header file: This class represents a group of kits and contains
 *  their kit and part objects.  Functions are provided to add kits and parts to
 *  the maps.
 * 
 *  Author: Mike Ricci
 *  Date: 20140711
 */

#ifndef KITLIST_H
#define KITLIST_H

/************************************************************
 KitList class header
 ************************************************************/

#include <map>
#include <boost/filesystem.hpp>
#include "Kit.h"
#include "Part.h"

class KitList
{

public:
	KitList(std::string path);
	virtual ~KitList();

	void addKit(std::string kitNo);
	void queryPart(std::string partNo) const;

private:
	
	std::map<std::string, Kit> kits;
	
};

/************************************************************
 End of KitList class header
 ************************************************************/

#endif
