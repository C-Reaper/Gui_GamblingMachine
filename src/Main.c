#include "/home/codeleaded/System/Static/Library/WindowEngine1.0.h"
#include "/home/codeleaded/System/Static/Library/GamblingMachine.h"

GamblingMachine gm;

void Setup(AlxWindow* w){
	gm = GamblingMachine_New(1.0f,5U,(Sprite[]){
        Sprite_Load("./assets/Orange.png"),
        Sprite_Load("./assets/Banana.png"),
        Sprite_Load("./assets/Rasp.png"),
        Sprite_Load("./assets/OrangeSlice.png"),
        Sprite_Load("./assets/Grape.png"),
        Sprite_Null()
    });
	GamblingMachine_Reset(&gm);
}
void Update(AlxWindow* w){
	if(Stroke(ALX_KEY_SPACE).PRESSED || Stroke(ALX_MOUSE_L).PRESSED){
        GamblingMachine_Stop(&gm);
    }
	if(Stroke(ALX_KEY_ENTER).PRESSED){
	    GamblingMachine_Reset(&gm);
    }

	GamblingMachine_Update(&gm,w->ElapsedTime);

	Clear(BLACK);
	
	GamblingMachine_Render(WINDOW_STD_ARGS,&gm);
}
void Delete(AlxWindow* w){
	GamblingMachine_Free(&gm);
}

int main(){
    if(Create("Gambling Machine",1250,1000,1,1,Setup,Update,Delete))
        Start();
    return 0;
}