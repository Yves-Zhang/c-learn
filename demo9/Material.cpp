#include "Material.h"

Material::Material(){
	
}

Material::Material(string name, string home, string type){
	this->name = name;
	this->home = home;
	this->type = type;
}

Material::~Material(){

}

void Material::detail(){
	cout<<this->name<<endl;
	cout<<this->home<<endl;
	cout<<this->type<<endl;
}
