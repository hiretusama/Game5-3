#pragma once
#include <string>

using namespace std;

#define	SCREEN_SIZE_X	1280	// X�����̉�ʃT�C�Y���w��
#define	SCREEN_SIZE_Y	720		// Y�����̉�ʃT�C�Y���w��

void InitGame();
void FinGame();

enum SceneID
{
	Title_Scene,
	Edit_Scene,
	Play_Scene,
	Result_Scene,

	LOOP_Scene
};