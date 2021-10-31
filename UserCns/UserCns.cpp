// UserMatrice.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <Matrix.h>
using namespace std;
using namespace mat;


int main()
{
    // declaration et initialisation de la matirce : ma_matrice : 
    Matrix* ma_matrice = new Matrix(2, 2);
    // declaration et initialisation de la matirce : sa_matrice : 
    Matrix* sa_matrice = new Matrix(2, 2);
    // declaration et initialisation de la matirce : mul_matrice :
    Matrix* mul_matrice = new Matrix(2, 2);
    // remplissage de la matrice par l'element 2;
    cout << " \n Remplissage de ma_matrice par l'element 2 : " << endl;
    ma_matrice->Remplissage(2);
    ma_matrice->Print();
    cout << " \n Remplissage de sa_matrice par l'element 3 : " << endl;
    sa_matrice->Remplissage(3);
    sa_matrice->Print();
    // utilisation de l'operateur + :
    *ma_matrice + *sa_matrice;
    cout << " \n Apres la somme de ma_matrice et sa_matrice : Le resultat est stocke dans ma_matrice !" << endl;
    ma_matrice->Print();
    // utilisation de l'operateur - :
    *ma_matrice - *sa_matrice;
    cout << " \n Apres la soustraction de ma_matrice et sa_matrice : Le resultat est stocke dans ma__matrice !" << endl;
    ma_matrice->Print();
    // utilisation de l'operateur * : 
    cout << " \n Apres la multiplication de ma_matrice et sa_matrice : " << endl;
    *mul_matrice = *ma_matrice * (*sa_matrice);
    mul_matrice->Print();

}
