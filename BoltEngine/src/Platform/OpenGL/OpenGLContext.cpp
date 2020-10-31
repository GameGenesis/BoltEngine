#include "bepch.h"
#include "OpenGLContext.h"

#include <GLFW/glfw3.h>
#include <glad/glad.h>
#include <GL/GL.h>


namespace BoltEngine
{
	OpenGLContext::OpenGLContext(GLFWwindow* windowHandle)
		:m_WindowHandle(windowHandle) { BOLTENGINE_CORE_ASSERT(windowHandle, "Window handle is null!"); }

	void OpenGLContext::Init()
	{
		glfwMakeContextCurrent(m_WindowHandle);
		int status = gladLoadGLLoader((GLADloadproc)glfwGetProcAddress);
		BOLTENGINE_CORE_ASSERT(status, "Failed to initialize GLAD!");

		BOLTENGINE_CORE_TRACE("--------------------------------------------------------------------------------------");
		BOLTENGINE_CORE_INFO("OpenGL Info:");
		BOLTENGINE_CORE_INFO("  Vendor: {0}", glGetString(GL_VENDOR));
		BOLTENGINE_CORE_INFO("  Renderer: {0}", glGetString(GL_RENDERER));
		BOLTENGINE_CORE_INFO("  Version: {0}", glGetString(GL_VERSION));
	}

	void OpenGLContext::SwapBuffers()
	{
		glfwSwapBuffers(m_WindowHandle);
	}
}
