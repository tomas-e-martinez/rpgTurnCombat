#pragma once

#include <iostream>

#include "Entity.h"

class Player : public Entity{
public:
    using Entity::Entity;
    void saludar();
};
