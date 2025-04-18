#include <iostream>
#include <vector>
#include <fstream>
#include "artstudent.h"
#include "physicsstudent.h"

int main() {
	std::vector<artstudent*> artlist;
	std::vector<physicsstudent*> physlist;

	artstudent* art1 = new artstudent();
	art1->setname("robert", "puentes");
	art1->setgpa(4.5);
	art1->setgradyr(2027);
	art1->setgradsem("spring");
	art1->setenrollyr(2022);
	art1->setenrollsem("fall");
	art1->setlevel("undergrad");
	art1->setartfield("art history");
	artlist.push_back(art1);

	artstudent* art2 = new artstudent();
	art2->setname("travis", "scott");
	art2->setgpa(3.5);
	art2->setgradyr(2026);
	art2->setgradsem("fall");
	art2->setenrollyr(2022);
	art2->setenrollsem("fall");
	art2->setlevel("undergrad");
	art2->setartfield("art education");
	artlist.push_back(art2);

	artstudent* art3 = new artstudent();
	art3->setname("tony", "stark");
	art3->setgpa(4.0);
	art3->setgradyr(2025);
	art3->setgradsem("spring");
	art3->setenrollyr(2023);
	art3->setenrollsem("fall");
	art3->setlevel("grad");
	art3->setartfield("art studio");
	artlist.push_back(art3);

	artstudent* art4 = new artstudent();
	art4->setname("emily", "aguilar");
	art4->setgpa(3.2);
	art4->setgradyr(2024);
	art4->setgradsem("fall");
	art4->setenrollyr(2020);
	art4->setenrollsem("spring");
	art4->setlevel("undergrad");
	art4->setartfield("art history");
	artlist.push_back(art4);

	artstudent* art5 = new artstudent();
	art5->setname("archduke franz", "ferdinand");
	art5->setgpa(3.8);
	art5->setgradyr(2025);
	art5->setgradsem("spring");	
	art5->setenrollyr(2021);
	art5->setenrollsem("fall");
	art5->setlevel("grad");
	art5->setartfield("art education");
	artlist.push_back(art5);

	physicsstudent* phys1 = new physicsstudent();
	phys1->setname("frank", "sinatra");
	phys1->setgpa(3.6);
	phys1->setgradyr(2026);
	phys1->setgradsem("spring");
	phys1->setenrollyr(2022);
	phys1->setenrollsem("fall");
	phys1->setlevel("undergrad");
	phys1->setfocus("biophysics");
	physlist.push_back(phys1);

	physicsstudent* phys2 = new physicsstudent();
	phys2->setname("alexander", "the great");
	phys2->setgpa(3.8);
	phys2->setgradyr(2025);
	phys2->setgradsem("fall");
	phys2->setenrollyr(2021);
	phys2->setenrollsem("spring");
	phys2->setlevel("undergrad");
	phys2->setfocus("earth and planetary sciences");
	physlist.push_back(phys2);

	physicsstudent* phys3 = new physicsstudent();
	phys3->setname("john", "ford");
	phys3->setgpa(3.4);
	phys3->setgradyr(2026);
	phys3->setgradsem("Spring");
	phys3->setenrollyr(2022);
	phys3->setenrollsem("fall");
	phys3->setlevel("grad");
	phys3->setfocus("biophysics");
	physlist.push_back(phys3);

	physicsstudent* phys4 = new physicsstudent();
	phys4->setname("lee", "lee");
	phys4->setgpa(3.9);
	phys4->setgradyr(2027);
	phys4->setgradsem("Fall");
	phys4->setenrollyr(2023);
	phys4->setenrollsem("spring");
	phys4->setlevel("grad");
	phys4->setfocus("earth and planetary sciences");
	physlist.push_back(phys4);

	physicsstudent* phys5 = new physicsstudent();
	phys5->setname("bossman", "dlow");
	phys5->setgpa(3.5);
	phys5->setgradyr(2025);
	phys5->setgradsem("spring");
	phys5->setenrollyr(2021);
	phys5->setenrollsem("fall");
	phys5->setlevel("udergrad");
	phys5->setfocus("biophysics");
	physlist.push_back(phys5);
	
	std::ofstream fout("student_info.dat");
	if (!fout) {
    		std::cerr << "error opening file!" << std::endl;
    		return 1;
	}

	fout << "art Students:\n";
	for (auto art : artlist)	
		fout << art->tostring() << "\n\n";
    
	fout << "physics students:\n";
		for (auto phys : physlist)
     	fout << phys->tostring() << "\n\n";
		fout.close();

 	for (auto art : artlist)
 		delete art;
	for (auto phys : physlist)
 		delete phys;

	return 0;
}

