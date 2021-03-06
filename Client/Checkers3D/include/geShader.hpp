/*
 * TP3 LAIG
 *
 * Eduardo Fernandes  200803951
 *
 * Shader class.
 */

#ifndef GESHADER_HPP
#define GESHADER_HPP

#include "hoIncludes.hpp"

class geShader {
private:
    GLuint ID;
    GLuint vertexShaderPointer;
    GLuint fragmentShaderPointer;

    int timeloc;

    unsigned int totalTimePassed;

public:
    geShader(const char *vsFile, const char *fsFile);
    virtual ~geShader();

    virtual void update(float time);		///< Updates the _time_ uniform (if it exists) with the value _time_.

    /* Activates the shader */
    virtual void bind();
    /* Deactivates the shader, and reactivates the fixed-function pipeline */
    virtual void unbind();

    unsigned int getId();
};

#endif
