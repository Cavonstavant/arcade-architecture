/*
** EPITECH PROJECT, 2022
** arcAAAAAAAAAAAAAAAAade
** File description:
** IEntity
*/

#ifndef IENTITY_HPP_
#define IENTITY_HPP_

#include <string>

class IEntity {
public:
    enum EntityType {
        PLAYER_ENTITY,
        ENEMY_ENTITY,
        ITEM_ENTITY,
        WALL_ENTITY,
    };

    ~IEntity() = default;
    virtual std::string getTexture() const = 0;
    virtual void setTexture(const std::string &texture) = 0;
    virtual EntityType getType() const = 0;
    virtual void setType(EntityType type) = 0;
    virtual std::pair<int, int> getPos() const = 0;
    virtual void setPos(std::pair<int, int> pos) = 0;
    virtual std::pair<int, int> getSize() const = 0;
    virtual void setSize(std::pair<int, int> size) = 0;
};

#endif /* !IENTITY_HPP_ */
