#include <iostream>
//#include <list>
//#include <iterator>

/*

template<class T>//definition de class tamplate
class complex {
public:
  T re;
  T im;

  // Constructors
  complex<T>(){re = 0; im = 0;}
  complex<T>(T r, T i ){re = r; im = i;}
};
//definition de tamplate function
template<class FLT>
complex<FLT> add(complex<FLT> &z1, complex<FLT> &z2)
{
  return complex<FLT>(z1.re + z2.re, z1.im + z2.im);
}
template<class FLT>
complex<FLT> soustract(complex<FLT> &z1, complex<FLT> &z2)
{
  return complex<FLT>(z1.re - z2.re, z1.im - z2.im);
}
template<class FLT>
complex<FLT> div(complex<FLT> &z1, complex<FLT> &z2)
{
  return complex<FLT>(z1.re / z2.re, z1.im / z2.im);
}
template<class FLT>
complex<FLT> prod(complex<FLT> &z1, complex<FLT> &z2)
{
  return complex<FLT>(z1.re * z2.re, z1.im * z2.im);
}
typedef complex<double> dcmplx;
typedef complex<float>  fcmplx;

int main(){
    //partie d'execution
  dcmplx a, b, res;
  string x;
  cout << "Enter Re(a) and Im(a)\n"; //l'affichage
  cin >> a.re >> a.im;//la lecture des valeur enter par l'utillisateur
  cout << "Enter Re(b) and Im(b)\n";
  cin >> b.re >> b.im;
  cout<<"choiser un operation :   '+'' -' '/' '*'   :\n";
  cin >> x;
  //l'appell de tamplate function
  if(x=="+"){res= add(a, b);
  cout << "a + b is    :" << res.re << " + i" << res.im << "\n";}
  if(x=="-"){ res= soustract(a, b);
  cout << "a - b is   :" << res.re << " + i" << res.im << "\n";}
  if(x=="/"){res= div(a, b);
  cout << "a / b is   :" << res.re << " + i" << res.im << "\n";}
  if(x=="*"){ res= prod(a, b);
  cout << "a * b is   :" << res.re << " + i" << res.im << "\n";}
  else{cout<<"choiser un symbole parmi les proposition";};
}
*/
//PROGRAMME 2
/*
void afficherDateEtHeure(const string& s)
{
    if ( s.length() != 12 )
        cerr << "Chaine invalide." << endl;
    else
    {
        cout << "Date  : " << s.substr(0,2) << "/" << s.substr(2,2) << "/" << s.substr(4,4) << endl;
        cout << "Heure : " << s.substr(8,2) << "h" << s.substr(10,2) << endl;
    }
}

int main(int argc, char** argv)
{
    string s;
    cout<<"saisez la date  : \n";
    cin>> s;
    afficherDateEtHeure(s); // exemple
}
//*/
//PROGRAMME 3
/*
void show(list <int> g)
{
list <int> :: iterator it;
for(it = g.begin(); it != g.end(); ++it)
cout << '\t' << *it;
cout << '\n';}
int main()
{list <int> gqlist1;
int N;
cout<<"donnez le nombre des valeur que vous voulez saisie :";
cin>>N;
int i,a[i] ,nb,tmp;;
for(i=0;i<N;i++)
{cout<<"Veuillez taper l'entier numero "<<i<<" : ";cin>>a[i];}
do{nb=0;
        for(i=0;i<N-1;i++)
                if(a[i]>a[i+1])
                        {
                        tmp=a[i];a[i]=a[i+1];a[i+1]=tmp;
                        nb++;
                        }
        }while(nb!=0);
for(i=0;i<N;i++){
gqlist1.push_back(a[i]);
}
cout << "\nList  is : ";
show(gqlist1);
return 0;
}

*/
/*
#include <algorithm>
//#include <string>
//#include <vector>
using namespace std;
using std::sort;
using std::string;
using std::endl;
int main() {
list<string> arr = { };
cout<<"donnez le nombre des valeur que vous voulez saisie :";
int i,N;
cin>>N;
for(i=1;i<=N;i++){
    string nom ,prenom ,age ;
    cout<<"personne  :"<< i<<"\n";
    cout<<"nom :";  cin>>nom ;
    cout<<"prenom :";  cin>>prenom;
    cout<<"age :";  cin>>age ;
    arr.push_back(nom);
    arr.push_back(prenom);
    arr.push_back(age);
    }
    arr.sort();

list <string> :: iterator it;
for(it = arr.begin(); it != arr.end(); ++it){
cout << '\t' << *it;
cout << '\n';

}}
*/
//programme 5
/*
#include <set>

using namespace std;
int main()
{

set<int> s1;
int i;
for(i=1;i<=100;i++){
    s1.insert(i);
}
set<int, greater<int> >::iterator itr;
cout << "\nThe set s1 est  : \n";
for (itr = s1.begin(); itr != s1.end(); itr++)
{
cout << *itr<<" ";
}
cout<<"\n";
//question 2:
int n;
cin>>n;
cout<<s1.count(n);
if(s1.count(n)!=0){

 cout<<" la valeur donnée est présente ";

}else{
    cout<<"la valeur donnée n'est pas présente ";
}
//question 3:


}*/
/*
using namespace std;

// printing set s1

int main()
{cout<<"la valeur que vous voulez saisie :";
int N;
cin>>N;
set<int> s={1,4,7};
if(s==N){
set<int, greater<int> >::iterator itr;
for (itr = s.begin(); itr != s.end(); itr++)
{
 cout<<" la valeur donnée est présente ";
}
}else{
    cout<<"la valeur donnée n'est pas présente ";
}
}
*/

//programme 6
/*
using namespace std;
class Test{
public:
static int tableau[] ;
public :
static int division(int indice, int diviseur){
    if( diviseur== 0 ) {
throw "on peut pas diviser sur zero!!";
}
return tableau[indice]/diviseur;
}
};
int Test::tableau[] = {17, 12, 15, 38, 29, 157, 89, -22, 0, 5} ;
int main()
{
int x, y;
cout << "Entrez l’indice de l’entier à diviser: " << endl;
cin >> x ;
cout << "Entrez le diviseur: " << endl;
cin >> y ;
try {

cout<< "Le résultat de la division est: "<<Test::division(x,y) << endl;
}catch (const char* e) {
cerr << e << endl;
}
return 0;
}*/
//programme 7
 class Repas
{
    private:
        string nom;
        int heure;
        string description;
};
class Chat
{
    private:
        string type;

        void sauter ();
};


  void Chat::sauter ()
{

}

class Animal :  public Chat
{
    private:
        string nom;
        int age;
        string genre;

};
class Chein :  public Animal,  public Race
{
    private:
        string taille;

        void isChass3 ();
};

  void Chein::isChass3 ()
{

}



class Compitition
{
    private:
        string date;
        string nom;
        int order;

};


class Enraineur
{
    private:
        string nom;
        string description;

};




class Race
{
    private:
        string specificite;

        void israceHubride ();
};


  void Race::israceHubride ()
{

}

class Elements
{
    private:
        string nom;
        string type;

};

