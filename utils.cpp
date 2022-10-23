/*
 * @FilePath: utils.cpp
 * @Author: sunlulu.tomato@bytedance.com
 * @Date: 2022-10-24 01:59:35
 * 
 * This file is part of LiveCore project. 
 * Copyright (c) 2022 by LiveCore Team of ByteDance, All Rights Reserved.
 */
#ifndef _UTILS_H_
#define _UTILS_H_

#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>

using namespace std;

void printShaderLog(GLuint shader) {
    int len = 0;
    int chWrittn = 0;
    char* log;
    glGetShaderiv(shader, GL_INFO_LOG_LENGTH, &len);

    if (len > 0) {
        log = (char*) malloc(len);
        glGetShaderInfoLog(shader, len, &chWrittn, log);
        cout << "Shader info log: " << log << endl;
        free(log);
    }
}


void printProgramLog(int prog) {
    int len = 0;
    int chWrittn = 0;
    char* log;
    glGetProgramiv(prog, GL_INFO_LOG_LENGTH, &len);
    if (len > 0) {
        log = (char*) malloc(len);
        glGetProgramInfoLog(prog, len, &chWrittn, log);
        cout << "Program Info log: " << log << endl;
        free(log);
    }
}

bool checkOpenGlError() {
    bool foundError = false;
    int glError = glGetError();
    while (glError != GL_NO_ERROR) {
        cout << "glError: " << glError << endl;
        foundError = true;
        glError = glGetError();
    }
    return foundError;
}


#endif