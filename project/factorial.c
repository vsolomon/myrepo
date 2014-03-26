int factorial(int x) {
	if (x < 0) return (-1); // not defined
	else if (x == 0) return (1);
	else if (x < 100) return (x*factorial(x-1));
	else return (-2); 	// overflow
}