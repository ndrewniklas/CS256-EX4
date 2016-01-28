#include <iostream>

int*** alloc3D(int x, int y, int z){
	
}


void dealloc3D(int*** a, int x, int y){
	
}


int main(){
	while (true){
		int*** a = alloc3D(100, 100, 100);
		dealloc3D(a, 100, 100);
	}
	return 0;
}