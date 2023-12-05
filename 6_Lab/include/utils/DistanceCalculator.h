#pragma once

#include <cmath>
#include "../mobs/interfaces/NPC.h"

using namespace mobs;

namespace utils {

class DistanceCalculator final {
  public:
    static double calculate_distance(std::shared_ptr<NPC>, std::shared_ptr<NPC>);
};

}; // namespace utils