int add(int i, int k);
int sub(int i, int k);
int mul(int i, int k);
int div(int i, int k);
int mod(int i, int k);

/**
* add - a function that adds two integers
* @i: first integer
* @k: second integer
* Author - Joyclare Cherono
* Return: the sum
*/

int add(int i, int k)
{
	return (i + k);
}

/**
* sub - a function that subtracts two integers
* @i: first integer
* @k: second integer
* Return: the subtract
*/

int sub(int i, int k)
{
	return (i - k);
}

/**
* mul - a function that multiplies two integers
* @i: first integer
* @k: second integer
* Return: the multiple
*/

int mul(int i, int k)
{
	return (i * k);
}

/**
* div -a function that  divideds two integers
* @i: first integer
* @k: second integer
* Return: the dividend integer
*/

int div(int i, int k)
{
	return (i / k);
}

/**
  mod - a fuction that finds the modulus of two integers
  @i: first integer
  @k: second integer
  Return: the modulus
*/

int mod(int i, int k)
{
	return (i % k);
}
