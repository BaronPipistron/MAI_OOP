#include "../../../include/mobs/interfaces/NPC.h"

mobs::NPC::NPC(NPCType __type, 
               const std::string& __name, 
               const int64_t __x, 
               const int64_t __y) :
    _type(__type), _name(__name), _x(__x), _y(__y)
{
}

const std::string& mobs::NPC::get_name() const
{
    return _name;
}

const int64_t mobs::NPC::get_x() const
{
    return _x;
}

const int64_t mobs::NPC::get_y() const
{
    return _y;
}

void mobs::NPC::attach(std::shared_ptr<observers::Observer> observer)
{
    _observers.push_back(observer);
}

void mobs::NPC::notify_kill(const NPC& defender) const
{
    for (auto& o : _observers) {
        o->kill_report(*this, defender);
    }
}

namespace mobs {

std::ostream& operator<<(std::ostream& os, const NPC& npc)
{
    os << "{ x:" << npc._x << ", y:" << npc._y << "} ";
    return os;
}

}; // namespace mobs