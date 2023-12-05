#include "../../include/gameManager/GameManager.h"

using namespace game::manager;

void GameManager::Play()
{
    // TODO
}

void GameManager::Pause()
{
    this->_is_paused = true;
}

void GameManager::Continue()
{
    this->_is_paused = false;
}