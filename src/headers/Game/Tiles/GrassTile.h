#ifndef GRASSTILE_H
#define GRASSTILE_H

#include <SFML\Graphics.hpp>
#include "../Tile.h"

class GrassTile : public Tile {
public:
	GrassTile(const std::string &name);

	virtual void use(Tool &tool, Pawn &pawn) override;
};

#endif GRASSTILE_H