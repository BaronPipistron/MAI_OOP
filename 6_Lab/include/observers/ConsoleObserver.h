#pragma once

#include <fstream>
#include <memory>

#include "../mobs/NPC.h"
#include "../mobs/Orc.h"
#include "../mobs/Outlaw.h"
#include "../mobs/Werewolf.h"

namespace observers {

class ConsoleObserver : public IObserver {
  public:
    ConsoleObserver() = default;

    void report_killed(const NPC&, const NPC&) override;
};

}; // namespace observers