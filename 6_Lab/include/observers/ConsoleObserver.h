#pragma once

#include "../mobs/interfaces/NPC.h"

namespace observers {

class ConsoleObserver final : public Observer {
  public:
    ConsoleObserver() = default;
    virtual ~ConsoleObserver() = default;

    virtual void kill_report(const mobs::NPC&, const mobs::NPC&) override;
};

}; // namespace observers