/* Calculer la somme des valeurs du tableau */
#include <iostream>

using namespace std;

/* Procédure */

float sommeTableau(float tab[], int n)
{
  float somme;
  somme = 0;
  
  for (int i = 0; i < n; ++i) {
    somme += tab[i];
  }
  
  return somme;
}

/* Utilisation */

int main()
{
  float tab[9] = {12, 18.5, 13.2, 8.75, 16, 15, 13.5, 12, 17};
  
  cout << sommeTableau(tab, 9) << endl;
  
  return 0;
}
