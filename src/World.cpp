#include "World.h"



World::World(int seed) : 
	_seed(seed),
	_heightMapSizeMod(75),
	_worldSizeX(500),
	_worldSizeY(500),
	_gen(seed)
{
}


World::~World()
{
}

void World::generate()
{
	int start = 1000;
	_gen.generateChunk(start-128, start+128, start-128, start+128, 20000.0f);
}
