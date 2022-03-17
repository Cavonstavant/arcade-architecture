/*
** EPITECH PROJECT, 2022
** arcAAAAAAAAAAAAAAAAade
** File description:
** AEntity
*/

#ifndef AENTITY_HPP_
#define AENTITY_HPP_

#include "../commonInterface/include/IEntity.hpp"

class AEntity : public IEntity {
public:
    AEntity(EntityType type, const std::string &assetPath);
    ~AEntity();

    std::string getAssetPath() const;
    void setAssetPath(const std::string &assetPath);
    EntityType getType() const;
    void setType(EntityType type);
    std::pair<int, int> getPos() const;
    void setPos(std::pair<int, int> pos);
    std::pair<int, int> getSize() const;
    void setSize(std::pair<int, int> size);

protected:
private:
    std::string _assetPath;
    EntityType _type;
    std::pair<int, int> _pos;
    std::pair<int, int> _size;
};

#endif /* !AENTITY_HPP_ */
