#include "push_swap.h"

void	both_above1(t_list **stack_a, t_list **stack_b, t_data *data)
{
	while ((*stack_a)->nbr != data->node && (*stack_b)->nbr != data->target)
	{
		rr(stack_a, stack_b);
	}
}

void	both_not_above1(t_list **stack_a, t_list **stack_b, t_data *data)
{
	while ((*stack_a)->nbr != data->node && (*stack_b)->nbr != data->target)
	{
		rrr(stack_a, stack_b);
	}
}

void	node_above1(t_list **stack_a, t_data *data)
{
	while ((*stack_a)->nbr != data->node)
	{
		ra(stack_a);
	}
}

void	node_not_above1(t_list **stack_a, t_data *data)
{
	while ((*stack_a)->nbr != data->node)
	{
		rra(stack_a);
	}
}

void	target_above1(t_list **stack_b, t_data *data)
{
	while ((*stack_b)->nbr != data->target)
		rb(stack_b);
}