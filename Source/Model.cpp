#include "Model.h"

Model::Model(const std::vector<GLfloat>& vertexPositions)
{
    glGenBuffers(1, &m_vertexId); // We now have an ID!
    glBindBuffer(GL_ARRAY_BUFFER, m_vertexId);

    glBufferData(GL_ARRAY_BUFFER,
                 vertexPositions.size() * sizeof(vertexPositions[0]),
                 vertexPositions.data(),
                 GL_STATIC_DRAW);

    glVertexAttribPointer(0, // this
                          2,
                          GL_FLOAT,
                          GL_FALSE,
                          0,
                          (GLvoid*) 0);

    glEnableVertexAttribArray(0); // < here

    glBindBuffer(GL_ARRAY_BUFFER, 0);
}

Model::~Model()
{
    glDeleteBuffers(1, &m_vertexId);
}

void Model::bind()
{
        glBindBuffer(GL_ARRAY_BUFFER, m_vertexId);
}

void Model::unbind()
{
    glBindBuffer(GL_ARRAY_BUFFER, 0);
}
