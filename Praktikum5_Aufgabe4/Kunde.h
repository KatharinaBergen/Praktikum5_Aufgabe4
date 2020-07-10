/*
Author:Kat Bergen
09.07.2020 v02

header associated client class

PAD1 P5A4
*/

#ifndef KUNDE_H
#define KUNDE_H

class Auftrag;

#include <vector>
using std::vector;
#include <string>
using std::string;
#include <iostream>

class Auftrag; //Forwarddeclaration

class Kunde {
public:
	Kunde();				//Konstruktor
	Kunde(const string&);	//Konstruktor
	~Kunde() = default;				//Destruktor

	void print() const;
	string getName() const;
	//…
	// Assoziations-Operationen:
	void addAuftrag(Auftrag*);
	vector<Auftrag*> getAuftraege() const;
	//…
private:
	string name;
	// mehrere Assoziationszeiger:
	vector<Auftrag*> vpa;
};

#endif KUNDE_H