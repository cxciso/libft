void ft_putendl_fd(char *s, int fd)
{
	write(fd, s, sizeof(s));
	whrite(fd, "\n", 1);
}