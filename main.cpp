#include <iostream>
#include <string>
long double elementMasses(std::string symbol){
    if(symbol=="H"){
        return 1.00794;
    }else if(symbol=="He"){
        return 4.0026;
    }else if(symbol=="Li"){
        return 6.911;
    }else if(symbol=="Be"){
        return 9.01218;
    }else if(symbol=="B"){
        return 10.811;
    }else if(symbol=="C"){
        return 12.0107;
    }else if(symbol=="N"){
        return 14.00674;
    }else if(symbol=="O"){
        return 15.9994;
    }else if(symbol=="F"){
        return 18.9984;
    }else if(symbol=="Ne"){
        return 20.1797;
    }else if(symbol=="Na"){
        return 22.98977;
    }else if(symbol=="Mg"){
        return 24.305;
    }else if(symbol=="Al"){
        return 26.98154;
    }else if(symbol=="Si"){
        return 28.0855;
    }else if(symbol=="P"){
        return 30.97376;
    }else if(symbol=="S"){
        return 32.066;
    }else if(symbol=="Cl"){
        return 35.4527;
    }else if(symbol=="Ar"){
        return 39.948;
    }else if(symbol=="K"){
        return 39.0983;
    }else if(symbol=="Ca"){
        return 40.078;
    }else if(symbol=="Sc"){
        return 44.95591;
    }else if(symbol=="Ti"){
        return 47.877;
    }else if(symbol=="V"){
        return 50.9415;
    }else if(symbol=="Cr"){
        return 51.9951;
    }else if(symbol=="Mn"){
        return 54.93805;
    }else if(symbol=="Fe"){
        return 55.845;
    }else if(symbol=="Co"){
        return 58.93320;
    }else if(symbol=="Ni"){
        return 58.6934;
    }else if(symbol=="Cu"){
        return 63.546;
    }else if(symbol=="Zn"){
        return 65.39;
    }else if(symbol=="Ga"){
        return 69.723;
    }else if(symbol=="Ge"){
        return 72.61;
    }else if(symbol=="As"){
        return 74.92160;
    }else if(symbol=="Se"){
        return 76.95;
    }else if(symbol=="Br"){
        return 79.904;
    }else if(symbol=="Kr"){
        return 83.80;
    }else if(symbol=="Rb"){
        return 85.4678;
    }else if(symbol=="Sr"){
        return 87.62;
    }else if(symbol=="Y"){
        return 88.90585;
    }else if(symbol=="Zr"){
        return 91.224;
    }else if(symbol=="Nb"){
        return 92.90638;
    }else if(symbol=="Mo"){
        return 95.94;
    }else if(symbol=="Tc"){
        return 98;
    }else if(symbol=="Ru"){
        return 101.07;
    }else if(symbol=="Rh"){
        return 102.90550;
    }else if(symbol=="Pd"){
        return 106.42;
    }else if(symbol=="Ag"){
        return 107.8682;
    }else if(symbol=="Cd"){
        return 112.411;
    }else if(symbol=="In"){
        return 114.818;
    }else if(symbol=="Sn"){
        return 118.710;
    }else if(symbol=="Sb"){
        return 121.760;
    }else if(symbol=="Te"){
        return 127.60;
    }else if(symbol=="I") {
        return 126.90447;
    }else if(symbol=="Xe"){
        return 131.29;
    }else if(symbol=="Cs"){
        return 132.90545;
    }else if(symbol=="Ba"){
        return 137.327;
    }else if(symbol=="La"){
        return 138.9055;
    }else if(symbol=="Ce"){
        return 140.115;
    }else if(symbol=="Pr"){
        return 140.90765;
    }else if(symbol=="Nb"){
        return 144.24;
    }else if(symbol=="Pm"){
        return 145;
    }else if(symbol=="Sm"){
        return 150.36;
    }else if(symbol=="Eu"){
        return 151.954;
    }else if(symbol=="Gd"){
        return 157.25;
    }else if(symbol=="Tb"){
        return 158.82534;
    }else if(symbol=="Dy"){
        return 162.5;
    }else if(symbol=="Ho"){
        return 164.93032;
    }else if(symbol=="Er"){
        return 167.26;
    }else if(symbol=="Tm"){
        return 168.93;
    }else if(symbol=="Yb"){
        return 173.04;
    }else if(symbol=="Lu"){
        return 174.957;
    }else if(symbol=="Hf"){
        return 178.49;
    }else if(symbol=="Ta"){
        return 180.9479;
    }else if(symbol=="W"){
        return 183.84;
    }else if(symbol=="Re"){
        return 189.207;
    }else if(symbol=="Os"){
        return 190.23;
    }else if(symbol=="Ir"){
        return 192.217;
    }else if(symbol=="Pt"){
        return 195.078;
    }else if(symbol=="Au"){
        return 192.96655;
    }else if(symbol=="Hg"){
        return 200.59;
    }else if(symbol=="Tl"){
        return 204.3833;
    }else if(symbol=="Pb"){
        return 207.2;
    }else if(symbol=="Bi"){
        return 208.98038;
    }else if(symbol=="Po"){
        return 209;
    }else if(symbol=="At"){
        return 210;
    }else if(symbol=="Rn"){
        return 222;
    }else if(symbol=="Fr"){
        return 223;
    }else if(symbol=="Ra"){
        return 226;
    }else if(symbol=="Ac"){
        return 227;
    }else if(symbol=="Th"){
        return 232.0381;
    }else if(symbol=="Pa"){
        return 231.03588;
    }else if(symbol=="U"){
        return 238.0289;
    }else if(symbol=="Np"){
        return 237;
    }else if(symbol=="Pu"){
        return 244;
    }else if(symbol=="Am"){
        return 243;
    }else if(symbol=="Cm"){
        return 247;
    }else if(symbol=="Bk"){
        return 247;
    }else if(symbol=="Cf"){
        return 251;
    }else if(symbol=="Es"){
        return 252;
    }else if(symbol=="Fm"){
        return 257;
    }else if(symbol=="Md"){
        return 258;
    }else if(symbol=="No"){
        return 259;
    }else if(symbol=="Lr"){
        return 260;
    }else if(symbol=="Rf"){
        return 261;
    }else if(symbol=="Db"){
        return 262;
    }else if(symbol=="Sg"){
        return 263;
    }else if(symbol=="Bh"){
        return 264;
    }else if(symbol=="Hs"){
        return 265;
    }else if(symbol=="Mt"){
        return 276;
    }else if(symbol=="Ds"){
        return 281;
    }else if(symbol=="Rg"){
        return 280;
    }else if(symbol=="Cn"){
        return 285;
    }else{
        return 0;
    }
}
long double molarMass(std::string formula){
    long double mass=0;
    for(int i=0; i<formula.size(); i++){
        if(formula[i]=='('){
            int openBrackets=1;
            for(int j=i+1; j<formula.size(); j++){
                if(formula[j]==')'){
                    openBrackets--;
                }else if(formula[j]=='('){
                    openBrackets++;
                }
                if(openBrackets==0){
                    mass=mass+molarMass(formula.substr(i+1, j-i-1))*std::stold(formula.substr(j+1, 1));
                    i=j;
                    break;
                }
            }
        }else if(formula[i]>=65&&formula[i]<=90){
            std::string elementSymbol;
            if(i+1<=formula.size()-1) {
                int number;
                if (formula[i + 1] >= 97 && formula[i + 1] <= 122) {
                    elementSymbol=formula.substr(i, 2);
                }else{
                    elementSymbol=formula.substr(i, 1);
                }
                if(i+2<=formula.size()-1&&elementSymbol.size()==2) {
                    if (formula[i + 2] >= 50 && formula[i + 2] <= 57) {
                        number = std::stoi(formula.substr(i + 2, 1));
                        mass = mass + elementMasses(elementSymbol) * number;
                        i = i + 1;
                    }else {
                        mass = mass + elementMasses(elementSymbol);
                    }
                }else{
                    if(formula[i+1]>=50&&formula[i+1]<=57){
                        number=std::stoi(formula.substr(i+1, 1));
                        mass=mass+elementMasses(elementSymbol)*number;

                    }else{
                        mass=mass+elementMasses(elementSymbol);
                    }
                }
            }else{
                elementSymbol=formula.substr(i, 1);
                mass=mass+elementMasses(elementSymbol);
            }
        }
    }
    return mass;
}
long double weight(long double numberOfParticles, std::string formula){
    return (numberOfParticles/(6.02*pow(10, 23)))*molarMass(std::move(formula));
}
long double numberOfParticles(long double weight, std::string formula){
    return (weight/molarMass(std::move(formula)))*6.02*pow(10, 23);
}
int main() {
    std::cout<<"enter formula: ";
    std::string formula;
    std::getline(std::cin, formula);
    std::cout<<"if you would like molar mass, press 1, if you want number of particles, press 2, and if you want weight, press 3: ";
    int choice;
    std::cin>>choice;
    if(choice==1){
        std::cout<<molarMass(formula)<<std::endl;
    }else if(choice==2){
        long double weight;
        std::cout<<"please enter weight in grams: ";
        std::cin>>weight;
        std::cout<<numberOfParticles(weight, formula)<<std::endl;
    }else{
        long double numberOfParticles;
        std::cout<<"please enter number of particles: ";
        std::cin>>numberOfParticles;
        std::cout<<weight(numberOfParticles, formula)<<std::endl;
    }
    system("pause");
}