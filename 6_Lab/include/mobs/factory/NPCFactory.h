#pragma once

#include "../types/NPCType.h"
#include "../interfaces/NPC.h"

#include "../units/Orc.h"
#include "../units/Outlaw.h"
#include "../units/Werewolf.h"

namespace mobs {

class NPCFactory final {
  public:
    static std::shared_ptr<NPC> create_NPC(NPCType) noexcept;

};

}; // namespace mobs