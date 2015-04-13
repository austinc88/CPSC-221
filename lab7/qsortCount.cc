#include <iostream>
#include <ctime>
#include <cstdlib>

int * x;
int comps = 0;

void swap(int & a, int & b) {
	int tmp = a;
	a = b;
	b = tmp;
}

int randint(int a, int b) {
	return a + (rand() % (b - a + 1));
}

float c(int n) {
    // C(n) = sum(from m=1 to n)[n-1+C(m-1)+C(n-m)]/n
    if (n <= 1) return 0;
    float sum = 0.0;
    for (int m=1; m <= n; m++)
      sum += n-1 + c(m-1) + c(n-m);
    return sum / n;
}

int qc(int n){
	if (n<=1){
		return 0;
	}
	//pick random pivot position
	int pivot = randint(0, n-1);
	// n - 1 comparisons per run
	int count = n - 1;

	// recurrence relation for the average case for quicksort
	return count + qc(pivot) + qc(n - pivot -1); 
}

void quicksort(int a, int b) {
	if (a >= b) return;
	int p = randint(a,b); // pivot
	swap(x[a], x[p]);
	int m = a;
	int i;
	// in-place partition:
	for (i = a+1; i <= b; i++) {
		comps++;
		if (x[i] < x[a])
			swap(x[++m], x[i]);
	}
	swap(x[a],x[m]);
	quicksort(a, m-1);
	quicksort(m+1, b);
}

#define NN 1000

int main(int argc, char *argv[]) {
	srand(time(0));

	int iterations = 100, j;
	// change the following code
	x = new int[NN];
	j = iterations;

	std::cout << "C(2): " << c(2) << std::endl;

	for (int i = 0; i < 10; i++)
		std::cout << "qc(2): " << qc(2) << std::endl;
/*
	while (j > 0){
		for (int i=0; i<NN; ++i) {
		     x[i] = rand() % NN;
	      }
	      quicksort(0, NN-1);

	    for (int i=0; i<NN; ++i) {
		    std::cout << x[i] << " ";
	       }

	       iterations--;
	       delete[] x;

	       std::cout << comps << std::endl;
	       std::cout << qc(10) << std::endl;


	       return 0;
	   }
	   */
	   return 0;

	}
	

