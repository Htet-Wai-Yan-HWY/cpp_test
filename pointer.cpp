#include <iostream>

struct Date { int day,month,year;};

struct playerRec{
    int playerno;
    char* name;
    Date birthdate;
};

playerRec players[] = {
    {001,"ANAKIN",{5,11,2002}},
    {002,"OBIWIN",{22,10,2002}},
    {0}
};

int main(){
    playerRec* pl = players;
    while (pl -> playerno != 0){
        playerRec& rp = *pl;
        std::cout << rp.name << '\t';
        Date& rd = rp.birthdate; 
        std::cout << rd.day <<'/'<< rd.month << '/'<< rd.year<<std::endl;
        pl++;

    }
    return 0;
}