#include<iostream>
#include<string>
using namespace std;

	class train {
		private:
				
					string t_name;
					string source;
					string des;
					int t_time;
					
		public:
				int t_num;
				void input(){
					cout<<"Enter the train number:";
					cin >>t_num;
					cout<<"Enter the train name:";
					cin >> t_name;
					cout<<"Enter the train source:";
					cin >> source;
					cout<<"Enter the train des:";
					cin >> des;
					cout<<"Enter the train time:";
					cin >> t_time;
			
					}
						
		void output(){
			cout<<t_num<<"\t"<<t_name<<"\t"<<source<<"\t"<<des<<"\t"<<t_time<<endl;
		}	
		
	};
	int main() {
		train vy[3];
		
		for(int i=0;i<3;i++){
			vy[i].input();
		}
		
		for(int i=0;i<3;i++){
			vy[i].output();
		}
		
		int n;
		cout << "Enter train no:";
		cin >> n;
		
		for(int i=0 ;i<3; i++){
			
			if(vy[i].t_num == n){
				vy[i].output();
			}
		}
		return 0;
	}
