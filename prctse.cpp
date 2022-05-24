#include <string> 
#include <iostream>
#include <map>
#include <vector>
#include <iomanip>
using namespace std;
//задача 1
class Animal {
public:
	string name, feature, sound;
	Animal(string _name) : name(_name), feature(""), sound("") {}

	string get_sound() {
		return sound;
	}
	string get_action() {
		return feature;
	}
};
//задача2
class Farm_Animal : public Animal {
public:
	Farm_Animal(string _name) :Animal(_name) {};
	vector <string> resource;
	void get_resource(string res) {
		for (int i = 0; i < resource.size(); i++) {
			if (resource[i] == res) {
				cout << "string: " << res << endl;
				return;
			}
		}
		cout << "string ne naideno: " << endl;
	}
};
//задача3
class Cow : public Farm_Animal {
public:
	Cow(string _name) :Farm_Animal(_name) {};

	void get_action(string object) {
		cout << name << " come to " << object << endl;
		return;
	}

};

class Pig : public Farm_Animal {
public:
	Pig(string _name) :Farm_Animal(_name) {};

	void get_action(string object) {
		cout << name << " sit near to " << object << endl;
		return;
	}

};

class Chicken : public Farm_Animal {
public:
	Chicken(string _name) :Farm_Animal(_name) {};

	void get_action(string object) {
		cout << name << " eat seeds with " << object << endl;
		return;
	}

};

class Petooh : public Farm_Animal {
public:
	Petooh(string _name) :Farm_Animal(_name) {};

	void get_action(string object) {
		cout << name << " love: " << object << endl;
		return;
	}

};
//задача4
class Fox : public Animal {
public:
	Fox(string _name, string _feature, string _sound) : Animal(_name) {
		feature = _feature;
		sound = _sound;
	};
	void get_action(string object) {
		cout << name << " bited: " << object << endl;
	}
};

class Bear : public Animal {
public:
	Bear(string _name, string _feature, string _sound) : Animal(_name) {
		feature = _feature;
		sound = _sound;
	};
	void get_action(string object) {
		cout << name << " killed: " << object << endl;
	}
};

class Wolf : public Animal {
public:
	Wolf(string _name, string _feature, string _sound) : Animal(_name) {
		feature = _feature;
		sound = _sound;
	};
	void get_action(string object) {
		cout << name << "spying for:" << object << endl;
	}
};

class Tiger : public Animal {
public:
	Tiger(string _name, string _feature, string _sound) : Animal(_name) {
		feature = _feature;
		sound = _sound;
	};
	void get_action(string object) {
		cout << name << "hunting for:" << object << endl;
	}
};
int main() {
	Fox foxy("1", "2", "3");
	cout << ' ' << foxy.get_sound() << ' ' << foxy.name;
	Tiger t("ti", "abc", "rrrarrr");
	cout << t.name;

	return 0;
}