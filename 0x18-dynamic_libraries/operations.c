int add(int j, int l);
int sub(int j, int l);
int mul(int j, int l);
int div(int j, int l);
int mod(int j, int l);

/**
* add - a function that adds two integers
* @i: first integer
* @k: second integer
* Author - Joyclare Cherono
* Return: the sum
*/

int add(int j, int l)
{
	return (j + l);
}

/**
* sub - a function that subtracts two integers
* @i: first integer
* @k: second integer
* Author - Joyclare Cherono
* Return: the subtract
*/

int sub(int j, int l)
{
	return (j - l);
}

/**
* mul - a function that multiplies two integers
* @i: first integer
* @k: second integer
* Return: the multiple
*/

int mul(int j, int l)
{
	return (j * l);
}

/**
* div - a function that divideds two integers
* @i: first integer
* @k: second integer
* Return: dividend integer
*/

int div(int j, int l)
{
	return (j / l);
}

/**
  mod - a function that finds the modulus of two integers
  @i: first integer
  @k: second integer
  Return: the modulus
*/

int mod(int j, int l)
{
	return (j % l);
}
