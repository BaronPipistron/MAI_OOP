#include "../../include/utils/DistanceCalculator.h"

double utils::DistanceCalculator::calculate_distance(std::shared_ptr<NPC> npc_1,
                                                     std::shared_ptr<NPC> npc_2)
{
    double distance = sqrt(
                           ((*npc_1).get_x() - (*npc_2).get_x()) * 
                           ((*npc_1).get_x() - (*npc_2).get_x()) +
                           ((*npc_1).get_y() - (*npc_2).get_y()) *
                           ((*npc_1).get_y() - (*npc_2).get_y())
                           );
    return distance;
}