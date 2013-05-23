/**
 * Voxel Engine
 *
 * (c) Joshua Farr <j.wgasa@gmail.com>
 *
 */

#pragma once

#include <vertical3d/gl/Program.h>
#include <vertical3d/gl/TextureFontRenderer.h>

#include <boost/shared_ptr.hpp>

class AssetLoader;
class Scene;

class DebugOverlay
{
	public:
		DebugOverlay(boost::shared_ptr<Scene> scene, boost::shared_ptr<v3D::Program> shaderProgram, boost::shared_ptr<AssetLoader> loader);

		void enable(bool status);
		void render();
		void update(unsigned int delta);

		bool enabled() const;

	private:
		boost::shared_ptr<Scene> scene_;
		bool enabled_;
		v3D::TextureTextBuffer::Markup markup_;
		boost::shared_ptr<v3D::TextureFontRenderer> renderer_;
		size_t frames_;
		size_t elapsed_;
};