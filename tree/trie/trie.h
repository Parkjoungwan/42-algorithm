#include <stdbool.h>

typedef struct	s_node
{
	struct	s_node	*next[26];
	bool			finish;
}				t_node;

typedef struct	s_trie
{
	t_node	*root[26];
}				t_trie;
