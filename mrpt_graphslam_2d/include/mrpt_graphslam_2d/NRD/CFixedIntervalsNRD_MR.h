/* +---------------------------------------------------------------------------+
   |                     Mobile Robot Programming Toolkit (MRPT)               |
   |                          http://www.mrpt.org/                             |
   |                                                                           |
   | Copyright (c) 2005-2016, Individual contributors, see AUTHORS file        |
   | See: http://www.mrpt.org/Authors - All rights reserved.                   |
   | Released under BSD License. See details in http://www.mrpt.org/License    |
   +---------------------------------------------------------------------------+ */

#ifndef CFIXEDINTERVALSNRD_MR_H
#define CFIXEDINTERVALSNRD_MR_H

#include "mrpt_graphslam_2d/interfaces/CNodeRegistrationDecider_MR.h"
#include <mrpt/graphslam/NRD/CICPCriteriaNRD.h>

namespace mrpt { namespace graphslam { namespace deciders {

template<class GRAPH_T>
class CFixedIntervalsNRD_MR :
	public virtual CFixedIntervalsNRD<GRAPH_T>,
	public virtual CNodeRegistrationDecider_MR<GRAPH_T>
{
	public:
		typedef CNodeRegistrationDecider_MR<GRAPH_T> parent_cm;
		typedef CFixedIntervalsNRD<GRAPH_T> parent_mrpt;
		typedef typename GRAPH_T::global_pose_t global_pose_t;

		CFixedIntervalsNRD_MR();

	private:


};

} } } // end of namespaces

#include "CFixedIntervalsNRD_MR_impl.h"


#endif /* end of include guard: CFIXEDINTERVALSNRD_MR_H */

