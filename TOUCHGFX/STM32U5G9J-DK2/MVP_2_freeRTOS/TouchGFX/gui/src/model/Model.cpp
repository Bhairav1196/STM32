#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>

#ifndef SIMULATOR
#include <cmsis_os2.h>
#include "main.h"

extern "C"
{
	extern osMessageQueueId_t buttonQueueHandle;
}
#endif
Model::Model() : modelListener(0), button_state(0)
{

}

void Model::tick()
{

#ifndef SIMULATOR

	static uint8_t buttonStatus;

	if( osMessageQueueGet(buttonQueueHandle, &buttonStatus, 0, 0) == osOK){

		if(buttonStatus){
			button_state = true;
		}
		else{
			button_state = false;
		}

		modelListener -> setAnimation(button_state);
	}
#endif
}
