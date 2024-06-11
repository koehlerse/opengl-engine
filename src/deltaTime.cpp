#include <deltaTime.h>

namespace DeltaTime
{
	float DeltaTimeVal = 0.0f;
	float LastTime = 0.0f;

	void CalcDeltaTime()
	{
		float currentTime = (float)glfwGetTime();
		DeltaTimeVal = currentTime - LastTime;
		LastTime = currentTime;
	}
}
