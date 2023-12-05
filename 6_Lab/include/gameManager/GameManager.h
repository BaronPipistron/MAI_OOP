#pragma once

#include "../gameRedactor/GameRedactor.h"

namespace game::manager {

class GameManager final {
  private:
    bool _is_paused { false };

  public:
    GameManager() = default;
    virtual ~GameManager() = default;

    void Play();
    void Pause();
    void Continue();
};

};