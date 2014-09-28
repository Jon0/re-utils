/*
 * Node.h
 *
 *  Created on: 29/09/2014
 *      Author: remnanjona
 */

#ifndef GPNODE_H_
#define GPNODE_H_

#include <memory>

namespace std {

class GPNode {
public:
	GPNode();
	virtual ~GPNode();


	/*
	 * pure virtual functions
	 */
	virtual void evaluate() = 0;

private:
	shared_ptr<GPNode> n;
};

} /* namespace std */

#endif /* GPNODE_H_ */
