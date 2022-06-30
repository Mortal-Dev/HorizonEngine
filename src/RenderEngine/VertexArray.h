#ifndef VERTEX_ARRAY
#define VERTEX_ARRAY

#include <glad/glad.h>
#include "VertexBuffer.h"

class VertexArray
{
    public:
        unsigned int ID;

        VertexArray();
        
        void linkAttrib(VertexBuffer& vertexBuffer, unsigned int layout, unsigned int numComponents, GLenum type, GLsizeiptr stride, void* offset);
        void bind();
        void unbind();
        void release();
};

#endif