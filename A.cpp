#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

	int n,i, sum=0, c=0;
	vector<int> cow;
	cow.clear();

	ifstream fileIn("file.in", ios::in);

	fileIn >> n;
	while(fileIn >> i)
	cow.push_back(i);

	sort(&cow[0],&cow[cow.size()]);


	for(i = cow.size()-1 ; c < 5  ; i--, c++)
	  sum += cow[i];

	cout << sum << endl;

	fileIn.close();

	return 0;
}
