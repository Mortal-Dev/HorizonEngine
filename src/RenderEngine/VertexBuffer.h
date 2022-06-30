#ifndef VERTEX_BUFFER
#define VERTEX_BUFFER

#include <glad/glad.h>

class VertexBuffer
{
    public:
        unsigned int ID;
        VertexBuffer(float* vertices, size_t size);

        void bind();
        void unbind();
        void release();
};


#endif