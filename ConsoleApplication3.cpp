// ConsoleApplication3.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>


void affTab(int tab[], int taille)
{
	std::cout << "Tableau A \n";
	for (int i = 0; i < taille; i++)
	{
		std::cout << "tab[" << i << "] = " << tab[i] << std::endl;
	}
}
int main()
{
	int tab[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	int supp, * p1, * p2;
	affTab(tab, 20);
	std::cout << "Quel valeur supprimer ? \n";
	std::cin >> supp;
	p1 = p2 = tab;
	for (int i = 0; i < 20; i++)
	{
		if (*p1 != supp)
		{
			*p2 = *p1;
			p2++;
		}
		p1++;
	}



	std::cout << "Nouveau tableau :\n";
	affTab(tab, 20-(p1-p2));
	/* algo de suppression
	
	
	
	*/
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
