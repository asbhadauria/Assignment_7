#include <iostream>
using namespace std;

class ZooAnimal{
	private:
		char *name;
		int cageNumber;
		int weightDate;
		int weight;
	public:
		void create(char *na,int cn,int wd,int w){
			name=na;
			cageNumber=cn;
			weightDate=wd;
			weight=w;
		}
		void destroy(){
			delete []name;
		}
		char* reptname(){
			return name;
		}
		int daysSinceLastWeighed(int today){
			int startday,thisday;
			thisday=today/100*30 + today - today/100*100;
			startday=weightDate/100*30 + weightDate - weightDate/100*100;
			if(thisday<startday){
				thisday+=360;
				return (thisday-startday);
			}
			if(today<weightDate){
				today+=360;
				return (today-weightDate);
			}
		}
};

int main() {
	ZooAnimal bozo;
	bozo.create("Bozo",408,1027,400);
	cout<<"This animal's name is "<<bozo.reptname()<<endl;
	return 0;
}