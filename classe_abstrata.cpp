/*

Apenas uma demonstracao de classe abstrata

*/

#include<iostream>
#include<string>
using namespace std;
class Animal{
	public:
		virtual ~Animal(){}
		virtual void Voz()=0;
};
class Gato:public Animal{
	public:
		virtual void Voz()
		{
			cout<<"\nSou um gato e mio\n";
		}
};
class Cao:public Animal{
	public:
		virtual void Voz()
		{
			cout<<"\nSou um cao e lato\n";
		}
};
int main(){
	Gato A;
	Cao B;

	A.Voz();
	B.Voz();

	cout<<"\n\n";
	return 0;
}
