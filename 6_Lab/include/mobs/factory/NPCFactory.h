#pragma once

#include "../types/NPCType.h"
#include "../interfaces/NPC.h"

#include "../units/Orc.h"
#include "../units/Outlaw.h"
#include "../units/Werewolf.h"

namespace mobs {

class NPCFactory final {
  public:
    static std::shared_ptr<NPC> create_NPC(NPCType, const int64_t, const int64_t) noexcept;
    static set_t load_NPC(const std::string&) noexcept;
};

}; // namespace mobs