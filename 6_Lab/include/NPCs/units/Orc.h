#pragma once

#include "../interface/NPC.h"

namespace NPC {

class Orc final : public NPC {
public:
    Orc() = default;
    virtual ~Orc() = default;

    virtual void battle_cry() const noexcept override;
    virtual void accept_battle() const override;
};

}; // namespace NPC