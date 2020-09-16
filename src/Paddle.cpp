#include "Paddle.h"
#include "InputManager.h"

#include <GLFW/glfw3.h>

#include <iostream>

Paddle::Paddle(const glm::vec2& position, const glm::vec2& size, const glm::vec3& color, Texture* sprite, float velocity, const glm::vec2& boundaries)
	: GameObject(position, size, color, sprite)
	, m_velocity(velocity)
	, m_boundaries(boundaries)
{
	// m_inputManager.AddKeyHandler("movePaddle", [this](float delta)
	// {
	// 	if (m_inputManager.IsKeyPressed(GLFW_KEY_A) || m_inputManager.IsKeyPressed(GLFW_KEY_LEFT))
	// 	{
	// 		if (m_position.x >= m_boundaries.x)
	// 		{
	// 			m_position.x -= m_velocity * delta;
	// 		}
	// 	}
	// 	if (m_inputManager.IsKeyPressed(GLFW_KEY_D) || m_inputManager.IsKeyPressed(GLFW_KEY_RIGHT))
	// 	{
	// 		if (m_position.x <= m_boundaries.y)
	// 		{
	// 			m_position.x += m_velocity * delta;
	// 		}
	// 	}
	// });
}

float Paddle::GetVelocity() const
{
	return m_velocity;
}

const glm::vec2& Paddle::GetBoundaries() const
{
	return m_boundaries;
}
