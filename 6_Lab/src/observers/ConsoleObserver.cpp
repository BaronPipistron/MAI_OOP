#include "../../include/observers/ConsoleObserver.h"

using namespace observers;

void ConsoleObserver::kill_report(const mobs::NPC& attacker, const mobs::NPC& defender)
{
    std::cout << defender << " | killed by | " << attacker << std::endl;
}