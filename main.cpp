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

const int DEBUG = 0;

using namespace std;

void init(GLFWwindow* window) {

}

void debug_print(const char* message) {
    if (DEBUG) {
        std::cout << message << std::endl;
    }
}


void display(GLFWwindow* window, double currentTime) {
    glClearColor(1.0, 1.0, 0.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);
}


int main() {
    std::cout << "Hello world" << std::endl;
    if (!glfwInit()) {
        exit(EXIT_FAILURE);
    }
    debug_print("40");

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);

    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);

    debug_print("48");

    GLFWwindow* window = glfwCreateWindow(600, 600, "Chapter2-program1", NULL, NULL);
    cout << "create window " << window << endl;

    glfwMakeContextCurrent(window);

    if (glewInit() != GLEW_OK) {
        debug_print("55");
        exit(EXIT_FAILURE);
    }

    glfwSwapInterval(1);

    init(window);

    while (!glfwWindowShouldClose(window)) {
        display(window, glfwGetTime());
        glfwSwapBuffers(window);
        glfwPollEvents();
        debug_print("66");
    }


    glfwDestroyWindow(window);
    glfwTerminate();
    exit(EXIT_SUCCESS);
}