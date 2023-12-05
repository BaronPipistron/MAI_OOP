#include "../../../include/mobs/factory/NPCFactory.h"

using namespace mobs;

std::shared_ptr<NPC> NPCFactory::create_NPC(NPCType __type, const int64_t __x, const int64_t __y) noexcept
{
    std::shared_ptr<NPC> result;

    switch (__type) {
        case NPCType::Orc:
            result = std::make_shared<Orc>(__x, __y);
            break;
        case NPCType::Outlaw:
            result = std::make_shared<Outlaw>(__x, __y);
            break;
        case NPCType::Werewolf:
            result = std::make_shared<Werewolf>(__x, __y);
            break;
        default:
            break;
    }
    return result;
}

set_t NPCFactory::load_NPC(const std::string& file_name) noexcept
{
    set_t result;
    std::ifstream ifs(file_name);

    // TODO
}