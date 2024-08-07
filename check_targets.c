#include "push_swap.h"

long	ft_check_target_a(int nb, t_list **stack_b)
{
	int		index;
	long	best_b;
	long	target;
	t_list	*current;

	index = 0;
	best_b = LONG_MIN;
	target = 0;
	current = (*stack_b);
	while (current != NULL)
	{
		if (current->nbr < nb && best_b < current->nbr)
		{
			best_b = current->nbr;
		}
		index++;
		current = current->next;
	}
	target = best_b;
	return (target);
}

long	ft_check_target_b(int nb, t_list **stack_a)
{
	long	best_a;
	long	target;
	t_list	*current;

	best_a = LONG_MAX;
	current = (*stack_a);
	while (current != NULL)
	{
		if (current->nbr > nb && best_a > current->nbr)
		{
			best_a = current->nbr;
		}
		current = current->next;
	}
	target = best_a;
	return (target);
}