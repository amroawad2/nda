// Copyright 2009-2020 NTESS. Under the terms
// of Contract DE-NA0003525 with NTESS, the U.S.
// Government retains certain rights in this software.
//
// Copyright (c) 2009-2020, NTESS
// All rights reserved.
//
// Portions are copyright of other developers:
// See the file CONTRIBUTORS.TXT in the top level directory
// the distribution for more information.
//
// This file is part of the SST software package. For license
// information, see the LICENSE file in the top level directory of the
// distribution.


#ifndef _H_ZODIAC_IRECV_EVENT
#define _H_ZODIAC_IRECV_EVENT

#include "zrecvevent.h"
#include "zevent.h"

using namespace SST::Hermes;
using namespace SST::Hermes::MP;

namespace SST {
namespace Zodiac {

class ZodiacIRecvEvent : public ZodiacRecvEvent {

	public:
		ZodiacIRecvEvent(uint32_t src, uint32_t length,
			PayloadDataType dataType,
			uint32_t tag, Communicator group, uint64_t rqID);
		ZodiacEventType getEventType();
		uint64_t getRequestID();

	protected:
		uint64_t reqID;

};

}
}

#endif