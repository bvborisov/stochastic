/*
 * PG_EM.h
 *
 *  Created on: 10 Nov 2009
 *      Author: Dimitrios Milios
 */

#ifndef PG_EM_H_
#define PG_EM_H_

#include "PiecewiseGaussian.h"

namespace stochastic
{

class PG_EM: public PiecewiseGaussian
{
private:
	RandomGenerator generator;
	int intermediateSamples;

	std::vector<double> produceData(Distribution *);

public:
	PG_EM(int, int);
	virtual ~PG_EM();

	std::string getName();
	MixtureModel * performApproximation(Distribution *);
};

} // namespace stochastic

#endif /* PG_EM_H_ */
