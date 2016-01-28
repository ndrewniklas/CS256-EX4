// Andrew NIklas
// Exercise 2
// Completed 1/27/2016

#include <iostream>

int*** alloc3D(int x, int y, int z){
	
	int*** result = new int**[x];
	for (int i = 0; i < x; i++){
		result[i] = new int*[y];
		for (int j = 0; j < y; j++){
			result[i][j] = new int[z];
		}
	}
	return result;
}


void dealloc3D(int*** array, int x, int y){
	
	for (int i = 0; i < x; i++){
		for (int j = 0; j < y; j++){
			delete [] array[i][j];
		}
		delete [] array[i];
	}
	delete [] array;
}


int main(){
	while (true){
		int*** a = alloc3D(100, 100, 100);
		dealloc3D(a, 100, 100);
	}
	return 0;
}