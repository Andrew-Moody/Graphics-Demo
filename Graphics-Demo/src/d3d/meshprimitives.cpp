#include "meshprimitives.h"

namespace d3d
{
	const std::vector<SimpleVertex> MeshPrimitives::s_cubeVertices{
			{ -0.5f, -0.5f, -0.5f,  0.0f, 1.0f },
			{ -0.5f, 0.5f,	-0.5f,	0.0f, 0.0f },
			{ 0.5f,	 0.5f,	-0.5f,	1.0f, 0.0f },
			{ 0.5f,	 -0.5f,	-0.5f,	1.0f, 1.0f },

			{ -0.5f, -0.5f,	0.5f,	1.0f, 1.0f },
			{ -0.5f, 0.5f,	0.5f,	1.0f, 0.0f },
			{ 0.5f,	 0.5f,	0.5f,	0.0f, 0.0f },
			{ 0.5f,	 -0.5f,	0.5f,	0.0f, 1.0f }
	};

	/*const std::vector<Vertex> MeshPrimitives::s_cubeVertices{
			{ -0.5f, -0.5f, -0.5f,  0.0f, 1.0f,  255u, 0u,   0u,   0u },
			{ -0.5f, 0.5f,	-0.5f,	0.0f, 0.0f,  0u,   255u, 0u,   0u },
			{ 0.5f,	 0.5f,	-0.5f,	1.0f, 0.0f,  0u,   0u,	 255u, 0u },
			{ 0.5f,	 -0.5f,	-0.5f,	1.0f, 1.0f,  255u, 0u,	 255u, 0u },

			{ -0.5f, -0.5f,	0.5f,	0.0f, 0.0f,  255u, 0u,	 0u,   0u },
			{ -0.5f, 0.5f,	0.5f,	0.0f, 0.0f,  0u,   255u, 0u,   0u },
			{ 0.5f,	 0.5f,	0.5f,	0.0f, 0.0f,  0u,   0u,	 255u, 0u },
			{ 0.5f,	 -0.5f,	0.5f,	0.0f, 0.0f,  255u, 0u,	 255u, 0u }
	};*/

	const std::vector<uint16_t> MeshPrimitives::s_cubeIndices{
		0, 1, 2, 0, 2, 3,
		1, 5, 6, 1, 6, 2,
		0, 4, 5, 0, 5, 1,
		0, 3, 7, 0, 7, 4,
		2, 6, 7, 2, 7, 3,
		4, 6, 5, 4, 7, 6
	};
}
