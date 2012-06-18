/*--------------------------------------------------------------------------------------
 Ethanon Engine (C) Copyright 2008-2012 Andre Santee
 http://www.asantee.net/ethanon/

	Permission is hereby granted, free of charge, to any person obtaining a copy of this
	software and associated documentation files (the "Software"), to deal in the
	Software without restriction, including without limitation the rights to use, copy,
	modify, merge, publish, distribute, sublicense, and/or sell copies of the Software,
	and to permit persons to whom the Software is furnished to do so, subject to the
	following conditions:

	The above copyright notice and this permission notice shall be included in all
	copies or substantial portions of the Software.

	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
	INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A
	PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
	HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF
	CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE
	OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
--------------------------------------------------------------------------------------*/

#include "ETHParallaxManager.h"

ETHParallaxManager::ETHParallaxManager()
 : m_normalizedOrigin(0.5f, 0.5f), m_intensity(0)
{
}

ETHParallaxManager::ETHParallaxManager(const Vector2& normalizedOrigin, const float intensity)
{
	SetNormalizedOrigin(normalizedOrigin);
	SetIntensity(intensity);
}

void ETHParallaxManager::SetNormalizedOrigin(const Vector2& normalizedOrigin)
{
	m_normalizedOrigin = normalizedOrigin;
}

Vector2 ETHParallaxManager::GetNormalizedOrigin() const
{
	return m_normalizedOrigin;
}

Vector2 ETHParallaxManager::GetInScreenOrigin(const VideoConstPtr& video) const
{
	return GetNormalizedOrigin()*video->GetScreenSizeF();
}

void ETHParallaxManager::SetIntensity(const float intensity)
{
	m_intensity = intensity;
}

float ETHParallaxManager::GetIntensity() const
{
	return m_intensity;
}

void ETHParallaxManager::SetShaderParameters(const VideoConstPtr& video, const ShaderPtr& shader, const Vector3& entityPos,
											 const float& individualParallaxIntensity, const bool drawToTarget) const
{
	GS2D_UNUSED_ARGUMENT(video);
	GS2D_UNUSED_ARGUMENT(shader);
	GS2D_UNUSED_ARGUMENT(entityPos);
	GS2D_UNUSED_ARGUMENT(individualParallaxIntensity);
	GS2D_UNUSED_ARGUMENT(drawToTarget);
}
