/*
 * Program.h
 *
 *  Created on: 29/09/2014
 *      Author: remnanjona
 */

#ifndef GPPROGRAM_H_
#define GPPROGRAM_H_

#include <memory>
#include <vector>

#include "GPNode.h"

namespace std {

class GPProgram {
public:
	GPProgram();
	virtual ~GPProgram();

	/*
	 * nodes for arguments
	 */
	void run( vector<shared_ptr<GPNode>> );

	void mutate();

private:
	shared_ptr<GPNode> n;

};

} /* namespace std */

#endif /* GPPROGRAM_H_ */
