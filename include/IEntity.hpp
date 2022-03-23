/*
** EPITECH PROJECT, 2022
** arcAAAAAAAAAAAAAAAAade
** File description:
** IEntity
*/

#ifndef IENTITY_HPP_
#define IENTITY_HPP_

#include <string>

/// \brief represents a generic entity within the game
class IEntity {
    public:
        /// \brief represent the entity type
        enum EntityType {
            PLAYER,
            ENEMY,
            ITEM,
            WALL,
            ENTITY_NUM //< Keep last to track the number of type avail
        };

        /// \brief Destructor
        ~IEntity() = default;
        /// \brief Get the entity type
        /// \return the EntityType
        virtual EntityType getType() const = 0;
        /// \brief Set the entity type
        /// \param type the EntityType
        virtual void setType(EntityType type) = 0;
        /// \brief Get the entity position
        /// \return the std::pair<int, int> position
        virtual std::pair<int, int> getPos() const = 0;
        /// \brief Set the entity position
        /// \param pos the std::pair<int, int> position
        virtual void setPos(std::pair<int, int> pos) = 0;
        /// \brief Get the entity size
        /// \return the std::pair<int, int> size
        virtual std::pair<int, int> getSize() const = 0;
        /// \brief Set the entity size
        /// \param size the std::pair<int, int> size
        virtual void setSize(std::pair<int, int> size) = 0;
};

#endif /* !IENTITY_HPP_ */
