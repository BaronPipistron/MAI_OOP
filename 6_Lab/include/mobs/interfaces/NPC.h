#pragma once

#include <fstream>
#include <iostream>
#include <memory>
#include <set>
#include <string>
#include <vector>

#include "../types/NPCType.h"

class Orc;
class Outlaw;
class Werewolf;

using set_t = std::set<std::shared_ptr<mobs::NPC>>;

namespace observers {

class Observer {
  protected:
    Observer() = default;

  public:
    virtual ~Observer() = default;

    virtual void kill_report(const mobs::NPC&, const mobs::NPC&) = 0;
};

}; // namespace observers

namespace mobs {

class NPC : public std::enable_shared_from_this<NPC> {
  protected:
    NPCType _type;
    std::string _name;
    int64_t _x { 0 };
    int64_t _y { 0 };
    std::vector<std::shared_ptr<observers::Observer>> _observers;

    static uint16_t _id;

    NPC(NPCType, 
        const std::string&, 
        const int64_t, 
        const int64_t);
        
  public:
    virtual ~NPC() = default;

    virtual std::string get_type() const = 0;
    const std::string& get_name() const;
    const int64_t get_x() const;
    const int64_t get_y() const;

    virtual void battle_cry() const = 0;

    virtual bool accept_fight(std::shared_ptr<NPC>) = 0;
    virtual bool fight(const Orc&) = 0;
    virtual bool fight(const Outlaw&) = 0;
    virtual bool fight(const Werewolf&) = 0;

    void attach(std::shared_ptr<observers::Observer>);
    void notify_kill(const NPC&) const;

    virtual void print() = 0;

    friend std::ostream& operator<<(std::ostream&, const NPC&);
};

}; // namespace mobs