int rec(int x)
{
   if (x <= 0) return (-1); 
	else if (x == 1) return (1);
	else if (x <= 50) return (x-rec(x+1));
	else return (-2); 	
}
