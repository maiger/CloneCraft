#include "Playing.h"

#include <iostream>
#include <SFML/System/Clock.hpp>

#include "../Renderer/Master.h"

#include "../Camera.h"

namespace State
{
    sf::Clock clock;

    Playing::Playing(Application& application)
    : Game_State    (application)
    {
        m_texture.load("grass");
        m_texture.bind();

        m_quad.position.z = -3;
    }

    void Playing::input(Camera& camera)
    {

    }

    void Playing::update(Camera& camera, float dt)
    {
        camera.input(dt);

        m_quad.position.x = sin(clock.getElapsedTime().asSeconds());
    }

    void Playing::draw(Renderer::Master& renderer)
    {
        renderer.draw(m_quad);
    }
}
