/*
 * SyntaxNode.h
 *
 *  Created on: 29/09/2014
 *      Author: remnanjona
 */

#ifndef SYNTAXNODE_H_
#define SYNTAXNODE_H_

#include "../gp/GPNode.h"

namespace std {

/*
 * reads an instruction
 *
 */
class SyntaxNode: public GPNode {
public:
	SyntaxNode();
	virtual ~SyntaxNode();
};

} /* namespace std */

#endif /* SYNTAXNODE_H_ */
