#include "push_swap.h"

void	both_above2(t_list **stack_a, t_list **stack_b, t_data *data)
{
	while ((*stack_a)->nbr != data->target && (*stack_b)->nbr != data->node)
		rr(stack_a, stack_b);
}

void	both_not_above2(t_list **stack_a, t_list **stack_b, t_data *data)
{
	while ((*stack_b)->nbr != data->node && (*stack_a)->nbr != data->target)
		rrr(stack_a, stack_b);
}

void	node_above2(t_list **stack_b, t_data *data)
{
	while ((*stack_b)->nbr != data->node)
		rb(stack_b);
}

void	node_not_above2(t_list **stack_b, t_data *data)
{
	while ((*stack_b)->nbr != data->node)
		rrb(stack_b);
}

void	target_above2(t_list **stack_a, t_data *data)
{
	while ((*stack_a)->nbr != data->target)
		ra(stack_a);
}