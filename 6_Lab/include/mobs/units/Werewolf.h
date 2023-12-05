#pragma once

#include "../interfaces/NPC.h"

#include "Orc.h"
#include "Outlaw.h"

namespace mobs {

class Werewolf : public NPC {
  public:
    Werewolf(const int64_t, const int64_t);

    virtual std::string get_type() const override;

    virtual void battle_cry() const;

    virtual bool accept_fight(std::shared_ptr<NPC>) override;
    virtual bool fight(const Orc&) override;
    virtual bool fight(const Outlaw&) override;
    virtual bool fight(const Werewolf&) override;

    virtual void print() override;
};

}; // namespace mobs