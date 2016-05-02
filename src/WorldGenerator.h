#pragma once

#include <noise/noise.h>
#include "noiseutils.h"

class WorldGenerator
{
public:
	WorldGenerator(int seed);
	~WorldGenerator();



	utils::NoiseMap generateChunk(double xMin, double xMax, double yMin, double yMax, double sizeMod);
private:

	const int CUR_SEED;


	// Circumference of the planet, in meters.
	const double PLANET_CIRCUMFERENCE;

	// Minimum elevation on the planet, in meters.  This value is approximate.
	const double MIN_ELEV;

	// Maximum elevation on the planet, in meters.  This value is approximate.
	const double MAX_ELEV;

	// Frequency of the planet's continents.  Higher frequency produces smaller,
	// more numerous continents.  This value is measured in radians.
	const double CONTINENT_FREQUENCY;

	// Lacunarity of the planet's continents.  Changing this value produces
	// slightly different continents.  For the best results, this value should
	// be random, but close to 2.0.
	const double CONTINENT_LACUNARITY;

	// Lacunarity of the planet's mountains.  Changing this value produces
	// slightly different mountains.  For the best results, this value should
	// be random, but close to 2.0.
	const double MOUNTAIN_LACUNARITY;

	// Lacunarity of the planet's hills.  Changing this value produces slightly
	// different hills.  For the best results, this value should be random, but
	// close to 2.0.
	const double HILLS_LACUNARITY;

	// Lacunarity of the planet's plains.  Changing this value produces slightly
	// different plains.  For the best results, this value should be random, but
	// close to 2.0.
	const double PLAINS_LACUNARITY;

	// Lacunarity of the planet's badlands.  Changing this value produces
	// slightly different badlands.  For the best results, this value should be
	// random, but close to 2.0.
	const double BADLANDS_LACUNARITY;

	// Specifies the "twistiness" of the mountains.
	const double MOUNTAINS_TWIST;

	// Specifies the "twistiness" of the hills.
	const double HILLS_TWIST;

	// Specifies the "twistiness" of the badlands.
	const double BADLANDS_TWIST;

	// Specifies the planet's sea level.  This value must be between -1.0
	// (minimum planet elevation) and +1.0 (maximum planet elevation.)
	const double SEA_LEVEL;

	// Specifies the level on the planet in which continental shelves appear.
	// This value must be between -1.0 (minimum planet elevation) and +1.0
	// (maximum planet elevation), and must be less than SEA_LEVEL.
	const double SHELF_LEVEL;

	// Determines the amount of mountainous terrain that appears on the
	// planet.  Values range from 0.0 (no mountains) to 1.0 (all terrain is
	// covered in mountains).  Mountainous terrain will overlap hilly terrain.
	// Because the badlands terrain may overlap parts of the mountainous
	// terrain, setting MOUNTAINS_AMOUNT to 1.0 may not completely cover the
	// terrain in mountains.
	const double MOUNTAINS_AMOUNT;

	// Determines the amount of hilly terrain that appears on the planet.
	// Values range from 0.0 (no hills) to 1.0 (all terrain is covered in
	// hills).  This value must be less than MOUNTAINS_AMOUNT.  Because the
	// mountainous terrain will overlap parts of the hilly terrain, and
	// the badlands terrain may overlap parts of the hilly terrain, setting
	// HILLS_AMOUNT to 1.0 may not completely cover the terrain in hills.
	const double HILLS_AMOUNT;

	// Determines the amount of badlands terrain that covers the planet.
	// Values range from 0.0 (no badlands) to 1.0 (all terrain is covered in
	// badlands.)  Badlands terrain will overlap any other type of terrain.
	const double BADLANDS_AMOUNT;

	// Offset to apply to the terrain type definition.  Low values (< 1.0) cause
	// the rough areas to appear only at high elevations.  High values (> 2.0)
	// cause the rough areas to appear at any elevation.  The percentage of
	// rough areas on the planet are independent of this value.
	const double TERRAIN_OFFSET;

	// Specifies the amount of "glaciation" on the mountains.  This value
	// should be close to 1.0 and greater than 1.0.
	const double MOUNTAIN_GLACIATION;

	// Scaling to apply to the base continent elevations, in planetary elevation
	// units.
	const double CONTINENT_HEIGHT_SCALE;

	// Maximum depth of the rivers, in planetary elevation units.
	const double RIVER_DEPTH;
};

