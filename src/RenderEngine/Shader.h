#ifndef SHADER_H
#define SHADER_H

#include <glad/glad.h>
#include <string>

class Shader
{
    public:
        unsigned int ID;
        Shader(const char* vertexFile, const char* fragmentFile);

        void activate();
        void release();
        
    private:
        void compileErrors(unsigned int shader, const char* type);
};

#endif