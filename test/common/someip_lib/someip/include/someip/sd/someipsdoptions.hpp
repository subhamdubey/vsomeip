// Copyright (C) 2023 Bayerische Motoren Werke Aktiengesellschaft (BMW AG)
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at http://mozilla.org/MPL/2.0/.

#ifndef __SOMEIPSDOPTIONS_HPP__
#define __SOMEIPSDOPTIONS_HPP__

#include <someip/sd/someipsdoption.hpp>
#include <someip/sd/someipsdentriesarray.hpp>

namespace vsomeip_utilities {
namespace someip {
namespace sd {

using SomeIpSdOptions = SomeIpSdEntriesArray<SomeIpSdOption>;

} // sd
} // someip
} // vsomeip_utilities

#endif // __SOMEIPSDOPTIONS_HPP__