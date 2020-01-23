// --> pointeurs sur fonction
//		--> besoin de deux tableaux :
//				1) etat de pointeurs sur fonction
//				2) etat des regles de transitions

int		entry_state(void); //entree
int 	foo_state(void); //pousser
int 	bar_state(void); //bloquer
int 	exit_state(void); //quitter

/* array and enum below must be in sync! */

int		(* state[])(void) = {entry_state, foo_state, bar_state, exit_state};
//etat du pointeur sur fonction
enum	state_codes {entry, foo, bar, end};
// etat des etats de transition

enum 	ret_codes {ok, fail, repeat};
typedef	struct	transition 
{
    enum state_codes src_state;
    enum ret_codes   ret_code;
    enum state_codes dst_state;
};
/* transitions from end state aren't needed */
struct transition state_transitions[] = {
    {entry, ok,     foo},
    {entry, fail,   end},
    {foo,   ok,     bar},
    {foo,   fail,   end},
    {foo,   repeat, foo},
    {bar,   ok,     end},
    {bar,   fail,   end},
    {bar,   repeat, foo}};

#define EXIT_STATE end
#define ENTRY_STATE entry

int main(int argc, char *argv[])
{
    enum	state_codes cur_state = ENTRY_STATE;
    enum 	ret_codes rc;
    int		(* state_fun)(void);

    for (;;) 
	{
        state_fun = state[cur_state];
        rc = state_fun();
        if (EXIT_STATE == cur_state)
            break;
        cur_state = lookup_transitions(cur_state, rc);
    }
    return EXIT_SUCCESS;
}
