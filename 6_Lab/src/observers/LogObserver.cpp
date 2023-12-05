#include "../../include/observers/LogObserver.h"

using namespace observers;

LogObserver::LogObserver() :
    _os("../../logs/battle_logs.txt")
{
}

void LogObserver::kill_report(const mobs::NPC& attacker, const mobs::NPC& defender)
{
    _os << defender << " | killed by | " << attacker << std::endl;
}