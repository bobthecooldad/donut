// Copyright 2019 the donut authors. See AUTHORS.md

#pragma once

#include <Render/Mesh.h>
#include <P3D/P3D.generated.h>
#include <ResourceManager.h>
#include <string>
#include <vector>

namespace Donut
{

class WorldSphere
{
  public:
	WorldSphere(const P3D::WorldSphere&);

	void Draw(GL::ShaderProgram&, bool opaque) const;
  private:
	std::string _name;
	std::vector<std::unique_ptr<Mesh>> _meshes;
};

} // namespace Donut
