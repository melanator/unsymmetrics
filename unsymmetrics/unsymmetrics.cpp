#include "imgui.h"
#include "imgui_impl_glfw.h"
#include "imgui_impl_opengl3.h"
// #include "glad.h"
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>

int main(void)
{
    GLFWwindow* window;

    

    /* Initialize the library */
    if (!glfwInit())
        return -1;

    
    

    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    /* Initialize GLEW */
    if (glewInit() != GLEW_OK)
        std::cerr << "GLEW Init Error" << std::endl;

    std::cout << glGetString(GL_VERSION) << std::endl;

    float positions[6] = {
        -0.5f, 0.5f,
         0.0f, 0.5f,
         0.5, -0.5f
    };

    unsigned int buffer;
    glGenBuffers(1, &buffer);
    glBindBuffer(GL_ARRAY_BUFFER, buffer);
    glBufferData(GL_ARRAY_BUFFER, 6 * sizeof(float));

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}