/*
Author:Kat Bergen
09.07.2020 v02

header associated job class

PAD1 P5A4
*/

#ifndef AUFTRAG_H
#define AUFTRAG_H

#include <string>
using std::string;


class Kunde; //Forwarddeclaration

class Auftrag {
public:
	Auftrag();			//Konstruktor
	Auftrag(string);	//Konstruktor
	~Auftrag() = default;			//Destruktor

	void print() const;
	string getID() const;
	//…
	// Assoziations-Operationen:
	void setKunde(Kunde*);
	Kunde* getKunde() const;
	//…
private:
	string id;
	// ein Assoziationszeiger:
	Kunde* pk;
};

#endif // KUNDE_H

void run_test();