















t_list			*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	if (nbr == 0)
		return (begin_list);
	if (begin_list->next == NULL)
		return (NULL);
	return (ft_list_at(begin_list->next, nbr - 1));
}