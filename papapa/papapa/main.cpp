#include"headfile.h"

int main(int argc, char** argv)
{
	myo::Hub hub("com.example.hello-myo");
	std::cout << "Attempting to find a Myo..." << std::endl;
	//myo::Myo* myo = hub.waitForMyo(10000);

	std::cout << "Connected to a Myo armband!" << std::endl << std::endl;
	DataCollector collector;
	hub.addListener(&collector);
	while (1) {
		hub.run(1000 / 30);
		collector.print();
	}
}