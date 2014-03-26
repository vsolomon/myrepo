int recursive1(int x) {
	if (x <= 0) return (-1); // not defined
	else if (x == 1) return (1);
	else if (x <= 50) return (x+recursive1(x-2));
	else return (-2); 	// overflow
}