#pragma once

#include "cinder/app/AppNative.h"
#include "cinder/gl/gl.h"

#include "cinder\Camera.h"
#include "JoyController.h"
#include "Player.h"

class GameCamera:public JoyController {
private:
	ci::CameraPersp camera;
	float fov;

	ci::Vec3f target;
	ci::Vec3f offset;
	ci::Vec3f position;
	ci::Vec3f rotation;
	ci::Vec3f cameraCurrentPosition;
	float rotationSpeed;

	ci::Matrix44f matrix;

public:
	GameCamera(ci::Vec3f targetPos);

	ci::Matrix44f GetMatrix() {
		return this->matrix;
	};

	ci::Vec3f GetPosition() {
		return this->position;
	}

	void SetUp(int windowWidth, int windowHeight);
	void UpDate(ci::Vec3f targetPos);
	void Draw();

	void Debug();
};

ci::Vec3f ToRadians(const ci::Vec3f& degrees);