#include "Quad.h"

#include  <vector>

std::vector<GLfloat> vertexPositions =
{
    //Back
    1, 0, 0,
    0, 0, 0,
    0, 1, 0,
    1, 1, 0,

    //Right-Side
    1, 0, 1,
    1, 0, 0,
    1, 1, 0,
    1, 1, 1,

    //Front
    0, 0, 1,
    1, 0, 1,
    1, 1, 1,
    0, 1, 1,

    //Left
    0, 0, 0,
    0, 0, 1,
    0, 1, 1,
    0, 1, 0,

    //Top
    0, 1, 1,
    1, 1, 1,
    1, 1, 0,
    0, 1, 0,

    //Bottom
    0, 0, 0,
    1, 0, 0,
    1, 0, 1,
    0, 0, 1
};

std::vector<GLfloat> textureCoords =
{
    //Texture coords are same for every face
    1.0, 1.0,
    0.0, 1.0,
    0.0, 0.0,
    1.0, 0.0,

    1.0, 1.0,
    0.0, 1.0,
    0.0, 0.0,
    1.0, 0.0,

    1.0, 1.0,
    0.0, 1.0,
    0.0, 0.0,
    1.0, 0.0,

    1.0, 1.0,
    0.0, 1.0,
    0.0, 0.0,
    1.0, 0.0,

    1.0, 1.0,
    0.0, 1.0,
    0.0, 0.0,
    1.0, 0.0,

    1.0, 1.0,
    0.0, 1.0,
    0.0, 0.0,
    1.0, 0.0,
};

std::vector<GLuint> indices =
{
    // Back
    0, 1, 2,
    2, 3, 0,

    // Right-Side
    4, 5, 6,
    6, 7, 4,

    // Front
    8, 9, 10,
    10, 11, 8,

    // Left
    12, 13, 14,
    14, 15, 12,

    // Top
    16, 17, 18,
    18, 19, 16,

    // Bottom
    20, 21, 22,
    22, 23, 20
};

Quad::Quad()
:   m_model       (vertexPositions, textureCoords, indices)
{

}

const Model& Quad::getModel() const
{
    return m_model;
}

