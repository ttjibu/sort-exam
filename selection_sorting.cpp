#include"main.hpp"
using namespace std;

string Element::sort_name{"selection_sort"};

void Element::sort_method() {
	int j,k,i,m,M=-1000;
	for(j=1; j<=data.size(); j++) {
		m=M;
		for(k=j;k<=data.size();k++){
			if(m<[data[k]]){
				m=data[k];i=k;
			}
		}
		Element::swap(data[j],data[i]);
	}
	return 0;
}
