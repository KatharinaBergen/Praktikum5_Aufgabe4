/*
Author:Kat Bergen
09.07.2020 v02

cpp job class with link to client

PAD1 P5A4
*/

#include "Auftrag.h"
#include "Kunde.h"
#include <iostream>

Auftrag::Auftrag() : id{}, pk{ nullptr }
{}

Auftrag::Auftrag(string s) : id{ s }, pk{ nullptr }
{}

void Auftrag::print() const
{
	std::cout << "AuftragsID: " << id;
	if (getKunde() != nullptr) std::cout << ", Kunde: " << getKunde()->getName() << std::endl;
	else std::cout << std::endl;
}

string Auftrag::getID() const
{
	return id;
}

// Assoziations-Operationen:
void Auftrag::setKunde(Kunde* k)
{
	pk = k;
	k->addAuftrag(this);
}

Kunde* Auftrag::getKunde() const
{
	return pk;
}