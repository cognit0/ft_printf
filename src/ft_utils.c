int		ft_outdec(unsigned int a, int base)
{
	int	i;

	i = 0;
	while (a)
	{
		a /= base;
		i++;
	}
	return (i);
}