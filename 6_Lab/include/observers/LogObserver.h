#pragma once

#include "../mobs/interfaces/NPC.h"

namespace observers {

class LogObserver final : public Observer {
  private:
    std::ofstream _os;

  public:
    LogObserver();
    virtual ~LogObserver() = default;

    virtual void kill_report(const mobs::NPC&, const mobs::NPC&) override;
};

}; // namespace observers