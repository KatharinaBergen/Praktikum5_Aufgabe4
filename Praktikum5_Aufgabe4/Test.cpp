#include "Kunde.h"
#include "Auftrag.h"

void run_test()
{
	Kunde* k10{ new Kunde { "Kurz" } };
	Auftrag* a1{ new Auftrag { "Decke streichen" } };
	Auftrag* a2{ new Auftrag { "Wand tapezieren" } };
	k10->addAuftrag(a1);
	k10->addAuftrag(a2);
	k10->print();
	delete a1; a1 = nullptr;
	delete a2; a2 = nullptr;
	delete k10; k10 = nullptr;

	Kunde k11{ "ABCDE" };
	Auftrag a11{ "Decke wachsen" };
	Auftrag a12{ "Wand einreißen" };
	k11.print();
	k11.addAuftrag(&a11);
	k11.addAuftrag(&a12);
	k11.print();

	Kunde* k4{ new Kunde { "ABC" } };
	Auftrag* a4{ new Auftrag{ "Decke wachsen" } };
	Auftrag* a5{ new Auftrag{ "Wand einreissen" } };
	k4->print();
	a4->print();
	a5->print();
	k4->addAuftrag(a4);
	k4->addAuftrag(a5);
	k4->print();
	a4->print();
	a5->print();
	delete k4; k4 = nullptr;

}