int ft_str_is_alpha(char *str){
	int i;

	i = 0;
	while (str[i])
	{
		if((str[i] < 0 || str[i] > 177))
			return (0);
		i++;
	}
	return (1);
 }