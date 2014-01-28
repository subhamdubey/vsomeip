//
// participant.hpp
//
// Author: 	Lutz Bichler
//
// This file is part of the BMW Some/IP implementation.
//
// Copyright © 2013, 2014 Bayerische Motoren Werke AG (BMW).
// All rights reserved.
//

#ifndef VSOMEIP_PARTICIPANT_HPP
#define VSOMEIP_PARTICIPANT_HPP

#include <vsomeip/constants.hpp>

#ifdef USE_VSOMEIP_STATISTICS
#include <vsomeip/statistics_owner.hpp>
#endif

namespace vsomeip {

class message_base;
class receiver;

class participant
#ifdef USE_VSOMEIP_STATISTICS
: virtual public statistics_owner
#endif
{
public:
	virtual void start() = 0;
	virtual void stop() = 0;

	virtual void register_for(receiver *_receiver,
			 	 	 	 	 	 service_id _service_id,
			 	 	 	 	 	 method_id _method_id) = 0;
	virtual void unregister_for(receiver * receiver,
								   service_id _service_id,
								   method_id _method_id) = 0;

	virtual std::size_t poll_one() = 0;
	virtual std::size_t poll() = 0;
	virtual std::size_t run() = 0;

	virtual void enable_magic_cookies() = 0;
	virtual void disable_magic_cookies() = 0;
};

} // namespace vsomeip

#endif /* VSOMEIP_PARTICIPANT_HPP */