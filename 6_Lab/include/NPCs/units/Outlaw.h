#pragma once

#include "../interface/NPC.h"

namespace NPC {

class Outlaw final : public NPC {
public:
    Outlaw() = default;
    virtual ~Outlaw() = default;

    virtual void battle_cry() const noexcept override;
    virtual void accept_battle() const override;
};

}; // namespace NPC