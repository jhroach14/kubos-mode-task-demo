#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int modeBreak = 0;

class mode{
	
	virtual void start();
	virtual void stop();
	virtual void run();

};

class countMode: public mode {
	
	int count = 0;
	string currentTask;

	void start()(
		
		cout<<"Starting count mode\n";		
		
		cout<<"What number would you like to start at?\n";
		cin>>count;

		cout<<"What task would you like to do(up, down, tell)? Type exit to exit\n";
		cin>>task;

	)

	void run(){

		if(!currentTask.compare("up")){

			countUp();	
	
		}else
		if(!currentTask.compare("down")){
		
			countDown();

		}else
		if(!currentTask.compare("tell")){

			tellCount();
	
		}else
		if(!currentTask.compare("exit"){
			modeBreak = 1;
		}

	}

	void stop(){
	
		cout<<"exiting counting mode. Values reset\n";
		count = 0;
	
	}

	void countUp(){
	
		count++;
	
	}

	void countDown(){
	
		count--;
	
	}

	void tellCount(){
	
		cout<<count<<'\n';
	
	}
	
}

int main(void){
	
	cout<<"starting kubOs mode task demo \n";
	
	mode currentMode;
	string requestedMode;
	while(true){

		cout<<"which mode would you like to enter? (count, multiply, wait)\n"
		cin>>requestedMode;

		if(!requestedMode.compare("count")){
		
			mode = new countMode();	
		
		}else
		if(!requestedMode.compare("multiply")){

			mode = new multiplyMode();
		
		}else
		if(!requestedMode.compare("wait")){

			mode = new waitMode();

		}
		
		modeBreak = 0;
		while(!modeBreak){

			mode.start();
			mode.run();
		
		}

		mode.stop();
	
	}

}
