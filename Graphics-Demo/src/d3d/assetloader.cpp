#include "assetloader.h"

#include "modeldata.h"
#include "texturedata.h"
#include "d3dapp.h"
#include "d3dutil.h"

#include <assimp/Importer.hpp>
#include <assimp/postprocess.h>
#include <assimp/scene.h>

#include <string>
#include <vector>
#include <memory>
#include <iostream>

#define STB_IMAGE_IMPLEMENTATION
#include <stb_image.h>

namespace d3d
{
	ModelData AssetLoader::loadModel(D3DApp& app, const std::string& filePath) const
	{
		Assimp::Importer importer;

		// may need aiProcess_FlipWindingOrder in the future
		constexpr unsigned int flags{ aiProcess_Triangulate | aiProcess_ConvertToLeftHanded };

		//constexpr unsigned int flags{ aiProcess_Triangulate};

		const aiScene* scene = importer.ReadFile(filePath, flags);

		if (!scene)
		{
			DB_LOG(importer.GetErrorString());
			return ModelData{};
		}

		return ModelData{ app, scene };
	}


	TextureData AssetLoader::loadTexture(D3DApp& app, const std::string& filePath) const
	{
		TextureData texData{};

		texData.data.reset(stbi_load(filePath.c_str(), &texData.width, &texData.height, &texData.channels, 4));

		return texData;
	}
}
