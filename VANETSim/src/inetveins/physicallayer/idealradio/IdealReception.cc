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

#include "inetveins/physicallayer/idealradio/IdealReception.h"

namespace inetveins {

namespace physicallayer {

Register_Enum(inetveins::physicallayer::IdealReception::Power,
        (IdealReception::POWER_UNDETECTABLE,
         IdealReception::POWER_DETECTABLE,
         IdealReception::POWER_INTERFERING,
         IdealReception::POWER_RECEIVABLE));

IdealReception::IdealReception(const IRadio *radio, const ITransmission *transmission, const simtime_t startTime, const simtime_t endTime, const Coord startPosition, const Coord endPosition, const EulerAngles startOrientation, const EulerAngles endOrientation, const Power power) :
    ReceptionBase(radio, transmission, startTime, endTime, startPosition, endPosition, startOrientation, endOrientation),
    power(power)
{
}

std::ostream& IdealReception::printToStream(std::ostream& stream, int level) const
{
    stream << "IdealReception";
    if (level >= PRINT_LEVEL_INFO)
        stream << ", power = " << cEnum::get(opp_typename(typeid(IdealReception::Power)))->getStringFor(power) + 6;
    return ReceptionBase::printToStream(stream, level);
}

} // namespace physicallayer

} // namespace inet

