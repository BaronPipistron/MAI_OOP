#pragma once

#include "../interface/NPC.h"
#include "../units/NPCType.h"

#include "../units/Outlaw.h"
#include "../units/Orc.h"
#include "../units/Werewolf.h"

namespace NPC {

class NPCFactory final {
public:
    std::shared_ptr<NPC> create_NPC(NPCType) const noexcept;
};

}; // namespace NPC