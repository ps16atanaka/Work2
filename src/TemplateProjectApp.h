#pragma once

#include "cinder/app/AppNative.h"
#include "cinder/gl/gl.h"
#include "cinder\Camera.h"
#include "cinder\gl\Light.h"
#include "cinder\gl\Material.h"
#include "cinder\ImageIo.h"
#include "cinder\gl\Texture.h"
#include "cinder\ObjLoader.h"

#include "JoyController.h"
#include "Player.h"
#include "GameCamera.h"
#include "Boid.h"
#include "Bullet.h"

#include <list>

class TemplateProjectApp : public ci::app::AppNative,JoyController {
	Player player;
	GameCamera camera1 = GameCamera(player.GetPos());
	std::list<Boid> boids;
	std::list<Bullet> bullets;

	ci::CameraOrtho ui_camera;

	// template
	ci::Color color = ci::Color(0.f, 0.f, 0.f);

public:
	void prepareSettings(Settings* settings);
	void setup();
	void shutdown();
	void update();
	void draw();
};
