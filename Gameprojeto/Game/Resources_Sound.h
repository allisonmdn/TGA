#include <iostream>
#include <Global.h>
#include "libUnicornio.h"
#pragma once
class Resources_Sound : public ObjetoTileMap
{
public:
	Resources_Sound();
	virtual ~Resources_Sound();
	void setThemeSong(std::string Theme_s);
	void setEffectSong(std::string Effect_s);
	bool LoadSongs();

};

