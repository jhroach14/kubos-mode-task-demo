#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int modeBreak = 0;

class mode{
	
	public:
		string currentTask;
	
		virtual void start();
		virtual void stop();
		virtual void run();

};

class countMode: public mode {
	
	int count = 0;

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

class multiplyMode: public mode {
	
	int mult = 0;
	
	void start()(
		
		cout<<"Starting multiply mode\n";		
		
		cout<<"What number would you like to start at?\n";
		cin>>mult;

		cout<<"What task would you like to do(by2, by3, tell)? Type exit to exit\n";
		cin>>task;

	)

	void run(){

		if(!currentTask.compare("by2")){

			multBy2();	
	
		}else
		if(!currentTask.compare("by3")){
		
			multBy3();

		}else
		if(!currentTask.compare("tell")){

			tellmult();
	
		}else
		if(!currentTask.compare("exit"){
			modeBreak = 1;
		}

	}

	void stop(){
	
		cout<<"exiting multiply mode. Values reset\n";
		count = 0;
	
	}

	void multBy2(){
	
		mult = mult*2;
	
	}

	void multBy3(){
	
		mult = mult*3;
	
	}

	void tellMult(){
	
		cout<<mult<<'\n';
	
	}
	
}

class waitMode: public mode {
	
	int wait = 0;

	void start()(
		
		cout<<"Starting wait mode\n";		
		
		cout<<"How long do you want to wait?\n";
		cin>>wait;

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