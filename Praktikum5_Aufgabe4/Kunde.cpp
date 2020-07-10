/*
Author:Kat Bergen
09.07.2020 v02

cpp client class with link to jobs stored in vector

PAD1 P5A4
*/

#include "Kunde.h"
#include "Auftrag.h"

#include <iostream>

Kunde::Kunde() : name{}, vpa{}
{}

Kunde::Kunde(const string& s) : name{ s }, vpa{}
{}

void Kunde::print() const
{
	std::cout << "Kunde: " << name;
	for (unsigned int i{}; i < vpa.size(); i++)
	{
		std::cout << " Auftrag " << i << ": " << vpa.at(i)->getID();
		if (i < vpa.size() - 1) std::cout << ',';
	}
	if (vpa.size() == 0) std::cout << " keine Auftraege";
	std::cout << std::endl;
}

string Kunde::getName() const
{
	return name;
}

// assoziations-operationen:
void Kunde::addAuftrag(Auftrag* a)
{

	if (a->getKunde() == nullptr)
	{
		vpa.push_back(a);
		a->setKunde(this);
	}
}

vector<Auftrag*> Kunde::getAuftraege() const
{
	return vpa;
}