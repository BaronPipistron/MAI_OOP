#include "../../../include/mobs/units/Werewolf.h"

mobs::Werewolf::Werewolf(const int64_t __x, const int64_t __y) :
    NPC(NPCType::Werewolf, "Werewolf_" + std::to_string(_id++), __x, __y)
{
}

std::string mobs::Werewolf::get_type() const 
{
    return "Werewolf";
}

void mobs::Werewolf::battle_cry() const
{
    std::cout << "ROOAARRHH!!!" << std::endl;
}

bool mobs::Werewolf::accept_fight(std::shared_ptr<NPC> opponent)
{
    if (opponent->fight(*this)) return true;

    return false;
}

bool mobs::Werewolf::fight(const Orc& opponent)
{
    return false;
}

bool mobs::Werewolf::fight(const Outlaw& opponent)
{
    return true;
}

bool mobs::Werewolf::fight(const Werewolf& opponent)
{
    return false;
}

void mobs::Werewolf::print()
{
    std::cout << *this;
}