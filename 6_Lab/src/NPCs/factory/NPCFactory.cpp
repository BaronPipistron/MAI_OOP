#include "../../../include/NPCs/factory/NPCFactory.h"

namespace NPC {

std::shared_ptr<NPC> NPCFactory::create_NPC(NPCType type) const noexcept {
    switch (type) {
        case NPCType::Outlaw :
            return std::make_shared<Outlaw>();

        case NPCType::Orc :
            return std::make_shared<Orc>();

        case NPCType::Werewolf :
            return std::make_shared<Werewolf>();

        default :
            return nullptr;
    }
}

}; // namespace NPC