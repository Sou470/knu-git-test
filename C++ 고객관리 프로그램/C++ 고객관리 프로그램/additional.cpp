
#include <iostream>
#include <string>
using namespace std;



class Client {
public:
	string name;
	string level;

	Client(string name, string level) {
		this->name = name;
		this->level = level;
	}
};


class Clientmanager {
public:
	Client* clientlist[50];
	int numberclient;
	Clientmanager();

	void addClient(Client* guest);
	void displayClient();

};


Clientmanager::Clientmanager() {
	numberclient = 0;
	cout << "client manager started;" << endl;
}
void Clientmanager::addClient(Client* guest) {
	clientlist[numberclient++] = guest;
	cout << "to add clients" << endl;

}
void Clientmanager::displayClient() {
	//Client** p = clientlist;
	//for (int i = 0; i < numberclient; i++) {
	//	cout << "client;" << i << endl;
	//	cout << (*p)->name << endl;
	//	cout << (*p)->level << endl;
	//	p++;
	//}


	for (int i = 0; i < numberclient; i++) {
		cout << "client;" << i << endl;
		cout << clientlist[i]->name << endl;
		cout << clientlist[i]->level << endl;


	}


}



int main() {
	string name, label;

	Clientmanager cmanager;


	//to add clients;
	cmanager.addClient(new Client("cherlhee", "a"));
	cmanager.addClient(new Client("jcradar", "b"));
	cmanager.addClient(new Client("knu", "c"));


	//to receive keyboard input;
	for (int i = 0; i < 3; i++) {
		cout << "plz input name; ";
		getline(cin, name);
		cout << "plz input level; ";
		getline(cin, label);

		cmanager.addClient(new Client(name, label));
	}



	cmanager.displayClient();



	return 0;
}
