
#include <iostream>
#include<cmath>// pour utilisation de concept mathematique
#include<cstddef>
using namespace std;


double fonc(double x)
{
    return x*x -3*x;
}


double quadrature( double (*ptr_f)(double), double *Tab1, double *Tab2, double a, double b, int n )
{
    double h=(b-a)/2;
    double sum=0;


    for(int i=0;i<=n;i++)
        sum  = sum + (*ptr_f)(( (b-a)*Tab1[i] + (b +a))/2 )*Tab2[i];



    return h*sum;
}


class Array {
private:
    int n;
    int* data;

public:
    Array(int size) {
        n = size;
        data = new int[n];
        std::cout << "Constructeur" << std::endl;
    }

	~Array() {
		delete[] data;
		std::cout << "Destructeur" << std::endl;

	}

	// b
	int size(){
		return n ;
	}

	int get(int indice){
		if ()
	}
}








int main()
{
    double (*ptr_f)(double );
    ptr_f=fonc;

    int i;
    double a,b,integrale;
    int n;



    cout<<"Bienvenue!!!"<<endl;

    cout<<" "<<endl;

    /// PREMIERE PARTIE
    cout<<"Exercie 1"<<endl;

    cout<< "Veuillez saisir les bornes de l'integrale : ";
    cin >> a >> b;

    cout<< "Veuiller saisir le nombre de points de discretisation : ";
    cin >> n;

    double *ksi=new double[n+1];
    double *w=new double[n+1];


    //Pour les tableaux ksi et w
    for(i=0;i<n+1;i++)
    {
        ksi[i]=cos((M_PI*(2*i+1))/(2*n+2));
        w[i]=(M_PI/(n+1))*sqrt(1-ksi[i]*ksi[i]);

    }

     integrale=quadrature(ptr_f,ksi,w,a,b,n);

     cout<<"L'approximation trouvee vaut : "<< integrale <<endl;

    delete[]ksi;
    delete[]w;


    return 0;
}
