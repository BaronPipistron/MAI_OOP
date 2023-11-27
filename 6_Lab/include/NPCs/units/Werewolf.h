#pragma once

#include "../interface/NPC.h"

namespace NPC {

class Werewolf final : public NPC {
public:
    Werewolf() = default;
    virtual ~Werewolf() = default;

    virtual void battle_cry() const noexcept override;
    virtual void accept_battle() const override;
};

}; // namespace NPC