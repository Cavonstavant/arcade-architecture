/*
** EPITECH PROJECT, 2022
** arcAAAAAAAAAAAAAAAAade
** File description:
** AEntity
*/

#include "AEntity.hpp"

/**
 * The constructor for the AEntity class takes two parameters, a type and an asset path. The type is
 * used to determine what kind of entity this is. The asset path is used to determine what texture to
 * load for this entity
 *
 * @param type The type of entity.
 * @param assetPath The path to the asset file.
 */
AEntity::AEntity(EntityType type, const std::string &assetPath)
{
    _assetPath = assetPath;
    _type = type;
    _pos = std::make_pair(0, 0);
    _size = std::make_pair(0, 0);
}

/**
 * The destructor is called when the object is destroyed
 */
AEntity::~AEntity()
{
}

/**
 * Returns the path to the asset file
 *
 * @return The asset path.
 */
std::string AEntity::getAssetPath() const
{
    return _assetPath;
}

/**
 * Set the asset path of this entity.
 *
 * @param assetPath The path to the asset file.
 */
void AEntity::setAssetPath(const std::string &assetPath)
{
    _assetPath = assetPath;
}

/**
 * Returns the type of the entity
 *
 * @return The type of the entity.
 */
IEntity::EntityType AEntity::getType() const
{
    return _type;
}

/**
 * Set the type of the entity.
 *
 * @param type The type of entity.
 */
void AEntity::setType(IEntity::EntityType type)
{
    _type = type;
}

/**
 * Returns the position of the entity
 *
 * @return The position of the entity.
 */
std::pair<int, int> AEntity::getPos() const
{
    return _pos;
}

/**
 * Set the position of the entity to pos.
 *
 * @param pos The position of the entity.
 */
void AEntity::setPos(std::pair<int, int> pos)
{
    _pos = pos;
}

/**
 * Returns the size of the entity
 *
 * @return The size of the entity.
 */
std::pair<int, int> AEntity::getSize() const
{
    return _size;
}

/**
 * Set the size of the entity
 *
 * @param size The size of the entity.
 */
void AEntity::setSize(std::pair<int, int> size)
{
    _size = size;
}
