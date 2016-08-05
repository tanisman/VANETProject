//
// Copyright (C) 2013 OpenSim Ltd.
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this program; if not, see <http://www.gnu.org/licenses/>.
//

#ifndef __INET_ALTERNATINGENERGYGENERATOR_H
#define __INET_ALTERNATINGENERGYGENERATOR_H

#include "inetveins/power/contract/IEnergyGenerator.h"
#include "inetveins/power/contract/IEnergySink.h"

namespace inetveins {

namespace power {

/**
 * This class implements a simple alternating energy generator.
 *
 * See the corresponding NED file for more details.
 *
 * @author Levente Meszaros
 */
class INETVEINS_API AlternatingEnergyGenerator : public cSimpleModule, public IEnergyGenerator
{
  protected:
    bool isSleeping;
    int energyGeneratorId;
    IEnergySink *energySink;
    W powerGeneration;
    cMessage *timer;

  protected:
    virtual void initialize(int stage) override;

    virtual void handleMessage(cMessage *message) override;

    virtual void updatePowerGeneration();

    virtual void scheduleIntervalTimer();

  public:
    AlternatingEnergyGenerator();
    virtual ~AlternatingEnergyGenerator();

    virtual W getPowerGeneration() const override { return powerGeneration; }
};

} // namespace power

} // namespace inet

#endif // ifndef __INET_ALTERNATINGENERGYGENERATOR_H

