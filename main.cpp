/*
 * @FilePath: main.cpp
 * @Author: sunlulu.tomato@bytedance.com
 * @Date: 2022-10-23 23:30:12
 * 
 * This file is part of LiveCore project. 
 * Copyright (c) 2022 by LiveCore Team of ByteDance, All Rights Reserved.
 */
#include <iostream>
#define GLEW_STATIC
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include "utils.cpp"

using namespace std;

const int DEBUG = 0;

#define numVAOs 1


GLuint renderingProgram;
GLuint vao[numVAOs];

GLuint createShaderProgram() {
    const char* vShaderCode = 
        "#version 410 \n"
        "void main() \n"
        "{ gl_Position = vec4(0.0, 0.0, 0.0, 1.0); }";

    const char* fragShaderCode = 
        "#version 410 \n"
        "out vec4 color; \n"
        "void main() \n"
        "{ if (gl_FragCoord.x < 200) color = vec4(1.0, 0.0, 0.0, 1.0); else color = vec4(0.0, 0.0, 1.0, 1.0); }";

    GLuint vShader = glCreateShader(GL_VERTEX_SHADER);
    GLuint fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);

    glShaderSource(vShader, 1, &vShaderCode, NULL);
    glShaderSource(fragmentShader, 1, &fragShaderCode, NULL);

    glCompileShader(vShader);
    glCompileShader(fragmentShader);

    GLuint vfProgram = glCreateProgram();
    glAttachShader(vfProgram, vShader);
    glAttachShader(vfProgram, fragmentShader);
    glLinkProgram(vfProgram);

    return vfProgram;
}

using namespace std;

void init(GLFWwindow* window) {
    renderingProgram  = createShaderProgram();
    cout << "create shader program " << renderingProgram << endl;
    glGenVertexArrays(numVAOs, vao);
    glBindVertexArray(vao[0]);
}

void display(GLFWwindow* window, double currentTime) {
    // glClearColor(1.0, 1.0, 0.0, 1.0);
    // glClear(GL_COLOR_BUFFER_BIT);

    glUseProgram(renderingProgram);
    glPointSize(30.0f);
    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE); // 线性插值
    glDrawArrays(GL_POINTS, 0, 1);
}


int main() {
    std::cout << "Hello world" << std::endl;
    if (!glfwInit()) {
        exit(EXIT_FAILURE);
    }
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 1);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);

    GLFWwindow* window = glfwCreateWindow(600, 600, "Chapter2-program1", NULL, NULL);
    cout << "create window " << window << endl;

    glfwMakeContextCurrent(window);
    if (glewInit() != GLEW_OK) {
        exit(EXIT_FAILURE);
    }
    glfwSwapInterval(1);
    init(window);
    while (!glfwWindowShouldClose(window)) {
        display(window, glfwGetTime());
        glfwSwapBuffers(window);
        glfwPollEvents();
    }


    glfwDestroyWindow(window);
    glfwTerminate();
    exit(EXIT_SUCCESS);
}