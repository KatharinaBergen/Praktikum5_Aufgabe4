/*
Author:Kat Bergen
09.07.2020 v02

create associated client and job classes 

PAD1 P5A4
*/

#include <iostream>
#include "Auftrag.h"
#include "Kunde.h"


int main() try
{
	// Anlegen: zwei Kunden und drei Auftraege
	Kunde* k1{ new Kunde { "Sepplhuber-Finsterwalder" } };
	Kunde k2{ "Kurz" };
	Auftrag* a1{ new Auftrag { "Decke streichen" } };
	Auftrag* a2{ new Auftrag { "Wand tapezieren" } };
	Auftrag a3{ "Jalousie montieren" };
	Auftrag a4{ "Laminat verlegen" };

	// Erste Assoziationsrichtung:
 // aus einem Objekt vom Typ Kunde
 // zu Objekten vom Typ Auftrag
	k1->addAuftrag(a1);
	k1->addAuftrag(a2);
	k1->addAuftrag(&a3);
	// Zweite Assoziationsrichtung:
	// aus einem Objekt vom Typ Auftrag
	// zu einem Objekt vom Typ Kunde
	a4.setKunde(&k2);
	// Alles ausgeben:
	k1->print();
	k2.print();
	a1->print();
	a2->print();
	a3.print();
	a4.print();
	// Speicher zurueckgeben:
	delete k1; k1 = nullptr;
	delete a1; a1 = nullptr;
	delete a2; a2 = nullptr;


	run_test();

	return 0;
}
catch (const std::exception& e)
{
	std::cerr << e.what();
	return -1;
}
catch (...)
{
	std::cerr << "unknown error";
	return -2;
}