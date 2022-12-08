int* local_pointer() 
{
	int temp = 100;
	// returns a pointer to the local int
	return(&temp); 
}

int main()
{
	int* ptr = local_pointer();
	return 0;
}
