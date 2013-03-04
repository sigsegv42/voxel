/**
 * Voxel Engine
 *
 * (c) Joshua Farr <j.wgasa@gmail.com>
 *
 */

#pragma once

#include "Vertex.h"
#include "Color.h"
#include "Normal.h"

#include <vector>
#include <string>
#include <map>

class Mesh
{
	public:
		Mesh();

		unsigned int addVertex(const Vertex & vertex);
		void addTri(unsigned int a, unsigned int b, unsigned int c);
		void addColor(const Color & color);
		void addNormal(const Normal & normal);

		unsigned int findVertex(const Vertex & vertex);

		std::vector<Vertex> & vertices();
		std::vector<unsigned int> & tris();
		std::vector<Color> & colors();
		std::vector<Normal> & normals();

		void addBuffer(const std::string & name, unsigned int id);
		unsigned int buffer(const std::string & name);

	private:
		std::vector<Vertex> vertices_;
		std::vector<unsigned int> tris_;
		std::vector<Color> colors_;
		std::vector<Normal> normals_;
		std::map<std::string, unsigned int> buffers_;
};