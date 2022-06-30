#ifndef INDEX_BUFFER
#define INDEX_BUFFER

#include <glad/glad.h>

class IndexBuffer
{
    public:
        unsigned int ID;
        IndexBuffer(unsigned int* indicies, size_t size);

        void bind();
        void unbind();
        void release();
};

#endif