#pragma once

#include "../mobs/interfaces/NPC.h"

using namespace mobs;

namespace game::redactor {

class GameRedactor final {
  public:
    GameRedactor() = default;
    virtual ~GameRedactor() = default;

    void add_NPC(NPCType, 
                 const std::string&, 
                 const int64_t, 
                 const int64_t);

    void save_data(const set_t&, const std::string&);
    set_t load_data(const std::string&);
    
    void start_battle(const int64_t);
};

}; // namespace game::redactor