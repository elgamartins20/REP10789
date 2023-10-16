#include <iostream>//biblioteca
#include"locale.h"//linguagem

using namespace std;// simplificar a escrita



int main(){


	float nota1, nota2,nota3,nota4, media;
	cout<<"introduza a primeira nota ";
    cin>>nota1;
    cout<<"introduza a segunda nota ";
    cin>>nota2;
    cout<<"introduza a terceira nota ";
    cin>>nota3;
    cout<<"introduza a quarta nota ";
    cin>>nota4;
    media=(nota1+nota2+nota3+nota4)/4;
    cout<< " A media : "<<media;
}

