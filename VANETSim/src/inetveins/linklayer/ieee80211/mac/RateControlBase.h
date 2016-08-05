//
// Copyright (C) 2015 Andras Varga
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
//

#ifndef __INET_RATECONTROLBASE_H
#define __INET_RATECONTROLBASE_H

#include "IRateControl.h"

namespace inetveins {
namespace ieee80211 {

class INETVEINS_API RateControlBase : public IRateControl
{
    protected:
        const Ieee80211ModeSet *modeSet = nullptr;

    protected:
        const IIeee80211Mode *increaseRateIfPossible(const IIeee80211Mode *currentMode);
        const IIeee80211Mode *decreaseRateIfPossible(const IIeee80211Mode *currentMode);

    public:
        void initialize(const Ieee80211ModeSet *modeSet) { this->modeSet = modeSet; }
};

} /* namespace ieee80211 */
} /* namespace inetveins */

#endif /* __INET_RATECONTROLBASE_H */
