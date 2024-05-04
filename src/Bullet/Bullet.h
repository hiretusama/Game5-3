#pragma once
#include "DxLib.h"

#include "../Common.h"
#include "../MyMath/MyMath.h"

enum BULLET_TYPE {
	NOTHING = -1,		//�f�[�^�Ȃ�

	RESIDUE,		//�c���e

	BULLET_NUM,		//�e�^�C�v�̑���
};

class Bullet {
protected:

	const char bulletFilePath[BULLET_NUM][256] = {
		"data/",
	};

	BULLET_TYPE bulletType;

	VECTOR bulletPos;		//���W
	VECTOR bulletRot;		//�p�x
	VECTOR bulletSpeed;		//�ړ����x

	int handle;	//�摜�n���h��
	float Time;	//���ԃJ�E���g�p
	bool isUse;	//�����Ă��邩(�����lfalse)
	bool isHit;	//�������Ă��邩(�����lfalse)

	void ScreenOut(); //��ʊO�ɏo����t���O��܂�
	//�͈͎w�藐��
	int ScopeRand(int min, int max);

public:
	void Init();
	void Step();
	void Draw();
	void Fin();
};