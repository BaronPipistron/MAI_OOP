#include "../../../include/mobs/units/Outlaw.h"

mobs::Outlaw::Outlaw(const int64_t __x, const int64_t __y) :
    NPC(NPCType::Outlaw, "Outlaw_" + std::to_string(_id++), __x, __y)
{
}

std::string mobs::Outlaw::get_type() const 
{
    return "Outlaw";
}

void mobs::Outlaw::battle_cry() const
{
    std::cout << "Bar-rr-a!!!" << std::endl;
}

bool mobs::Outlaw::accept_fight(std::shared_ptr<NPC> opponent)
{
    if (opponent->fight(*this)) return true;

    return false;
}

bool mobs::Outlaw::fight(const Orc& opponent)
{
    return false;
}

bool mobs::Outlaw::fight(const Outlaw& opponent)
{
    return false;
}

bool mobs::Outlaw::fight(const Werewolf& opponent)
{
    return true;
}

void mobs::Outlaw::print()
{
    std::cout << *this;
}