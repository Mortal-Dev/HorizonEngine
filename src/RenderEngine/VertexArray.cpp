#include <iostream>
#include "VertexArray.h"

VertexArray::VertexArray()
{
    glGenVertexArrays(1, &ID);

}

void VertexArray::linkAttrib(VertexBuffer& vertexBuffer, unsigned int layout, unsigned int numComponents, GLenum type, GLsizeiptr stride, void* offset)
{
    vertexBuffer.bind();
    glVertexAttribPointer(layout, numComponents, type, GL_FALSE, stride, offset);
    glEnableVertexAttribArray(layout);
    vertexBuffer.unbind();
}

void VertexArray::bind()
{
    glBindVertexArray(ID);
}

void VertexArray::unbind()
{
    glBindVertexArray(0);
}

void VertexArray::release()
{
    glDeleteVertexArrays(1, &ID);
}