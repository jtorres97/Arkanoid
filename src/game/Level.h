#pragma once

#include "SpriteRenderer.h"
#include "Brick.h"

#include <string>
#include <vector>

class Level
{
public:
	Level(const std::string& path, int levelWidth, int levelHeight);
	~Level() = default;

	void Render(SpriteRenderer& renderer);
	void Reset();
	bool IsCleared();

	std::vector<std::unique_ptr<Brick>>& GetBricks();
	
private:
	std::vector<std::vector<int>> LoadTiles(const std::string& path) const;
	void InitializeLevel(std::vector<std::vector<int>>& tiles, int levelWidth, int levelHeight);
	
	std::vector<std::unique_ptr<Brick>> m_bricks;
};