#include "../../../include/mobs/units/Orc.h"

mobs::Orc::Orc(const int64_t __x, const int64_t __y) :
    NPC(NPCType::Orc, "Orc_" + std::to_string(_id++), __x, __y)
{
}

std::string mobs::Orc::get_type() const 
{
    return "Orc";
}

void mobs::Orc::battle_cry() const
{
    std::cout << "lok'tar Ogar!!!" << std::endl;
}

bool mobs::Orc::accept_fight(std::shared_ptr<NPC> opponent)
{
    if (opponent->fight(*this)) return true;

    return false;
}

bool mobs::Orc::fight(const Orc& opponent)
{
    return false;
}

bool mobs::Orc::fight(const Outlaw& opponent)
{
    return true;
}

bool mobs::Orc::fight(const Werewolf& opponent)
{
    return false;
}

void mobs::Orc::print()
{
    std::cout << *this;
}