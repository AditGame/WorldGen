#pragma once

#include <noise/noise.h>
#include "noiseutils.h"

#include "WorldGenerator.h"

//This class contains information about the world itself, such as material and whatnot
class World
{
public:
	World(int seed);
	~World();

	void generate();


private:
	WorldGenerator _gen;

	int _seed;

	const float _heightMapSizeMod;
	const int _worldSizeX;
	const int _worldSizeY;
};

