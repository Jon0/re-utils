/*
 * GP.h
 *
 *  Created on: 29/09/2014
 *      Author: remnanjona
 */

#ifndef GP_H_
#define GP_H_

#include <vector>

#include "GPProgram.h"

namespace std {

class GP {
public:
	GP();
	virtual ~GP();

	void evolve();

private:
	double fitness(GPProgram &);

	vector<GPProgram> pool;

};

} /* namespace std */

#endif /* GP_H_ */
