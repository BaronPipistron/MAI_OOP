#pragma once

#include <fstream>
#include <iostream>
#include <memory>

#include "../units/NPCType.h"

namespace NPC {

class NPC : public std::enable_shared_from_this<NPC> {
protected:
    NPCType _type;
    int64_t _x { 0 };
    int64_t _y { 0 };

    NPC() = default;

public:
    NPC(NPCType, int64_t, int64_t);
    NPC(NPCType, std::istream&);

    virtual ~NPC() = default;

    virtual void battle_cry() const = 0;
    virtual void accept_battle() const = 0;

    virtual void print() const = 0;
};

}; // namespace NPC