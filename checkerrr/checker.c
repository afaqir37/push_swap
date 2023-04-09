#include "../push_swap.h"
#include <stdio.h>
int	ft_strcmp(char *a, char *s)
{
	int i = 0;
	while(a[i] && s[i])
	{
		if (a[i] != s[i])
			return 1;
		i++;
			
	}
	if (a[i] || s[i])
		return 1;
	return 0;
}

void continue_process(t_stack **a, t_stack **b, char *s)
{
	if(!ft_strcmp(s, "rb\n"))
		checker_rb(b);
	else if (!ft_strcmp(s, "rr\n"))
		checker_rr(a , b);
	else if (!ft_strcmp(s, "rra\n"))
		checker_rra(a);
	else if(!ft_strcmp(s, "rrb\n"))
		checker_rrb(b);
	else if (!ft_strcmp(s, "rrr\n"))
		checker_rrr(a ,b);
	else
	{
		//checker_printf(">%s\n", s);
		free_stack(a);
		free_stack(b);
		ft_error();
	}
}
void process_input(t_stack **a, t_stack **b, char *s)
{

		while((s = get_next_line(0))) {
	 if (!ft_strcmp(s, "sa\n"))
		checker_sa(a);
	else if (!ft_strcmp(s, "sb\n"))
		checker_sb(b);
	else if (!ft_strcmp(s, "ss\n"))
		checker_ss(a, b);
	else if (!ft_strcmp(s, "pa\n"))
		checker_pa(a, b);
	else if (!ft_strcmp(s, "pb\n"))
		checker_pb(a, b);
	else if (!ft_strcmp(s, "ra\n"))
		checker_ra(a);
	else
		continue_process(a, b, s);
	
	free(s);
	}
		

}
void ft_proc_inst(t_stack **a, t_stack **b)
{
	
	char *s = NULL;
	
	process_input(a, b, s);

}
int main(int argc, char **argv)
{
    t_stack	*a;
	t_stack	*b;

	 if (argc == 1)
		return (-1);
	ft_check_args(argc, argv);
	ft_full_stack(&a, argc, argv);
    ft_proc_inst(&a, &b);
	 if (is_sorted(&a) && (!b))
	{
		free_stack(&a);
		write(1, "OK\n", 3);
	}
    else
    {
		if (a)
        	free_stack(&a);
		if (b)
        	free_stack(&b);
        write(1, "KO\n", 3);
    }
}