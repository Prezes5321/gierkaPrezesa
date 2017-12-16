#include <iostream>
//Prezes
//8zapalek(Spale ci zone i zgwalce dom)

using namespace std;

string name,status;

int main()
{
    cout << "Podaj imie przybyszu: ";
    cin >> name ;
    cout << "Medrzec:" << name << " Musisz nam pomuc w pokonani 8zapalek" <<endl;
    cout << "8zapale:Spale ci zone i zgwalce dom" << endl;
    cout << "Medrzec: Pomozesz nam ? (Tak lub Nie)" <<endl;
    cin >> status ;
    if((status=="Tak")||(status=="TAK")||(status=="tak")){
        cout << "Dzieki ci panie" << endl;
    }else if((status=="Nie")||(status=="NIE")||(status=="nie")) {
        cout << "Giniesz od ataku 8zapalek " <<endl;
    }else{
        cout << "Podales zlaa odpowiedz" <<endl;
    }

    return 0;
}
