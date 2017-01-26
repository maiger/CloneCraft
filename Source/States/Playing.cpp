#include "Playing.h"

#include <iostream>
#include <SFML/System/Clock.hpp>

#include "../Renderer/Master.h"

namespace State
{
    sf::Clock clock;

    Playing::Playing(Application& application)
    : Game_State    (application)
    {
        m_texture.load("grass");
        m_texture.bind();

        //m_quad.position.z = -3;

        auto testSize = 50;

        for (int x = -testSize ; x < testSize ; x++)
        {
            for (int z = testSize ; z > -testSize ; z--)
            {
                Quad* quad = new Quad();
                quad->rotation.x = 90;
                quad->position = {x, -1, z};
                m_quads.push_back(quad);
            }
        }
        std::cout << m_quads.size() << std::endl;
    }

    void Playing::input(Entity& camera)
    {

    }

    void Playing::update(Entity& camera)
    {
        //m_quad.position.x = sin(clock.getElapsedTime().asSeconds());
        for (auto& quad : m_quads)
        {
            quad->position.y = sin(clock.getElapsedTime().asSeconds());
        }
    }

    void Playing::draw(Renderer::Master& renderer)
    {
        //renderer.draw(m_quad);
          for (auto& quad : m_quads)
          {
                renderer.draw(*quad);
          }
    }
}
